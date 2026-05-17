/*
 * XREFs of RtlpQueryDiskSpeedPolicy @ 0x18015AD30
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18010F510 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x180063C60 (RtlGetSuiteMask.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall RtlpQueryDiskSpeedPolicy(_DWORD *a1)
{
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    *a1 = 20;
  }
  else
  {
    RtlRunOnceExecuteOnce(
      &RtlpDiskSpeedInit,
      (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpDiskSpeedInitialize,
      0LL,
      0LL);
    *a1 = RtlpDiskSpeedPolicy;
  }
  return 0LL;
}
