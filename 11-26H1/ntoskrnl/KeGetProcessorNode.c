/*
 * XREFs of KeGetProcessorNode @ 0x14047B6CC
 * Callers:
 *     KiInitializeTopologyStructures @ 0x140BFCBB4 (KiInitializeTopologyStructures.c)
 *     KiSetCacheInformationAmd @ 0x140BFD0E8 (KiSetCacheInformationAmd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNode(__int64 a1)
{
  return KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
}
