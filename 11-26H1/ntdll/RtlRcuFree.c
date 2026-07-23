/*
 * XREFs of RtlRcuFree @ 0x180149770
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

LOGICAL __fastcall RtlRcuFree(_QWORD *BaseAddress)
{
  _QWORD *v2; // rdx
  PVOID *v3; // rax
  unsigned int *v4; // rdi
  void *v5; // r8
  _QWORD *v6; // rdi
  void *v7; // r8
  void *ProcessHeap; // rcx

  RtlAcquireSRWLockExclusive(&stru_1801CBC70);
  v2 = (_QWORD *)*BaseAddress;
  if ( *(_QWORD **)(*BaseAddress + 8LL) != BaseAddress || (v3 = (PVOID *)BaseAddress[1], *v3 != BaseAddress) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  RtlReleaseSRWLockExclusive(&stru_1801CBC70);
  v4 = (unsigned int *)BaseAddress[3];
  while ( v4 )
  {
    v5 = v4;
    v4 = *(unsigned int **)&v4[2 * *v4 + 2];
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  v6 = (_QWORD *)BaseAddress[4];
  while ( 1 )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !v6 )
      break;
    v7 = v6;
    v6 = (_QWORD *)v6[3];
    RtlFreeHeap_0(ProcessHeap, 0, v7);
  }
  return RtlFreeHeap_0(ProcessHeap, 0, BaseAddress);
}
