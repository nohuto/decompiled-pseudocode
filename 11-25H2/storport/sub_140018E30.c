/*
 * XREFs of sub_140018E30 @ 0x140018E30
 * Callers:
 *     sub_140018DDC @ 0x140018DDC (sub_140018DDC.c)
 *     sub_14003E60C @ 0x14003E60C (sub_14003E60C.c)
 *     sub_14004E0E8 @ 0x14004E0E8 (sub_14004E0E8.c)
 *     sub_14004E598 @ 0x14004E598 (sub_14004E598.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_140098900 @ 0x140098900 (sub_140098900.c)
 *     sub_140099180 @ 0x140099180 (sub_140099180.c)
 *     sub_14009F87C @ 0x14009F87C (sub_14009F87C.c)
 *     sub_14009FFCC @ 0x14009FFCC (sub_14009FFCC.c)
 *     DoScreenSave_0 @ 0x1400A0338 (DoScreenSave_0.c)
 *     sub_1400A070C @ 0x1400A070C (sub_1400A070C.c)
 *     sub_1400FB018 @ 0x1400FB018 (sub_1400FB018.c)
 *     sub_1401A0894 @ 0x1401A0894 (sub_1401A0894.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_140018E30(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&sub_1400357D0;
  CurrentStackLocation[-1].Context = &Event;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(DeviceObject, Irp);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return 0;
  }
  return result;
}
