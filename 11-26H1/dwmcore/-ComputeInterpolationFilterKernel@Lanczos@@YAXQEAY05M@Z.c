/*
 * XREFs of ?ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z @ 0x18025B82C
 * Callers:
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18025116C (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 * Callees:
 *     Lanczos::Lanczos @ 0x18025B8EC (Lanczos--Lanczos.c)
 */

void __fastcall Lanczos::ComputeInterpolationFilterKernel(Lanczos *this, float (*const a2)[6])
{
  double *v2; // rbx
  float *v3; // rdi
  int v4; // esi
  double v5; // xmm6_8
  int v6; // r14d
  double *v7; // rbp
  __int64 v8; // r15
  double v9; // xmm0_8
  __int64 v10; // rax
  double v11; // xmm0_8
  char v12; // [rsp+20h] [rbp-328h] BYREF

  v2 = (double *)&v12;
  v3 = (float *)this;
  v4 = -32;
  do
  {
    v5 = 0.0;
    v6 = v4;
    v7 = v2;
    v8 = 6LL;
    do
    {
      v9 = Lanczos::Lanczos(this, (float *)a2);
      *v7 = v9;
      v5 = v5 + v9;
      ++v7;
      v6 += 16;
      --v8;
    }
    while ( v8 );
    v10 = 6LL;
    do
    {
      v11 = *v2++;
      *v3++ = v11 / v5;
      --v10;
    }
    while ( v10 );
    --v4;
    v2 = v7;
  }
  while ( v4 > -48 );
}
