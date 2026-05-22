/*
 * XREFs of ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C47E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18000BF50 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18000ED1C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180096DD4 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z @ 0x1800B28A0 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800BFA70 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x1801C34EC (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C4F4C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCGamepadProcessor::PostHitTestProcessing(
        MPCGamepadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  MPCGamepadInputHelper *Instance; // rax
  char ShouldUseGazeAndCommit; // al
  char v7; // bl
  int v8; // edx
  char v9; // r15
  MPCButtonHoldHelper **v10; // rcx
  char IsPrimary; // al
  char v12; // dl
  char v13; // bl
  struct MPCHolographicInputManager *v14; // rax
  struct MPCHolographicInputManager *v15; // rax
  float *v16; // rax
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  std::_Ref_count_base *v18; // [rsp+40h] [rbp-C8h]
  _OWORD v19[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v20[16]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v21; // [rsp+98h] [rbp-70h]
  __int128 v22; // [rsp+A8h] [rbp-60h]
  __int128 v23; // [rsp+B8h] [rbp-50h]
  __int128 v24; // [rsp+C8h] [rbp-40h]

  Instance = MPCGamepadInputHelper::GetInstance();
  ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(Instance, a3);
  v7 = ShouldUseGazeAndCommit;
  if ( !*((_BYTE *)this + 4158) && ShouldUseGazeAndCommit )
    MPCGamepadProcessor::ClearControllerProcessorState(
      (MPCGamepadProcessor *)((char *)this - 32),
      a3,
      *((_QWORD *)a3 + 4));
  v8 = *((_DWORD *)this + 919);
  v9 = 1;
  v10 = (MPCButtonHoldHelper **)*((_QWORD *)this + 532);
  *((_BYTE *)this + 4158) = v7;
  MPCSlateDeadzoneHelper::UpdateState(
    v10,
    (v8 & 4) != 0,
    *((_QWORD *)a3 + 2),
    *((float *)a3 + 61),
    *((float *)a3 + 62),
    *((float *)a3 + 76));
  IsPrimary = MPCInputProviderBase::IsPrimary((unsigned __int64)this);
  v12 = *(_BYTE *)(*((_QWORD *)this + 530) + 8LL);
  if ( IsPrimary )
  {
    if ( v12 || !v7 )
      v9 = 0;
    v13 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 532), &v17) + 10LL);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    if ( v13 )
    {
      v14 = MPCHolographicInputManager::GetInstance();
      *((_QWORD *)this + 520) = *((_QWORD *)v14 + 30);
      *((_DWORD *)this + 1042) = *((_DWORD *)v14 + 62);
      v15 = MPCHolographicInputManager::GetInstance();
      memcpy_0(v20, v15, 0xCD0uLL);
      v19[0] = v21;
      v19[1] = v22;
      v19[2] = v23;
      v19[3] = v24;
      v16 = Windows::Foundation::Numerics::transform((float *)&v17, (float *)this + 1040, (float *)v19);
      *(_QWORD *)((char *)this + 4172) = *(_QWORD *)v16;
      *((float *)this + 1045) = v16[2];
      *((_QWORD *)this + 525) = 0LL;
      *((_QWORD *)this + 526) = 0LL;
    }
    if ( v9 )
    {
      MPCGamepadProcessor::SendMPCInput((MPCGamepadProcessor *)((char *)this - 32), a3);
      return;
    }
  }
  else if ( !v12 )
  {
    return;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 455) + 48LL))(
    *((_QWORD *)this + 455),
    *((_QWORD *)this + 458));
}
