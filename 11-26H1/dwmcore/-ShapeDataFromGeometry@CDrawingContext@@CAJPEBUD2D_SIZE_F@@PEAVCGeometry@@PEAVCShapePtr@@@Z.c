/*
 * XREFs of ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x180180C50
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800D11E8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::ShapeDataFromGeometry(
        const struct D2D_SIZE_F *a1,
        struct CGeometry *this,
        struct CShapePtr *a3)
{
  bool v3; // zf
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  int ShapeData; // eax
  unsigned int v9; // esi
  void (__fastcall ***v10)(_QWORD, __int64); // r14
  int v11; // ebp
  int v12; // eax
  unsigned int v13; // eax
  char v15; // bp
  void (__fastcall ***v16)(_QWORD, __int64); // [rsp+30h] [rbp-58h] BYREF
  char v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF

  v3 = *((_BYTE *)a3 + 8) == 0;
  v18 = 0LL;
  if ( !v3 && *(_QWORD *)a3 )
    (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  v7 = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_BYTE *)a3 + 8) = 0;
  v16 = 0LL;
  v17 = 0;
  ShapeData = CGeometry::GetShapeData(this, a1, (struct CShapePtr *)&v16);
  v9 = ShapeData;
  if ( ShapeData < 0 )
  {
    v11 = ShapeData;
    v13 = 2384;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v13, 0LL);
    if ( v9 == -2003304438 || v9 == -2003304309 )
      v9 = 0;
    v7 = v16;
    goto LABEL_10;
  }
  v10 = v16;
  v11 = -2003304309;
  if ( v16 )
  {
    v12 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), __int128 *, _QWORD))(*v16)[6])(
            v16,
            &v18,
            0LL);
    v11 = v12;
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x137u, 0LL);
LABEL_6:
      v13 = 2385;
      goto LABEL_7;
    }
    v10 = v16;
  }
  v9 = v11;
  if ( v11 < 0 )
    goto LABEL_6;
  v15 = v17;
  if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
    (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  *(_QWORD *)a3 = v10;
  *((_BYTE *)a3 + 8) = v15;
  v16 = 0LL;
  v17 = 0;
LABEL_10:
  if ( v17 && v7 )
    (**v7)(v7, 1LL);
  return v9;
}
