/*
 * XREFs of NvmeNativeDumpStorageDumpControl @ 0x1401A3700
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNativeDumpFreeStorageDumpInfo @ 0x1401A35F0 (NvmeNativeDumpFreeStorageDumpInfo.c)
 */

__int64 __fastcall NvmeNativeDumpStorageDumpControl(_QWORD *a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 2 )
  {
    if ( a2 == 7 )
      return NvmeNativeDumpFreeStorageDumpInfo(a3, a1);
    else
      return 3221225659LL;
  }
  return result;
}
