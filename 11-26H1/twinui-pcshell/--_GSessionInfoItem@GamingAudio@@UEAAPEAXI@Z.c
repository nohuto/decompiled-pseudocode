/*
 * XREFs of ??_GSessionInfoItem@GamingAudio@@UEAAPEAXI@Z @ 0x18035E5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1SessionInfoItem@GamingAudio@@UEAA@XZ @ 0x18035E3C0 (--1SessionInfoItem@GamingAudio@@UEAA@XZ.c)
 */

GamingAudio::SessionInfoItem *__fastcall GamingAudio::SessionInfoItem::`scalar deleting destructor'(
        GamingAudio::SessionInfoItem *this,
        char a2)
{
  GamingAudio::SessionInfoItem::~SessionInfoItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
