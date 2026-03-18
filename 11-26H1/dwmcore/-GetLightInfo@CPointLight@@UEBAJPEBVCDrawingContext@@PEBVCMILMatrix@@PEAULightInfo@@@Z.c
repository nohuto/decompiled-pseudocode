/*
 * XREFs of ?GetLightInfo@CPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18027D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalcEyePointOrVector@CLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x1802644C8 (-CalcEyePointOrVector@CLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z.c)
 *     ?CalcLocalToDeviceMatrix@CLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x180264860 (-CalcLocalToDeviceMatrix@CLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@.c)
 *     ?TransformAttenuation@CLight@@IEBAXMMMMMPEAULightInfo@@@Z @ 0x180264D6C (-TransformAttenuation@CLight@@IEBAXMMMMMPEAULightInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPointLight::GetLightInfo(
        CPointLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  int v6; // eax
  unsigned int v7; // esi
  __int64 v9; // rcx
  float *v10; // rax
  __int64 v11; // rdx
  CLight *v12; // rcx
  _BYTE v13[24]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

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
    *(_DWORD *)a4 = 2;
    v9 = this - a4;
    v10 = (float *)((char *)a4 + 4);
    v11 = 4LL;
    do
    {
      *v10 = *(float *)((char *)v10 + v9 + 236) * *((float *)this + 65);
      ++v10;
      --v11;
    }
    while ( v11 );
    *((_OWORD *)a4 + 5) = *(_OWORD *)CLight::CalcEyePointOrVector(v9, (__int64)v13, *((_QWORD *)this + 29));
    *((_DWORD *)a4 + 9) = *(_DWORD *)(*(__int64 (__fastcall **)(CPointLight *))(*(_QWORD *)this + 232LL))(this);
    *((_DWORD *)a4 + 10) = *(_DWORD *)((*(__int64 (__fastcall **)(CPointLight *))(*(_QWORD *)this + 232LL))(this) + 4);
    v12 = (CLight *)*(unsigned int *)((*(__int64 (__fastcall **)(CPointLight *))(*(_QWORD *)this + 232LL))(this) + 8);
    *((_DWORD *)a4 + 11) = (_DWORD)v12;
    CLight::TransformAttenuation(
      v12,
      *((float *)this + 64),
      *((float *)this + 66),
      *((float *)this + 72),
      *((float *)this + 68),
      *((float *)this + 67),
      a4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\pointlight.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
