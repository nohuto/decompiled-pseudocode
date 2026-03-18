/*
 * XREFs of ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x140129090
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1401290C8 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CApplicationChannel *__fastcall DirectComposition::CSystemChannel::`vector deleting destructor'(
        DirectComposition::CApplicationChannel *Buffer,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CApplicationChannel::~CApplicationChannel(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
