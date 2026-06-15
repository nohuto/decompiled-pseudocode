/*
 * XREFs of sub_140045560 @ 0x140045560
 * Callers:
 *     sub_140041CD8 @ 0x140041CD8 (sub_140041CD8.c)
 *     sub_1400B48E0 @ 0x1400B48E0 (sub_1400B48E0.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_1400471D8 @ 0x1400471D8 (sub_1400471D8.c)
 *     sub_1400481F8 @ 0x1400481F8 (sub_1400481F8.c)
 *     sub_1400583C0 @ 0x1400583C0 (sub_1400583C0.c)
 */

__int64 __fastcall sub_140045560(__int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 v2; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v6; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a1 = 0;
  v1 = (RTL_SRWLOCK *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = v2;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v6 = v1;
  sub_1400583C0(a1);
  sub_14003A998(&v6);
  sub_1400471D8(&v5, 0LL);
  return sub_1400481F8(&v5);
}
