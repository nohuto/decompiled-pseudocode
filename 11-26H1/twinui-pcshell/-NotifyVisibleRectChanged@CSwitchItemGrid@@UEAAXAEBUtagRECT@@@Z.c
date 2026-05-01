/*
 * XREFs of ?NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z @ 0x1804C6F70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180203058 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSwitchItemGrid::NotifyVisibleRectChanged(CSwitchItemGrid *this, const struct tagRECT *a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rdi
  Geometry::CRect *v6; // rax
  __int64 v7; // r11
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[16]; // [rsp+28h] [rbp-20h] BYREF

  v3 = (__int64 *)*((_QWORD *)this - 28);
  v4 = &v3[*((_QWORD *)this - 27)];
  while ( v3 != v4 )
  {
    v8 = *v3;
    v5 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
    v6 = (Geometry::CRect *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v5 + 88LL))(v5, v9);
    if ( Geometry::CRect::Intersects(v6, a2) )
      (*(void (__fastcall **)(__int64))(v7 + 136))(v5);
    else
      (*(void (__fastcall **)(__int64))(v7 + 144))(v5);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    ++v3;
  }
}
