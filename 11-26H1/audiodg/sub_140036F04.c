/*
 * XREFs of sub_140036F04 @ 0x140036F04
 * Callers:
 *     sub_140036EB4 @ 0x140036EB4 (sub_140036EB4.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_140036F04(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    sub_14004639C(2147500037LL, 0LL);
  if ( a3 )
    *(_QWORD *)(a3 + 32) = *(_QWORD *)(a2 + 32);
  else
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 40) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(a2 + 32);
  return sub_140036F58(a1, a2);
}
