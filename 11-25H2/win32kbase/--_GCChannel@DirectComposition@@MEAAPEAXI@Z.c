/*
 * XREFs of ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x140228520
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1400589B0 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CChannel *__fastcall DirectComposition::CChannel::`scalar deleting destructor'(
        DirectComposition::CChannel *Buffer,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  DirectComposition::CChannel::~CChannel(Buffer, a2);
  if ( (v2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
