/*
 * XREFs of ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z @ 0x1800E3350
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007A548 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__CWindowList::RegisterForSoftwareCursorChangeNotification_::_2_::_lambda_1___ @ 0x1800DF078 (CWindowList--ForEachSoftwareCursorListener__CWindowList--RegisterForSoftwareCursorChangeNotifica.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterForSoftwareCursorChangeNotification(
        CWindowList *this,
        struct ISoftwareCursorChangeListener *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r8d
  int v5; // edi
  unsigned int v7; // eax
  _QWORD v8[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct ISoftwareCursorChangeListener *v10; // [rsp+68h] [rbp+28h] BYREF
  char v11; // [rsp+70h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+78h] [rbp+38h] BYREF

  v10 = a2;
  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0;
  v8[0] = &v10;
  v8[1] = &v11;
  CWindowList::ForEachSoftwareCursorListener__CWindowList::RegisterForSoftwareCursorChangeNotification_::_2_::_lambda_1___(
    (__int64)this,
    (__int64)v8);
  if ( v11 )
    goto LABEL_5;
  v3 = *((_DWORD *)this + 166);
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v5 = -2147024362;
    v7 = 183;
    goto LABEL_10;
  }
  if ( v4 > *((_DWORD *)this + 165) )
  {
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 640, 8, 1, &v10);
    if ( v5 >= 0 )
      goto LABEL_5;
    v7 = 194;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v7, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x691,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  *(_QWORD *)(*((_QWORD *)this + 80) + 8LL * v3) = v10;
  *((_DWORD *)this + 166) = v4;
LABEL_5:
  v5 = 0;
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return (unsigned int)v5;
}
