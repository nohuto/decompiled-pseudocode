/*
 * XREFs of ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1401BADF0
 * Callers:
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1401A18E4 (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x14008A620 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 */

void __fastcall CTouchProcessor::ForwardInertiaFrameToManipulationThread(const struct CPointerInputFrame *a1)
{
  __int64 v1; // rsi
  PERESOURCE *v3; // rbx
  bool IsLockedShared; // bp

  v1 = *(_QWORD *)a1;
  v3 = (PERESOURCE *)(*(_QWORD *)a1 + 32LL);
  IsLockedShared = tagDomLock::IsLockedShared(v3);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v3);
  CTouchProcessor::ForwardInputToManipulationThread(v1, (__int64)a1, 2);
  if ( !IsLockedShared )
    ExReleaseResourceAndLeaveCriticalRegion(*v3);
}
