/*
 * XREFs of ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18016BED0
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::GetShapeDataWorker(CGeometry *this, const struct D2D_SIZE_F *a2, CShape **a3)
{
  const struct D2D_SIZE_F *v3; // rdi
  int v6; // eax
  unsigned int v7; // r14d
  __int64 result; // rax
  CShape *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  struct CShape *v12; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v13[4]; // [rsp+40h] [rbp-39h] BYREF
  __m128i si128; // [rsp+60h] [rbp-19h]
  __int64 v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+7Ch] [rbp+3h]
  __int128 v18; // [rsp+90h] [rbp+17h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+27h]

  v3 = 0LL;
  if ( *((_BYTE *)this + 132) )
    v3 = a2;
  v6 = (*(__int64 (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *))(*(_QWORD *)this + 224LL))(this, v3);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xFAu, 0LL);
    return v7;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CGeometry *))(*(_QWORD *)this + 240LL))(this) )
    return v7;
  v18 = 0LL;
  v19 = 0LL;
  if ( !*a3 )
    return v7;
  (*(void (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)this + 232LL))(this, v3, &v18);
  v9 = *a3;
  v13[0] = v18;
  v17 = 0x28083F800000LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v13[2] = *((_QWORD *)&v18 + 1);
  v15 = v19;
  v13[1] = 0LL;
  v13[3] = 0LL;
  v16 = 0;
  v12 = 0LL;
  v10 = CShape::CopyShape(v9, (const struct CMILMatrix *)v13, &v12);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x108u, 0LL);
    return v11;
  }
  else
  {
    if ( *((_BYTE *)a3 + 8) )
    {
      if ( *a3 )
        (**(void (__fastcall ***)(CShape *, __int64))*a3)(*a3, 1LL);
    }
    *a3 = v12;
    result = v11;
    *((_BYTE *)a3 + 8) = 1;
  }
  return result;
}
