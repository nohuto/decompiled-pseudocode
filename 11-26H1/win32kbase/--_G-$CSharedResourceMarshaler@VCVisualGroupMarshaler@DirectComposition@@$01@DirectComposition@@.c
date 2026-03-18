/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14023B990
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAX_N@Z @ 0x140137154 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAX_N@Z.c)
 */

char **__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualGroupMarshaler,2>::`scalar deleting destructor'(
        char **Buffer,
        char a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  *Buffer = (char *)&DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualGroupMarshaler,2>::`vftable';
  DirectComposition::CMarshaledArrayBase::Clear(Buffer + 7, 0LL, a3, a4);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v6, v7, v8);
  return Buffer;
}
