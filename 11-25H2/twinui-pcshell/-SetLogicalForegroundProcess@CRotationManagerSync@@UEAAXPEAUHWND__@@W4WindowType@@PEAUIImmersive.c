/*
 * XREFs of ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800D7DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D86F4 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?StoreShellPreference@ROTATION_INFORMATION@CRotationManagerSync@@QEAAXW4ORIENTATION_PREFERENCE@@W4STORE_OPTION@12@@Z @ 0x1802F2C00 (-StoreShellPreference@ROTATION_INFORMATION@CRotationManagerSync@@QEAAXW4ORIENTATION_PREFERENCE@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRotationManagerSync::SetLogicalForegroundProcess(__int64 a1, HWND a2, int a3, __int64 a4)
{
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  DWORD v11; // edi
  __int64 result; // rax
  int v13; // edx
  _DWORD *v14; // rcx
  __int64 v15; // r8
  DWORD dwProcessId; // [rsp+30h] [rbp-48h] BYREF

  if ( a3 == 1 || a4 )
  {
    v8 = (__int64 *)(a1 + 88);
    v9 = *(_QWORD *)(a1 + 88);
    if ( v9 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( a3 == 1 )
    {
      dwProcessId = 0;
      GetWindowThreadProcessId(a2, &dwProcessId);
      v11 = dwProcessId;
      result = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
      if ( dwProcessId == HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          *(_DWORD *)(a1 + 40) = 0;
        }
        else if ( *(_DWORD *)(a1 + 28) || !*(_BYTE *)(a1 + 32) )
        {
          result = CRotationManagerSync::ROTATION_INFORMATION::StoreShellPreference(a1 + 24, 0LL);
        }
      }
      if ( v11 )
      {
        v13 = *(_DWORD *)(a1 + 48);
        result = a1 + 36;
        v14 = (_DWORD *)(a1 + 24);
        if ( v13 )
          v14 = (_DWORD *)(a1 + 36);
        if ( v11 != *v14 )
        {
          if ( !v13 )
          {
            if ( *(_BYTE *)(a1 + 56) )
            {
              *(_DWORD *)(a1 + 60) = v11;
            }
            else
            {
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
                McGenEventWrite_EventWriteTransfer(
                  &MICROSOFT_TWINUI_PUBLISHER_Context,
                  &ImmersiveShell_AppManager_SetActiveProcess_Start,
                  v10,
                  1LL);
              (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr + 32LL))(
                CApplicationManagerUtility::g_pIAMGlobals[16].Ptr,
                v11);
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
                McGenEventWrite_EventWriteTransfer(
                  &MICROSOFT_TWINUI_PUBLISHER_Context,
                  &ImmersiveShell_AppManager_SetActiveProcess_Stop,
                  v15,
                  1LL);
            }
          }
          result = (unsigned int)-*(_DWORD *)(a1 + 48);
          *(_DWORD *)((*(_DWORD *)(a1 + 48) != 0 ? 0xC : 0) + a1 + 24) = v11;
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v8, a4);
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    }
  }
  return result;
}
