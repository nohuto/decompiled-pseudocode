/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401B4908
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x140087568 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x140089F40 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400CE174 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1401625DC (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14016C0A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?IsDesktopWindow@CInputDest@@QEBA_NXZ @ 0x140178574 (-IsDesktopWindow@CInputDest@@QEBA_NXZ.c)
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x1401B4A74 (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1401BE91C (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 *     UpdateDelegationTargetForMouseInput @ 0x14021C4C0 (UpdateDelegationTargetForMouseInput.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

char __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3)
{
  char v4; // di
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int WindowHandle; // eax
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 *v13; // rdx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 UserSessionState; // rax
  _BYTE v24[64]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v25; // [rsp+70h] [rbp-38h] BYREF
  int v26; // [rsp+78h] [rbp-30h]

  v4 = 1;
  if ( CInputDest::DoesBelongToForeground((__int64)a2, 1, (int)a3) )
  {
    if ( (unsigned int)Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline() && *((_DWORD *)a3 + 8) == 1 )
    {
      UserSessionState = W32GetUserSessionState(v20, v19, v21);
      UpdateDelegationTargetForMouseInput(*(tagTHREADINFO **)(UserSessionState + 18944));
    }
  }
  else if ( *((_DWORD *)a3 + 8) == 1 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 18928) && CInputDest::IsDesktopWindow(a2) )
    {
      WindowHandle = (unsigned int)CInputDest::GetWindowHandle(a2);
      CBaseProcessor::PostQEventWork(v10, WindowHandle, 0, 0, 0LL, 0LL);
    }
    else
    {
      v11 = *((_QWORD *)a3 + 1);
      v25 = *(_QWORD *)(v11 + 144);
      v26 = *(_DWORD *)(v11 + 152);
      v12 = *(_DWORD *)(v11 + 116);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v24, a2);
      v13 = &v25;
      if ( v12 == 1 )
        v13 = 0LL;
      v14 = ApiSetEditionChangeForegroundQueueForMouseInput(a2, v13);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v24, v15);
      return v14 != 0;
    }
  }
  else
  {
    v16 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)(v16 + 116) != 1 )
    {
      v17 = *(_QWORD *)(v16 + 144);
      v18 = *(_DWORD *)(v16 + 152);
      v25 = v17;
      v26 = v18;
      return anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v25, a2) != 0;
    }
  }
  return v4;
}
