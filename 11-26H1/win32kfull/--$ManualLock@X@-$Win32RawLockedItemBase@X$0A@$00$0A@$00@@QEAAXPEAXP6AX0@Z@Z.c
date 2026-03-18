/*
 * XREFs of ??$ManualLock@X@?$Win32RawLockedItemBase@X$0A@$00$0A@$00@@QEAAXPEAXP6AX0@Z@Z @ 0x14021067C
 * Callers:
 *     NtUserfnDDEINIT @ 0x140210450 (NtUserfnDDEINIT.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void (__fastcall *__fastcall Win32RawLockedItemBase<void,0,1,0,1>::ManualLock<void>(
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3))(void *)
{
  struct tagTHREADINFO *v4; // rax
  void (__fastcall *result)(void *); // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( BugCheckParameter2[2] != -1LL )
  {
    BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  v4 = PtiCurrent((__int64)BugCheckParameter2);
  *BugCheckParameter2 = *((_QWORD *)v4 + 47);
  *((_QWORD *)v4 + 47) = BugCheckParameter2;
  result = DDEImpDecRefInitWorker;
  BugCheckParameter2[2] = DDEImpDecRefInitWorker;
  BugCheckParameter2[1] = BugCheckParameter3;
  return result;
}
