/*
 * XREFs of ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18025116C
 * Callers:
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1802513A4 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180101E34 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z @ 0x18025B734 (-ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z.c)
 *     ?ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z @ 0x18025B82C (-ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z.c)
 */

__int64 __fastcall ComputeLanczosKernel(
        struct CSurfaceShaderComposer *a1,
        signed int a2,
        int a3,
        signed int a4,
        unsigned int a5)
{
  float *v9; // rdx
  float *v10; // r9
  float *v11; // r9
  __int64 v12; // rdx
  unsigned int *v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  const void *v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21[96]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v22[96]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v23[16]; // [rsp+340h] [rbp+240h] BYREF
  signed int v24; // [rsp+350h] [rbp+250h]
  int v25; // [rsp+354h] [rbp+254h]
  signed int v26; // [rsp+358h] [rbp+258h]
  float (*v27)[6]; // [rsp+35Ch] [rbp+25Ch]
  char v28; // [rsp+364h] [rbp+264h] BYREF

  memset_0(v23, 0, 0x620uLL);
  LODWORD(v27) = a5;
  v24 = a2;
  v25 = a3;
  v26 = a4;
  if ( a2 > a4 )
    Lanczos::ComputeDecimationFilterKernel((Lanczos *)(unsigned int)a2, a4, (unsigned int)v21, (float (*const)[6])v10);
  else
    Lanczos::ComputeInterpolationFilterKernel((Lanczos *)v21, (float (*const)[6])v9);
  if ( v25 > (int)v27 )
    Lanczos::ComputeDecimationFilterKernel(
      (Lanczos *)(unsigned int)v25,
      (unsigned int)v27,
      (unsigned int)v22,
      (float (*const)[6])v11);
  else
    Lanczos::ComputeInterpolationFilterKernel((Lanczos *)v22, (float (*const)[6])(unsigned int)v27);
  v12 = 0LL;
  v13 = (unsigned int *)&v28;
  v14 = 16LL;
  do
  {
    v15 = 6LL;
    do
    {
      *(v13 - 1) = v21[v12];
      v16 = v22[v12++];
      *v13 = v16;
      v13 += 4;
      --v15;
    }
    while ( v15 );
    --v14;
  }
  while ( v14 );
  v20[0] = (const void *)1568;
  v20[1] = v23;
  v17 = CSurfaceShaderComposer::SetScratchConstantBuffer((__int64)a1, v20, 0);
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x59u, 0LL);
  return v18;
}
