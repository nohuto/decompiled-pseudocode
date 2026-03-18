/*
 * XREFs of ?Convert_999e5RGB_128bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B5C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Convert_999e5RGB_128bppABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // r8d
  int *v3; // r10
  float *i; // r9
  unsigned int v5; // edx
  int v6; // eax
  float v7; // ecx

  v2 = *((_DWORD *)a1 + 2);
  v3 = (int *)*((_QWORD *)a2 + 1);
  for ( i = *(float **)a2; v2; --v2 )
  {
    v5 = *v3;
    v6 = *v3++;
    LODWORD(v7) = ((v5 >> 4) & 0xF800000) + 864026624;
    *i = (float)(v6 & 0x1FF) * v7;
    i += 4;
    *(i - 3) = (float)((v5 >> 9) & 0x1FF) * v7;
    *(i - 2) = (float)((v5 >> 18) & 0x1FF) * v7;
    *(i - 1) = 1.0;
  }
}
