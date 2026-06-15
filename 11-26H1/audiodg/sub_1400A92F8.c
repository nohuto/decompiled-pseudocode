/*
 * XREFs of sub_1400A92F8 @ 0x1400A92F8
 * Callers:
 *     sub_1400A91A8 @ 0x1400A91A8 (sub_1400A91A8.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400A94D0 @ 0x1400A94D0 (sub_1400A94D0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400A92F8(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a2;
  v4 = sub_1400492F4(24LL, a2);
  *(_OWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 8) = 1;
  *(_DWORD *)(v4 + 12) = 1;
  *(_QWORD *)v4 = off_1400C1130;
  *(_QWORD *)(v4 + 16) = a2;
  v7 = 0LL;
  result = sub_1400A94D0(&v7);
  *a1 = a2;
  v6 = a1[1];
  a1[1] = v4;
  if ( v6 )
    return sub_140007588(v6);
  return result;
}
