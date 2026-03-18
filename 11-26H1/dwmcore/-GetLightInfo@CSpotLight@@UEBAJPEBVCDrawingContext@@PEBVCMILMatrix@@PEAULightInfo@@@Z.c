/*
 * XREFs of ?GetLightInfo@CSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180282250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalcEyePointOrVector@CLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x1802644C8 (-CalcEyePointOrVector@CLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z.c)
 *     ?CalcLocalToDeviceMatrix@CLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x180264860 (-CalcLocalToDeviceMatrix@CLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@.c)
 *     ?TransformAttenuation@CLight@@IEBAXMMMMMPEAULightInfo@@@Z @ 0x180264D6C (-TransformAttenuation@CLight@@IEBAXMMMMMPEAULightInfo@@@Z.c)
 *     cosf_0 @ 0x1802B96D8 (cosf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpotLight::GetLightInfo(
        CSpotLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  int v6; // eax
  unsigned int v7; // esi
  float *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  float *v12; // rax
  __int64 v13; // rdx
  CLight *v14; // rcx
  float v15; // xmm1_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  _BYTE v19[16]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = CLight::CalcLocalToDeviceMatrix(
         this,
         a2,
         a3,
         *((struct CVisual **)this + 29),
         (struct LightInfo *)((char *)a4 + 104),
         (struct LightInfo *)((char *)a4 + 172));
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_DWORD *)a4 = 3;
    v9 = (float *)((char *)a4 + 4);
    v10 = this - a4;
    v11 = 4LL;
    do
    {
      *v9 = *(float *)((char *)v9 + v10 + 256) * *((float *)this + 69);
      ++v9;
      --v11;
    }
    while ( v11 );
    v12 = (float *)((char *)a4 + 20);
    v13 = 4LL;
    do
    {
      *v12 = *(float *)((char *)v12 + v10 + 288) * *((float *)this + 81);
      ++v12;
      --v13;
    }
    while ( v13 );
    *((_OWORD *)a4 + 5) = *(_OWORD *)CLight::CalcEyePointOrVector(v10, (__int64)v19, *((_QWORD *)this + 29));
    *((_DWORD *)a4 + 9) = *(_DWORD *)(*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 232LL))(this);
    *((_DWORD *)a4 + 10) = *(_DWORD *)((*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 232LL))(this) + 4);
    *((_DWORD *)a4 + 11) = *(_DWORD *)((*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 232LL))(this) + 8);
    *((_DWORD *)a4 + 12) = *(_DWORD *)(*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 240LL))(this);
    *((_DWORD *)a4 + 13) = *(_DWORD *)((*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 240LL))(this) + 4);
    v14 = (CLight *)*(unsigned int *)((*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 240LL))(this) + 8);
    *((_DWORD *)a4 + 14) = (_DWORD)v14;
    CLight::TransformAttenuation(
      v14,
      *((float *)this + 60),
      *((float *)this + 70),
      *((float *)this + 82),
      *((float *)this + 72),
      *((float *)this + 71),
      a4);
    v15 = *((float *)this + 64);
    v16 = 0.0;
    if ( v15 >= 0.0 )
      v17 = fminf(1.5707964, v15);
    else
      v17 = 0.0;
    *((float *)a4 + 18) = cosf_0(v17);
    v18 = *((float *)this + 76);
    if ( v18 >= 0.0 )
      v16 = fminf(1.5707964, v18);
    *((float *)a4 + 19) = cosf_0(v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spotlight.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
