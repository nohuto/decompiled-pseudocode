/*
 * XREFs of ?GetSoundLevel@AudioStateMonitorManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180025FF4
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180024E1C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18002DD30 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 * Callees:
 *     ??0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEBG@Z @ 0x180012D54 (--0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x180012D90 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x180013324 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x18002A2DC (-DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioStateMonitorManager::GetSoundLevel(
        __int64 a1,
        int *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4)
{
  unsigned int SoundLevelForExtendedAudioCategory; // edi
  const unsigned __int16 *v5; // r14
  enum _AUDIO_STREAM_CATEGORY *v6; // r12
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _BYTE *v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // ebx
  _DWORD *v23; // rdx
  const unsigned __int16 *v24; // r9
  unsigned int v25; // [rsp+38h] [rbp-D0h] BYREF
  float v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v28[3]; // [rsp+44h] [rbp-C4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30[5]; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  void *v32; // [rsp+98h] [rbp-70h]
  int v33; // [rsp+A0h] [rbp-68h]
  int v34; // [rsp+A4h] [rbp-64h]
  _BYTE *v35; // [rsp+A8h] [rbp-60h]
  int v36; // [rsp+B0h] [rbp-58h]
  int v37; // [rsp+B4h] [rbp-54h]
  _DWORD *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  int *v40; // [rsp+C8h] [rbp-40h]
  __int64 v41; // [rsp+D0h] [rbp-38h]
  unsigned int *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v44; // [rsp+E8h] [rbp-20h]
  int v45; // [rsp+F0h] [rbp-18h]
  int v46; // [rsp+F4h] [rbp-14h]
  float *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]

  SoundLevelForExtendedAudioCategory = 0;
  v5 = a4;
  v25 = 0;
  v6 = a3;
  if ( a3 )
  {
    if ( (int)DeriveAudioServerStreamCategory(*a3, (unsigned int)a2, &v25) >= 0 )
      SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                             a1,
                                             v23,
                                             (int *)&v25,
                                             v24);
  }
  else
  {
    if ( a2 )
      LOBYTE(a3) = *a2 == 1;
    else
      LODWORD(a3) = 2;
    CStreamPolicyVolumeClient::CStreamPolicyVolumeClient(
      (CStreamPolicyVolumeClient *)v30,
      *(struct IAudioProcess **)(a1 + 136),
      (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)a3,
      24,
      a4);
    v9 = *(_QWORD *)(a1 + 128);
    v26 = 1.0;
    GetPolicyVolumeForAudioStream(v9, v30, v10, &v26);
    if ( v26 < 1.0 )
      LOBYTE(SoundLevelForExtendedAudioCategory) = v26 > 0.0;
    else
      SoundLevelForExtendedAudioCategory = 2;
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)v11 > 4u
    && (*(_DWORD *)(v11 + 16) & 0x80000) != 0
    && (*(_QWORD *)(v11 + 24) & 0x80000LL) == *(_QWORD *)(v11 + 24) )
  {
    v12 = -1LL;
    v26 = *(float *)&SoundLevelForExtendedAudioCategory;
    v13 = -1;
    if ( v6 )
      v13 = v25;
    v25 = v13;
    if ( a2 )
      v14 = *a2;
    else
      v14 = -1;
    v15 = *(_QWORD *)(a1 + 136);
    v27 = v14;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
    v17 = *(_QWORD *)(a1 + 136);
    v28[0] = v16;
    v18 = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 72LL))(v17);
    v48 = 4LL;
    v47 = &v26;
    if ( v5 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v5[v19] );
      v20 = 2 * v19 + 2;
    }
    else
    {
      v5 = (const unsigned __int16 *)byte_180056CEC;
      v20 = 2;
    }
    v45 = v20;
    v42 = &v25;
    v40 = &v27;
    v38 = v28;
    v44 = v5;
    v46 = 0;
    v43 = 4LL;
    v41 = 4LL;
    v39 = 4LL;
    if ( v18 )
    {
      do
        ++v12;
      while ( *(_WORD *)&v18[2 * v12] );
      v21 = 2 * v12 + 2;
    }
    else
    {
      v18 = byte_180056CEC;
      v21 = 2;
    }
    v35 = v18;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = *(_QWORD *)(v11 + 8);
    v36 = v21;
    v37 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x80000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v32 = &unk_18005B8F3;
    UserData.Reserved = 2;
    v33 = 99;
    v34 = 1;
    v28[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v11 + 32), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  return SoundLevelForExtendedAudioCategory;
}
