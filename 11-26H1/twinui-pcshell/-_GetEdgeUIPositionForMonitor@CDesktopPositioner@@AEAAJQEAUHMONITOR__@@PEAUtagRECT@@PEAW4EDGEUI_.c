/*
 * XREFs of ?_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1805128E0
 * Callers:
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1805122A4 (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_GetEdgeUIPositionForMonitor(
        CDesktopPositioner *this,
        HMONITOR a2,
        struct tagRECT *a3,
        enum EDGEUI_TRAYSTUCKPLACE *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, HMONITOR, SID *, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  *(_DWORD *)a4 = -1;
  if ( SetRectEmpty(a3) )
  {
    v15 = 0LL;
    v9 = *((_QWORD *)this + 33);
    v10 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, __int64 *))(*(_QWORD *)v9 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    v11 = v10(v9, a2, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, &v15);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v15 + 80LL))(v15, a4);
      v8 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v15 + 168LL))(v15, a3);
        v8 = v11;
        if ( v11 >= 0 )
        {
          v8 = 0;
          goto LABEL_11;
        }
        v12 = 1602LL;
      }
      else
      {
        v12 = 1601LL;
      }
    }
    else
    {
      v12 = 1599LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v11);
LABEL_11:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    return v8;
  }
  v8 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x63C,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)0x80070057LL);
  return v8;
}
