/*
 * XREFs of ?CreateInstance@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@6@AEBV?$com_ptr_t@UIAssocHandler@@Uerr_exception_policy@wil@@@6@@Z @ 0x18004DDE8
 * Callers:
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180283C64 (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ?TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@V?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@@Z @ 0x1805D5950 (-TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocol.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$query@UIObjectWithAppUserModelID@@@?$com_ptr_t@UIAssocHandler@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIObjectWithAppUserModelID@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802A1F18 (--$query@UIObjectWithAppUserModelID@@@-$com_ptr_t@UIAssocHandler@@Uerr_exception_policy@wil@@@wi.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??$make_unique@VProtocolLauncher@Utils@@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$$T$$T$$T$0A@@std@@YA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@0@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$$QEA$$T11@Z @ 0x1805D416C (--$make_unique@VProtocolLauncher@Utils@@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
_QWORD *__fastcall Utils::ProtocolLauncher::CreateInstance(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // r8d
  __int64 v10; // r15
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, __int64 **); // r12
  const WCHAR *v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  _QWORD *v24; // rax
  int v26; // [rsp+20h] [rbp-69h]
  LPVOID pv; // [rsp+30h] [rbp-59h] BYREF
  HSTRING string; // [rsp+38h] [rbp-51h] BYREF
  HSTRING v29; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v30; // [rsp+48h] [rbp-41h] BYREF
  __int64 *v31; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v32; // [rsp+58h] [rbp-31h] BYREF
  __int64 v33[3]; // [rsp+60h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-11h] BYREF
  __int64 v35; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v33[0] = (__int64)a1;
  wil::com_ptr_t<IAssocHandler,wil::err_exception_policy>::query<IObjectWithAppUserModelID>(a4, v33);
  pv = 0LL;
  v7 = *(_QWORD *)v33[0];
  pv = 0LL;
  if ( (*(int (__fastcall **)(__int64, LPVOID *))(v7 + 32))(v33[0], &pv) < 0 )
    goto LABEL_31;
  v32 = 0LL;
  v10 = *a2;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 **))(*(_QWORD *)v10 + 240LL);
  v32 = 0LL;
  v35 = 0LL;
  v12 = (const WCHAR *)pv;
  v13 = -1LL;
  do
    ++v13;
  while ( *((_WORD *)pv + v13) );
  if ( v13 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v8, v9);
LABEL_31:
    std::make_unique<Utils::ProtocolLauncher,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,std::nullptr_t,std::nullptr_t,std::nullptr_t,0>(
      a1,
      a3);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v33);
    return a1;
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v13, v8, v9);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, v12, v14, v13);
  v15 = v11(v10, 0LL, v35, &v32);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)(unsigned int)v15,
      v26);
  v30 = 0LL;
  v16 = *v32;
  v30 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v16 + 72))(v32, &v30);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6B,
      (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)(unsigned int)v17,
      v26);
  v31 = 0LL;
  v18 = *v30;
  v31 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v18 + 72))(v30, &v31);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)(unsigned int)v19,
      v26);
  v29 = 0LL;
  v20 = *v31;
  v29 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v20 + 80))(v31, &v29);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x71,
      (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)(unsigned int)v21,
      v26);
  string = 0LL;
  v22 = *v30;
  string = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v22 + 112))(v30, &string);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)(unsigned int)v23,
      v26);
  v24 = operator new(0x30uLL);
  v33[2] = (__int64)v24;
  *v24 = *a3;
  *a3 = 0LL;
  v24[1] = pv;
  pv = 0LL;
  v24[2] = v29;
  v29 = 0LL;
  v24[3] = string;
  string = 0LL;
  v24[4] = 0LL;
  *((_BYTE *)v24 + 40) = 0;
  *a1 = v24;
  if ( string )
    WindowsDeleteString(string);
  if ( v29 )
    WindowsDeleteString(v29);
  if ( v31 )
    (*(void (__fastcall **)(__int64 *))(*v31 + 16))(v31);
  if ( v30 )
    (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
  if ( v32 )
    (*(void (__fastcall **)(__int64 *))(*v32 + 16))(v32);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v33[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33[0] + 16LL))(v33[0]);
  return a1;
}
