/*
 * XREFs of KeFreeInitializationCode @ 0x140C86CCC
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140C86394 (KiSwInterruptPresent.c)
 *     MmDiscardDriverSection @ 0x140D07620 (MmDiscardDriverSection.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140D076D0 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__2f )
      return MmDiscardDriverSection(sub_140C7FA90);
  }
  return result;
}
