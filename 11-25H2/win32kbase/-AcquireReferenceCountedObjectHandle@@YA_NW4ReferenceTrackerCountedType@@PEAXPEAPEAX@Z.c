/*
 * XREFs of ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x140074990
 * Callers:
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x140074530 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 * Callees:
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1401D41B4 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

char __fastcall AcquireReferenceCountedObjectHandle(__int64 a1, void *a2, _QWORD *a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rcx
  void *v6; // rax

  v5 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(a1) + 88)
                                                                       + 16LL * (unsigned int)a1
                                                                       + 5704);
  if ( v5 )
  {
    v6 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v5, a2);
    if ( !v6 )
      return (char)v6;
    *a3 = v6;
  }
  else
  {
    *a3 = 0LL;
  }
  LOBYTE(v6) = 1;
  return (char)v6;
}
