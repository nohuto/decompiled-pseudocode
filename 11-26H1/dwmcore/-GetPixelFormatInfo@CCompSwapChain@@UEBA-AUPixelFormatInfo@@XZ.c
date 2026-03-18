/*
 * XREFs of ?GetPixelFormatInfo@CCompSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x180255C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 108);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 100);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
