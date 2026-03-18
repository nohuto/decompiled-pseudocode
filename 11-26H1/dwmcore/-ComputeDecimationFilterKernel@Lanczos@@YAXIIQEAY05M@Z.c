/*
 * XREFs of ?ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z @ 0x18025B734
 * Callers:
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18025116C (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 * Callees:
 *     Lanczos::Lanczos @ 0x18025B8EC (Lanczos--Lanczos.c)
 */

void __fastcall Lanczos::ComputeDecimationFilterKernel(Lanczos *this, unsigned int a2, float *a3, float (*const a4)[6])
{
  double *v4; // rbx
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  double v10; // xmm7_8
  double v11; // xmm6_8
  int v12; // r14d
  double *v13; // rbp
  __int64 v14; // r15
  double v15; // xmm0_8
  __int64 v16; // rax
  double v17; // xmm0_8
  char v18; // [rsp+20h] [rbp-348h] BYREF

  v4 = (double *)&v18;
  v7 = -32;
  v8 = 16 * (int)this % a2;
  v9 = 16 * (int)this / a2;
  v10 = 16.0 / (double)(int)v9;
  do
  {
    v11 = 0.0;
    v12 = v7;
    v13 = v4;
    v14 = 6LL;
    do
    {
      v15 = Lanczos::Lanczos(v9, v8) * v10;
      v12 += 16;
      *v13 = v15;
      v11 = v11 + v15;
      ++v13;
      --v14;
    }
    while ( v14 );
    v16 = 6LL;
    do
    {
      v17 = *v4++;
      *a3++ = v17 / v11;
      --v16;
    }
    while ( v16 );
    --v7;
    v4 = v13;
  }
  while ( v7 > -48 );
}
