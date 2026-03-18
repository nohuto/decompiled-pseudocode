/*
 * XREFs of ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8FCC
 * Callers:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxLoadHmodIndex @ 0x1400C7330 (xxxLoadHmodIndex.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1400C7AB4 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     GetHmodTableIndex @ 0x1400C8B54 (GetHmodTableIndex.c)
 *     DestroyEventHook @ 0x1400C9C20 (DestroyEventHook.c)
 *     _SetWinEventHook @ 0x1400C9E4C (_SetWinEventHook.c)
 *     NtUserUnhookWinEvent @ 0x1400CA120 (NtUserUnhookWinEvent.c)
 *     _UnhookWinEvent @ 0x1400CA498 (_UnhookWinEvent.c)
 *     FreeDelayedHooks @ 0x14012D3F0 (FreeDelayedHooks.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x14024116C (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x14028694C (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 *     ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x140286AA0 (-zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z.c)
 *     NtUserSetWinEventHook @ 0x1402A0680 (NtUserSetWinEventHook.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(__int64 a1)
{
  tagDomLock *v2; // rcx

  if ( *(_BYTE *)(a1 + 40) )
  {
    v2 = *(tagDomLock **)a1;
    if ( v2 )
    {
      if ( *(_BYTE *)(a1 + 8) )
        tagDomLock::UnLockExclusive(v2);
      else
        tagDomLock::UnLockShared(v2);
    }
    *(_BYTE *)(a1 + 40) = 0;
  }
}
