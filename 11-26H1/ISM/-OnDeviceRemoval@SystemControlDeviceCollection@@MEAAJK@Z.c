/*
 * XREFs of ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x180080AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800DB43C (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKV-$array@G$0BE@@std@@.c)
 *     ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800DB5F0 (-CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DFC70 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemControlDeviceCollection::OnDeviceRemoval(SystemControlDeviceCollection *this, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned __int16 *v6; // rsi
  __int64 v7; // r15
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-E0h]
  unsigned int v12; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[24]; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+78h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+C68h] [rbp+B68h]

  v12 = a2;
  memset_0(v15, 0, 0xBC0uLL);
  v16 = 3008;
  PerformanceCount.QuadPart = 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (char *)this + 2760,
    v14,
    &v12);
  v4 = v14[0];
  if ( v14[0] == *((_QWORD *)this + 346) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)0x80004005LL,
      v11);
    return 2147500037LL;
  }
  else
  {
    v6 = (unsigned __int16 *)(v14[0] + 20LL);
    v7 = v14[0] + 60LL;
    while ( v6 != (unsigned __int16 *)v7 )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      ButtonInfo = SystemControlDeviceCollection::CreateButtonInfo(
                     (SystemControlDeviceCollection *)*v6,
                     a2,
                     TickCount,
                     PerformanceCount,
                     *v6,
                     0,
                     (struct InputInfo *)v15);
      if ( ButtonInfo < 0 )
      {
        v10 = 131LL;
        goto LABEL_10;
      }
      ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v15);
      if ( ButtonInfo < 0 )
      {
        v10 = 137LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
          (const char *)(unsigned int)ButtonInfo,
          v11);
        return (unsigned int)ButtonInfo;
      }
      ++v6;
    }
    ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
    if ( ButtonInfo < 0 )
    {
      v10 = 141LL;
      goto LABEL_10;
    }
    std::_Hash<std::_Umap_traits<unsigned long,std::array<unsigned short,20>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::array<unsigned short,20>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::array<unsigned short,20>>>>>,0>(
      (char *)this + 2760,
      v14,
      v4);
    return 0LL;
  }
}
