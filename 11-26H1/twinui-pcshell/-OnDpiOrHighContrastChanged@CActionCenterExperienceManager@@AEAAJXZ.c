/*
 * XREFs of ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801E0BDC
 * Callers:
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801E0B30 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180238378 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180366B1C (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHighContrast@@YAHXZ @ 0x1801E0D10 (-IsHighContrast@@YAHXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_85864adeb11c951b08b89b1808a7299b___ @ 0x180363560 (Windows--Internal--ComTaskPool--QueueTask__lambda_85864adeb11c951b08b89b1808a7299b___.c)
 *     _lambda_85864adeb11c951b08b89b1808a7299b_::_lambda_85864adeb11c951b08b89b1808a7299b_ @ 0x180363968 (_lambda_85864adeb11c951b08b89b1808a7299b_--_lambda_85864adeb11c951b08b89b1808a7299b_.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnDpiOrHighContrastChanged(CActionCenterExperienceManager *this)
{
  unsigned int v2; // edi
  HMONITOR v3; // rax
  int ScaleFactorForMonitor; // eax
  unsigned int v5; // ebx
  int v7; // ebx
  int v8; // esi
  DWORD SysColor; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+48h] [rbp+10h] BYREF
  int v16; // [rsp+50h] [rbp+18h] BYREF
  char v17; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v3 = MonitorFromPoint(0LL, 1u);
  v15 = 0;
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v3, &v15);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor >= 0 )
  {
    v7 = 0;
    v8 = 0;
    v16 = 0;
    if ( (unsigned int)IsHighContrast() )
    {
      if ( !(unsigned int)IsHighContrast()
        || (SysColor = GetSysColor(5),
            v7 = 2,
            BYTE2(SysColor) + 5 * BYTE1(SysColor) + 2 * (unsigned int)(unsigned __int8)SysColor <= 0x400) )
      {
        v7 = 1;
      }
      v16 = v7;
      v8 = v7;
    }
    if ( *((_DWORD *)this + 156) != v15 || *((_DWORD *)this + 157) != v8 )
    {
      *((_DWORD *)this + 156) = v15;
      *((_DWORD *)this + 157) = v7;
      v10 = lambda_85864adeb11c951b08b89b1808a7299b_::_lambda_85864adeb11c951b08b89b1808a7299b_(&v17, &v15, &v16);
      v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_85864adeb11c951b08b89b1808a7299b___(
              v12,
              v11,
              *((unsigned int *)this + 144),
              v10);
      v2 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C9,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
    }
    return v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return v5;
  }
}
