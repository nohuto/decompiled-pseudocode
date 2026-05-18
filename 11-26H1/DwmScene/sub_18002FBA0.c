/*
 * XREFs of sub_18002FBA0 @ 0x18002FBA0
 * Callers:
 *     sub_18002F964 @ 0x18002F964 (sub_18002F964.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002FBA0(__int64 a1, _QWORD *a2, __int64 a3, _QWORD **a4)
{
  _QWORD *v4; // rcx
  __int64 result; // rax

  v4 = *a4;
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *v4;
  result = v4[1];
  a2[1] = result;
  *v4 = 0LL;
  v4[1] = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[4] = 0LL;
  return result;
}
