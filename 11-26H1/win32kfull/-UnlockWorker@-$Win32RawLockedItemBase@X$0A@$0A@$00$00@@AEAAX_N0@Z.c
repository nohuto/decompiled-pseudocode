/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@X$0A@$0A@$00$00@@AEAAX_N0@Z @ 0x14020DB9C
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall Win32RawLockedItemBase<void,0,0,1,1>::UnlockWorker(_QWORD *BugCheckParameter2, char a2)
{
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( BugCheckParameter2[2] == -1LL )
  {
    if ( !a2 )
    {
      BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
  }
  else
  {
    *((_QWORD *)PtiCurrent((__int64)BugCheckParameter2) + 47) = *BugCheckParameter2;
    BugCheckParameter2[2] = -1LL;
  }
}
