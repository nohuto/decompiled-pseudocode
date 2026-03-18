/*
 * XREFs of ?GetLightInfo@CDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18026D090
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalcEyePointOrVector@CLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x1802644C8 (-CalcEyePointOrVector@CLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z.c)
 *     ?CalcLocalToDeviceMatrix@CLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x180264860 (-CalcLocalToDeviceMatrix@CLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDistantLight::GetLightInfo(
        struct CVisual **this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  int v6; // eax
  unsigned int v7; // esi
  __int64 result; // rax
  __int64 v9; // rcx
  float *v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = CLight::CalcLocalToDeviceMatrix(
         (CLight *)this,
         a2,
         a3,
         this[29],
         (struct LightInfo *)((char *)a4 + 104),
         (struct LightInfo *)((char *)a4 + 172));
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_DWORD *)a4 = 1;
    v9 = (char *)this - (char *)a4;
    v10 = (float *)((char *)a4 + 4);
    v11 = 4LL;
    do
    {
      *v10 = *(float *)((char *)v10 + v9 + 236) * *((float *)this + 67);
      ++v10;
      --v11;
    }
    while ( v11 );
    *((_OWORD *)a4 + 5) = *(_OWORD *)CLight::CalcEyePointOrVector(v9, (__int64)v13, (__int64)this[29]);
    *((_DWORD *)a4 + 12) = *(_DWORD *)(*((__int64 (__fastcall **)(struct CVisual **))*this + 30))(this);
    *((_DWORD *)a4 + 13) = *(_DWORD *)((*((__int64 (__fastcall **)(struct CVisual **))*this + 30))(this) + 4);
    v12 = *(_DWORD *)((*((__int64 (__fastcall **)(struct CVisual **))*this + 30))(this) + 8);
    result = 0LL;
    *((_DWORD *)a4 + 14) = v12;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\distantlight.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  return result;
}
