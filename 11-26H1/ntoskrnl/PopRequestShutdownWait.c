/*
 * XREFs of PopRequestShutdownWait @ 0x140AF1078
 * Callers:
 *     SepRmCommandServerThread @ 0x140AF0B10 (SepRmCommandServerThread.c)
 *     PoRequestShutdownEvent @ 0x140AF1030 (PoRequestShutdownEvent.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopRequestShutdownWait(PVOID Object)
{
  __int64 Pool2; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx

  Pool2 = ExAllocatePool2(0x100uLL);
  v3 = 0;
  v4 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 8) = Object;
  ObfReferenceObjectWithTag(Object, 0x64536F50u);
  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.PriorityFloorSummary);
  if ( BYTE2(stru_140E66FF0.Padding[1]) )
  {
    *v4 = stru_140F11D08.OtherOperationCount;
    stru_140F11D08.OtherOperationCount = (__int64)v4;
  }
  else
  {
    ObfDereferenceObjectWithTag(Object, 0x64536F50u);
    ExFreePoolWithTag(v4, 0);
    v3 = -1073741823;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.PriorityFloorSummary);
  return v3;
}
