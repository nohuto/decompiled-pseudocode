/*
 * XREFs of HalpMemoryErrorDeferredRecovery @ 0x14058F17C
 * Callers:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x140585138 (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpMceRecovery @ 0x14058E590 (HalpMceRecovery.c)
 *     HalpMceRecoveryNotRequiredIntel @ 0x14058EACC (HalpMceRecoveryNotRequiredIntel.c)
 *     HalpGenericErrorSourceRecovery @ 0x14058EED0 (HalpGenericErrorSourceRecovery.c)
 * Callees:
 *     HalpHvSetMachineCheckRecoveryState @ 0x140585DF8 (HalpHvSetMachineCheckRecoveryState.c)
 *     HalpAcquireDrsPool @ 0x14058ED6C (HalpAcquireDrsPool.c)
 *     HalpFreeDrsPool @ 0x14058EE9C (HalpFreeDrsPool.c)
 *     WheaRequestDeferredRecovery @ 0x1406D6D20 (WheaRequestDeferredRecovery.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMemoryErrorDeferredRecovery(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int16 a6,
        char a7,
        char a8,
        char a9)
{
  __int64 v13; // rdx
  __int64 v14; // rdi
  int v15; // ebx
  int v16; // eax

  v14 = HalpAcquireDrsPool();
  if ( v14 )
  {
    if ( a3 )
    {
      if ( !a4 )
      {
        if ( !qword_140FBB0C0 )
        {
          v15 = -1073741823;
          goto LABEL_11;
        }
        v16 = guard_dispatch_icall_no_overrides(a3, v13);
LABEL_10:
        v15 = v16;
LABEL_11:
        if ( v15 < 0 )
        {
          HalpFreeDrsPool((_DWORD *)v14);
          return (unsigned int)v15;
        }
      }
    }
    else if ( HalpHvWheaEnlightenedCpuManager )
    {
      v16 = HalpHvSetMachineCheckRecoveryState(1);
      goto LABEL_10;
    }
    *(_WORD *)(v14 + 58) = a6;
    *(_BYTE *)(v14 + 60) = a7;
    *(_BYTE *)(v14 + 61) = a8;
    *(_QWORD *)(v14 + 48) = a1;
    *(_BYTE *)(v14 + 56) = a2;
    *(_BYTE *)(v14 + 62) = a9 & 1;
    *(_DWORD *)(v14 + 72) = a5;
    *(_QWORD *)(v14 + 64) = a3;
    *(_QWORD *)(v14 + 6232) = a4;
    *(_DWORD *)(v14 + 76) = 1;
    *(_DWORD *)(v14 + 80) = 1;
    *(_DWORD *)(v14 + 92) = 0;
    *(_QWORD *)(v14 + 100) = 0LL;
    if ( (unsigned __int8)WheaRequestDeferredRecovery(v14 + 8, v14 + 48) )
      return 0;
    HalpFreeDrsPool((_DWORD *)v14);
  }
  return (unsigned int)-1073741757;
}
