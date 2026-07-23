/*
 * XREFs of HalpMemoryErrorDeferredRecovery @ 0x1405918FC
 * Callers:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x140587658 (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpMceRecovery @ 0x140590D10 (HalpMceRecovery.c)
 *     HalpMceRecoveryNotRequiredIntel @ 0x14059124C (HalpMceRecoveryNotRequiredIntel.c)
 *     HalpGenericErrorSourceRecovery @ 0x140591650 (HalpGenericErrorSourceRecovery.c)
 * Callees:
 *     HalpHvSetMachineCheckRecoveryState @ 0x140588318 (HalpHvSetMachineCheckRecoveryState.c)
 *     HalpAcquireDrsPool @ 0x1405914EC (HalpAcquireDrsPool.c)
 *     HalpFreeDrsPool @ 0x14059161C (HalpFreeDrsPool.c)
 *     WheaRequestDeferredRecovery @ 0x1406DAE00 (WheaRequestDeferredRecovery.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
        if ( !qword_140FBB460 )
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
