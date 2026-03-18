/*
 * XREFs of ?VmBusDummy@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402260A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDummy(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct VMBPACKETCOMPLETION__ *v1; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
  v3 = 0;
  VmBusCompletePacket(v1, &v3, 4u);
  return 1;
}
