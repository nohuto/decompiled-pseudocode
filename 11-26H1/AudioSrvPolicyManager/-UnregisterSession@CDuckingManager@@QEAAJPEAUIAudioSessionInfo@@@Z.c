/*
 * XREFs of ?UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18002AABC
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x1800204FC (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?remove@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAAXAEBQEAUIAudioSessionInfo@@@Z @ 0x180041020 (-remove@-$forward_list@PEAUIAudioSessionInfo@@V-$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QE.c)
 */

__int64 __fastcall CDuckingManager::UnregisterSession(CDuckingManager *this, struct IAudioSessionInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct IAudioSessionInfo *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  std::forward_list<IAudioSessionInfo *>::remove((char *)this + 64, &v5);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
