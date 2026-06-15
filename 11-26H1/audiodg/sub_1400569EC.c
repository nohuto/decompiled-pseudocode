/*
 * XREFs of sub_1400569EC @ 0x1400569EC
 * Callers:
 *     sub_1400569C4 @ 0x1400569C4 (sub_1400569C4.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400569EC(__int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD *v3; // rbx
  unsigned int v4; // ebx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_DWORD *)a1 )
    return 0LL;
  v2 = (RTL_SRWLOCK *)(a1 + 8);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v6 = v2;
  v3 = (_QWORD *)(a1 + 96);
  if ( *(_QWORD *)(a1 + 96) )
  {
    v4 = *(_DWORD *)(a1 + 28);
  }
  else
  {
    *v3 = 0LL;
    if ( qword_1400E8528 || qword_1400E8548 )
      sub_1400B6010(a1 + 96);
    if ( *v3 )
    {
      v4 = 1;
      *(_DWORD *)(a1 + 28) = 1;
    }
    else
    {
      v4 = 0;
    }
  }
  sub_14003A998(&v6);
  return v4;
}
