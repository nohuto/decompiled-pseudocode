/*
 * XREFs of ??$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@PEAG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioStream@@AEAPEAUIAudioProcess@@$$QEA_NAEAK$$QEAPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@$$QEAPEAG@Z @ 0x1800876BC
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008DA90 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEBUtWAVEFORMATEX@@PEBG@Z @ 0x18003E874 (-RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CAudioStream@@QEAA@XZ @ 0x180110A8C (--0CAudioStream@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioStream,CAudioStream,IAudioProcess * &,bool,unsigned long &,VadServerSettings *,enum SYSTEM_AUDIO_STREAM_TYPE &,ATL::CComHeapPtr<tWAVEFORMATEX> &,unsigned short *>(
        CAudioStream **a1,
        __int64 *a2,
        _BYTE *a3,
        int *a4,
        __int64 *a5,
        int *a6,
        __int64 *a7,
        __int64 *a8)
{
  CAudioStream *v12; // rax
  CAudioStream *v14; // rbx
  __int64 v15; // r8
  int v16; // edi
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (CAudioStream *)operator new[](0x2A8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v12 )
    return 2147942414LL;
  v14 = CAudioStream::CAudioStream(v12);
  v17 = 0LL;
  LOBYTE(v15) = *a3;
  v16 = CAudioStream::RuntimeClassInitialize((__int64)v14, *a2, v15, *a4, *a5, *a6, *a7, *a8);
  if ( v16 >= 0 )
  {
    if ( v14 )
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v14 + 8LL))(v14);
    *a1 = v14;
    if ( v14 )
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v14 + 16LL))(v14);
    v16 = 0;
  }
  else if ( v14 )
  {
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v17);
  return (unsigned int)v16;
}
