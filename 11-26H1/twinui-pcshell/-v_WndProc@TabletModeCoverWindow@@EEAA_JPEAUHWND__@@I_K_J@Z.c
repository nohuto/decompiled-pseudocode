/*
 * XREFs of ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180057AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x180058260 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x180530568 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1805306B0 (-ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@PEAPEAX@Z @ 0x1805354EC (-CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@P.c)
 */

LONG_PTR __fastcall TabletModeCoverWindow::v_WndProc(
        TabletModeCoverWindow *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v5; // rsi
  void **v12; // r14
  HWND *v13; // rdi
  const struct _GUID *v14; // r9
  int Instance; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0LL;
  if ( a3 > 0x202 )
  {
    if ( a3 != 582 )
    {
      if ( a3 != 583 )
      {
        if ( a3 == 1025 )
        {
          TabletModeCoverWindow::InitializeInstance((TabletModeCoverWindow *)((char *)this - 96));
          return v5;
        }
        if ( a3 == 32769 && (a4 & 1) != 0 )
          TabletModeCoverWindow::ScaleFactorChanged((TabletModeCoverWindow *)((char *)this - 96));
        return DefWindowProcW(a2, a3, a4, lParam);
      }
LABEL_26:
      TabletModeCoverWindow::OnPointerUp((TabletModeCoverWindow *)((char *)this - 96));
      return v5;
    }
LABEL_27:
    *((_BYTE *)this + 124) = 1;
    return v5;
  }
  if ( a3 == 514 )
    goto LABEL_26;
  if ( a3 != 16 )
  {
    if ( a3 != 21 )
    {
      switch ( a3 )
      {
        case 0x21u:
          return 3LL;
        case 0x3Du:
          if ( lParam == -25 )
          {
            v12 = (void **)((char *)this + 88);
            if ( *((_QWORD *)this + 11) )
            {
              v13 = (HWND *)((char *)this + 8);
            }
            else
            {
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
              v13 = (HWND *)((char *)this + 8);
              Instance = CoverWindowAcc_CreateInstance(*v13, L"TabletModeCoverWindow", 0LL, v14, v12);
              if ( Instance < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xCF,
                  (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
                  (const char *)(unsigned int)Instance);
            }
            if ( *v12 )
              return UiaReturnRawElementProvider(*v13, a4, -25LL, (IRawElementProviderSimple *)*v12);
          }
          break;
        case 0x201u:
          goto LABEL_27;
      }
    }
    return DefWindowProcW(a2, a3, a4, lParam);
  }
  return v5;
}
