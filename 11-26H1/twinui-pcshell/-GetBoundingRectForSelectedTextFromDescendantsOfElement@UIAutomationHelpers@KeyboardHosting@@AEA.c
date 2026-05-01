/*
 * XREFs of ?GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x180489970
 * Callers:
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x180489C0C (-GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement@UIAutomationHelpers@KeyboardHosti.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x180489D08 (-GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHos.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x1802030A0 (-GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElemen.c)
 *     ??$UIASearchDownTotalElement@AEAH@TouchKeyboardExperienceTelemetryLogger@@SAXAEAH@Z @ 0x1802C27F8 (--$UIASearchDownTotalElement@AEAH@TouchKeyboardExperienceTelemetryLogger@@SAXAEAH@Z.c)
 *     ?UIASearchDownBoundingRectForSelectedTextFromElement@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802C5E30 (-UIASearchDownBoundingRectForSelectedTextFromElement@TouchKeyboardExperienceTelemetryLogger@@SAX.c)
 *     ??$UIASearchDownFoundTextAtElement@H@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAH@Z @ 0x180489404 (--$UIASearchDownFoundTextAtElement@H@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfElement(
        __int64 **this,
        struct IUIAutomationElement *a2,
        struct tagRECT *a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  struct IUIAutomationElementVtbl *lpVtbl; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  int v18; // ebx
  __int64 v19; // rax
  __int64 v21; // [rsp+30h] [rbp-19h] BYREF
  int v22[2]; // [rsp+38h] [rbp-11h] BYREF
  struct IUIAutomationElement *v23; // [rsp+40h] [rbp-9h] BYREF
  __int64 v24; // [rsp+48h] [rbp-1h] BYREF
  VARIANTARG pvarg; // [rsp+50h] [rbp+7h] BYREF
  VARIANTARG v26; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v28; // [rsp+B0h] [rbp+67h] BYREF
  int v29; // [rsp+C8h] [rbp+7Fh] BYREF

  TouchKeyboardExperienceTelemetryLogger::UIASearchDownBoundingRectForSelectedTextFromElement();
  VariantInit(&pvarg);
  pvarg.vt = 11;
  pvarg.iVal = -1;
  v24 = 0LL;
  v6 = *this;
  v7 = **this;
  v24 = 0LL;
  v26 = pvarg;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, VARIANTARG *, __int64 *))(v7 + 184))(v6, 30040LL, &v26, &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_24;
  }
  v21 = 0LL;
  v10 = *this;
  v11 = **this;
  v21 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 160))(v10, &v21);
  v9 = v12;
  if ( v12 < 0 )
  {
    v13 = 200LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)(unsigned int)v12);
LABEL_6:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    goto LABEL_24;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, 10014LL);
  v9 = v12;
  if ( v12 < 0 )
  {
    v13 = 201LL;
    goto LABEL_5;
  }
  lpVtbl = a2->lpVtbl;
  *(_QWORD *)v22 = 0LL;
  v15 = ((__int64 (__fastcall *)(struct IUIAutomationElement *, __int64, __int64, __int64, int *))lpVtbl->FindAllBuildCache)(
          a2,
          4LL,
          v24,
          v21,
          v22);
  v9 = v15;
  if ( v15 < 0 )
  {
    v16 = 204LL;
LABEL_11:
    v17 = (unsigned int)v15;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)v17);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v22);
    goto LABEL_6;
  }
  if ( !*(_QWORD *)v22 )
  {
    v9 = -2147418113;
    v17 = 2147549183LL;
    v16 = 206LL;
    goto LABEL_12;
  }
  v28 = 0;
  v15 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v22 + 24LL))(*(_QWORD *)v22, &v28);
  v9 = v15;
  if ( v15 < 0 )
  {
    v16 = 209LL;
    goto LABEL_11;
  }
  TouchKeyboardExperienceTelemetryLogger::UIASearchDownTotalElement<int &>(&v28);
  v18 = v28;
  while ( 1 )
  {
    if ( v18 <= 0 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v22);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
      v9 = -2147023728;
      goto LABEL_24;
    }
    v23 = 0LL;
    v19 = **(_QWORD **)v22;
    v23 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, struct IUIAutomationElement **))(v19 + 32))(
           *(_QWORD *)v22,
           (unsigned int)--v18,
           &v23) >= 0
      && v23
      && (int)KeyboardHosting::UIAutomationHelpers::GetBoundingRectForTextPattern(
                (KeyboardHosting::UIAutomationHelpers *)this,
                v23,
                a3) >= 0 )
    {
      break;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
  }
  v29 = v18;
  TouchKeyboardExperienceTelemetryLogger::UIASearchDownFoundTextAtElement<int>(&v29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  v9 = 0;
LABEL_24:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  VariantClear(&pvarg);
  return v9;
}
