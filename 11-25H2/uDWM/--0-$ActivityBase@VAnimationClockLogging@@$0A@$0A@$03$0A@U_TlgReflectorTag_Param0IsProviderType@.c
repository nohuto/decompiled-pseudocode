/*
 * XREFs of ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004C0C4
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18004BE30 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18004EA88 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18004F5B4 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800506C4 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ??$Start@AEAU_GUID@@AEAJ@EndAnimationClock@AnimationClockLoggingTelemetry@@SA?AV01@AEAU_GUID@@AEAJ@Z @ 0x1800512E0 (--$Start@AEAU_GUID@@AEAJ@EndAnimationClock@AnimationClockLoggingTelemetry@@SA-AV01@AEAU_GUID@@AE.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A5494 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rcx

  *(_QWORD *)a1 = &wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v3 = a1 + 8;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  v4 = (_QWORD *)(a1 + 88);
  v4[19] = 0LL;
  v4[20] = 0LL;
  memset_0(v4, 0, 0x98uLL);
  *(_DWORD *)(v3 + 248) = 1;
  *(_QWORD *)(v3 + 256) = 0LL;
  *(_QWORD *)(a1 + 272) = v3;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = a1;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = a1 + 48;
  return a1;
}
