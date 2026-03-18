/*
 * XREFs of xxxChangeClipboardChain @ 0x1402B4A8C
 * Callers:
 *     NtUserChangeClipboardChain @ 0x140218F50 (NtUserChangeClipboardChain.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x14011364C (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall xxxChangeClipboardChain(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagWINDOWSTATION *v6; // rsi
  __int64 *v7; // r14
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  v6 = CheckClipboardAccess(a1, a2);
  if ( !v6 )
    return 0LL;
  if ( *(struct tagTHREADINFO **)(a1 + 16) != PtiCurrent(v5, v4) )
    return 0LL;
  v7 = (__int64 *)((char *)v6 + 104);
  if ( !*((_QWORD *)v6 + 13) )
    return 0LL;
  if ( v2 && *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 464LL) + 648LL) != v6 )
    v2 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v13, v6);
  if ( a1 == *v7 )
  {
    BugCheckParameter3[0] = (ULONG_PTR)v6 + 104;
    BugCheckParameter3[1] = v2;
    HMAssignmentLock(BugCheckParameter3, 0LL);
    v9 = 1;
  }
  else
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *v7);
    v9 = xxxSendMessage((struct tagWND *)*v7, 0x30Du);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v10);
  }
  if ( v13[2] != -1LL )
    PopAndFreeW32ThreadLock((__int64)v13, v8);
  return v9;
}
