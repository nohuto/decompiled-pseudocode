/*
 * XREFs of ?Convert_64bppABGRFloat_128bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B5AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x1802B0F7C (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall Convert_64bppABGRFloat_128bppABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int32 v3; // xmm0_4
  __int64 v4; // r9
  unsigned __int32 *v5; // r11
  unsigned __int32 v6; // xmm0_4
  __int64 v7; // r9
  __int64 v8; // r11
  unsigned __int32 v9; // xmm0_4
  __int64 v10; // r9
  __int64 v11; // r11
  unsigned __int32 v12; // xmm0_4
  __int64 v13; // r9
  __int64 v14; // r11
  int v15; // r10d

  v2 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a1 + 2) )
  {
    do
    {
      v3 = CFloat16::operator float(v2).m128i_u32[0];
      *v5 = v3;
      v6 = CFloat16::operator float((unsigned __int16 *)(v4 + 2)).m128i_u32[0];
      *(_DWORD *)(v8 + 4) = v6;
      v9 = CFloat16::operator float((unsigned __int16 *)(v7 + 4)).m128i_u32[0];
      *(_DWORD *)(v11 + 8) = v9;
      v12 = CFloat16::operator float((unsigned __int16 *)(v10 + 6)).m128i_u32[0];
      v2 = (unsigned __int16 *)(v13 + 8);
      *(_DWORD *)(v14 + 12) = v12;
    }
    while ( v15 != 1 );
  }
}
