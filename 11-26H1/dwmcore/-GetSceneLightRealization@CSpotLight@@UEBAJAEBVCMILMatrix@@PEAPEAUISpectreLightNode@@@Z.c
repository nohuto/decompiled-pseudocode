/*
 * XREFs of ?GetSceneLightRealization@CSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x180282460
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180121FE0 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180190198 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpotLight::GetSceneLightRealization(
        CSpotLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // xmm1_4
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  FLOAT v17; // xmm7_4
  FLOAT v18; // xmm6_4
  FLOAT *v19; // rax
  __int64 (__fastcall *v20)(CSpotLight *); // rax
  const struct D2D_VECTOR_3F *v21; // rax
  struct D2D_VECTOR_4F v22; // [rsp+28h] [rbp-99h] BYREF
  _QWORD v23[4]; // [rsp+38h] [rbp-89h] BYREF
  _OWORD v24[4]; // [rsp+58h] [rbp-69h] BYREF
  int v25; // [rsp+98h] [rbp-29h]
  float v26[4]; // [rsp+A8h] [rbp-19h] BYREF
  struct D2D_VECTOR_3F v27; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v28; // [rsp+C8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 13);
  v5 = *((_QWORD *)this + 13);
  if ( !v5 )
  {
    v6 = -2147467259;
    v7 = 213LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spotlight.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v28 = *(_OWORD *)((char *)this + 260);
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 80LL))(v5, &v28);
  if ( v9 < 0 )
  {
    v10 = 216LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spotlight.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 88LL))(*((_QWORD *)this + 13));
  if ( v9 < 0 )
  {
    v10 = 217LL;
    goto LABEL_6;
  }
  v11 = *((_QWORD *)this + 13);
  v12 = *((_DWORD *)this + 76);
  LODWORD(v23[0]) = *((_DWORD *)this + 64);
  HIDWORD(v23[0]) = v12;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 104LL))(v11, v23);
  if ( v9 < 0 )
  {
    v10 = 220LL;
    goto LABEL_6;
  }
  v13 = *((_OWORD *)this + 7);
  v14 = *((_OWORD *)this + 8);
  v25 = *((_DWORD *)this + 44);
  v24[0] = v13;
  v15 = *((_OWORD *)this + 9);
  v24[1] = v14;
  v16 = *((_OWORD *)this + 10);
  v24[2] = v15;
  v24[3] = v16;
  CMILMatrix::Multiply((CMILMatrix *)v24, a2);
  v17 = *(float *)((*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 232LL))(this) + 8);
  v18 = *(float *)((*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 232LL))(this) + 4);
  v19 = (FLOAT *)(*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 232LL))(this);
  v22.y = v18;
  v22.z = v17;
  v22.x = *v19;
  v22.w = 1.0;
  *(struct D2D_VECTOR_4F *)&v23[1] = v22;
  CMILMatrix::Transform4DVector((CMILMatrix *)v24, &v22, (const struct D2D_VECTOR_4F *)&v23[1]);
  v20 = *(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 240LL);
  v26[0] = (float)(1.0 / v22.w) * v22.x;
  v26[1] = (float)(1.0 / v22.w) * v22.y;
  v26[2] = (float)(1.0 / v22.w) * v22.z;
  v21 = (const struct D2D_VECTOR_3F *)v20(this);
  CMILMatrix::Transform3DVector((CMILMatrix *)v24, &v27, v21);
  v6 = (*(__int64 (__fastcall **)(_QWORD, float *, struct D2D_VECTOR_3F *))(**((_QWORD **)this + 13) + 96LL))(
         *((_QWORD *)this + 13),
         v26,
         &v27);
  if ( v6 < 0 )
  {
    v7 = 226LL;
    goto LABEL_3;
  }
  return 0LL;
}
