/*
 * XREFs of RtlHandleSSSE3Override @ 0x140C05280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlHandleSSSE3Override(__int64 a1, _DWORD *a2)
{
  int v2; // eax

  if ( *(_BYTE *)(a1 + 4) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    if ( v2 == 16 || v2 == 18 )
      *a2 = 0;
  }
}
