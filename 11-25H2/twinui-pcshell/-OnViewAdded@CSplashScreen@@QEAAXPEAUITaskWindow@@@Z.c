/*
 * XREFs of ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18030AD28
 * Callers:
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x1801D66C0 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x1800D8850 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x18023103C (-_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1802E3624 (--$_Emplace_reallocate@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSplashScreen::OnViewAdded(CSplashScreen *this, struct ITaskWindow *a2)
{
  struct ITaskWindow **v4; // rdx
  const char *v5; // r9
  int (__fastcall *v6)(struct ITaskWindow *, GUID *, __int64 *); // rbx
  __int64 v7; // rdx
  struct ITaskWindow *v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  try
  {
    v4 = (struct ITaskWindow **)*((_QWORD *)this + 13);
    if ( v4 == *((struct ITaskWindow ***)this + 14) )
    {
      std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ITaskWindow>>(
        (__int64)this + 96,
        v4,
        (__int64 *)&v8);
    }
    else
    {
      *v4 = 0LL;
      if ( v4 != &v8 )
      {
        *v4 = a2;
        v8 = 0LL;
      }
      *((_QWORD *)this + 13) += 8LL;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    if ( CSplashScreen::_CanSendDismissedEvent(this) )
    {
      v9 = 0LL;
      v6 = *(int (__fastcall **)(struct ITaskWindow *, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
      if ( v6(a2, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, &v9) >= 0 )
      {
        CSplashScreen::_get_ImageLocationInternal((__int64)this, (__int64)&v10);
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 48LL))(v9, &v10);
        LOBYTE(v7) = 1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 56LL))(v9, v7);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x39,
      (int)"pcshell\\twinui\\appmanager\\lib\\splashscreen.cpp",
      v5);
  }
}
