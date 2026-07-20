/*
 * XREFs of SmpGetSubSysSynch @ 0x140019138
 * Callers:
 *     SmpCreateKnownSubSys @ 0x140007520 (SmpCreateKnownSubSys.c)
 *     SmpWaitForStatusChange @ 0x140019224 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SmpGetSubSysSynch(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx
  PVOID Heap; // rax

  v3 = 0LL;
  if ( SmpSubSysSynchCache )
  {
    RtlAcquireSRWLockExclusive(&SmpSubSysSynchLock, a2, a3);
    if ( SmpSubSysSynchCache )
    {
      --SmpSubSysSynchCacheSize;
      v3 = (_DWORD *)SmpSubSysSynchCache;
      SmpSubSysSynchCache = *(_QWORD *)SmpSubSysSynchCache;
    }
    RtlReleaseSRWLockExclusive(&SmpSubSysSynchLock);
    if ( v3 )
      goto LABEL_8;
  }
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x10uLL);
  v3 = Heap;
  if ( Heap )
  {
    if ( NtCreateEvent((PHANDLE)Heap + 1, 0x100002u, 0LL, NotificationEvent, 0) < 0 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
      return 0LL;
    }
LABEL_8:
    *v3 = 0;
  }
  return v3;
}
