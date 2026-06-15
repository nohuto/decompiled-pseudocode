/*
 * XREFs of sub_140077804 @ 0x140077804
 * Callers:
 *     sub_140077D30 @ 0x140077D30 (sub_140077D30.c)
 * Callees:
 *     sub_140075EAC @ 0x140075EAC (sub_140075EAC.c)
 */

__int64 __fastcall sub_140077804(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v5 = v2;
  sub_140075EAC(a1, &v5);
  return v3;
}
