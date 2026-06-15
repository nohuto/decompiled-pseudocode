/*
 * XREFs of ??1DEVICE_EVENT@@UEAA@XZ @ 0x18007485C
 * Callers:
 *     ??_GDEVICE_EVENT@@UEAAPEAXI@Z @ 0x180074820 (--_GDEVICE_EVENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x18004FF08 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_DA.c)
 */

void __fastcall DEVICE_EVENT::~DEVICE_EVENT(void **this)
{
  *this = &DEVICE_EVENT::`vftable';
  std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(this + 2);
  *this = &WORKER_THREAD_EVENT::`vftable';
}
