/*
 * XREFs of ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801062E0
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DAFB8 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureD2DGeometry@CRectanglesShape@@AEBAJXZ @ 0x1801065AC (-EnsureD2DGeometry@CRectanglesShape@@AEBAJXZ.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x180106A08 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRectanglesShape::GetD2DGeometry(
        CRectanglesShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  __int64 v13; // rbx
  FLOAT v14; // xmm2_4
  int v15; // xmm0_4
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-29h] BYREF
  struct ID2D1Geometry *v18; // [rsp+38h] [rbp-21h] BYREF
  struct D2D_POINT_2F v19; // [rsp+40h] [rbp-19h] BYREF
  int v20; // [rsp+48h] [rbp-11h]
  FLOAT y; // [rsp+4Ch] [rbp-Dh]
  int v22; // [rsp+50h] [rbp-9h]
  int v23; // [rsp+54h] [rbp-5h]
  FLOAT v24; // [rsp+58h] [rbp-1h]
  int v25; // [rsp+5Ch] [rbp+3h]
  struct D2D_POINT_2F v26; // [rsp+60h] [rbp+7h] BYREF
  unsigned int v27; // [rsp+68h] [rbp+Fh]
  unsigned int v28; // [rsp+6Ch] [rbp+13h]
  unsigned int v29; // [rsp+70h] [rbp+17h]
  unsigned int v30; // [rsp+74h] [rbp+1Bh]
  unsigned int v31; // [rsp+78h] [rbp+1Fh]
  unsigned int v32; // [rsp+7Ch] [rbp+23h]

  v18 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
           g_DeviceManager,
           &v18);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v18 + 136LL))(v18, &v17);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x3Au, 0LL);
      }
      else
      {
        v11 = *((_QWORD *)this + 2);
        v12 = 0LL;
        if ( (*((_QWORD *)this + 3) - v11) >> 4 )
        {
          v13 = 0LL;
          do
          {
            v14 = *(float *)(v13 + v11);
            v15 = *(_DWORD *)(v13 + v11 + 8);
            v19.y = *(FLOAT *)(v13 + v11 + 4);
            y = v19.y;
            v23 = *(_DWORD *)(v13 + v11 + 12);
            v25 = v23;
            v19.x = v14;
            v20 = v15;
            v22 = v15;
            v24 = v14;
            CMILMatrix::Transform(a2, &v19, &v26, 4u);
            (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v17 + 40LL))(
              v17,
              _mm_unpacklo_ps((__m128)LODWORD(v26.x), (__m128)LODWORD(v26.y)).m128_u64[0],
              0LL);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v17 + 80LL))(
              v17,
              _mm_unpacklo_ps((__m128)v27, (__m128)v28).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v17 + 80LL))(
              v17,
              _mm_unpacklo_ps((__m128)v29, (__m128)v30).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v17 + 80LL))(
              v17,
              _mm_unpacklo_ps((__m128)v31, (__m128)v32).m128_u64[0]);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 64LL))(v17, 1LL);
            v11 = *((_QWORD *)this + 2);
            v13 += 16LL;
            ++v12;
          }
          while ( v12 < (*((_QWORD *)this + 3) - v11) >> 4 );
        }
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 72LL))(v17);
        v7 = v16;
        if ( v16 >= 0 )
        {
          *a3 = v18;
          v18 = 0LL;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x5Cu, 0LL);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x38u, 0LL);
    }
  }
  else
  {
    v6 = CRectanglesShape::EnsureD2DGeometry(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x31u, 0LL);
    }
    else
    {
      *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 7);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
    }
  }
  if ( v18 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v18 + 16LL))(v18);
    v18 = 0LL;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return v7;
}
