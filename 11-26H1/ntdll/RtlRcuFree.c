/*
 * XREFs of RtlRcuFree @ 0x1801498C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall RtlRcuFree(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax
  unsigned int *v5; // rdi
  __int64 v6; // rdi

  RtlAcquireSRWLockExclusive(&qword_1801CCC30, a2);
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive(&qword_1801CCC30);
  v5 = (unsigned int *)a1[3];
  while ( v5 )
  {
    v5 = *(unsigned int **)&v5[2 * *v5 + 2];
    RtlFreeHeap_0();
  }
  v6 = a1[4];
  while ( v6 )
  {
    v6 = *(_QWORD *)(v6 + 24);
    RtlFreeHeap_0();
  }
  return RtlFreeHeap_0();
}
