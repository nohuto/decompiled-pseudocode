/*
 * XREFs of DpiMiracastStopMiracastSessionWork @ 0x140196620
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastStopMiracastSessionSync @ 0x14004C670 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14006CDEC (DpiMiracastReleaseMiracastDeviceContext.c)
 */

void __fastcall DpiMiracastStopMiracastSessionWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  DpiMiracastStopMiracastSessionSync(
    *(char **)Context,
    *((_BYTE *)Context + 8),
    (union _LARGE_INTEGER *)Context + 2,
    0LL,
    *((_DWORD *)Context + 6),
    0);
  DpiMiracastReleaseMiracastDeviceContext(*(int **)Context, (unsigned int)DpiMiracastStopMiracastSessionAsync);
  ExFreePoolWithTag(Context, 0);
}
