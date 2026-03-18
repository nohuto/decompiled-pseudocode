/*
 * XREFs of KiGetTr @ 0x140C7B350
 * Callers:
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C62010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetTr()
{
  __int16 result; // ax

  __asm { str     ax }
  return result;
}
