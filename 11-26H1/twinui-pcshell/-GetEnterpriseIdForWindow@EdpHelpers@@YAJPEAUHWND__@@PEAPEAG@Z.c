/*
 * XREFs of ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18030AE04
 * Callers:
 *     _lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f_::operator() @ 0x1801E0770 (_lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f_--operator().c)
 *     _lambda_f58beaf1c957ff853694186b2dae5080_::operator() @ 0x18030A90C (_lambda_f58beaf1c957ff853694186b2dae5080_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7710 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180190E18 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180190EC0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801A8400 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801CD2B0 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D4C2C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUEDP_CONTEXT@@P6AXPEAU1@@Z$1?EdpFreeContext@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18030A8E8 (--1-$unique_storage@U-$resource_policy@PEAUEDP_CONTEXT@@P6AXPEAU1@@Z$1-EdpFreeContext@@YAX0@ZU-$.c)
 *     ?GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z @ 0x18030B46C (-GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z.c)
 */

__int64 __fastcall EdpHelpers::GetEnterpriseIdForWindow(EdpHelpers *this, _QWORD *a2, unsigned __int16 **a3)
{
  DWORD v6; // ebx
  bool v7; // zf
  HANDLE v8; // rax
  int ContextForWindow; // eax
  const char *v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // eax
  unsigned __int16 **v13; // r8
  int ProcessImageName; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  void **p_pbDebuggerPresent; // rcx
  char *v18; // rdx
  void *v19; // rax
  void *v20; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v21[24]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *pbDebuggerPresent; // [rsp+68h] [rbp+28h] BYREF
  DWORD dwProcessId; // [rsp+70h] [rbp+30h] BYREF
  __int64 v25; // [rsp+78h] [rbp+38h] BYREF

  *a2 = 0LL;
  dwProcessId = 0;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return 2147500037LL;
  v6 = dwProcessId;
  LODWORD(pbDebuggerPresent) = IsDebuggerPresent();
  v7 = (_DWORD)pbDebuggerPresent == 0;
  if ( !(_DWORD)pbDebuggerPresent )
  {
    v8 = OpenProcess(0x1000u, 0, v6);
    v20 = v8;
    if ( v8 && !CheckRemoteDebuggerPresent(v8, (PBOOL)&pbDebuggerPresent) )
      LODWORD(pbDebuggerPresent) = 0;
    CAutoHandle<void *>::~CAutoHandle<void *>(&v20);
    v7 = (_DWORD)pbDebuggerPresent == 0;
  }
  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v21, !v7 ? -1 : 5000);
  v25 = 0LL;
  ContextForWindow = EdpGetContextForWindow(this, &v25);
  v11 = ContextForWindow;
  if ( ContextForWindow != -2147024891 )
  {
    if ( ContextForWindow < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC1,
        (int)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
        (const char *)(unsigned int)ContextForWindow);
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  pbDebuggerPresent = 0LL;
  v12 = (unsigned int)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pbDebuggerPresent);
  ProcessImageName = EdpHelpers::GetProcessImageName(dwProcessId, v12, v13);
  v11 = ProcessImageName;
  if ( ProcessImageName >= 0 )
  {
    v16 = v25;
    if ( v25 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v20);
      EdpFreeContext(v16);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v20);
    }
    v25 = 0LL;
    ProcessImageName = EdpGetContextForBinaryPath(pbDebuggerPresent, &v25);
    v11 = ProcessImageName;
    if ( ProcessImageName < 0 )
    {
      v15 = 191LL;
      goto LABEL_15;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pbDebuggerPresent);
LABEL_17:
    v18 = *(char **)(v25 + 8);
    if ( v18 )
    {
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v20,
        v18,
        0xFFFFFFFFFFFFFFFFuLL,
        v10);
      v19 = v20;
      if ( !v20 )
      {
        v11 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC9,
          (int)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
          (const char *)0x8007000ELL);
        p_pbDebuggerPresent = &v20;
        goto LABEL_20;
      }
      v20 = 0LL;
      *a2 = v19;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v20);
    }
    v11 = 0;
    goto LABEL_25;
  }
  v15 = 189LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
    (const char *)(unsigned int)ProcessImageName);
  p_pbDebuggerPresent = &pbDebuggerPresent;
LABEL_20:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(p_pbDebuggerPresent);
LABEL_25:
  wil::details::unique_storage<wil::details::resource_policy<EDP_CONTEXT *,void (*)(EDP_CONTEXT *),&void EdpFreeContext(EDP_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,EDP_CONTEXT *,EDP_CONTEXT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<EDP_CONTEXT *,void (*)(EDP_CONTEXT *),&void EdpFreeContext(EDP_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,EDP_CONTEXT *,EDP_CONTEXT *,0,std::nullptr_t>>(&v25);
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v21);
  return v11;
}
