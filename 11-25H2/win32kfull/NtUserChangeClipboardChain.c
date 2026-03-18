/*
 * XREFs of NtUserChangeClipboardChain @ 0x140218F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1402B4A8C (xxxChangeClipboardChain.c)
 */

__int64 __fastcall NtUserChangeClipboardChain(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateReceivingHwnd(a1, 1LL);
  v7 = 0;
  v8 = v5;
  if ( v5 )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    if ( a2 )
    {
      v10 = ValidateHwnd(a2);
      if ( !v10 )
      {
LABEL_7:
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
        goto LABEL_8;
      }
    }
    else
    {
      v10 = 0LL;
    }
    Win32HM_LockIntoThread<1>(v4, v10, (__int64 *)v14);
    v7 = xxxChangeClipboardChain(v8, v10);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v14, v11);
    goto LABEL_7;
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
