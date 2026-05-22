/*
 * XREFs of ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800B40C0
 * Callers:
 *     ?GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x1800B3B20 (-GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoA.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A6844 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x1800B3168 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B33AC (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1800B5894 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800B5980 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCConstantManager::GetCurrentInputTypesString(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  void *v9; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  __int64 v13[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v15[32]; // [rsp+58h] [rbp-28h] BYREF

  v13[1] = a2;
  std::wstring::wstring(a2, (__int64)&WindowName);
  v4 = 1;
  v5 = **(_QWORD **)(a1 + 56);
  v13[0] = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = *(unsigned int *)(v5 + 32);
    if ( *(_QWORD *)(a2 + 16) )
    {
      std::to_wstring(v15, v6);
      std::_WChar_traits<unsigned short>::length((__int64)L",");
      std::wstring::insert(v9);
      std::wstring::wstring((__int64)v14);
      v4 |= 2u;
      v10 = v14;
      if ( v14[3] > 7uLL )
        v10 = (_QWORD *)v14[0];
      std::wstring::append((void **)a2, v10, v14[2]);
      std::wstring::_Tidy_deallocate(v14);
      v8 = v15;
    }
    else
    {
      v7 = (_QWORD *)std::to_wstring(v14, v6);
      std::wstring::operator=((_QWORD *)a2, v7);
      v8 = v14;
    }
    std::wstring::_Tidy_deallocate(v8);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      v13,
      v11);
    v5 = v13[0];
  }
  return a2;
}
