/*
 * XREFs of PpmHvSetVirtualProcessorQos @ 0x140532BF8
 * Callers:
 *     PoSetProcessorQos @ 0x14032FA60 (PoSetProcessorQos.c)
 *     KeCheckAndApplyBamQos @ 0x140330350 (KeCheckAndApplyBamQos.c)
 *     KiCheckForPendingQosUpdate @ 0x140330CB0 (KiCheckForPendingQosUpdate.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x140493EC0 (HvlpSetRegister64.c)
 */

__int64 __fastcall PpmHvSetVirtualProcessorQos(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 36600);
  if ( result )
  {
    *(_DWORD *)(result + 4) = a2;
    *(_DWORD *)(result + 12) = 1;
    return HvlpSetRegister64(589851, 0xFFFFFFFEuLL);
  }
  return result;
}
