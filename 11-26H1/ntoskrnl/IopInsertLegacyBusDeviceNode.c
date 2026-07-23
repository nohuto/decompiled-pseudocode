/*
 * XREFs of IopInsertLegacyBusDeviceNode @ 0x14096EDFC
 * Callers:
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 */

void __fastcall IopInsertLegacyBusDeviceNode(__int64 a1, int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v6; // ebx
  _QWORD *v7; // rcx
  _QWORD *i; // rdx

  if ( a2 < 18 && a2 > -1 && a2 != 15 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 1;
    if ( a2 != 2 )
      v6 = a2;
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
    v7 = (_QWORD *)((char *)&IopLegacyBusInformationTable + 16 * v6);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i - 43) == a3 )
        goto LABEL_12;
      if ( *((_DWORD *)i - 43) > a3 )
        break;
    }
    *(_QWORD *)(a1 + 632) = i[1];
    *(_QWORD *)(a1 + 624) = i;
    *(_QWORD *)i[1] = a1 + 624;
    i[1] = a1 + 624;
LABEL_12:
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
  }
}
