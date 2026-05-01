/*
 * XREFs of std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806457A4
 * Callers:
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806457A4 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 *     _lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator() @ 0x18064A684 (_lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_--operator().c)
 * Callees:
 *     std::_Insertion_sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180644FE8 (std--_Insertion_sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803.c)
 *     std::_Make_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18064520C (std--_Make_heap_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f.c)
 *     std::_Partition_by_median_guess_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645338 (std--_Partition_by_median_guess_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f4666.c)
 *     std::_Pop_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645614 (std--_Pop_heap_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6.c)
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806457A4 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 */

signed __int64 __fastcall std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v8; // r9
  signed __int64 result; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  while ( 1 )
  {
    if ( (__int64)((a2 - a1) & 0xFFFFFFFFFFFFFFE0uLL) <= 1024 )
      return std::_Insertion_sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
               a1,
               a2);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
      &v10,
      a1,
      a2);
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v8) = a4;
    if ( (__int64)((v10 - a1) & 0xFFFFFFFFFFFFFFE0uLL) >= (__int64)((a2 - v11) & 0xFFFFFFFFFFFFFFE0uLL) )
    {
      std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(v11, a2, a3, v8);
      a2 = v10;
    }
    else
    {
      std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(a1, v10, a3, v8);
      a1 = v11;
    }
  }
  std::_Make_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(a1, a2, a4);
  do
  {
    std::_Pop_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(a1, a2);
    a2 -= 32LL;
    result = (a2 - a1) & 0xFFFFFFFFFFFFFFE0uLL;
  }
  while ( result >= 64 );
  return result;
}
