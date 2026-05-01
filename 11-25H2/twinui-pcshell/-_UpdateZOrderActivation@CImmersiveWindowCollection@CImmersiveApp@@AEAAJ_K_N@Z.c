/*
 * XREFs of ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x1803056C4
 * Callers:
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180305310 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180041708 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800D71E8 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x18013898C (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x1801D66C0 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     WPP_SF_q @ 0x180305DA8 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_UpdateZOrderActivation(
        CImmersiveApp::CImmersiveWindowCollection *this,
        __int64 a2)
{
  unsigned int inserted; // r14d
  char *v5; // rsi
  struct ITaskWindow *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rax
  struct ITaskWindow *v10; // [rsp+40h] [rbp+8h] BYREF

  inserted = 0;
  v5 = (char *)this + 160;
  if ( a2 )
  {
    v10 = *(struct ITaskWindow **)(*(_QWORD *)v5 + 8 * a2);
    v6 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    CImmersiveApp::CImmersiveWindowCollection::_RemoveWindow(this, a2);
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow((CSplashScreen **)this, v6, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  }
  if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
    CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows((__int64)this);
  if ( *((_QWORD *)this + 21) >= 2uLL && a2 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v5 + 8LL);
    v10 = (struct ITaskWindow *)v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        30LL,
        &WPP_9b7d568634ab3ac73462613a22000263_Traceguids,
        v8);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 160LL))(v7, 0LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 248LL))(v7, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  }
  return inserted;
}
