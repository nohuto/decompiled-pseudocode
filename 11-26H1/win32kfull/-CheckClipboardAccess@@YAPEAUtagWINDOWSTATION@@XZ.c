/*
 * XREFs of ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0
 * Callers:
 *     NtUserIsClipboardFormatAvailable @ 0x140057300 (NtUserIsClipboardFormatAvailable.c)
 *     _GetPriorityClipboardFormat @ 0x1401AF280 (_GetPriorityClipboardFormat.c)
 *     xxxSetClipboardViewer @ 0x1401AF468 (xxxSetClipboardViewer.c)
 *     NtUserCountClipboardFormats @ 0x1401AF550 (NtUserCountClipboardFormats.c)
 *     _OpenClipboard @ 0x1401AFF98 (_OpenClipboard.c)
 *     xxxCloseClipboard @ 0x1401B02A0 (xxxCloseClipboard.c)
 *     _SetClipboardData @ 0x1401B1CEC (_SetClipboardData.c)
 *     xxxEmptyClipboard @ 0x1401B2154 (xxxEmptyClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x140203F70 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserGetClipboardOwner @ 0x140209A90 (NtUserGetClipboardOwner.c)
 *     _EnumClipboardFormats @ 0x14020C9DC (_EnumClipboardFormats.c)
 *     InternalGetClipboardMetadata @ 0x140225F64 (InternalGetClipboardMetadata.c)
 *     NtUserGetClipboardViewer @ 0x1402268F0 (NtUserGetClipboardViewer.c)
 *     NtUserGetOpenClipboardWindow @ 0x140230580 (NtUserGetOpenClipboardWindow.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1402353A0 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserAddClipboardFormatListener @ 0x1402356C0 (NtUserAddClipboardFormatListener.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14029419C (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     NtUserGetClipboardData @ 0x1402B27A0 (NtUserGetClipboardData.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1402B4F40 (NtUserGetUpdatedClipboardFormats.c)
 *     xxxChangeClipboardChain @ 0x1402CF520 (xxxChangeClipboardChain.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1400574EC (W32GetThreadWin32Thread.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

struct tagWINDOWSTATION *__fastcall CheckClipboardAccess(__int64 a1)
{
  char v1; // al
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // edi
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx

  v1 = _InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(a1) + 130, 0, 0);
  CurrentThread = KeGetCurrentThread();
  v3 = v1 & 8;
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v6 = ProcessWin32Process;
  if ( ProcessWin32Process )
    v6 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)ProcessWin32Process >> 64) & ProcessWin32Process;
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v8 = ThreadWin32Thread;
  if ( !v6 )
    goto LABEL_13;
  if ( !v3
    || !ThreadWin32Thread
    || (v9 = *(_QWORD *)(ThreadWin32Thread + 488)) == 0
    || *(_QWORD *)(v6 + 656) == *(_QWORD *)(v9 + 40) )
  {
    v10 = *(_QWORD *)(v6 + 656);
    if ( v10 )
    {
      if ( RtlAreAllAccessesGranted(*(_DWORD *)(v6 + 672), 4u) )
        return (struct tagWINDOWSTATION *)v10;
      UserSetLastError(5);
LABEL_18:
      v12 = 3221225506LL;
      goto LABEL_14;
    }
    if ( !v8 )
      goto LABEL_13;
  }
  v11 = *(_QWORD *)(v8 + 488);
  if ( !v11 )
  {
LABEL_13:
    v12 = 3221226021LL;
LABEL_14:
    SetLastNtError(v12);
    return 0LL;
  }
  v10 = *(_QWORD *)(v11 + 40);
  if ( !(unsigned int)AccessCheckObject(v10, 4LL, 0LL, WinStaMapping) )
    goto LABEL_18;
  if ( !v10 )
    goto LABEL_13;
  return (struct tagWINDOWSTATION *)v10;
}
