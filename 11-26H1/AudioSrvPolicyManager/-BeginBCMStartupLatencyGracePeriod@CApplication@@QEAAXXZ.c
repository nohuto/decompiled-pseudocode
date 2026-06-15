/*
 * XREFs of ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180016050
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800161F4 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800162C0 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18001689C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::BeginBCMStartupLatencyGracePeriod(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v3; // r8
  _DWORD *v4; // rdx
  __int64 v5; // rax
  signed int LastError; // eax
  bool v7; // sf
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+10h]

  v8 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 440);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 11);
  v9 = v2;
  CApplication::CleanupBCMStartupLatencyGracePeriod(this);
  if ( *((_QWORD *)this + 60)
    || (v5 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
               ThreadPool,
               CApplication::BCMStartupGracePeriodExpiredCallback,
               this),
        (*((_QWORD *)this + 60) = v5) != 0LL) )
  {
    v8 = -100000000LL;
    *((_DWORD *)this + 122) = 1;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(this) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      v3 = (_QWORD *)*((_QWORD *)this + 9);
      while ( v3 )
      {
        v4 = (_DWORD *)v3[2];
        v3 = (_QWORD *)*v3;
        if ( !v4[104] && !v4[120] && v4[119] != 7 )
        {
          v4[119] = 7;
          v4[120] = 1;
          v4[121] = 1;
        }
      }
      if ( this != (CApplication *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      CApplication::RestrictAudioPlaybackToPrimaryCategories(this);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 60),
      &v8,
      0LL,
      100);
  }
  else
  {
    LastError = GetLastError();
    v7 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v7 = LastError < 0;
    }
    if ( v7 )
      AudPolicyLogError("CApplication::BeginBCMStartupLatencyGracePeriod", 2190, LastError);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
