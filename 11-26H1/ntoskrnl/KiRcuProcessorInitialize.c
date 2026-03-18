/*
 * XREFs of KiRcuProcessorInitialize @ 0x140512FBC
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 *     KiRcuSystemInitialize @ 0x140D09E14 (KiRcuSystemInitialize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuProcessorInitialize @ 0x14052D6B8 (KiSrcuProcessorInitialize.c)
 */

__int64 __fastcall KiRcuProcessorInitialize(unsigned int *a1, unsigned int a2)
{
  __int64 v3; // r15
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // edi
  KSPIN_LOCK *v8; // rbp
  KIRQL v9; // al
  KSPIN_LOCK *i; // r14
  KSPIN_LOCK *v11; // rbx
  KIRQL v12; // al
  KSPIN_LOCK v13; // rcx
  KSPIN_LOCK v14; // rdx
  __int64 v15; // rcx
  KIRQL v17; // al

  v3 = 32LL * a1[9];
  v5 = a1[9] / (unsigned __int8)byte_140F24F01;
  v6 = a1[9] % (unsigned __int8)byte_140F24F01;
  v7 = 0;
  *(PVOID *)((char *)&KiDpcCorralLock.WaitBlock[2].SparePtr + v3) = a1;
  v8 = (KSPIN_LOCK *)(qword_140F24F10 + ((unsigned __int64)v5 << 6));
  *(PVOID *)((char *)&KiDpcCorralLock.WaitBlock[2].Object + v3) = v8;
  *(struct _KTHREAD **)((char *)&KiDpcCorralLock.WaitBlock[2].Thread + v3) = (struct _KTHREAD *)(1LL << v6);
  if ( !a2 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(v8 + 3);
    v8[2] &= ~*(__int64 *)((char *)&KiDpcCorralLock.WaitBlock[2].Thread + v3);
    KeReleaseSpinLock(v8 + 3, v9);
  }
  if ( !v8[2] )
  {
    for ( i = v8; ; i = v11 )
    {
      v11 = (KSPIN_LOCK *)i[1];
      if ( !v11 )
        break;
      v12 = KeAcquireSpinLockRaiseToDpc(v11 + 3);
      v13 = *i;
      v14 = v11[2];
      if ( a2 )
      {
        if ( (v13 & v14) != 0 )
        {
          KeReleaseSpinLock(v11 + 3, v12);
          goto LABEL_15;
        }
        v11[2] = v14 | v13;
      }
      else
      {
        v15 = v14 & ~v13;
        v11[2] = v15;
        if ( v15 )
        {
          KeReleaseSpinLock(v11 + 3, v12);
          goto LABEL_13;
        }
      }
      KeReleaseSpinLock(v11 + 3, v12);
    }
  }
  if ( a2 )
  {
LABEL_15:
    v17 = KeAcquireSpinLockRaiseToDpc(v8 + 3);
    v8[2] |= *(KSPIN_LOCK *)((char *)&KiDpcCorralLock.WaitBlock[2].Thread + v3);
    KeReleaseSpinLock(v8 + 3, v17);
  }
LABEL_13:
  LOBYTE(v7) = a2 != 0;
  *(_DWORD *)&KiDpcCorralLock.WaitBlockFill11[v3 + 144] = *(_DWORD *)&KiDpcCorralLock.WaitBlockFill11[v3 + 144] & 0xFFFFFFFE | v7;
  return KiSrcuProcessorInitialize(a1, a2);
}
