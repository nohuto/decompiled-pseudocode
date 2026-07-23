/*
 * XREFs of MiModifiedWriterWaitForMdl @ 0x1403FF444
 * Callers:
 *     MiModifiedWriterShouldWrite @ 0x1403FF7EC (MiModifiedWriterShouldWrite.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiModifiedWriterWaitForMdl(_BYTE *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v3; // zf
  NTSTATUS v5; // eax
  PVOID Object[7]; // [rsp+48h] [rbp-170h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-138h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object[0] = a1 + 88;
  a1[801] = 1;
  Object[1] = a1 + 1008;
  v3 = CurrentThread->SpecialApcDisable++ == -1;
  Object[2] = a1 + 1048;
  Object[3] = a1 + 824;
  Object[4] = a1 + 1152;
  Object[5] = a1 + 1336;
  if ( v3 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)a1, a2);
  v5 = KeWaitForMultipleObjects(6u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
  --CurrentThread->SpecialApcDisable;
  if ( !v5 )
    return 0LL;
  a1[801] = 0;
  return 1LL;
}
