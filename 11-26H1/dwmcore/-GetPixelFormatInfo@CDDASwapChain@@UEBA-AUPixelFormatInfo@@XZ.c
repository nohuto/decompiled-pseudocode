/*
 * XREFs of ?GetPixelFormatInfo@CDDASwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802A4330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDASwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 72);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
