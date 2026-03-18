/*
 * XREFs of xxxCloseClipboard @ 0x14002B910
 * Callers:
 *     NtUserCloseClipboard @ 0x14002B780 (NtUserCloseClipboard.c)
 *     ForceEmptyClipboard @ 0x1401EF0CC (ForceEmptyClipboard.c)
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140111248 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401117B8 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x14011364C (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401EF13C (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1)
{
  struct tagWINDOWSTATION *v1; // rbx
  PACCESS_TOKEN v3; // rax
  struct _KPROCESS *CurrentProcess; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v1 = a1;
  if ( !a1 )
  {
    v1 = CheckClipboardAccess();
    if ( !v1 )
      return 0LL;
  }
  if ( *((struct tagTHREADINFO **)v1 + 10) != PtiCurrent() )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v5, v1);
  if ( (*((_DWORD *)v1 + 16) & 0x40) != 0 )
  {
    MungeClipData(v1);
    CloseClipboardToken(v1);
    if ( *((_DWORD *)v1 + 34) )
    {
      ImpersonationLevel = SecurityAnonymous;
      CopyOnOpen = 0;
      EffectiveOnly = 0;
      v3 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v3 )
      {
        *((_DWORD *)v1 + 16) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
        v3 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v1 + 20) = v3;
    }
  }
  HMAssignmentUnlock((char *)v1 + 96);
  *((_QWORD *)v1 + 10) = 0LL;
  if ( (*((_DWORD *)v1 + 16) & 0x40) != 0 )
    xxxDrawClipboard(v1);
  if ( v6 != -1 )
    PopAndFreeW32ThreadLock(v5);
  return 1LL;
}
