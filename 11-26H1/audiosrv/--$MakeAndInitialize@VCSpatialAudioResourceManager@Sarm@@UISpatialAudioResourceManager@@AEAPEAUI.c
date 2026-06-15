/*
 * XREFs of ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x180124220
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800DB064 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180049230 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800B5998 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x180124478 (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioResourceManager@@UIAudioAppVolumePolicyChange@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801266F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioRes.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
        LARGE_INTEGER a1,
        __int64 *a2)
{
  unsigned int v3; // edi
  void *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  __int64 *v9; // rcx
  struct ISpatialAudioResourceManager *v10; // rax
  __int64 v11; // rax
  LARGE_INTEGER Frequency; // [rsp+40h] [rbp+8h] BYREF
  void *v14; // [rsp+50h] [rbp+18h] BYREF
  void *v15; // [rsp+58h] [rbp+20h]

  Frequency = a1;
  v3 = 0;
  g_SpatialAudioResourceManager = 0LL;
  v4 = operator new[](0x2C0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v4;
  Frequency.QuadPart = (LONGLONG)v4;
  if ( v4 )
  {
    v15 = v4;
    v5 = Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager((Sarm::CSpatialAudioResourceManager *)v4);
    v14 = 0LL;
    v6 = *a2;
    Frequency.QuadPart = 0LL;
    QueryPerformanceFrequency(&Frequency);
    g_u64QPCFrequency = Frequency.QuadPart;
    *(_QWORD *)(v5 + 296) = v6;
    if ( IsGetDefaultSpatialRenderingModePresent() )
      *(_BYTE *)(v5 + 105) = (unsigned int)IsSpatialAllowedOnPlatform() != 0;
    *(_BYTE *)(v5 + 104) = 1;
    g_SpatialAudioResourceManager = 0LL;
    if ( InlineIsEqualGUID(&GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_SpatialAudioResourceManager = (struct ISpatialAudioResourceManager *)v5;
      v11 = *(_QWORD *)v5;
      v9 = (__int64 *)v5;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, v7) )
      {
        v9 = (__int64 *)v5;
        v10 = (struct ISpatialAudioResourceManager *)v5;
      }
      else
      {
        if ( !InlineIsEqualGUID(v8, &GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b) )
        {
          v3 = -2147467262;
LABEL_14:
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioResourceManager,IAudioAppVolumePolicyChange>::Release(v5);
          goto LABEL_15;
        }
        v9 = (__int64 *)(v5 + 8);
        v10 = (struct ISpatialAudioResourceManager *)(v5 + 8);
      }
      g_SpatialAudioResourceManager = v10;
      v11 = *v9;
    }
    (*(void (__fastcall **)(__int64 *))(v11 + 8))(v9);
    goto LABEL_14;
  }
  v3 = -2147024882;
LABEL_15:
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v14);
  return v3;
}
