/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@UtagDESKTOP@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400D0604
 * Callers:
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x1400D0920 (PopAndFreeW32ThreadLock.c)
 */

void __fastcall Win32RawLockedItemBase<tagDESKTOP,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
        ULONG_PTR BugCheckParameter2,
        __int64 a2)
{
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( *(_QWORD *)(BugCheckParameter2 + 16) == -1LL )
  {
    if ( !(_BYTE)a2 )
    {
      BugCheckParameter4 = PtiCurrent(BugCheckParameter2, a2);
      KeBugCheckEx(0x164u, 0x12uLL, BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
  }
  else
  {
    PopAndFreeW32ThreadLock(BugCheckParameter2);
    *(_QWORD *)(BugCheckParameter2 + 16) = -1LL;
  }
}
