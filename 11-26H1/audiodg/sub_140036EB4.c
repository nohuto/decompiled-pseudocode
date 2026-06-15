/*
 * XREFs of sub_140036EB4 @ 0x140036EB4
 * Callers:
 *     sub_140011A70 @ 0x140011A70 (sub_140011A70.c)
 *     sub_140036E30 @ 0x140036E30 (sub_140036E30.c)
 *     sub_1400AEDF0 @ 0x1400AEDF0 (sub_1400AEDF0.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_140036EB4(__int64 a1, __int64 a2)
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
  return sub_140036F04(a1, a2, v2);
}
