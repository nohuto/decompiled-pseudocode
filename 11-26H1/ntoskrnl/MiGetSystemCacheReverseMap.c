/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x1402E46F0
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1402A71F0 (MiReleaseSystemCacheView.c)
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MmMapViewInSystemCache @ 0x1402E29A0 (MmMapViewInSystemCache.c)
 *     MiSynchronizeSystemVa @ 0x1402E3870 (MiSynchronizeSystemVa.c)
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiComputePxeWalkAction @ 0x1403283D0 (MiComputePxeWalkAction.c)
 *     MiTrimViewVaIsCandidate @ 0x14046C408 (MiTrimViewVaIsCandidate.c)
 *     MmFreeSystemCacheReserveView @ 0x14086AA70 (MmFreeSystemCacheReserveView.c)
 *     MmHardFaultBytesRequired @ 0x140A67490 (MmHardFaultBytesRequired.c)
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
    result = qword_140E37B90 + 16 * (result - 1);
  }
  if ( result )
    result += 40 * ((a1 >> 18) & 7);
  return result;
}
