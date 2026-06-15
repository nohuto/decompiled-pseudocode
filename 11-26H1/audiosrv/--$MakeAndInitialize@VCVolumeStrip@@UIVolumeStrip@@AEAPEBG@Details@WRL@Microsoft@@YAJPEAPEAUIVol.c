/*
 * XREFs of ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x18006202C
 * Callers:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18001D940 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x1800620EC (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800621EC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800627F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_1800627F0.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18006372C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCall.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVolumeStrip,IVolumeStrip,unsigned short const * &>(
        _QWORD *a1,
        const unsigned __int16 **a2)
{
  CVolumeStrip *v4; // rax
  CVolumeStrip *v5; // rbx
  int v6; // edi
  CVolumeStrip *v8; // [rsp+30h] [rbp+8h] BYREF
  CVolumeStrip *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (CVolumeStrip *)operator new[](0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_9:
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v8);
    return (unsigned int)v6;
  }
  v5 = CVolumeStrip::CVolumeStrip(v4);
  v9 = v5;
  v8 = 0LL;
  v6 = CVolumeStrip::RuntimeClassInitialize(v5, *a2);
  if ( v6 >= 0 )
  {
    v6 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>>(
           v5,
           &GUID_9bf3fb47_8d17_4c1e_9991_b226eccf9682,
           a1);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::Release(v5);
    goto LABEL_9;
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::Release(v5);
  return (unsigned int)v6;
}
