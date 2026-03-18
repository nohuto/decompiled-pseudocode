/*
 * XREFs of ??_GCLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140230870
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1?$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAA@XZ @ 0x140228448 (--1-$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAA@XZ.c)
 */

char *__fastcall DirectComposition::CLinearGradientLegacyMilBrushMarshaler::`scalar deleting destructor'(
        char *Buffer,
        char a2)
{
  DirectComposition::CMarshaledArray<MilGradientStop,1650934596,4096,526,527>::~CMarshaledArray<MilGradientStop,1650934596,4096,526,527>((DirectComposition::CMarshaledArrayBase *)(Buffer + 104));
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer);
  return Buffer;
}
