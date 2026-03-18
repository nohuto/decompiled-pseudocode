/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@UCPointerInputFrame@@$0A@$0A@$00$00@@AEAAX_N0@Z @ 0x14010F254
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall Win32RawLockedItemBase<CPointerInputFrame,0,0,1,1>::UnlockWorker(_QWORD *BugCheckParameter2, char a2)
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
    *((_QWORD *)PtiCurrent() + 48) = *BugCheckParameter2;
    BugCheckParameter2[2] = -1LL;
  }
}
