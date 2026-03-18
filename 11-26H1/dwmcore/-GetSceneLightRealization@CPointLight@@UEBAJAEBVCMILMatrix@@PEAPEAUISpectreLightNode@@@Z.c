/*
 * XREFs of ?GetSceneLightRealization@CPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x18027D500
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180121FE0 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPointLight::GetSceneLightRealization(
        CPointLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // edi
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  FLOAT v15; // xmm7_4
  FLOAT v16; // xmm6_4
  FLOAT *v17; // rax
  __int64 v18; // rcx
  struct D2D_VECTOR_4F v19; // [rsp+28h] [rbp-79h] BYREF
  struct D2D_VECTOR_4F v20; // [rsp+38h] [rbp-69h] BYREF
  _OWORD v21[4]; // [rsp+48h] [rbp-59h] BYREF
  int v22; // [rsp+88h] [rbp-19h]
  float v23[4]; // [rsp+98h] [rbp-9h] BYREF
  __int128 v24; // [rsp+A8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 13);
  v5 = *((_QWORD *)this + 13);
  if ( !v5 )
  {
    v6 = -2147467259;
    v7 = 43LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\pointlight.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v24 = *((_OWORD *)this + 15);
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 80LL))(v5, &v24);
  if ( v9 < 0 )
  {
    v10 = 46LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\pointlight.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 88LL))(*((_QWORD *)this + 13));
  if ( v9 < 0 )
  {
    v10 = 47LL;
    goto LABEL_6;
  }
  v11 = *((_OWORD *)this + 7);
  v12 = *((_OWORD *)this + 8);
  v22 = *((_DWORD *)this + 44);
  v21[0] = v11;
  v13 = *((_OWORD *)this + 9);
  v21[1] = v12;
  v14 = *((_OWORD *)this + 10);
  v21[2] = v13;
  v21[3] = v14;
  CMILMatrix::Multiply((CMILMatrix *)v21, a2);
  v15 = *(float *)((*(__int64 (__fastcall **)(CPointLight *))(*(_QWORD *)this + 232LL))(this) + 8);
  v16 = *(float *)((*(__int64 (__fastcall **)(CPointLight *))(*(_QWORD *)this + 232LL))(this) + 4);
  v17 = (FLOAT *)(*(__int64 (__fastcall **)(CPointLight *))(*(_QWORD *)this + 232LL))(this);
  v19.y = v16;
  v19.z = v15;
  v19.x = *v17;
  v19.w = 1.0;
  v20 = v19;
  CMILMatrix::Transform4DVector((CMILMatrix *)v21, &v19, &v20);
  v18 = *((_QWORD *)this + 13);
  v23[0] = (float)(1.0 / v19.w) * v19.x;
  v23[1] = (float)(1.0 / v19.w) * v19.y;
  v23[2] = (float)(1.0 / v19.w) * v19.z;
  v6 = (*(__int64 (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v18 + 96LL))(v18, v23, 0LL);
  if ( v6 < 0 )
  {
    v7 = 52LL;
    goto LABEL_3;
  }
  return 0LL;
}
