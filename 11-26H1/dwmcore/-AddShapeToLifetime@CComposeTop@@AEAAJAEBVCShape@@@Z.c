/*
 * XREFs of ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1801DC1D8
 * Callers:
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158220 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB760 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CComposeTop::AddShapeToLifetime(CComposeTop *this, const struct CShape *a2)
{
  __int64 (__fastcall ****v2)(_QWORD, __int64); // rdi
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // ebx
  int v8; // eax
  CComplexShape *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 (__fastcall ****)(_QWORD, __int64))((char *)this + 160);
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 20);
  if ( v4
    || ((v5 = MIDL_user_allocate(0x60uLL), (v6 = v5) == 0LL)
      ? (v6 = 0LL)
      : (_QWORD *)(memset_0(v5, 0, 0x60uLL), *v6 = &CRegionShape::`vftable', v6[2] = v6 + 3),
        std::unique_ptr<CShape>::reset(v2, (__int64 (__fastcall ***)(_QWORD, __int64))v6),
        (v4 = *v2) != 0LL) )
  {
    v10 = 0LL;
    v8 = CShape::Combine((__int64)v4, (__int64)a2, (__int64)a2, 0LL, 0, &v10);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xCEu, 0LL);
    else
      std::unique_ptr<CShape>::reset(v2, (__int64 (__fastcall ***)(_QWORD, __int64))v10);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xC7u, 0LL);
  }
  return v7;
}
