/*
 * XREFs of ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801D02BC
 * Callers:
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_7cc4ca75940c0ea695d2d6398f0fa979___ @ 0x1801CE73C (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ea_1801CE73C.c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801CF798 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801D04B0 (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801D0CC0 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 *     ?RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z @ 0x1801D11D0 (-RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801D1980 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 *     ?UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z @ 0x1801D1C80 (-UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801A3104 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall HotKeyProcessor::FindRegisteredClient(
        HotKeyProcessor *this,
        const struct MessageObjectID *a2,
        struct HotkeyClientRegistration **a3)
{
  unsigned int v3; // edi
  _QWORD *v6; // r12
  __int64 v7; // r13
  _QWORD *i; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rbp
  bool v11; // zf
  char v12; // bp
  __int128 v14; // [rsp+20h] [rbp-38h]
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  struct HotkeyClientRegistration *v16; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    v6 = (_QWORD *)*((_QWORD *)this + 3);
    v14 = *(_OWORD *)a2;
    v7 = *((_QWORD *)a2 + 1);
    for ( i = (_QWORD *)*v6; ; i = (_QWORD *)*i )
    {
      v9 = i + 2;
      if ( i == v6 )
        break;
      v16 = (struct HotkeyClientRegistration *)*v9;
      v10 = (__int64)v16;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v16);
      if ( !*(_QWORD *)(v10 + 104)
        || *(_QWORD *)(v10 + 24) != (_QWORD)v14
        || (v11 = *(_DWORD *)(v10 + 32) == (_DWORD)v7, v12 = 1, !v11) )
      {
        v12 = 0;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      if ( v12 )
        break;
    }
    if ( i != *((_QWORD **)this + 3) )
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(i + 2);
      *a3 = (struct HotkeyClientRegistration *)*v9;
    }
  }
  else
  {
    v3 = -2147024809;
    FailFastWithHR(-2147024809, retaddr, 0x40BuLL);
  }
  return v3;
}
