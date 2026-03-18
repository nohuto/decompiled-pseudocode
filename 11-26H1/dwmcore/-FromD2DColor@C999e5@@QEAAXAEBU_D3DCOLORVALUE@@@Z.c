/*
 * XREFs of ?FromD2DColor@C999e5@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1802B5CE8
 * Callers:
 *     ?Convert_128bppABGR_999e5RGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B5910 (-Convert_128bppABGR_999e5RGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 * Callees:
 *     ?clamp@C999e5@@KAMM@Z @ 0x1802B5DF4 (-clamp@C999e5@@KAMM@Z.c)
 */

void __fastcall C999e5::FromD2DColor(C999e5 *this, const struct _D3DCOLORVALUE *a2)
{
  float v3; // xmm3_4
  __int64 v4; // rdx
  float v5; // xmm7_4
  __int64 v6; // rdx
  float v7; // xmm0_4
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // [rsp+60h] [rbp+8h]

  v3 = C999e5::clamp(a2->r);
  v5 = C999e5::clamp(*(float *)(v4 + 4));
  v7 = C999e5::clamp(*(float *)(v6 + 8));
  *(_DWORD *)this &= 0x7FFFFFFu;
  v8 = v7;
  v10 = fmaxf(fmaxf(fmaxf(v3, v5), v7), 0.000015258789);
  *(_DWORD *)this |= (int)((LODWORD(v10) & 0xFF800000) - 931135488) >> 23 << 27;
  LODWORD(v9) = -2097152000 - (LODWORD(v10) & 0xFF800000);
  *(_DWORD *)this ^= (*(_DWORD *)this ^ (int)roundf(v3 * v9)) & 0x1FF;
  *(_DWORD *)this ^= (*(_DWORD *)this ^ ((int)roundf(v5 * v9) << 9)) & 0x3FE00;
  *(_DWORD *)this ^= (*(_DWORD *)this ^ ((int)roundf(v8 * v9) << 18)) & 0x7FC0000;
}
