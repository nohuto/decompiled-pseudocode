/*
 * XREFs of sub_1400B43C0 @ 0x1400B43C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140027A0C @ 0x140027A0C (sub_140027A0C.c)
 */

__int64 sub_1400B43C0()
{
  __int64 v0; // rcx
  int i; // ebx
  __int64 result; // rax

  v0 = qword_1400E8778;
  if ( qword_1400E8778 )
  {
    for ( i = 0; i < dword_1400E8788; ++i )
    {
      sub_140027A0C((_QWORD *)(v0 + 8LL * i));
      v0 = qword_1400E8778;
    }
    result = _o_free(v0);
    qword_1400E8778 = 0LL;
  }
  if ( qword_1400E8780 )
  {
    result = _o_free(qword_1400E8780);
    qword_1400E8780 = 0LL;
  }
  dword_1400E8788 = 0;
  return result;
}
