/*
 * XREFs of ProcgrpQueryMaximumProcessorCountEx @ 0x1400ACCA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ProcgrpQueryMaximumProcessorCountEx(unsigned __int16 GroupNumber)
{
  if ( (unsigned __int16)(GroupNumber - 1) > 0xFFFDu )
    return ((__int64 (*)(void))PfnKeQueryMaximumProcessorCount)();
  else
    return 0LL;
}
