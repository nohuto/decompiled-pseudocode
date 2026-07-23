/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x14036D8F4
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140A02FF8 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiMakePrototypePteVadLookup @ 0x1402B1B50 (MiMakePrototypePteVadLookup.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiRevertValidPte @ 0x1402E69F4 (MiRevertValidPte.c)
 *     MiUpdatePfnProtection @ 0x140313BB0 (MiUpdatePfnProtection.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033EF54 (MiSetProtectionOnTransitionPte.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiSetWsleProtection @ 0x14036DE30 (MiSetWsleProtection.c)
 *     MiGetWsleProtection @ 0x14036DF30 (MiGetWsleProtection.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  unsigned int updated; // r15d
  unsigned int v9; // esi
  __int64 *ProcessorFlushList; // rdi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  __int64 v13; // r12
  unsigned __int64 v14; // rbx
  KIRQL v15; // al
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v21; // r11
  unsigned __int64 *v22; // r9
  unsigned __int64 v23; // rdx
  int WsleProtection; // eax
  __int64 v25; // r11
  BOOL v26; // eax
  _KPROCESS *v28; // rax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  unsigned __int64 KernelWaitTime; // rax
  __int64 v32; // rax
  int v33; // eax
  int v34; // eax
  KIRQL v35; // [rsp+30h] [rbp-68h]
  unsigned int v36; // [rsp+34h] [rbp-64h]
  int v37; // [rsp+38h] [rbp-60h]
  unsigned __int64 v38; // [rsp+40h] [rbp-58h]
  unsigned __int64 v39; // [rsp+48h] [rbp-50h]
  unsigned int *v40; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+B8h] [rbp+20h]

  v5 = a2;
  if ( MiVadPureReserve(a2) )
    return 3221225541LL;
  v36 = 4;
  updated = 1;
  v9 = 0;
  v37 = 0;
  ProcessorFlushList = 0LL;
  v11 = 0LL;
  v39 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v39;
  v13 = v7 + 1024;
  v14 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = v14;
  v15 = MiLockWorkingSetShared(v7 + 1024, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL);
  v35 = v15;
  if ( v39 > v14 )
    goto LABEL_26;
  do
  {
    if ( (v12 & 0xFFF) == 0 || !v11 )
    {
      if ( v11 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          ProcessorFlushList = 0LL;
          MiReleaseProcessorFlushList();
        }
        MiUnlockPageTableInternal(v13, v11);
        v15 = v35;
      }
      MiMakeSystemAddressValid(v12, (*(_DWORD *)(v5 + 48) >> 10) & 0x7F, v15, 0);
      v11 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    v17 = *(_QWORD *)v12;
    if ( !*(_QWORD *)v12 )
      goto LABEL_45;
    v16 = 1LL;
    if ( (v17 & 1) != 0 )
    {
      v18 = (v17 >> 12) & 0xFFFFFFFFFFLL;
      v19 = 48 * v18 - 0x220000000000LL;
      if ( (unsigned __int16)*(_DWORD *)(v19 + 32) <= 1u || (updated & 7) == 4 )
      {
        if ( *(__int64 *)(v19 + 40) >= 0 )
        {
          if ( ((*(_DWORD *)(v19 + 16) >> 5) & 0x1F) == (unsigned __int64)v36 )
          {
            v5 = a2;
            updated = MiUpdatePfnProtection(a2, 48 * v18 - 0x220000000000LL, updated);
LABEL_13:
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              *((_DWORD *)ProcessorFlushList + 4) = 0;
              *((_DWORD *)ProcessorFlushList + 5) = 32;
              *ProcessorFlushList = v13;
              *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(v13 + 184) & 0x40) != 0;
              if ( (*(_DWORD *)(v13 + 184) & 0xF) != 0
                || (struct _LIST_ENTRY **)v13 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
              {
                v26 = (*(_DWORD *)(v13 + 184) & 0xF) == 0;
              }
              else
              {
                *((_DWORD *)ProcessorFlushList + 4) |= 9u;
                v26 = 0;
              }
              *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
              *((_DWORD *)ProcessorFlushList + 2) = v26;
              *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
              *((_DWORD *)ProcessorFlushList + 7) = 0;
              ProcessorFlushList[4] = 0LL;
              ProcessorFlushList[5] = 0LL;
            }
            MiRevertValidPte(v5, (__int64 *)v12, updated, v18, (__int64)ProcessorFlushList);
LABEL_19:
            v12 += 8LL;
            goto LABEL_20;
          }
        }
        else
        {
          v20 = *(_QWORD *)(v19 + 8);
          v38 = (__int64)(v12 << 25) >> 16;
          if ( (v20 | 0x8000000000000000uLL) == MiGetProtoPteAddress(a2, v38 >> 12, 8u, &v40) )
          {
            v21 = (__int64)(v12 << 25) >> 16;
            v22 = (unsigned __int64 *)(((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v23 = *v22;
            if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL
              && (v23 & 1) != 0
              && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
            {
              v28 = MiPteHasShadow();
              if ( v28 )
              {
                KernelWaitTime = v28[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v32 = *(_QWORD *)(KernelWaitTime + 8 * ((v30 >> 3) & 0x1FF));
                  if ( (v32 & 0x20) != 0 )
                    v29 |= 0x20uLL;
                  v23 = v29 | 0x42;
                  if ( (v32 & 0x42) == 0 )
                    v23 = v29;
                }
              }
            }
            WsleProtection = MiGetWsleProtection(v21, (unsigned __int8)((16 * ((v23 >> 60) & 7)) | HIBYTE(v23) & 0xF));
            if ( WsleProtection == v36 || !WsleProtection && ((*(_DWORD *)(v19 + 16) >> 5) & 0x1F) == v36 )
            {
              MiSetWsleProtection(v36, v25, updated);
              v14 = v43;
              v5 = a2;
              goto LABEL_13;
            }
          }
        }
      }
      v5 = a2;
      goto LABEL_45;
    }
    if ( (v17 & 0x400) != 0 )
    {
      if ( (updated & 7) == 4 )
      {
        LOBYTE(v33) = MiIsPrototypePteVadLookup(*(_QWORD *)v12);
        if ( v33 )
          goto LABEL_66;
        *(_QWORD *)v12 = MiMakePrototypePteVadLookup(updated);
      }
LABEL_45:
      if ( v11 != ((a3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          ProcessorFlushList = 0LL;
          MiReleaseProcessorFlushList();
        }
        if ( v11 )
        {
          MiUnlockPageTableInternal(v13, v11);
          v11 = 0LL;
        }
      }
      v14 = v12 - 8;
      v36 = 1;
      v12 = v39;
      updated = 4;
      v43 = v14;
      v37 = -1073741755;
      goto LABEL_20;
    }
    if ( (v17 & 0x800) == 0 )
    {
      if ( ((v17 >> 5) & 0x1F) == v36 )
      {
LABEL_66:
        *(_QWORD *)v12 = (32LL * updated) ^ (v17 ^ (32LL * updated)) & 0xFFFFFFFFFFFFFC1FuLL;
        goto LABEL_19;
      }
      goto LABEL_45;
    }
    v34 = MiSetProtectionOnTransitionPte(v5, v12, updated, (updated & 7) == 4);
    if ( !v34 )
      goto LABEL_19;
    if ( v34 != 2 )
      goto LABEL_45;
LABEL_20:
    v15 = v35;
  }
  while ( v12 <= v14 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( v11 )
    MiUnlockPageTableInternal(v13, v11);
  v15 = v35;
  v9 = v37;
LABEL_26:
  LOBYTE(v16) = v15;
  MiUnlockWorkingSetShared(v13, v16);
  return v9;
}
