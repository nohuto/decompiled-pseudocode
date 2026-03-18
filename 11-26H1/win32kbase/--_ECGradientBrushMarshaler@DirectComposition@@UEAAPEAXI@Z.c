/*
 * XREFs of ??_ECGradientBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14015E460
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

char *__fastcall DirectComposition::CGradientBrushMarshaler::`vector deleting destructor'(char *Buffer, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(Buffer + 80);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer, v4, v5, v6);
  return Buffer;
}
