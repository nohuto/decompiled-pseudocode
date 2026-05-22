/*
 * XREFs of ??$_Med3_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI00U?$less@X@0@@Z @ 0x1800F9DC0
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAIU?$less@X@std@@@std@@YA?AU?$pair@PEAIPEAI@0@PEAI0U?$less@X@0@@Z @ 0x1800F9DF8 (--$_Partition_by_median_guess_unchecked@PEAIU-$less@X@std@@@std@@YA-AU-$pair@PEAIPEAI@0@PEAI0U-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked<unsigned int *,std::less<void>>(int *a1, int *a2, int *a3)
{
  int v4; // r8d
  __int64 result; // rax

  v4 = *a2;
  if ( *a2 < (unsigned int)*a1 )
  {
    *a2 = *a1;
    *a1 = v4;
  }
  result = (unsigned int)*a3;
  if ( (unsigned int)result < *a2 )
  {
    *a3 = *a2;
    *a2 = result;
    if ( (unsigned int)result < *a1 )
    {
      *a2 = *a1;
      *a1 = result;
    }
  }
  return result;
}
