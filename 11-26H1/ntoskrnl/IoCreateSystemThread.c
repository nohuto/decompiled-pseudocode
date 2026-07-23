/*
 * XREFs of IoCreateSystemThread @ 0x140A782C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoCreateSystemThread(
        _WORD *Object,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        ULONG_PTR BugCheckParameter2,
        __int64 a8)
{
  _QWORD *Pool2; // rax
  void *v13; // rdi
  int SystemThread; // esi

  if ( *Object != 3 && *Object != 4 )
    KeBugCheckEx(0x148u, 0LL, BugCheckParameter2, (ULONG_PTR)Object, 0LL);
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v13 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = Object;
  Pool2[1] = BugCheckParameter2;
  Pool2[2] = a8;
  PsReferenceSiloContext(Object);
  SystemThread = PsCreateSystemThreadEx(a2, a3, a4, a5, a6, IopThreadStart, v13, 0LL, 0LL);
  if ( SystemThread < 0 )
  {
    ObfDereferenceObject(Object);
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)SystemThread;
}
