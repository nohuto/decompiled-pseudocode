/*
 * XREFs of ?ManualLock@?$Win32RawLockedNtObject@UtagWINDOWSTATION@@@@QEAAXPEAUtagWINDOWSTATION@@@Z @ 0x140224E9C
 * Callers:
 *     xxxEmptyClipboard @ 0x1401EF1DC (xxxEmptyClipboard.c)
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall Win32RawLockedNtObject<tagWINDOWSTATION>::ManualLock(
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3)
{
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v5; // rax
  __int64 result; // rax

  if ( BugCheckParameter3 )
    ObfReferenceObject((PVOID)BugCheckParameter3);
  if ( BugCheckParameter2[2] != -1LL )
  {
    BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  v5 = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
  *BugCheckParameter2 = *((_QWORD *)v5 + 48);
  *((_QWORD *)v5 + 48) = BugCheckParameter2;
  result = UserDereferenceObject;
  BugCheckParameter2[2] = UserDereferenceObject;
  BugCheckParameter2[1] = BugCheckParameter3;
  return result;
}
