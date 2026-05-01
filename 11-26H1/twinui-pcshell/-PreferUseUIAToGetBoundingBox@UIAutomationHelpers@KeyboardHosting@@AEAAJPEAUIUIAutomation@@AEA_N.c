/*
 * XREFs of ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomation@@AEA_N@Z @ 0x18048A1C8
 * Callers:
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ @ 0x18048A38C (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C6D84 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801EB59C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_con.c)
 *     ??$FocusedElement@PEAGAEAH@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAH@Z @ 0x180489148 (--$FocusedElement@PEAGAEAH@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall KeyboardHosting::UIAutomationHelpers::PreferUseUIAToGetBoundingBox(
        KeyboardHosting::UIAutomationHelpers *this,
        struct IUIAutomation *a2,
        bool *a3)
{
  struct IUIAutomationVtbl *lpVtbl; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct IUIAutomationVtbl *v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, OLECHAR **); // rdi
  int v13; // eax
  __int64 v14; // rdx
  OLECHAR *v16; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  KeyboardHosting::UIAutomationHelpers *v18; // [rsp+60h] [rbp+28h] BYREF
  __int64 v19; // [rsp+68h] [rbp+30h] BYREF
  OLECHAR *v20; // [rsp+70h] [rbp+38h] BYREF
  __int64 v21; // [rsp+78h] [rbp+40h] BYREF

  v18 = this;
  *a3 = 0;
  lpVtbl = a2->lpVtbl;
  v21 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IUIAutomation *, __int64 *))lpVtbl->CreateCacheRequest)(a2, &v21);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 336LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, 30003LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 337LL;
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, 30005LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 338LL;
    goto LABEL_5;
  }
  v9 = a2->lpVtbl;
  v19 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IUIAutomation *, __int64, __int64 *))v9->GetFocusedElementBuildCache)(
          a2,
          v21,
          &v19);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v20 = 0LL;
    v11 = v19;
    v12 = *(__int64 (__fastcall **)(__int64, OLECHAR **))(*(_QWORD *)v19 + 440LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v20,
      0LL);
    v13 = v12(v11, &v20);
    v7 = v13;
    if ( v13 >= 0 )
    {
      LODWORD(v18) = 0;
      v13 = (*(__int64 (__fastcall **)(__int64, KeyboardHosting::UIAutomationHelpers **))(*(_QWORD *)v19 + 424LL))(
              v19,
              &v18);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v16 = v20;
        TouchKeyboardExperienceTelemetryLogger::FocusedElement<unsigned short *,int &>(&v16);
        *a3 = (_DWORD)v18 == 50029;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v20);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
        v7 = 0;
        goto LABEL_17;
      }
      v14 = 347LL;
    }
    else
    {
      v14 = 344LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)(unsigned int)v13);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v20);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x155,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)(unsigned int)v10);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
LABEL_17:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  return v7;
}
