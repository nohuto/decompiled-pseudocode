/*
 * XREFs of MmProcessAttachAllowed @ 0x14048041C
 * Callers:
 *     PspSelectSessionAttachProcess @ 0x140A838E8 (PspSelectSessionAttachProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmProcessAttachAllowed(__int64 a1)
{
  return (HIBYTE(*(_DWORD *)(a1 + 1208)) & 0x30) != 32;
}
