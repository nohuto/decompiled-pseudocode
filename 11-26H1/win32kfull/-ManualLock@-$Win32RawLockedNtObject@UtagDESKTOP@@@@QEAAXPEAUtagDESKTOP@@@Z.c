/*
 * XREFs of ?ManualLock@?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z @ 0x140251798
 * Callers:
 *     xxxTrackMouseMove @ 0x14027D0C8 (xxxTrackMouseMove.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall Win32RawLockedNtObject<tagDESKTOP>::ManualLock(
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
    BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  v5 = PtiCurrent((__int64)BugCheckParameter2);
  *BugCheckParameter2 = *((_QWORD *)v5 + 47);
  *((_QWORD *)v5 + 47) = BugCheckParameter2;
  result = UserDereferenceObject;
  BugCheckParameter2[2] = UserDereferenceObject;
  BugCheckParameter2[1] = BugCheckParameter3;
  return result;
}
