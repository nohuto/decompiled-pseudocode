/*
 * XREFs of ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18008B2F4
 * Callers:
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x180042060 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x1800898A0 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x180302750 (-HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180302830 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18008B574 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800D9130 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B6B38 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x18023D570 (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     WPP_SF_lDqd @ 0x180305D34 (WPP_SF_lDqd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::_SetApplicationForegroundPriority(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  CApplicationManagerUtility *ApplicationWindow; // rax
  HWND v6; // rdx
  HWND v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r8
  signed int Error; // esi
  HANDLE v11; // r15
  DWORD dwProcessId; // [rsp+70h] [rbp+8h] BYREF
  HANDLE v13; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  if ( !*(_BYTE *)(a1 + 792) || a2 == *(_DWORD *)(a1 + 796) )
    return;
  ApplicationWindow = (CApplicationManagerUtility *)CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288));
  v7 = (HWND)ApplicationWindow;
  if ( !ApplicationWindow )
  {
    v8 = *(_QWORD *)(a1 + 800);
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v8, 0LL, 0LL);
    return;
  }
  if ( !CApplicationManagerUtility::IsValidWindow(ApplicationWindow, v6) )
    return;
  dwProcessId = 0;
  if ( GetWindowThreadProcessId(v7, &dwProcessId) )
  {
    v11 = OpenProcess(0x200u, 0, dwProcessId);
    v13 = v11;
    if ( v11 )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
      {
LABEL_15:
        CAutoHandle<void *>::~CAutoHandle<void *>(&v13);
        if ( Error >= 0 )
          return;
        goto LABEL_16;
      }
    }
    CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v11, dwProcessId, v7);
    goto LABEL_15;
  }
  Error = -2147024890;
LABEL_16:
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    LOBYTE(v4) = a2 == 0;
    WPP_SF_lDqd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 16LL, v9, v4, dwProcessId, v7, Error);
  }
}
