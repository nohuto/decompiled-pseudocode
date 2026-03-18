/*
 * XREFs of KeFreeInitializationCode @ 0x140C80CCC
 * Callers:
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140C80394 (KiSwInterruptPresent.c)
 *     MmDiscardDriverSection @ 0x140D01280 (MmDiscardDriverSection.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140D01330 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__2f )
      return MmDiscardDriverSection(sub_140C79A90);
  }
  return result;
}
