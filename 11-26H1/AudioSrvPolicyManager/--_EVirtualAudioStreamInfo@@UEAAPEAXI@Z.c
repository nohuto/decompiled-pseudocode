/*
 * XREFs of ??_EVirtualAudioStreamInfo@@UEAAPEAXI@Z @ 0x1800461F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualAudioStreamInfo@@UEAA@XZ @ 0x1800460CC (--1VirtualAudioStreamInfo@@UEAA@XZ.c)
 */

VirtualAudioStreamInfo *__fastcall VirtualAudioStreamInfo::`vector deleting destructor'(
        VirtualAudioStreamInfo *this,
        char a2)
{
  VirtualAudioStreamInfo::~VirtualAudioStreamInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
