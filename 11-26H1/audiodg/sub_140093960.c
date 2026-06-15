/*
 * XREFs of sub_140093960 @ 0x140093960
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002EDE0 @ 0x14002EDE0 (sub_14002EDE0.c)
 *     sub_1400939D0 @ 0x1400939D0 (sub_1400939D0.c)
 */

__int64 __fastcall sub_140093960(RTL_SRWLOCK *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1 + 1;
  AcquireSRWLockShared(a1 + 1);
  v10 = v4;
  LODWORD(v4) = sub_1400939D0(a1, a2, a3, a4);
  sub_14002EDE0(&v10);
  return (unsigned int)v4;
}
