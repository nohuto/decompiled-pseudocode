/*
 * XREFs of ?Convert_128bppABGR_999e5RGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B5910
 * Callers:
 *     <none>
 * Callees:
 *     ?FromD2DColor@C999e5@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1802B5CE8 (-FromD2DColor@C999e5@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 */

void __fastcall Convert_128bppABGR_999e5RGB(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // ebx
  const struct _D3DCOLORVALUE *v3; // rdi
  C999e5 *i; // rsi

  v2 = *((_DWORD *)a1 + 2);
  v3 = (const struct _D3DCOLORVALUE *)*((_QWORD *)a2 + 1);
  for ( i = *(C999e5 **)a2; v2; --v2 )
  {
    C999e5::FromD2DColor(i, v3++);
    i = (C999e5 *)((char *)i + 4);
  }
}
