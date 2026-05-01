/*
 * XREFs of ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18005B668
 * Callers:
 *     _lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator() @ 0x18005A3CC (_lambda_f6f69901abcf4556c2ac2b4f02b3e468_--operator().c)
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x18005A670 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18005B890 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?StoreShellPreference@ROTATION_INFORMATION@CRotationManagerSync@@QEAAXW4ORIENTATION_PREFERENCE@@W4STORE_OPTION@12@@Z @ 0x1802EDBF0 (-StoreShellPreference@ROTATION_INFORMATION@CRotationManagerSync@@QEAAXW4ORIENTATION_PREFERENCE@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRotationManagerSync::_SetAutoRotationConfiguration(
        CRotationManagerSync *this,
        unsigned int a2,
        HWND a3,
        __int64 a4)
{
  char *v7; // rcx
  PSRWLOCK v8; // rax
  _BYTE v9[16]; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 == HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
  {
    if ( *((_DWORD *)this + 30) )
    {
      *((_DWORD *)this + 28) = a4;
    }
    else
    {
      v7 = (char *)this + 96;
      if ( (_DWORD)a4 != *((_DWORD *)v7 + 1) || !*((_BYTE *)this + 104) )
        CRotationManagerSync::ROTATION_INFORMATION::StoreShellPreference(v7, (unsigned int)a4);
    }
  }
  if ( a2 && a2 != *(_DWORD *)((char *)this + (*((_DWORD *)this + 30) != 0 ? 0xC : 0) + 96) )
  {
    if ( !*((_DWORD *)this + 30) )
    {
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
            v9);
        (*(void (__fastcall **)(PVOID, _QWORD, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr
                                                             + 32LL))(
          CApplicationManagerUtility::g_pIAMGlobals[16].Ptr,
          a2,
          a3,
          a4);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &MICROSOFT_TWINUI_PUBLISHER_Context,
            &ImmersiveShell_AppManager_SetActiveProcess_Stop,
            a3,
            1LL,
            v9);
      }
    }
    *(_DWORD *)((char *)this + (*((_DWORD *)this + 30) != 0 ? 0xC : 0) + 96) = a2;
  }
  if ( a3 )
  {
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    *((_QWORD *)this + 19) = a3;
    (*(void (__fastcall **)(PVOID, HWND, HWND, __int64))(*(_QWORD *)v8[16].Ptr + 24LL))(v8[16].Ptr, a3, a3, a4);
  }
}
