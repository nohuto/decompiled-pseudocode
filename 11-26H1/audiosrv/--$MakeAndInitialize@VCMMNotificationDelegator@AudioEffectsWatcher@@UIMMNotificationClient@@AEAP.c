/*
 * XREFs of ??$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAPEBGPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAPEBG$$QEAPEAX@Z @ 0x1800AF5E0
 * Callers:
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x18003E498 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CMMNotificationDelegator@AudioEffectsWatcher@@QEAA@XZ @ 0x1800AD7C4 (--0CMMNotificationDelegator@AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z @ 0x1800BFA10 (-RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioEffectsWatcher::CMMNotificationDelegator,IMMNotificationClient,unsigned short const * &,void *>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        void **a3)
{
  AudioEffectsWatcher::CMMNotificationDelegator *v6; // rax
  AudioEffectsWatcher::CMMNotificationDelegator *v8; // rdi
  int v9; // ebx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  AudioEffectsWatcher::CMMNotificationDelegator *v11; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (AudioEffectsWatcher::CMMNotificationDelegator *)operator new[](
                                                          0x20uLL,
                                                          (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
    return 2147942414LL;
  v8 = AudioEffectsWatcher::CMMNotificationDelegator::CMMNotificationDelegator(v6);
  v11 = v8;
  v10 = 0LL;
  v9 = AudioEffectsWatcher::CMMNotificationDelegator::RuntimeClassInitialize(v8, *a2, *a3);
  if ( v9 >= 0 )
  {
    v9 = (**(__int64 (__fastcall ***)(AudioEffectsWatcher::CMMNotificationDelegator *, GUID *, _QWORD *))v8)(
           v8,
           &GUID_7991eec9_7e89_4d85_8390_6c703cec60c0,
           a1);
    (*(void (__fastcall **)(AudioEffectsWatcher::CMMNotificationDelegator *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else if ( v8 )
  {
    (*(void (__fastcall **)(AudioEffectsWatcher::CMMNotificationDelegator *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v10);
  return (unsigned int)v9;
}
