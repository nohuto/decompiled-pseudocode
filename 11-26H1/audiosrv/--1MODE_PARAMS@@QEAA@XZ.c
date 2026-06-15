/*
 * XREFs of ??1MODE_PARAMS@@QEAA@XZ @ 0x1800696D8
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x18002AD50 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 *     ??R?$default_delete@UMODE_PARAMS@@@std@@QEBAXPEAUMODE_PARAMS@@@Z @ 0x180069678 (--R-$default_delete@UMODE_PARAMS@@@std@@QEBAXPEAUMODE_PARAMS@@@Z.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x1800696A8 (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAA@XZ @ 0x18004FF2C (--1-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MODE_PARAMS::~MODE_PARAMS(void **this)
{
  std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::~unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>(this + 1);
  if ( *this )
    (*(void (__fastcall **)(void *))(*(_QWORD *)*this + 16LL))(*this);
}
