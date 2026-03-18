/*
 * XREFs of ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x14004F700
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxUpdateWindows @ 0x14021D9D8 (xxxUpdateWindows.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14004F7CC (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14004F880 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 */

void __fastcall xxxUpdateThreadsWindows(struct tagTHREADINFO *a1, struct tagWND *a2, HRGN a3)
{
  struct tagWND *v4; // rbx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  struct tagWND *v8; // rdi
  ULONG_PTR *p_BugCheckParameter3; // rcx
  struct tagTHREADINFO *v10; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-18h] BYREF
  struct tagWND *v12; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v6 = PtiCurrent((__int64)a1, (__int64)a2);
  v8 = 0LL;
  p_BugCheckParameter3 = &BugCheckParameter3;
  BugCheckParameter3 = *((_QWORD *)v6 + 57);
  *((_QWORD *)v6 + 57) = &BugCheckParameter3;
  v12 = 0LL;
  if ( v4 )
  {
    while ( 1 )
    {
      v12 = v4;
      HMLockObject(v4);
      if ( v8 )
        HMUnlockObject(v8);
      if ( *((struct tagTHREADINFO **)v4 + 2) == a1 )
        xxxInternalUpdateWindow(v4, 1u);
      else
        xxxUpdateOtherThreadsWindows(v4, a3);
      v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
      if ( !v4 )
        break;
      v8 = v12;
    }
  }
  v10 = PtiCurrent((__int64)p_BugCheckParameter3, v7);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v10, &BugCheckParameter3);
}
