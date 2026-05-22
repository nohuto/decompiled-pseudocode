/*
 * XREFs of ?OnDeviceRemoval@CallControlDeviceCollection@@MEAAJK@Z @ 0x1800DB8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800DB43C (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKV-$array@G$0BE@@std@@.c)
 *     ?SendMuteMicrophoneInputReport@CallControlDeviceCollection@@AEAAJK_N@Z @ 0x1800DBCA0 (-SendMuteMicrophoneInputReport@CallControlDeviceCollection@@AEAAJK_N@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DFC70 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall CallControlDeviceCollection::OnDeviceRemoval(CallControlDeviceCollection *this, unsigned int a2)
{
  __int64 v4; // rbx
  _WORD *v6; // rdi
  _WORD *v7; // r15
  int v8; // eax
  unsigned int v9; // ebp
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 345,
    &v13,
    (const unsigned __int8 *)&v14);
  v4 = v13;
  if ( v13 == *((_QWORD *)this + 346) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  else
  {
    v6 = (_WORD *)(v13 + 20);
    v7 = (_WORD *)(v13 + 60);
    while ( v6 != v7 )
    {
      if ( *v6 == 225 )
      {
        v8 = CallControlDeviceCollection::SendMuteMicrophoneInputReport(this, a2, 0);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x69,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
            (const char *)(unsigned int)v8);
          return v9;
        }
      }
      ++v6;
    }
    v10 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
    v11 = v10;
    if ( v10 >= 0 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,std::array<unsigned short,20>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::array<unsigned short,20>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::array<unsigned short,20>>>>>,0>(
        (_QWORD *)this + 345,
        &v13,
        v4);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
}
