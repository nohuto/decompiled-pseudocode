/*
 * XREFs of ?GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x180210604
 * Callers:
 *     ?GetBoundingRectForSelectedTextFromAncestorsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x180478E60 (-GetBoundingRectForSelectedTextFromAncestorsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJ.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x1804791A4 (-GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D07F0 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801F5658 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_con.c)
 *     ?GetBoundingRectForTextRange@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationTextRange@@PEAUtagRECT@@@Z @ 0x180479610 (-GetBoundingRectForTextRange@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationTextRang.c)
 *     ?UIAFoundSelectedText@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180479BA8 (-UIAFoundSelectedText@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForTextPattern(
        KeyboardHosting::UIAutomationHelpers *this,
        struct IUIAutomationElement *a2,
        struct tagRECT *a3)
{
  struct IUIAutomationElementVtbl *lpVtbl; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // esi
  bool v13; // cc
  __int64 v14; // rax
  struct IUIAutomationTextRange *v15; // rbx
  HRESULT (__stdcall *GetText)(IUIAutomationTextRange *, int, BSTR *); // rdi
  struct IUIAutomationTextRange *v18; // [rsp+30h] [rbp-20h] BYREF
  BSTR pbstr; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v22; // [rsp+88h] [rbp+38h] BYREF
  __int64 *v23; // [rsp+98h] [rbp+48h] BYREF

  lpVtbl = a2->lpVtbl;
  v20[0] = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IUIAutomationElement *, __int64, GUID *, __int64 *))lpVtbl->GetCachedPatternAs)(
         a2,
         10014LL,
         &GUID_32eba289_3583_42c9_9c59_3b6d9a1e9b6a,
         v20);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)(unsigned int)v6);
    if ( v20[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
    return v7;
  }
  if ( !v20[0] )
  {
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)0x8000FFFFLL);
LABEL_31:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v20);
    return v7;
  }
  v23 = 0LL;
  v8 = *(_QWORD *)v20[0];
  v23 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 **))(v8 + 40))(v20[0], &v23);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 239LL;
LABEL_9:
    v11 = (unsigned int)v9;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
    goto LABEL_31;
  }
  if ( !v23 )
  {
    v7 = -2147023728;
    v11 = 2147943568LL;
    v10 = 240LL;
    goto LABEL_10;
  }
  v22 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v23 + 24))(v23, &v22);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 243LL;
    goto LABEL_9;
  }
  v12 = v22;
  v13 = v22 <= 0;
  if ( v22 )
  {
    while ( !v13 )
    {
      v18 = 0LL;
      v14 = *v23;
      v18 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, struct IUIAutomationTextRange **))(v14 + 32))(
             v23,
             (unsigned int)--v12,
             &v18) >= 0 )
      {
        v15 = v18;
        if ( v18 )
        {
          pbstr = 0LL;
          GetText = v18->lpVtbl->GetText;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            &pbstr,
            0LL);
          if ( ((int (__fastcall *)(struct IUIAutomationTextRange *, __int64, BSTR *))GetText)(
                 v15,
                 0xFFFFFFFFLL,
                 &pbstr) >= 0 )
          {
            if ( SysStringLen(pbstr) )
            {
              TouchKeyboardExperienceTelemetryLogger::UIAFoundSelectedText();
              if ( (int)KeyboardHosting::UIAutomationHelpers::GetBoundingRectForTextRange(this, v18, a3) >= 0 )
              {
                wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pbstr);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
                v7 = 0;
                goto LABEL_31;
              }
            }
          }
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pbstr);
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
      v13 = v12 <= 0;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
    v7 = -2147023728;
    goto LABEL_31;
  }
  v7 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF4,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
    (const char *)0x80070490LL);
  if ( v23 )
    (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
  if ( v20[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
  return v7;
}
