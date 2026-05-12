/*
 * XREFs of sub_140121120 @ 0x140121120
 * Callers:
 *     sub_1400F2254 @ 0x1400F2254 (sub_1400F2254.c)
 *     sub_140126C00 @ 0x140126C00 (sub_140126C00.c)
 * Callees:
 *     sub_1401228F0 @ 0x1401228F0 (sub_1401228F0.c)
 */

__int64 __fastcall sub_140121120(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 v4; // rsi

  v1 = qword_140168E40;
  if ( !*(_DWORD *)a1 && *(_BYTE *)(a1 + 20) == 1 )
  {
    result = *(_QWORD *)(a1 + 24);
    v3 = 0;
    v4 = *(_QWORD *)(result + 24);
    if ( *((_DWORD *)qword_140168E40 + 3) )
    {
      do
        result = sub_1401228F0(v4, v3++, 0, 0, 0);
      while ( v3 < v1[3] );
    }
  }
  return result;
}
