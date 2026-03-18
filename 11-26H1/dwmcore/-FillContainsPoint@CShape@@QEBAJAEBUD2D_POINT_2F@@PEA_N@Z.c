/*
 * XREFs of ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180181830
 * Callers:
 *     ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1802661C0 (-HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180283F00 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::FillContainsPoint(CShape *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  __int64 v3; // rax
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  BOOL v10; // ecx
  float y; // xmm1_4
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  BOOL v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+38h] [rbp-30h] BYREF

  v3 = *(_QWORD *)this;
  v17 = 0;
  LODWORD(v18) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CShape *, __int128 *))(v3 + 64))(this, &v18) && (_DWORD)v18 == 1 )
  {
    v7 = *(_QWORD *)this;
    v18 = 0LL;
    v8 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(v7 + 48))(this, &v18, 0LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x77u, 0LL);
    }
    else
    {
      v10 = 0;
      if ( a2->x >= *(float *)&v18 && *((float *)&v18 + 2) > a2->x )
      {
        y = a2->y;
        if ( y >= *((float *)&v18 + 1) )
          v10 = *((float *)&v18 + 3) > y;
      }
      v17 = v10;
    }
  }
  else
  {
    v13 = *(_QWORD *)this;
    *(_QWORD *)&v18 = 0LL;
    v14 = (*(__int64 (__fastcall **)(CShape *, _QWORD, __int128 *))(v13 + 24))(this, 0LL, &v18);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x7Eu, 0LL);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v18 + 56LL))(
              v18,
              _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)LODWORD(a2->y)).m128_u64[0],
              0LL);
      v9 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x80u, 0LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
        goto LABEL_9;
      }
    }
    v16 = v18;
    if ( (_QWORD)v18 )
    {
      *(_QWORD *)&v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
LABEL_9:
  *a3 = v17;
  return v9;
}
