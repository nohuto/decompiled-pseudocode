/*
 * XREFs of sub_180054A1C @ 0x180054A1C
 * Callers:
 *     sub_180054910 @ 0x180054910 (sub_180054910.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180054A1C(__int64 a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  _QWORD *v4; // rcx
  __int64 result; // rax

  v4 = *a4;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_QWORD *)a2 = *v4;
  result = v4[1];
  *(_QWORD *)(a2 + 8) = result;
  *v4 = 0LL;
  v4[1] = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = 0;
  return result;
}
