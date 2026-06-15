/*
 * XREFs of sub_1400749EC @ 0x1400749EC
 * Callers:
 *     sub_140074DA0 @ 0x140074DA0 (sub_140074DA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400749EC(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // r8
  _QWORD *v9; // rcx
  __int64 result; // rax

  v5 = o__recalloc(qword_1400E87E0, dword_1400E87F0 + 1, 4LL);
  if ( !v5 )
    return 0LL;
  qword_1400E87E0 = v5;
  v6 = o__recalloc(qword_1400E87E8, dword_1400E87F0 + 1, 8LL);
  if ( !v6 )
    return 0LL;
  v7 = dword_1400E87F0;
  qword_1400E87E8 = v6;
  v8 = (_DWORD *)(qword_1400E87E0 + 4LL * dword_1400E87F0);
  if ( v8 )
  {
    *v8 = *a2;
    v6 = qword_1400E87E8;
  }
  v9 = (_QWORD *)(v6 + 8 * v7);
  if ( v9 )
    *v9 = *a3;
  result = 1LL;
  ++dword_1400E87F0;
  return result;
}
