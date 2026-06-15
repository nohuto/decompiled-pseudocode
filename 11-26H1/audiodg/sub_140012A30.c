/*
 * XREFs of sub_140012A30 @ 0x140012A30
 * Callers:
 *     sub_140010460 @ 0x140010460 (sub_140010460.c)
 *     sub_140012920 @ 0x140012920 (sub_140012920.c)
 *     sub_1400129B0 @ 0x1400129B0 (sub_1400129B0.c)
 *     sub_140038450 @ 0x140038450 (sub_140038450.c)
 *     sub_1400AEBC0 @ 0x1400AEBC0 (sub_1400AEBC0.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_140012A30(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 i; // rax

  v2 = 0LL;
  if ( !a2 )
    sub_14004639C(2147500037LL, 0LL);
  for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 40) % *(_DWORD *)(a1 + 16)));
        i != a2;
        i = *(_QWORD *)(i + 32) )
  {
    v2 = i;
  }
  return sub_140012A80(a1, a2, v2);
}
