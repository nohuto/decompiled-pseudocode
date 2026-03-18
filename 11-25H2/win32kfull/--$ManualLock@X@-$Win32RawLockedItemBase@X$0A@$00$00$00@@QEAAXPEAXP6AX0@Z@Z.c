/*
 * XREFs of ??$ManualLock@X@?$Win32RawLockedItemBase@X$0A@$00$00$00@@QEAAXPEAXP6AX0@Z@Z @ 0x14020F710
 * Callers:
 *     EditionCreateWindowStationEntryPointEx @ 0x140293D10 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
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
    BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  result = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
  *BugCheckParameter2 = *((_QWORD *)result + 48);
  *((_QWORD *)result + 48) = BugCheckParameter2;
  BugCheckParameter2[2] = a3;
  BugCheckParameter2[1] = BugCheckParameter3;
  return result;
}
