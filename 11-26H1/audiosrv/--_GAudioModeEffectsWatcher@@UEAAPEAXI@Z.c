/*
 * XREFs of ??_GAudioModeEffectsWatcher@@UEAAPEAXI@Z @ 0x1800C05B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1AudioModeEffectsWatcher@@UEAA@XZ @ 0x1800ADB44 (--1AudioModeEffectsWatcher@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AudioModeEffectsWatcher *__fastcall AudioModeEffectsWatcher::`scalar deleting destructor'(
        AudioModeEffectsWatcher *this,
        char a2)
{
  AudioModeEffectsWatcher::~AudioModeEffectsWatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
