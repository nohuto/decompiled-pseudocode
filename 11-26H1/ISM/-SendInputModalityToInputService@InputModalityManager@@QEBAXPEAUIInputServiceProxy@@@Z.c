/*
 * XREFs of ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x1801626AC
 * Callers:
 *     ?SetLastUserInputModality@NonBamoInputDeliveryServer@@UEAAXW4InputType@@HH@Z @ 0x1801616F0 (-SetLastUserInputModality@NonBamoInputDeliveryServer@@UEAAXW4InputType@@HH@Z.c)
 *     ?InteractionContextCallback@TapProcessor@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801B6A0C (-InteractionContextCallback@TapProcessor@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B6AE0 (-OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18009BACC (IsGetMPCInputPostProcessorPresent.c)
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800BB1EC (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InputModalityManager::SendInputModalityToInputService(
        InputModalityManager *this,
        struct IInputServiceProxy *a2)
{
  unsigned int v4; // esi
  MPCHolographicInputManager *Instance; // rax
  __int64 v6; // xmm0_8
  __int64 v7; // rax
  int v8; // eax
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)this == 4 )
  {
    v4 = *((_DWORD *)this + 3);
    if ( IsGetMPCInputPostProcessorPresent() )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      MPCHolographicInputManager::OnKeyboardKeyPress(Instance, v4);
    }
  }
  if ( a2 )
  {
    v6 = *(_QWORD *)this;
    v10 = *((_DWORD *)this + 2);
    v7 = *(_QWORD *)a2;
    *(_QWORD *)v9 = v6;
    v8 = (*(__int64 (__fastcall **)(struct IInputServiceProxy *, int *))(v7 + 32))(a2, v9);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputmodalitymanager.cpp",
        (const char *)(unsigned int)v8,
        v9[0]);
  }
}
