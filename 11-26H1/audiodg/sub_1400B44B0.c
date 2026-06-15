/*
 * XREFs of sub_1400B44B0 @ 0x1400B44B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 sub_1400B44B0()
{
  __int64 result; // rax

  if ( qword_1400E87E0 )
  {
    result = _o_free(qword_1400E87E0);
    qword_1400E87E0 = 0LL;
  }
  if ( qword_1400E87E8 )
  {
    result = _o_free(qword_1400E87E8);
    qword_1400E87E8 = 0LL;
  }
  dword_1400E87F0 = 0;
  return result;
}
