/*
 * XREFs of IsIntelChatham @ 0x140012628
 * Callers:
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 *     IoSqToIoCqMapping @ 0x140015574 (IoSqToIoCqMapping.c)
 *     NVMeControllerIdentify @ 0x140024388 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x140027A44 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIntelChatham(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
