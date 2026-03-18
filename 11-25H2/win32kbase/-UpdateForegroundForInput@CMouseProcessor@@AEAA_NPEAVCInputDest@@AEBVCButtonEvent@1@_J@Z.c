/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401928F0
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x14009F128 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsDesktopWindow@CInputDest@@QEBA_NXZ @ 0x1400B8920 (-IsDesktopWindow@CInputDest@@QEBA_NXZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400B9628 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x140126154 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x140194C98 (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F6D74 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x140216004 (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 *     UpdateDelegationTargetForMouseInput @ 0x140216FA0 (UpdateDelegationTargetForMouseInput.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1402225F8 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

char __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3)
{
  char v4; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  HWND WindowHandle; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *v12; // rdx
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // xmm0_8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  _BYTE v21[64]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+70h] [rbp-38h] BYREF
  int v23; // [rsp+78h] [rbp-30h]

  v4 = 1;
  if ( CInputDest::DoesBelongToForeground(a2, 1LL) )
  {
    if ( (unsigned int)Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline(v7) && *((_DWORD *)a3 + 8) == 1 )
    {
      UserSessionState = W32GetUserSessionState(v18, v17);
      UpdateDelegationTargetForMouseInput(*(tagTHREADINFO **)(UserSessionState + 18904));
    }
  }
  else if ( *((_DWORD *)a3 + 8) == 1 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18888) && CInputDest::IsDesktopWindow(a2) )
    {
      WindowHandle = CInputDest::GetWindowHandle(a2);
      CBaseProcessor::PostQEventWork(v9, (__int64)WindowHandle, 0, 0, 0LL, 0LL);
    }
    else
    {
      v10 = *((_QWORD *)a3 + 1);
      v22 = *(_QWORD *)(v10 + 144);
      v23 = *(_DWORD *)(v10 + 152);
      v11 = *(_DWORD *)(v10 + 116);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v21, a2);
      v12 = &v22;
      if ( v11 == 1 )
        v12 = 0LL;
      v13 = ApiSetEditionChangeForegroundQueueForMouseInput(a2, v12);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v21);
      return v13 != 0;
    }
  }
  else
  {
    v14 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)(v14 + 116) != 1 )
    {
      v15 = *(_QWORD *)(v14 + 144);
      v16 = *(_DWORD *)(v14 + 152);
      v22 = v15;
      v23 = v16;
      return (unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v22) != 0;
    }
  }
  return v4;
}
