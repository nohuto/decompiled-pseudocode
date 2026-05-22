/*
 * XREFs of ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180020F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180012500 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x180022320 (-ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z.c)
 *     ??$emplace@AEAKUTargetingInfo@ButtonProcessor@@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUTargetingInfo@ButtonProcessor@@@Z @ 0x180022640 (--$emplace@AEAKUTargetingInfo@ButtonProcessor@@@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonPr.c)
 *     ??1TargetingInfo@Win32kInterop@@QEAA@XZ @ 0x180022810 (--1TargetingInfo@Win32kInterop@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     memcpy_s_3 @ 0x1800F6E70 (memcpy_s_3.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@1@V21@@Z @ 0x1801BC2B8 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKUTargetingInfo@Button.c)
 *     ?ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z @ 0x1801BC420 (-ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ButtonProcessor::OnInputReport(ButtonProcessor *this, struct InputInfo *a2)
{
  unsigned int *v4; // rdi
  __int64 v5; // rbx
  char v6; // si
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 (__fastcall *v16)(__int64, _QWORD, _QWORD, _QWORD); // rsi
  int v17; // eax
  rsize_t v18; // rdx
  rsize_t v19; // r9
  int v20; // eax
  int v21; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v23; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v24[24]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v25[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+78h] [rbp-88h]
  unsigned __int16 v28; // [rsp+9Ch] [rbp-64h]
  __int16 v29; // [rsp+BEh] [rbp-42h]
  _BYTE Destination[272]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  if ( *(char *)a2 >= 0 )
  {
    v11 = -2147024809;
    v12 = 168LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)v11,
      v21);
    return v11;
  }
  v22 = 0;
  v4 = (unsigned int *)((char *)a2 + 64);
  InputETW::ButtonProcessor::ButtonEvent(*((_DWORD *)a2 + 16), *((_BYTE *)a2 + 68));
  if ( IsEdition(0x3DDA1uLL)
    && (*v4 > 0xD || *((_BYTE *)this + 121))
    && *((_BYTE *)this + 120)
    && (int)ButtonProcessor::ButtonToVKeyMapping(this, *v4, &v22) >= 0 )
  {
    memset_0(v25, 0, 0x170uLL);
    v27 = 368;
    v25[1] = **((_DWORD **)this + 4);
    v25[0] = 4;
    v25[2] = *((_DWORD *)a2 + 2);
    v26 = *((_QWORD *)a2 + 2);
    v29 = 64;
    v28 = v22;
    if ( *((_BYTE *)a2 + 68) )
    {
      *((_BYTE *)this + v22 + 136) = 0x80;
    }
    else
    {
      v29 = 65;
      *((_BYTE *)this + v22 + 136) = 0;
    }
    memcpy_s_3(Destination, v18, (char *)this + 136, v19);
    v20 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), v25);
    if ( v20 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD1,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
        (const char *)(unsigned int)v20,
        v21);
    return 0LL;
  }
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (char *)this + 40,
    &v23,
    v4);
  v5 = v23;
  if ( (_QWORD)v23 != *((_QWORD *)this + 6) )
    goto LABEL_4;
  v23 = 0LL;
  v5 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::emplace<unsigned long &,ButtonProcessor::TargetingInfo>(
                    (char *)this + 40,
                    v24,
                    v4,
                    &v23);
  Win32kInterop::TargetingInfo::~TargetingInfo((Win32kInterop::TargetingInfo *)&v23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v5 + 24));
  v13 = InputContext::Create((struct InputContext **)(v5 + 24));
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)(unsigned int)v13,
      v21);
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 72LL))(*((_QWORD *)this + 3));
  v15 = v14;
  if ( !v14 )
  {
    v11 = -2147418113;
    v12 = 224LL;
    goto LABEL_11;
  }
  v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v5 + 32));
  v21 = v5 + 32;
  v17 = v16(v15, *((_QWORD *)this + 4), *(_QWORD *)(v5 + 24), 0LL);
  if ( v17 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)(unsigned int)v17,
      v21);
LABEL_4:
  v6 = *((_BYTE *)a2 + 68);
  v7 = *(_QWORD *)(v5 + 32);
  if ( !v7
    || (v9 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v7 + 24LL))(v7, a2), v10 = v9, v9 >= 0) )
  {
    if ( !v6 )
      std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>>>,0>(
        (char *)this + 40,
        &v23,
        v5);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF5,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
    (const char *)(unsigned int)v9,
    v21);
  return v10;
}
