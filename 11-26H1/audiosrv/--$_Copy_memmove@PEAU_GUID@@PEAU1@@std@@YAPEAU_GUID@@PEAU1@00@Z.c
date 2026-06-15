/*
 * XREFs of ??$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z @ 0x18005C018
 * Callers:
 *     ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005BD8C (-RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??$_Uninitialized_move@PEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@YAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU123@0PEAU123@AEAV?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@0@@Z @ 0x18005BEB0 (--$_Uninitialized_move@PEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V-$all.c)
 *     ?RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005BEF0 (-RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18006A070 (-DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 *     ??1CPdcTimerActivation@@QEAA@XZ @ 0x18006E740 (--1CPdcTimerActivation@@QEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@QEAU1@0PEAU1@AEAV?$allocator@UAudioEffectInternal@@@0@@Z @ 0x18007C930 (--$_Uninitialized_move@PEAUAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@Y.c)
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x180083F38 (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800A9EDC (-UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResour.c)
 *     ??$_Construct_n@AEBQEAUAudioEffectInternal@@AEBQEAU1@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAX_KAEBQEAUAudioEffectInternal@@1@Z @ 0x1800AC7EC (--$_Construct_n@AEBQEAUAudioEffectInternal@@AEBQEAU1@@-$vector@UAudioEffectInternal@@V-$allocato.c)
 *     ??$_Move_unchecked@PEAUAudioEffectInternal@@PEAU1@@std@@YAPEAUAudioEffectInternal@@PEAU1@00@Z @ 0x1800D41DC (--$_Move_unchecked@PEAUAudioEffectInternal@@PEAU1@@std@@YAPEAUAudioEffectInternal@@PEAU1@00@Z.c)
 *     ??$_Uninitialized_move@PEAU_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@QEAU1@0PEAU1@AEAV?$allocator@U_tagpropertykey@@@0@@Z @ 0x1800D4218 (--$_Uninitialized_move@PEAU_tagpropertykey@@V-$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_ta.c)
 *     ??$_Uninitialized_move@PEAU_GUID@@V?$allocator@U_GUID@@@std@@@std@@YAPEAU_GUID@@QEAU1@0PEAU1@AEAV?$allocator@U_GUID@@@0@@Z @ 0x1800D4274 (--$_Uninitialized_move@PEAU_GUID@@V-$allocator@U_GUID@@@std@@@std@@YAPEAU_GUID@@QEAU1@0PEAU1@AEA.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18012725C (-_Growmap@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@.c)
 *     ??$_Uninitialized_move@PEAKV?$allocator@K@std@@@std@@YAPEAKQEAK0PEAKAEAV?$allocator@K@0@@Z @ 0x1801544D0 (--$_Uninitialized_move@PEAKV-$allocator@K@std@@@std@@YAPEAKQEAK0PEAKAEAV-$allocator@K@0@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<_GUID *,_GUID *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
