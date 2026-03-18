/*
 * XREFs of ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x14011364C
 * Callers:
 *     xxxCloseClipboard @ 0x14002B910 (xxxCloseClipboard.c)
 *     xxxSetClipboardViewer @ 0x140110CB8 (xxxSetClipboardViewer.c)
 *     NtUserRemoveClipboardFormatListener @ 0x140111700 (NtUserRemoveClipboardFormatListener.c)
 *     InternalGetClipboardMetadata @ 0x140111C00 (InternalGetClipboardMetadata.c)
 *     NtUserGetOpenClipboardWindow @ 0x140111CA0 (NtUserGetOpenClipboardWindow.c)
 *     _SetClipboardData @ 0x140111EF0 (_SetClipboardData.c)
 *     NtUserGetClipboardViewer @ 0x140112980 (NtUserGetClipboardViewer.c)
 *     NtUserCountClipboardFormats @ 0x1401129D0 (NtUserCountClipboardFormats.c)
 *     _EnumClipboardFormats @ 0x140112A5C (_EnumClipboardFormats.c)
 *     NtUserGetClipboardOwner @ 0x140112E00 (NtUserGetClipboardOwner.c)
 *     NtUserGetClipboardSequenceNumber @ 0x140112E50 (NtUserGetClipboardSequenceNumber.c)
 *     _OpenClipboard @ 0x140112F48 (_OpenClipboard.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1401135A0 (NtUserIsClipboardFormatAvailable.c)
 *     xxxEmptyClipboard @ 0x1401EF1DC (xxxEmptyClipboard.c)
 *     _GetPriorityClipboardFormat @ 0x1402037C0 (_GetPriorityClipboardFormat.c)
 *     NtUserAddClipboardFormatListener @ 0x140207B50 (NtUserAddClipboardFormatListener.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x14020A960 (NtUserGetUpdatedClipboardFormats.c)
 *     NtUserGetClipboardData @ 0x140248F00 (NtUserGetClipboardData.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14026CA20 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1402B4A8C (xxxChangeClipboardChain.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x140113794 (W32GetThreadWin32Thread.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

struct tagWINDOWSTATION *__fastcall CheckClipboardAccess(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rcx
  char v4; // al
  struct _KTHREAD *CurrentThread; // rsi
  int v6; // edi
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rcx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 528), 0, 0);
  CurrentThread = KeGetCurrentThread();
  v6 = v4 & 8;
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v9 = ProcessWin32Process;
  if ( ProcessWin32Process )
    v9 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( !v9 )
    goto LABEL_15;
  if ( !v6
    || !ThreadWin32Thread
    || (v11 = *(_QWORD *)(ThreadWin32Thread + 496)) == 0
    || *(_QWORD *)(v9 + 648) == *(_QWORD *)(v11 + 40) )
  {
    v12 = *(_QWORD *)(v9 + 648);
    if ( v12 )
    {
      if ( RtlAreAllAccessesGranted(*(_DWORD *)(v9 + 664), 4u) )
        return (struct tagWINDOWSTATION *)v12;
      UserSetLastError(5);
LABEL_21:
      v14 = 3221225506LL;
      goto LABEL_16;
    }
    if ( !ThreadWin32Thread )
      goto LABEL_15;
  }
  v13 = *(_QWORD *)(ThreadWin32Thread + 496);
  if ( !v13 )
  {
LABEL_15:
    v14 = 3221226021LL;
LABEL_16:
    SetLastNtError(v14);
    return 0LL;
  }
  v12 = *(_QWORD *)(v13 + 40);
  if ( !(unsigned int)AccessCheckObject(v12, 4LL, 0LL, WinStaMapping) )
    goto LABEL_21;
  if ( !v12 )
    goto LABEL_15;
  return (struct tagWINDOWSTATION *)v12;
}
