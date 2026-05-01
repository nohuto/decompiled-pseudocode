/*
 * XREFs of ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x18050E880
 * Callers:
 *     ?v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18050EEC0 (-v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180300D38 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z @ 0x18050E9CC (-PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x180519928 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall JointDivider::HandlePaint(JointDivider *this, HDC hdc)
{
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT Points; // [rsp+38h] [rbp-28h] BYREF
  struct tagPOINT v8; // [rsp+48h] [rbp-18h] BYREF

  v6 = 0LL;
  v4 = *((_QWORD *)this + 8);
  v5 = *(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  if ( v5(v4, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v6) >= 0 )
  {
    `vector constructor iterator'((char *)&Points, 16LL, 2LL, (void (__fastcall *)(char *))Geometry::CRect::CRect);
    (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *))(*(_QWORD *)v6 + 56LL))(v6, 0LL, &Points);
    (*(void (__fastcall **)(__int64, __int64, struct tagPOINT *))(*(_QWORD *)v6 + 56LL))(v6, 1LL, &v8);
    MapWindowPoints(0LL, *((HWND *)this + 6), &Points, 2u);
    MapWindowPoints(0LL, *((HWND *)this + 6), &v8, 2u);
    JointDivider_Paint(
      hdc,
      (HDC)&Points,
      (const struct Geometry::CRect *)&v8,
      *((enum DEVICE_SCALE_FACTOR *)this + 20),
      *((HFONT *)this + 9));
    JointDivider::PaintFocusIndicator(this, hdc, (const struct Geometry::CRect *)&v8);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
}
