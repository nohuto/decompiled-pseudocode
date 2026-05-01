/*
 * XREFs of ?DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18050D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1802388D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$As@UICoverWindowAcc@@@?$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@@Details@12@@Z @ 0x18050D5A4 (--$As@UICoverWindowAcc@@@-$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x18050D714 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModeCoverWindow::DisplaySettingsChanged(__int64 a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // r10
  __int64 v8; // kr00_8
  int v9; // edx
  int DesktopThumbnail; // eax
  int v11; // eax
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  RTL_SRWLOCK *v14[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  wil::AcquireSRWLockExclusive(v14, (RTL_SRWLOCK *)(a1 + 32));
  v4 = *(_QWORD *)(a1 + 56);
  if ( !v4 || !*(_QWORD *)(a1 + 24) )
    goto LABEL_15;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_10:
    if ( *(_QWORD *)(a1 + 104) && (a2 & 1) != 0 )
    {
      *(_QWORD *)&v13 = 0LL;
      v11 = Microsoft::WRL::ComPtr<IRawElementProviderSimple>::As<ICoverWindowAcc>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 104),
              (__int64 *)&v13);
      v6 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA3,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
        goto LABEL_16;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 32LL))(v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    }
LABEL_15:
    v6 = 0;
    goto LABEL_16;
  }
  v15 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 88LL))(v4, &v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v13 = v15;
    if ( !Geometry::operator==(&v13, (_DWORD *)(a1 + 124)) )
    {
      v8 = *(_QWORD *)((char *)&v15 + 4);
      v9 = HIDWORD(v15);
      *(_DWORD *)v7 = v15;
      *(_QWORD *)(v7 + 4) = v8;
      *(_DWORD *)(v7 + 12) = v9;
      SetWindowPos(
        *(HWND *)(a1 + 24),
        0LL,
        *(_DWORD *)v7,
        *(_DWORD *)(a1 + 128),
        HIDWORD(v8) - *(_DWORD *)v7,
        *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128),
        0x14u);
      if ( *(_BYTE *)(a1 + 120) )
      {
        DesktopThumbnail = TabletModeCoverWindow::CreateDesktopThumbnail((TabletModeCoverWindow *)(a1 - 80));
        if ( DesktopThumbnail < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x98,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
            (const char *)(unsigned int)DesktopThumbnail);
          *(_BYTE *)(a1 + 120) = 0;
          ShowWindow(*(HWND *)(a1 + 24), 0);
        }
      }
    }
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x93,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)v5);
LABEL_16:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v14);
  return v6;
}
