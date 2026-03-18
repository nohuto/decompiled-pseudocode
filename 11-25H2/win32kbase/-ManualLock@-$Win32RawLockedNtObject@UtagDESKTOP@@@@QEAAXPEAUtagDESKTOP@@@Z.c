/*
 * XREFs of ?ManualLock@?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z @ 0x1401070D8
 * Callers:
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

LONG_PTR (__fastcall *__fastcall Win32RawLockedNtObject<tagDESKTOP>::ManualLock(
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3))(CompositionObject *this)
{
  struct tagTHREADINFO *v4; // rax
  LONG_PTR (__fastcall *result)(CompositionObject *); // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( BugCheckParameter3 )
    ObfReferenceObject((PVOID)BugCheckParameter3);
  if ( BugCheckParameter2[2] != -1LL )
  {
    BugCheckParameter4 = PtiCurrent();
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  v4 = PtiCurrent();
  *BugCheckParameter2 = *((_QWORD *)v4 + 48);
  *((_QWORD *)v4 + 48) = BugCheckParameter2;
  result = CompositionObject::Release;
  BugCheckParameter2[2] = CompositionObject::Release;
  BugCheckParameter2[1] = BugCheckParameter3;
  return result;
}
