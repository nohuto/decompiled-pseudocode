/*
 * XREFs of PpmHvSetVirtualProcessorQos @ 0x140535098
 * Callers:
 *     PoSetProcessorQos @ 0x140331A90 (PoSetProcessorQos.c)
 *     KeCheckAndApplyBamQos @ 0x140332380 (KeCheckAndApplyBamQos.c)
 *     KiCheckForPendingQosUpdate @ 0x140332CE0 (KiCheckForPendingQosUpdate.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x14048DA10 (HvlpSetRegister64.c)
 */

void __fastcall PpmHvSetVirtualProcessorQos(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 36600);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 4) = a2;
    *(_DWORD *)(v2 + 12) = 1;
    HvlpSetRegister64(589851, 0xFFFFFFFEuLL);
  }
}
