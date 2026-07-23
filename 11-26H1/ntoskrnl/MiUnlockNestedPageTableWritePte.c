/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x140327678
 * Callers:
 *     MiEvictPageTableLock @ 0x14029DEE8 (MiEvictPageTableLock.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiClearPteAccessed @ 0x1402E1A30 (MiClearPteAccessed.c)
 *     MiTerminateWsle @ 0x140326960 (MiTerminateWsle.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiReplicatePteChange @ 0x14052ABE0 (MiReplicatePteChange.c)
 */

void __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rdi
  __int64 v8; // rsi
  int v9; // r15d
  unsigned __int64 v10; // r8
  int v11; // ebp
  _KPROCESS *v12; // rax
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v14; // rdi
  __int64 v15; // rbx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0LL;
  v9 = 0;
  v10 = 0xFFFFF6FB7DBED000uLL;
  if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    {
      v9 = 1;
      if ( !a4 )
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36200);
    }
    else
    {
      v8 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
    }
  }
  if ( v6 != 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v8 )
    {
      if ( (a3 & 1) != 0 )
        goto LABEL_18;
      v18 = a3;
      v16 = 0;
      if ( v6 < 0xFFFFF6FB7DBED000uLL )
        goto LABEL_27;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 || v6 < 0xFFFFF6FB7DBED000uLL || v6 > 0xFFFFF6FB7DBEDFFFuLL )
      {
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        _InterlockedExchange64((volatile __int64 *)v6, a3);
        if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v12 = MiPteHasShadow();
          if ( v12 )
          {
            KernelWaitTime = v12[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v14 = (v6 >> 3) & 0x1FF;
              if ( (a3 & 1) != 0 )
                v15 = a3 & 0x7FFFFFFFFFFFFFFFLL;
              else
                v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
              *(_QWORD *)(KernelWaitTime + 8 * v14) = v15;
            }
          }
        }
        v6 = 0LL;
        goto LABEL_18;
      }
      if ( (a3 & 1) != 0 )
      {
        MiWriteValidPteNewProtection((__int64 *)v6, a3);
        goto LABEL_18;
      }
      v18 = a3;
      v16 = 0;
    }
    if ( v6 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v17 = MiSanitizeShadowPxe(0LL, &v18, v10);
      a3 = v18;
      v16 = v17;
    }
LABEL_27:
    *(_QWORD *)v6 = a3;
    if ( v16 )
      MiWritePteShadow();
    goto LABEL_18;
  }
  if ( (MiFlags & 0x8000000) != 0 )
    _mm_lfence();
  _InterlockedExchange64((volatile __int64 *)0xFFFFF6FB7DBEDF68LL, a3);
LABEL_18:
  if ( v11 )
  {
    if ( v9 )
    {
      MiReplicatePteChange(v6, 1LL);
      if ( !a4 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36200);
    }
  }
  if ( v6 )
    MiUnlockPageTableInternal(a1, v6);
}
