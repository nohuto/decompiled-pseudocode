/*
 * XREFs of sub_14000A808 @ 0x14000A808
 * Callers:
 *     sub_140008840 @ 0x140008840 (sub_140008840.c)
 *     sub_14000ACA0 @ 0x14000ACA0 (sub_14000ACA0.c)
 *     sub_14000BF70 @ 0x14000BF70 (sub_14000BF70.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14000A808(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rbx
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+50h] [rbp+18h]

  sub_1400B6010(*(_QWORD *)(a1 + 792));
  v3 = (_QWORD *)MEMORY[0];
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( *(_QWORD *)(v4 + 16) == a2 )
    {
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return v4;
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
