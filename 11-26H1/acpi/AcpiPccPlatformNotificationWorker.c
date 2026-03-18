/*
 * XREFs of AcpiPccPlatformNotificationWorker @ 0x140064E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall AcpiPccPlatformNotificationWorker(
        PVOID IoObject,
        void (__fastcall **Context)(_QWORD),
        PIO_WORKITEM IoWorkItem)
{
  IoFreeWorkItem(IoWorkItem);
  Context[49](Context[50]);
}
