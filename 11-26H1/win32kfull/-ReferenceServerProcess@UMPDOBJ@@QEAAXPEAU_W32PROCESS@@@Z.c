/*
 * XREFs of ?ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_W32PROCESS@@@Z @ 0x140247784
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1400D63C0 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::ReferenceServerProcess(UMPDOBJ *this, struct _W32PROCESS *a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 v5; // rcx

  v2 = (UMPDOBJ *)((char *)this + 384);
  if ( this != (UMPDOBJ *)-384LL )
    GreAcquirePushLockExclusive((UMPDOBJ *)((char *)this + 384));
  v5 = *((_QWORD *)this + 49);
  if ( v5 )
  {
    DereferenceW32ProcessEx(v5, 1LL);
    *((_QWORD *)this + 49) = 0LL;
  }
  if ( a2 )
  {
    ObfReferenceObject(*(PVOID *)a2);
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    *((_QWORD *)this + 49) = a2;
  }
  if ( v2 )
    GreReleasePushLockExclusive(v2);
}
