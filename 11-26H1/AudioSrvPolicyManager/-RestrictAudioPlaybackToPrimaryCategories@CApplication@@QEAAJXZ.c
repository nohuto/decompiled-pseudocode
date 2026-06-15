/*
 * XREFs of ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18001689C
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180016050 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::RestrictAudioPlaybackToPrimaryCategories(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( *((_DWORD *)this + 155) != 5 )
  {
    *((_DWORD *)this + 155) = 5;
    *((_QWORD *)this + 78) = 1LL;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return 0LL;
}
