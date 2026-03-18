/*
 * XREFs of NtUserSetClipboardViewer @ 0x14022C7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSetClipboardViewer @ 0x140110CB8 (xxxSetClipboardViewer.c)
 */

__int64 __fastcall NtUserSetClipboardViewer(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( a1 )
  {
    v4 = ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    v4 = 0LL;
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v4);
  v5 = (__int64 *)xxxSetClipboardViewer(v4);
  if ( v5 )
    v2 = *v5;
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v6);
LABEL_8:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
