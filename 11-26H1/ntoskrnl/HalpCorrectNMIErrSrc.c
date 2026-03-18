/*
 * XREFs of HalpCorrectNMIErrSrc @ 0x14057EBA0
 * Callers:
 *     HalpCorrectErrSrc @ 0x140BE9AC0 (HalpCorrectErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCorrectNMIErrSrc(__int64 a1, _DWORD *a2)
{
  if ( *(_DWORD *)(a1 + 24) < 3u )
    *(_DWORD *)(a1 + 24) = 3;
  *a2 = 192;
  *a2 = *(_DWORD *)(a1 + 16) + 192;
  return 0LL;
}
