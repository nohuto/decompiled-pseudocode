/*
 * XREFs of ??$ManualLock@X@?$Win32RawLockedItemBase@X$0A@$00$00$00@@QEAAXPEAXP6AX0@Z@Z @ 0x14023B150
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1402AEA80 (EditionCreateWindowStationEntryPoint.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *__fastcall Win32RawLockedItemBase<void,0,1,1,1>::ManualLock<void>(
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  struct tagTHREADINFO *result; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( BugCheckParameter2[2] != -1LL )
  {
    BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  result = PtiCurrent((__int64)BugCheckParameter2);
  *BugCheckParameter2 = *((_QWORD *)result + 47);
  *((_QWORD *)result + 47) = BugCheckParameter2;
  BugCheckParameter2[2] = a3;
  BugCheckParameter2[1] = BugCheckParameter3;
  return result;
}
