/*
 * XREFs of ?GetPixelFormatInfo@CLegacyRemotingSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802A8400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 8) + 24LL))(v2 + 8);
  }
  else
  {
    *(_DWORD *)a2 = 87;
    *(_QWORD *)(a2 + 4) = 3LL;
  }
  return a2;
}
