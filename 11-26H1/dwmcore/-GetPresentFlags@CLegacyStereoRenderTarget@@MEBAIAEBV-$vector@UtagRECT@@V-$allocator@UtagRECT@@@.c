/*
 * XREFs of ?GetPresentFlags@CLegacyStereoRenderTarget@@MEBAIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180247910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoRenderTarget::GetPresentFlags(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 2;
  if ( a2[1] != *a2 )
    v2 = 0;
  if ( *(_BYTE *)(a1 + 32528) && !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 824LL) )
    v2 |= 0x20u;
  return v2;
}
