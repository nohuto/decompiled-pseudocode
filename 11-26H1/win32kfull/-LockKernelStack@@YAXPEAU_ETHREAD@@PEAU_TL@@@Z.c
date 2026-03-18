/*
 * XREFs of ?LockKernelStack@@YAXPEAU_ETHREAD@@PEAU_TL@@@Z @ 0x14021CDD8
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall LockKernelStack(PVOID Object, struct _TL *a2)
{
  struct tagTHREADINFO *v4; // rax

  v4 = PtiCurrent((__int64)Object);
  *(_QWORD *)a2 = *((_QWORD *)v4 + 47);
  *((_QWORD *)v4 + 47) = a2;
  *((_QWORD *)a2 + 2) = DereferenceKernelStack;
  *((_QWORD *)a2 + 1) = Object;
  ObfReferenceObject(Object);
  PsReferenceKernelStack(Object);
}
