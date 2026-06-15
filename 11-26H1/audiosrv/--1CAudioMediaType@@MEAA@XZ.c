/*
 * XREFs of ??1CAudioMediaType@@MEAA@XZ @ 0x1800B4880
 * Callers:
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x1800B48B0 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x1800B4904 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1800B4F00 (-Release@CAudioMediaType@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 */

void __fastcall CAudioMediaType::~CAudioMediaType(void **this)
{
  *this = &CAudioMediaType::`vftable';
  operator delete(this[2]);
  this[2] = 0LL;
}
