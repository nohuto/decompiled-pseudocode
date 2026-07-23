/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x1402C6730
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1402A6600 (MiReleaseSystemCacheView.c)
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MmMapViewInSystemCache @ 0x1402C4A60 (MmMapViewInSystemCache.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiComputePxeWalkAction @ 0x14032A400 (MiComputePxeWalkAction.c)
 *     MiTrimViewVaIsCandidate @ 0x140465B88 (MiTrimViewVaIsCandidate.c)
 *     MmFreeSystemCacheReserveView @ 0x140870E50 (MmFreeSystemCacheReserveView.c)
 *     MmHardFaultBytesRequired @ 0x140A74460 (MmHardFaultBytesRequired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSystemCacheReverseMap(unsigned __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = 6 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL);
  v3 = *(_QWORD *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                 - 0x220000000000LL) >> 1;
  LODWORD(v3) = v3 & 0x7FFFFFFF;
  result = v3 | ((unsigned __int64)(*(_DWORD *)(8 * v2 - 0x220000000000LL + 36) & 0x3FF0000) << 15);
  if ( !result )
    return 0LL;
  if ( (unsigned __int64)(result - 0x10000000000LL) <= 1 )
  {
    if ( result == 0x10000000001LL && PsInitialSystemProcess )
      result = (__int64)PsInitialSystemProcess;
  }
  else
  {
    result = qword_140E37D10 + 16 * (result - 1);
  }
  if ( result )
    result += 40 * ((a1 >> 18) & 7);
  return result;
}
