/*
 * XREFs of ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x180110454
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18010F694 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x18010FC7C (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x180110454 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x180110454 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YA?AU?$pair@PEAVString@Internal@Windows@@PEAV123@@0@PEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x180110558 (--$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YA-AU-.c)
 *     ??$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0U?$less@X@0@@Z @ 0x180113330 (--$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAPEAVString@Inte.c)
 *     ??$_Make_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1802BE4A8 (--$_Make_heap_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal.c)
 *     ??$_Pop_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x180313874 (--$_Pop_heap_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@.c)
 */

signed __int64 __fastcall std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(
        Windows::Internal::String *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v5; // rbp
  signed __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  Windows::Internal::String *v12; // [rsp+28h] [rbp-10h]

  v4 = a4;
  v5 = a3;
  while ( 1 )
  {
    if ( (__int64)((a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF8uLL) <= 256 )
      return std::_Insertion_sort_unchecked<Windows::Internal::String *,std::less<void>>(a1);
    if ( v5 <= 0 )
      break;
    LOBYTE(a4) = v4;
    std::_Partition_by_median_guess_unchecked<Windows::Internal::String *,std::less<void>>(&v11, a1, a2, a4);
    v5 = (v5 >> 2) + (v5 >> 1);
    LOBYTE(v9) = v4;
    if ( (__int64)((v11 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)((a2 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(v12, a2, v5, v9);
      a2 = v11;
    }
    else
    {
      std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(a1, v11, v5, v9);
      a1 = v12;
    }
  }
  LOBYTE(a3) = v4;
  std::_Make_heap_unchecked<Windows::Internal::String *,std::less<void>>(a1, a2, a3);
  do
  {
    LOBYTE(v10) = v4;
    std::_Pop_heap_unchecked<Windows::Internal::String *,std::less<void>>(a1, a2, v10);
    a2 -= 8LL;
    result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  while ( result >= 16 );
  return result;
}
