/*
 * XREFs of ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x1800DAE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800D94CC (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKUUsageList@ConsumerCo.c)
 *     ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800DAB3C (-CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DFC70 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnDeviceRemoval(
        ConsumerControlDeviceCollection *this,
        unsigned int a2)
{
  void *v4; // rbx
  __int64 v6; // rsi
  _WORD *v7; // r15
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v10; // rdx
  const struct std::nothrow_t *v11; // rdx
  unsigned int v12; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-B8h] BYREF
  void *v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[24]; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+78h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+C68h] [rbp+B68h]

  v12 = a2;
  memset_0(v15, 0, 0xBC0uLL);
  v16 = 3008;
  PerformanceCount.QuadPart = 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 345,
    v14,
    (const unsigned __int8 *)&v12);
  v4 = v14[0];
  if ( v14[0] == *((void **)this + 346) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  else
  {
    v6 = 0LL;
    *(_OWORD *)v14 = *(_OWORD *)((char *)v14[0] + 24);
    v7 = v14[0];
    while ( (unsigned int)v6 < LODWORD(v14[1]) )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      ButtonInfo = ConsumerControlDeviceCollection::CreateButtonInfo(
                     (ConsumerControlDeviceCollection *)(unsigned __int16)v7[v6],
                     a2,
                     TickCount,
                     PerformanceCount,
                     v7[v6],
                     0,
                     (struct InputInfo *)v15);
      if ( ButtonInfo < 0 )
      {
        v10 = 155LL;
        goto LABEL_10;
      }
      ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v15);
      if ( ButtonInfo < 0 )
      {
        v10 = 161LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
          (const char *)(unsigned int)ButtonInfo);
        return (unsigned int)ButtonInfo;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
    if ( ButtonInfo < 0 )
    {
      v10 = 165LL;
      goto LABEL_10;
    }
    std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>>>,0>(
      (_QWORD *)this + 345,
      v14,
      (__int64)v4);
    operator delete(v7, v11);
    return 0LL;
  }
}
