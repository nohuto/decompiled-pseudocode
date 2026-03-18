/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@UtagWINDOWSTATION@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x14004AEE8
 * Callers:
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 */

void __fastcall Win32RawLockedItemBase<tagWINDOWSTATION,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
        ULONG_PTR BugCheckParameter2,
        char a2)
{
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( *(_QWORD *)(BugCheckParameter2 + 16) == -1LL )
  {
    if ( !a2 )
    {
      BugCheckParameter4 = PtiCurrent(BugCheckParameter2);
      KeBugCheckEx(0x164u, 0x12uLL, BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
  }
  else
  {
    PopAndFreeW32ThreadLock(BugCheckParameter2);
    *(_QWORD *)(BugCheckParameter2 + 16) = -1LL;
  }
}
