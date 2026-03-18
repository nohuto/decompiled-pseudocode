/*
 * XREFs of ??_ECCompositionDynamicTextureMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140230830
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x14001FD0C (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

char *__fastcall DirectComposition::CCompositionDynamicTextureMarshaler::`vector deleting destructor'(
        char *Buffer,
        char a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMarshaledArrayBase *)(Buffer + 56));
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer);
  return Buffer;
}
