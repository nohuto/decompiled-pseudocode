/*
 * XREFs of HalpCmcInitializeErrorPacketContents @ 0x140454C00
 * Callers:
 *     HalpCmciInitializeErrorPacket @ 0x140454B28 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmcInitializePolling @ 0x14057A9A4 (HalpCmcInitializePolling.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

GUID *__fastcall HalpCmcInitializeErrorPacketContents(GUID *a1)
{
  GUID *result; // rax

  memset_0(a1, 0, 0x878uLL);
  *(_DWORD *)a1[1].Data4 = HalpCmcErrorSourceId;
  *(_DWORD *)&a1[1].Data4[4] = 1;
  *(_DWORD *)a1[3].Data4 = 1;
  result = a1 + 5;
  *(_QWORD *)&a1[3].Data1 = a1 + 5;
  a1->Data1 = 1095059543;
  *(_DWORD *)&a1->Data2 = 3;
  *(_DWORD *)a1->Data4 = 2168;
  a1[2] = CMC_NOTIFY_TYPE_GUID;
  a1[4].Data1 = 80;
  *(_DWORD *)&a1[4].Data2 = 2088;
  return result;
}
