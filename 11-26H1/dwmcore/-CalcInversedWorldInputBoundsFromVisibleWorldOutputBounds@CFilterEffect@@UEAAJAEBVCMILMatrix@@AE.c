/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801D6940
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        FLOAT *a3,
        __int128 *a4,
        __int128 *a5,
        struct D2D_RECT_F *a6)
{
  __int64 (__fastcall *v10)(__int64, __int128 *, __int64); // rax
  int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF

  *a5 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 256LL);
  v18 = *a4;
  v11 = v10(a1, &v18, a2);
  if ( v11 < 0 )
  {
    v12 = 341;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v12, 0LL);
    v13 = 0;
    *a5 = *a4;
    *a6 = *(struct D2D_RECT_F *)a3;
    return v13;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, FLOAT *, __int128 *, __int128 *, struct D2D_RECT_F *))(*(_QWORD *)a1 + 248LL))(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( v11 < 0 )
  {
    v12 = 349;
    goto LABEL_3;
  }
  if ( *a3 > a6->left )
    a6->left = *a3;
  v15 = a3[1];
  if ( v15 > a6->top )
    a6->top = v15;
  v16 = a3[2];
  if ( a6->right > v16 )
    a6->right = v16;
  v17 = a3[3];
  if ( a6->bottom > v17 )
    a6->bottom = v17;
  if ( IsEmpty(a6) )
  {
    *(_QWORD *)&a6->right = 0LL;
    *(_QWORD *)&a6->left = 0LL;
  }
  return v13;
}
