/*
 * XREFs of ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x18005B7D4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___1_long_::Invoke @ 0x1802ED970 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802ED970.c)
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1802ED9C0 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 *     ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1802EDC30 (-UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18005B890 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRotationManagerSync::_SetActiveProcessForRotation(
        CRotationManagerSync *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // r8
  _BYTE v5[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 128) )
  {
    *((_DWORD *)this + 33) = a2;
  }
  else
  {
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &MICROSOFT_TWINUI_PUBLISHER_Context,
        &ImmersiveShell_AppManager_SetActiveProcess_Start,
        a3,
        1LL,
        v5);
    (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[16].Ptr,
      a2);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &MICROSOFT_TWINUI_PUBLISHER_Context,
        &ImmersiveShell_AppManager_SetActiveProcess_Stop,
        v4,
        1LL,
        v5);
  }
}
