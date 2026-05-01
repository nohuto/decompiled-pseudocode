/*
 * XREFs of ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x1801DEA10
 * Callers:
 *     _lambda_4c487b8ddfbb456201be9b3312a7435d_::operator() @ 0x1802B7FC0 (_lambda_4c487b8ddfbb456201be9b3312a7435d_--operator().c)
 *     _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::operator() @ 0x180305090 (_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::_UpdateMinSizePreferences(
        CFrameApplicationPresentation *this,
        HWND a2)
{
  HWND *v4; // rax
  unsigned int PropW; // ebx
  unsigned int v6; // eax
  unsigned int *v7; // rax
  int v8; // eax
  int v9; // eax
  void *v10; // rcx
  bool v12; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v16; // [rsp+44h] [rbp+1Ch]

  if ( *((_DWORD *)this + 14) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F3,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v4 = (HWND *)*((_QWORD *)this + 14);
    if ( a2 && (a2 == *v4 || !*v4) )
    {
      PropW = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.X");
      v6 = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.Y");
      v15 = PropW;
      v16 = v6;
      if ( !PropW || (v12 = v6 == 0, v7 = &v15, v12) )
        v7 = (unsigned int *)((char *)this + 160);
      *((_QWORD *)this + 19) = *(_QWORD *)v7;
      v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 15) + 80LL))(
             *((_QWORD *)this + 15),
             (char *)this + 152);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7FF,
          (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v8);
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 224LL))(this);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &ppvOut) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ppvOut + 64LL))(
               ppvOut,
               *((_QWORD *)this + 76),
               *((_QWORD *)this + 19));
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x80C,
            (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
            (const char *)(unsigned int)v9);
      }
      v10 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    return 0LL;
  }
}
