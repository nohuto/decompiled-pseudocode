/*
 * XREFs of ??0PenEventsDispatcherPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800267A0
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800264C0 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180026AC8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@@Z @ 0x1800419DC (-Initialize@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSessio.c)
 *     ??0?$unordered_map@IIU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QEAA@XZ @ 0x18004D9AC (--0-$unordered_map@IIU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@U-$pair@$$CBII@std@@@2@@std@@QE.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800682D8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BBE28 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801989B8 (--$GetActivationFactory@V-$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
PenEventsDispatcherPrincipal *__fastcall PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal(
        PenEventsDispatcherPrincipal *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  _QWORD *v3; // rax
  int v4; // eax
  _QWORD *v5; // rax
  __int64 v6; // r8
  const char *v7; // r9
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, char *, __int64, char *); // rdi
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  unsigned __int16 *v14; // rdi
  int v15; // eax
  int v17; // [rsp+20h] [rbp-39h]
  __int64 pvParam; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-21h] BYREF
  PenEventsDispatcherPrincipal *v20; // [rsp+40h] [rbp-19h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-11h] BYREF
  __int64 v22; // [rsp+60h] [rbp+7h]
  HSTRING_HEADER *p_hstringHeader; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v20 = this;
  *(_QWORD *)this = &BamoPenEventsDispatcherPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &PenEventsDispatcherPrincipal::`vftable'{for `IPenEventsDispatcherPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((PenEventsDispatcherPrincipal *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoPenEventsDispatcherPrincipalImpl::`vftable';
  *(_QWORD *)this = &PenEventsDispatcherPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &PenEventsDispatcherPrincipal::`vftable'{for `IPenEventsDispatcherPrincipal'};
  *((_QWORD *)this + 7) = &PenEventsDispatcherPrincipal::`vftable';
  pvParam = (__int64)this + 64;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(32LL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 9) = v3;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 7LL;
  *((_QWORD *)this + 15) = 8LL;
  *((_DWORD *)this + 16) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 11,
    0x10uLL,
    *((_QWORD *)this + 9));
  std::unordered_map<unsigned int,unsigned int>::unordered_map<unsigned int,unsigned int>((char *)this + 128);
  *((_BYTE *)this + 196) = 1;
  *((_DWORD *)this + 50) = 1;
  *((_DWORD *)this + 51) = 1;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = "CMK:PenEvent";
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  if ( IsEdition(8778LL) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 26);
    v4 = CoreUICreate((char *)this + 208);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x65,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        (const char *)(unsigned int)v4,
        v17);
    v5 = (_QWORD *)_lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(v19, this);
    p_hstringHeader = 0LL;
    hstringHeader.Reserved.Reserved1 = off_1801E00A0;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = *v5;
    p_hstringHeader = &hstringHeader;
    KernelInputConnection<_MIT_PEN_EVENT_MESSAGE>::Initialize(
      (char *)this + 216,
      (char *)this + 208,
      v6,
      &hstringHeader);
    LODWORD(pvParam) = 0;
    if ( SystemParametersInfoW(0x1052u, 0, &pvParam, 0) )
      *((_BYTE *)this + 196) = (_DWORD)pvParam != 1;
    else
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x71,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        v7);
  }
  else
  {
    pvParam = 0LL;
    v22 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.UI.Internal.Text.HotKeyClient",
      0x26u,
      0x25u);
    v8 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::UI::Internal::Text::IHotKeyClientStatics>>(
           v22,
           &pvParam);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x79,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        (const char *)(unsigned int)v8,
        v17);
    v9 = pvParam;
    v10 = *(__int64 (__fastcall **)(__int64, char *, __int64, char *))(*(_QWORD *)pvParam + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 45);
    LOBYTE(v11) = 1;
    v12 = v10(v9, (char *)this + 56, v11, (char *)this + 360);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        (const char *)(unsigned int)v12,
        v17);
    v13 = 0;
    v14 = (unsigned __int16 *)&PenEventsDispatcherPrincipal::s_hotkeyList;
    do
    {
      LOBYTE(v17) = 0;
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 45) + 48LL))(
              *((_QWORD *)this + 45),
              v13,
              *v14,
              *((unsigned __int8 *)v14 + 2));
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x82,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\pene"
                        "ventsdispatcherprincipal.cpp",
          (const char *)(unsigned int)v15,
          v17);
      ++v13;
      v14 += 2;
    }
    while ( v13 <= 4 );
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&pvParam);
  }
  return this;
}
