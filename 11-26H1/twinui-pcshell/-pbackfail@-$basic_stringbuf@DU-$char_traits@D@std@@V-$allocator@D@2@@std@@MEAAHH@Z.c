/*
 * XREFs of ?pbackfail@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x1805054A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::stringbuf::pbackfail(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r9

  v2 = **(_QWORD **)(a1 + 56);
  if ( !v2
    || v2 <= **(_QWORD **)(a1 + 24)
    || a2 != -1 && (_BYTE)a2 != *(_BYTE *)(v2 - 1) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  ++**(_DWORD **)(a1 + 80);
  --**(_QWORD **)(a1 + 56);
  if ( a2 == -1 )
    return 0;
  else
    ***(_BYTE ***)(a1 + 56) = a2;
  return a2;
}
