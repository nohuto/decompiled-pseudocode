/*
 * XREFs of DpiAcpiHandleAcpiEventWork @ 0x1404112E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiHandleAcpiEvent @ 0x140411414 (DpiAcpiHandleAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEventWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  bool v4; // si
  __int64 v5; // rdi
  __int64 v6; // rax
  void *v7; // rbx

  v4 = 0;
  while ( 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_140168F60);
    qword_140168F98 = (__int64)KeGetCurrentThread();
    if ( v4 && !--dword_140168FB0 )
      KeSetEvent(&Event, 0, 0);
    v5 = qword_140168FA0;
    if ( (__int64 *)qword_140168FA0 == &qword_140168FA0 )
    {
      v5 = 0LL;
      ::IoWorkItem = 0LL;
    }
    else
    {
      if ( *(__int64 **)(qword_140168FA0 + 8) != &qword_140168FA0
        || (v6 = *(_QWORD *)qword_140168FA0, *(_QWORD *)(*(_QWORD *)qword_140168FA0 + 8LL) != qword_140168FA0) )
      {
        __fastfail(3u);
      }
      qword_140168FA0 = *(_QWORD *)qword_140168FA0;
      *(_QWORD *)(v6 + 8) = &qword_140168FA0;
      if ( v5 )
        v4 = *(_DWORD *)(v5 + 24) == 2 && *(_DWORD *)(v5 + 28) == 4;
    }
    qword_140168F98 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_140168F60);
    if ( !v5 )
      break;
    v7 = *(void **)(v5 + 16);
    DpiAcpiHandleAcpiEvent((PVOID)v5);
    ObfDereferenceObject(v7);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
