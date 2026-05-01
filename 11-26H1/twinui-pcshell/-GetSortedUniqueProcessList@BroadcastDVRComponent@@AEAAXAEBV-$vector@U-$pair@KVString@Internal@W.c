/*
 * XREFs of ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x18004E77C
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x18004D9C8 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$unique@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@std@@U?$equal_to@X@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@0@V10@0U?$equal_to@X@0@@Z @ 0x18004E990 (--$unique@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@VString@Internal@Windows@@@std@@@s.c)
 *     ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x1800F07C4 (-_Tidy@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@AEA.c)
 *     ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1800F09A4 (--$_Destroy_range@V-$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEAV123@00@Z @ 0x180184478 (--$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEA.c)
 *     ??$_Emplace_reallocate@VString@Internal@Windows@@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAPEAVString@Internal@Windows@@QEAV234@$$QEAV234@@Z @ 0x18030F4FC (--$_Emplace_reallocate@VString@Internal@Windows@@@-$vector@VString@Internal@Windows@@V-$allocato.c)
 *     ??$_Reallocate@$0A@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x18030F7E8 (--$_Reallocate@$0A@@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@s.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall BroadcastDVRComponent::GetSortedUniqueProcessList(HSTRING a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r14
  HRESULT v8; // eax
  HSTRING v9; // rbx
  HSTRING v10; // rcx
  HSTRING v11; // rbx
  Windows::Internal::String *v13; // rbx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING v17; // [rsp+60h] [rbp+8h] BYREF
  HSTRING newString; // [rsp+68h] [rbp+10h] BYREF

  v17 = a1;
  v14 = 0LL;
  v15 = 0LL;
  v5 = (a2[1] - *a2) >> 4;
  v17 = (HSTRING)v5;
  if ( v5 )
  {
    if ( v5 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<Windows::Internal::String>::_Reallocate<0>(&v14, &v17);
  }
  v6 = *a2;
  v7 = a2[1];
  while ( v6 != v7 )
  {
    v17 = 0LL;
    newString = 0LL;
    v8 = WindowsDuplicateString(*(HSTRING *)(v6 + 8), &newString);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x888,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v8);
      return std::vector<Windows::Internal::String>::_Tidy(&v14);
    }
    v9 = newString;
    v17 = newString;
    WindowsDeleteString(0LL);
    if ( *((_QWORD *)&v14 + 1) == v15 )
    {
      std::vector<Windows::Internal::String>::_Emplace_reallocate<Windows::Internal::String>(
        &v14,
        *((_QWORD *)&v14 + 1),
        &v17);
      v10 = v17;
    }
    else
    {
      **((_QWORD **)&v14 + 1) = v9;
      v10 = 0LL;
      *((_QWORD *)&v14 + 1) += 8LL;
    }
    if ( v10 )
      WindowsDeleteString(v10);
    v6 += 16LL;
  }
  std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(
    (Windows::Internal::String *)v14,
    *((Windows::Internal::String **)&v14 + 1),
    (__int64)(*((_QWORD *)&v14 + 1) - v14) >> 3,
    0);
  v11 = (HSTRING)*((_QWORD *)&v14 + 1);
  std::unique<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Windows::Internal::String>>>,std::equal_to<void>>(
    &v17,
    v14,
    *((_QWORD *)&v14 + 1));
  if ( v17 != v11 )
  {
    v13 = (Windows::Internal::String *)std::_Move_unchecked<Windows::Internal::String *,Windows::Internal::String *>(
                                         v11,
                                         *((_QWORD *)&v14 + 1));
    std::_Destroy_range<std::allocator<Windows::Internal::String>>(v13);
    *((_QWORD *)&v14 + 1) = v13;
  }
  if ( (__int128 *)a3 != &v14 )
  {
    std::vector<Windows::Internal::String>::_Tidy(a3);
    *(_OWORD *)a3 = v14;
    *(_QWORD *)(a3 + 16) = v15;
    v14 = 0LL;
    v15 = 0LL;
  }
  return std::vector<Windows::Internal::String>::_Tidy(&v14);
}
