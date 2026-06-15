/*
 * XREFs of ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800161F4
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180016050 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18002AB18 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z.c)
 *     ??1CApplication@@MEAA@XZ @ 0x180037970 (--1CApplication@@MEAA@XZ.c)
 * Callees:
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800162C0 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x1800292E4 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z @ 0x180039A28 (-RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::CleanupBCMStartupLatencyGracePeriod(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  v2 = this + 11;
  EnterCriticalSection(this + 11);
  if ( this[12].LockCount )
  {
    (*(void (__fastcall **)(struct CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      this[12].DebugInfo,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, __int64))(*(_QWORD *)ThreadPool
                                                                                            + 32LL))(
      ThreadPool,
      this[12].DebugInfo,
      1LL);
    this[12].LockCount = 0;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)this) )
    {
      CApplication::RemoveAudioPlaybackRestriction((CApplication *)this);
      CApplication::RemoveCategoryOverrideFromProcesses(this);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
