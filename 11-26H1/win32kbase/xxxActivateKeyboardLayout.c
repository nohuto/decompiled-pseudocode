/*
 * XREFs of xxxActivateKeyboardLayout @ 0x140086FD0
 * Callers:
 *     NtUserActivateKeyboardLayout @ 0x1401E1FF0 (NtUserActivateKeyboardLayout.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HKLtoPKL @ 0x1400870A0 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x140087130 (xxxInternalActivateKeyboardLayout.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400874A8 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1402199E0 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

struct tagKL *__fastcall xxxActivateKeyboardLayout(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v8; // rbp
  struct tagKL *result; // rax
  struct tagKL *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-18h] BYREF
  struct tagKL *v16; // [rsp+28h] [rbp-10h]

  v8 = PtiCurrent((__int64)a1, a2);
  result = (struct tagKL *)HKLtoPKL(v8, a2);
  v10 = result;
  if ( result )
  {
    if ( (a3 & 8) != 0 )
      ReorderKeyboardLayouts(a1, result);
    BugCheckParameter3 = *((_QWORD *)v8 + 56);
    *((_QWORD *)v8 + 56) = &BugCheckParameter3;
    v16 = v10;
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    v11 = xxxInternalActivateKeyboardLayout(a1, v10, a3, a4, BugCheckParameter3, v16);
    v14 = PtiCurrent(v13, v12);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v14, (ULONG_PTR)&BugCheckParameter3);
    return (struct tagKL *)v11;
  }
  return result;
}
