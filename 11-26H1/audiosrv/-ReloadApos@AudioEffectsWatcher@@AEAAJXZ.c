/*
 * XREFs of ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x18007C528
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800BF610 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18002D270 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?GetSystemEffect@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18013A1BC (-GetSystemEffect@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@U_GUID@@HW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioEffectsWatcher::ReloadApos(AudioEffectsWatcher *this)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rax
  bool v8; // r15
  unsigned int i; // r14d
  int v10; // ecx
  char *v11; // rsi
  __int64 v12; // rcx
  GUID *v13; // rax
  int SystemEffect; // eax
  struct _GUID v16; // [rsp+80h] [rbp-9h] BYREF
  __int128 v17; // [rsp+90h] [rbp+7h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+17h]
  GUID v19; // [rsp+B0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v17 = 0LL;
  v18 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, __int128 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                            + 40LL))(
         g_pEndpointCharacteristicsCache,
         *((_QWORD *)this + 7),
         0LL,
         0LL,
         &v17);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = (unsigned int)v2;
    v5 = 185LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)v4);
    goto LABEL_28;
  }
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 56LL))(v17);
  v3 = DeriveAudioProcessingModeConfiguration(
         *((_DWORD *)this + 45),
         *((_DWORD *)this + 46),
         0,
         (CEndpointCharacteristics **)&v17,
         v6 != 0,
         0,
         eHostProcessConnector,
         0LL,
         1,
         0,
         0LL,
         0LL,
         &v16,
         0LL,
         0LL,
         0LL);
  if ( v3 >= 0 )
  {
    v7 = *(_QWORD *)&v16.Data1 - *((_QWORD *)this + 8);
    if ( *(_QWORD *)&v16.Data1 == *((_QWORD *)this + 8) )
      v7 = *(_QWORD *)v16.Data4 - *((_QWORD *)this + 9);
    v8 = v7 == 0;
    for ( i = 0; i < 3; ++i )
    {
      v10 = *((_DWORD *)this + 47);
      if ( (v10 & 1) == 0 || (v11 = (char *)this + 16 * i, *((_DWORD *)v11 + 26) != 1) )
      {
        if ( (v10 & 2) == 0 || (v11 = (char *)this + 16 * i, *((_DWORD *)v11 + 26) != 2) )
        {
          if ( (v10 & 4) == 0 )
            continue;
          v11 = (char *)this + 16 * i;
          if ( *((_DWORD *)v11 + 26) != 3 )
            continue;
        }
      }
      if ( !v8 )
      {
        v12 = *((_QWORD *)this + 2 * i + 14);
        if ( v12 )
        {
          *((_QWORD *)v11 + 14) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      if ( !*((_QWORD *)this + 2 * i + 14) )
      {
        v13 = &v16;
        if ( v11[108] )
          v13 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v19 = *v13;
        SystemEffect = EffectPack::GetSystemEffect(*((_QWORD *)&v17 + 1), *((unsigned int *)v11 + 26), &v19);
        v3 = SystemEffect;
        if ( SystemEffect < 0 )
        {
          v4 = (unsigned int)SystemEffect;
          v5 = 217LL;
          goto LABEL_7;
        }
      }
    }
    v3 = 0;
  }
  else
  {
    if ( v3 != -2004287449 )
    {
      v4 = (unsigned int)v3;
      v5 = 191LL;
      goto LABEL_7;
    }
    v3 = -2004287449;
  }
LABEL_28:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v17);
  return (unsigned int)v3;
}
