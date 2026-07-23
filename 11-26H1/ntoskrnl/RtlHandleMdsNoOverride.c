/*
 * XREFs of RtlHandleMdsNoOverride @ 0x140C05200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlHandleMdsNoOverride(__int64 a1, _DWORD *a2)
{
  if ( *(_BYTE *)(a1 + 4) != 2 )
    *a2 = 1;
}
