/*
 * XREFs of sub_18007D1E0 @ 0x18007D1E0
 * Callers:
 *     sub_18007AEA8 @ 0x18007AEA8 (sub_18007AEA8.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18007ACE8 @ 0x18007ACE8 (sub_18007ACE8.c)
 */

__int64 __fastcall sub_18007D1E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18007ACE8((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_18000E26C(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  result = 5 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
