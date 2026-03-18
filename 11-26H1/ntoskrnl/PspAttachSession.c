/*
 * XREFs of PspAttachSession @ 0x140B216C8
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 * Callees:
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     PspLockProcessListExclusive @ 0x140215EEC (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x140215F5C (PspUnlockProcessListExclusive.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall PspAttachSession(__int64 a1, __int64 a2, _KPROCESS **a3)
{
  __int64 SessionById; // rax
  _KPROCESS *v6; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // rsi

  *a3 = 0LL;
  SessionById = PsGetSessionById(a1);
  v6 = (_KPROCESS *)SessionById;
  if ( !SessionById )
    return 3221225738LL;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(SessionById + 744);
  PspLockProcessListExclusive((__int64)CurrentThread);
  if ( (*(_DWORD *)(v9 + 4) & 2) != 0 )
  {
    PspUnlockProcessListExclusive(CurrentThread);
    ObfDereferenceObjectWithTag(v6, 0x79517350u);
    return 3221225738LL;
  }
  ++*(_DWORD *)(v9 + 52);
  PspUnlockProcessListExclusive(CurrentThread);
  KiStackAttachProcess(v6, 0, a2);
  result = 0LL;
  *a3 = v6;
  return result;
}
