/*
 * XREFs of ?GetPixelFormatInfo@COverlaySwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801B11C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlaySwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 68);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 60);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
