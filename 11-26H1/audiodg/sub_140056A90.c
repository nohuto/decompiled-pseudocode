/*
 * XREFs of sub_140056A90 @ 0x140056A90
 * Callers:
 *     sub_140058634 @ 0x140058634 (sub_140058634.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140056A90(__int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD *v3; // rcx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)a1 )
  {
    v2 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v4 = v2;
    v3 = (_QWORD *)(a1 + 104);
    if ( !*(_QWORD *)(a1 + 104) )
    {
      *v3 = 0LL;
      if ( qword_1400E8528 || qword_1400E8548 )
        sub_1400B6010(v3);
    }
    sub_14003A998(&v4);
  }
}
