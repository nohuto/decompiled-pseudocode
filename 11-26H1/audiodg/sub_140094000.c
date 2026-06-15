/*
 * XREFs of sub_140094000 @ 0x140094000
 * Callers:
 *     sub_140094060 @ 0x140094060 (sub_140094060.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 */

void __fastcall sub_140094000(RTL_SRWLOCK *a1, unsigned int a2)
{
  __int64 v4; // rax
  RTL_SRWLOCK *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    AcquireSRWLockExclusive(a1);
    v5 = a1;
    v4 = a2 >> 6;
    if ( (unsigned int)v4 < 4 )
      *(PVOID *)((char *)&a1[(unsigned int)v4 + 1].Ptr + 4) = (PVOID)(*(__int64 *)((_BYTE *)&a1[v4 + 1].Ptr + 4) & ~(1LL << (a2 & 0x3F)));
    sub_14003A998(&v5);
  }
}
