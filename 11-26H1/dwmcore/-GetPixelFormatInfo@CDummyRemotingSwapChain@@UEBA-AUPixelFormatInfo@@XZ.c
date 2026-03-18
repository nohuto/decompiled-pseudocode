/*
 * XREFs of ?GetPixelFormatInfo@CDummyRemotingSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802A2920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyRemotingSwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = 87;
  result = a2;
  *(_QWORD *)(a2 + 4) = 3LL;
  return result;
}
