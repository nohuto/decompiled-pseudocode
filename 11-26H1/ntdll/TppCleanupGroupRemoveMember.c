/*
 * XREFs of TppCleanupGroupRemoveMember @ 0x18004E7C0
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

struct _TEB *__fastcall TppCleanupGroupRemoveMember(__int64 a1, __int64 a2)
{
  struct _TEB *result; // rax
  _QWORD *v3; // rbx
  volatile signed __int64 *p_StackBase; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax

  result = *(struct _TEB **)(a1 + 16);
  v3 = (_QWORD *)(a1 + 40);
  if ( (_QWORD *)*v3 != v3 )
  {
    p_StackBase = (volatile signed __int64 *)&result->NtTib.StackBase;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)&result->NtTib.StackBase, a2);
    v5 = *v3;
    v6 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v6 != v3 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    return RtlReleaseSRWLockExclusive(p_StackBase);
  }
  return result;
}
