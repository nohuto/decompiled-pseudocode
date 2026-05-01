/*
 * XREFs of std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031A91C
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031A994 (std--_Partition_by_median_guess_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
        __int64 ***a1,
        __int64 ***a2,
        __int64 ***a3)
{
  __int64 **v4; // rcx
  __int64 *v5; // rcx
  __int64 **v6; // rcx
  __int64 *result; // rax
  __int64 *v8; // rcx
  __int64 **v9; // rcx
  __int64 *v10; // rcx

  v4 = *a2;
  if ( (__int64)**a1 < (__int64)**a2 )
  {
    *a2 = *a1;
    *a1 = v4;
    v5 = (__int64 *)a2[1];
    a2[1] = a1[1];
    a1[1] = (__int64 **)v5;
  }
  v6 = *a3;
  result = **a3;
  if ( (__int64)**a2 < (__int64)result )
  {
    *a3 = *a2;
    *a2 = v6;
    v8 = (__int64 *)a3[1];
    a3[1] = a2[1];
    a2[1] = (__int64 **)v8;
    v9 = *a2;
    result = **a2;
    if ( (__int64)**a1 < (__int64)result )
    {
      *a2 = *a1;
      *a1 = v9;
      result = (__int64 *)a1[1];
      v10 = (__int64 *)a2[1];
      a2[1] = (__int64 **)result;
      a1[1] = (__int64 **)v10;
    }
  }
  return result;
}
