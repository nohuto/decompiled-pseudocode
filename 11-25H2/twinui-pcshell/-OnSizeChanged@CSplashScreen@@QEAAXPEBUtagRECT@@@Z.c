/*
 * XREFs of ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x1800D7630
 * Callers:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800D71E8 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x1800D8850 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSplashScreen::OnSizeChanged(CSplashScreen *this, const struct tagRECT *a2)
{
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int128 v5; // xmm6
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, GUID *, __int64 *); // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF

  *((float *)this + 34) = (float)(a2->bottom - a2->top);
  *((float *)this + 33) = (float)(a2->right - a2->left);
  CSplashScreen::_get_ImageLocationInternal(this, &v12);
  v3 = (__int64 *)*((_QWORD *)this + 12);
  v4 = (__int64 *)*((_QWORD *)this + 13);
  if ( v3 != v4 )
  {
    v5 = v12;
    do
    {
      v6 = *v3;
      *(_QWORD *)&v12 = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v10[0] = 0LL;
      v7 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
      if ( v7(v6, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, v10) >= 0 )
      {
        v9 = *(_QWORD *)v10[0];
        v11 = v5;
        (*(void (__fastcall **)(__int64, __int128 *))(v9 + 48))(v10[0], &v11);
      }
      v8 = v10[0];
      if ( v10[0] )
      {
        v10[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      ++v3;
    }
    while ( v3 != v4 );
  }
}
