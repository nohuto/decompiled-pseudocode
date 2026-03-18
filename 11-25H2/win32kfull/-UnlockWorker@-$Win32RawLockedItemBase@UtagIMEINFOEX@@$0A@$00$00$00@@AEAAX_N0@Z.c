/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@UtagIMEINFOEX@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x14002C41C
 * Callers:
 *     ?xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z @ 0x140282CD0 (-xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall Win32RawLockedItemBase<tagIMEINFOEX,0,1,1,1>::UnlockWorker(
        _QWORD *BugCheckParameter2,
        char a2,
        char a3)
{
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( BugCheckParameter2[2] == -1LL )
  {
    if ( !a2 )
    {
      BugCheckParameter4 = PtiCurrent();
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
  }
  else
  {
    if ( a3 )
      PopAndFreeW32ThreadLock(BugCheckParameter2);
    else
      *((_QWORD *)PtiCurrent() + 48) = *BugCheckParameter2;
    BugCheckParameter2[2] = -1LL;
  }
}
