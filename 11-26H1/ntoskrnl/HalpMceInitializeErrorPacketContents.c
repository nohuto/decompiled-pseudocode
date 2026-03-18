/*
 * XREFs of HalpMceInitializeErrorPacketContents @ 0x140C0AFC4
 * Callers:
 *     HalpHandlePreviousMcaErrors @ 0x140BE9B88 (HalpHandlePreviousMcaErrors.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140BE9CC8 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 *     HalpMceInitializeErrorPacket @ 0x140C0AF38 (HalpMceInitializeErrorPacket.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

GUID *__fastcall HalpMceInitializeErrorPacketContents(GUID *a1)
{
  GUID *result; // rax

  memset_0(a1, 0, 0x878uLL);
  *(_DWORD *)a1[1].Data4 = HalpMceErrorSourceId;
  result = a1 + 5;
  *(_QWORD *)&a1[3].Data1 = a1 + 5;
  a1[2] = MCE_NOTIFY_TYPE_GUID;
  a1->Data1 = 1095059543;
  *(_DWORD *)&a1->Data2 = 3;
  *(_DWORD *)a1->Data4 = 2168;
  *(_DWORD *)a1[3].Data4 = 1;
  a1[4].Data1 = 80;
  *(_DWORD *)&a1[4].Data2 = 2088;
  return result;
}
