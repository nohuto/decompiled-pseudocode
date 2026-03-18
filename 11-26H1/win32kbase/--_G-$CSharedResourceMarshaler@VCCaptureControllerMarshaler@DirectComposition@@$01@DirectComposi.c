/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14023B790
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

char **__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::`scalar deleting destructor'(
        char **Buffer,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  *Buffer = (char *)&DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::`vftable';
  v5 = a2;
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    Buffer + 13,
    a2,
    a3,
    a4);
  if ( (v5 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v6, v7, v8);
  return Buffer;
}
