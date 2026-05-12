/*
 * XREFs of StorPortWorkItemRoutine @ 0x14007C640
 * Callers:
 *     <none>
 * Callees:
 *     StorPortWorkItemRoutineInternal @ 0x14007C658 (StorPortWorkItemRoutineInternal.c)
 */

void __fastcall StorPortWorkItemRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  StorPortWorkItemRoutineInternal(DeviceObject, Context);
}
