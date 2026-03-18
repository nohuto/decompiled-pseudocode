/*
 * XREFs of ?LockKernelStack@@YAXPEAU_ETHREAD@@PEAU_TL@@@Z @ 0x1401ECFF4
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall LockKernelStack(PVOID Object, struct _TL *a2)
{
  struct tagTHREADINFO *v4; // rax

  v4 = PtiCurrent((__int64)Object, (__int64)a2);
  *(_QWORD *)a2 = *((_QWORD *)v4 + 48);
  *((_QWORD *)v4 + 48) = a2;
  *((_QWORD *)a2 + 2) = DereferenceKernelStack;
  *((_QWORD *)a2 + 1) = Object;
  ObfReferenceObject(Object);
  PsReferenceKernelStack(Object);
}
