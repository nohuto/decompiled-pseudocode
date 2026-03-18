/*
 * XREFs of ?GetSceneLightRealization@CDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x18026D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180190198 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDistantLight::GetSceneLightRealization(
        CDistantLight *this,
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
  struct D2D_VECTOR_3F v18; // [rsp+28h] [rbp-69h] BYREF
  _OWORD v19[4]; // [rsp+38h] [rbp-59h] BYREF
  int v20; // [rsp+78h] [rbp-19h]
  struct D2D_VECTOR_3F v21; // [rsp+88h] [rbp-9h] BYREF
  __int128 v22; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 13);
  v5 = *((_QWORD *)this + 13);
  if ( !v5 )
  {
    v6 = -2147467259;
    v7 = 42LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\distantlight.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v22 = *((_OWORD *)this + 15);
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 80LL))(v5, &v22);
  if ( v9 < 0 )
  {
    v10 = 45LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\distantlight.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 88LL))(*((_QWORD *)this + 13));
  if ( v9 < 0 )
  {
    v10 = 46LL;
    goto LABEL_6;
  }
  v11 = *((_OWORD *)this + 7);
  v12 = *((_OWORD *)this + 8);
  v20 = *((_DWORD *)this + 44);
  v19[0] = v11;
  v13 = *((_OWORD *)this + 9);
  v19[1] = v12;
  v14 = *((_OWORD *)this + 10);
  v19[2] = v13;
  v19[3] = v14;
  CMILMatrix::Multiply((CMILMatrix *)v19, a2);
  v15 = *(float *)((*(__int64 (__fastcall **)(CDistantLight *))(*(_QWORD *)this + 240LL))(this) + 8);
  v16 = *(float *)((*(__int64 (__fastcall **)(CDistantLight *))(*(_QWORD *)this + 240LL))(this) + 4);
  v17 = (FLOAT *)(*(__int64 (__fastcall **)(CDistantLight *))(*(_QWORD *)this + 240LL))(this);
  v18.y = v16;
  v18.z = v15;
  v18.x = *v17;
  CMILMatrix::Transform3DVector((CMILMatrix *)v19, &v21, &v18);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct D2D_VECTOR_3F *))(**((_QWORD **)this + 13) + 96LL))(
         *((_QWORD *)this + 13),
         0LL,
         &v21);
  if ( v6 < 0 )
  {
    v7 = 50LL;
    goto LABEL_3;
  }
  return 0LL;
}
