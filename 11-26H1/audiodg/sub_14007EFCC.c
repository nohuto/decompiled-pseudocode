/*
 * XREFs of sub_14007EFCC @ 0x14007EFCC
 * Callers:
 *     sub_14007F060 @ 0x14007F060 (sub_14007F060.c)
 *     sub_14007F220 @ 0x14007F220 (sub_14007F220.c)
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 */

void __fastcall sub_14007EFCC(__int64 a1, RTL_SRWLOCK *a2, __int64 a3)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)a1);
    v9 = (struct _RTL_CRITICAL_SECTION *)a1;
    AcquireSRWLockExclusive(a2);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_QWORD *)(a1 + 48) - v6;
    v8 = a2;
    if ( a3 - 1 < v7 >> 4 )
      *(_OWORD *)(v6 + 16 * (a3 - 1)) = 0LL;
    sub_14003A998(&v8);
    sub_140018FF0(&v9);
  }
}
