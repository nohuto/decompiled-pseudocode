/*
 * XREFs of sub_140036140 @ 0x140036140
 * Callers:
 *     sub_140036058 @ 0x140036058 (sub_140036058.c)
 * Callees:
 *     sub_140036198 @ 0x140036198 (sub_140036198.c)
 */

__int64 __fastcall sub_140036140(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  _QWORD *v5; // rdx
  __int64 result; // rax

  v3 = off_1400E74C0;
  v5 = off_1400E74C8;
  result = 1LL;
  while ( v3 < v5 && (int)result >= 0 )
  {
    if ( *v3 )
    {
      result = sub_140036198(*v3, v5, a3);
      v5 = off_1400E74C8;
    }
    ++v3;
  }
  return result;
}
