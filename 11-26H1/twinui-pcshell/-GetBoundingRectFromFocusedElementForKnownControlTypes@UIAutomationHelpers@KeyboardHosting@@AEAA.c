/*
 * XREFs of ?GetBoundingRectFromFocusedElementForKnownControlTypes@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x180489FC0
 * Callers:
 *     ?GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x180489530 (-GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C6D84 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801EB59C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_con.c)
 *     ??$FocusedElement@PEAGAEAH@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAH@Z @ 0x180489148 (--$FocusedElement@PEAGAEAH@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAH@Z.c)
 *     ??$UIAFoundBoundingRectForSelectedTextUsing@AEAY0CH@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAY0CH@$$CBG@Z @ 0x1804892B4 (--$UIAFoundBoundingRectForSelectedTextUsing@AEAY0CH@$$CBG@TouchKeyboardExperienceTelemetryLogger.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectFromFocusedElementForKnownControlTypes(
        __int64 **this,
        struct tagRECT *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, OLECHAR **); // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-10h] BYREF
  OLECHAR *v20; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v22; // [rsp+50h] [rbp+20h] BYREF
  __int64 v23; // [rsp+60h] [rbp+30h] BYREF
  OLECHAR *v24; // [rsp+68h] [rbp+38h] BYREF

  v19 = 0LL;
  v4 = *this;
  v5 = *v4;
  v19 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 160))(v4, &v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 24LL))(v19, 30003LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 97LL;
      goto LABEL_5;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 24LL))(v19, 30005LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 98LL;
      goto LABEL_5;
    }
    v23 = 0LL;
    v9 = *this;
    v10 = **this;
    v23 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v10 + 96))(v9, v19, &v23);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
        (const char *)(unsigned int)v11);
LABEL_10:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
      goto LABEL_22;
    }
    v24 = 0LL;
    v12 = v23;
    v13 = *(__int64 (__fastcall **)(__int64, OLECHAR **))(*(_QWORD *)v23 + 440LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v24,
      0LL);
    v14 = v13(v12, &v24);
    v7 = v14;
    if ( v14 >= 0 )
    {
      v22 = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 424LL))(v23, &v22);
      v7 = v14;
      if ( v14 >= 0 )
      {
        v20 = v24;
        TouchKeyboardExperienceTelemetryLogger::FocusedElement<unsigned short *,int &>(&v20);
        if ( v22 != 50029 )
        {
          v7 = -2147023728;
          v16 = 2147943568LL;
          v15 = 109LL;
          goto LABEL_14;
        }
        v14 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v23 + 344LL))(v23, a2);
        v7 = v14;
        if ( v14 >= 0 )
        {
          TouchKeyboardExperienceTelemetryLogger::UIAFoundBoundingRectForSelectedTextUsing<unsigned short const (&)[39]>(v17);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v24);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
          v7 = 0;
          goto LABEL_22;
        }
        v15 = 111LL;
      }
      else
      {
        v15 = 106LL;
      }
    }
    else
    {
      v15 = 104LL;
    }
    v16 = (unsigned int)v14;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)v16);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v24);
    goto LABEL_10;
  }
  v8 = 96LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
    (const char *)(unsigned int)v6);
LABEL_22:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  return v7;
}
