/*
 * XREFs of ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x14006F370
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x14006E9A0 (NtUpdateInputSinkTransforms.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x14006EF5C (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14006EFEC (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x14006F0B0 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1400A361C (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1400A44F0 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1400A4990 (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputSink::UnlockAndRelease(CInputSink *this)
{
  HANDLE CurrentThreadId; // rax
  char *v3; // rcx

  CurrentThreadId = PsGetCurrentThreadId();
  v3 = (char *)this + 8;
  if ( CurrentThreadId == *((HANDLE *)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx(v3);
  }
  else
  {
    ExReleasePushLockSharedEx(v3, 0LL);
  }
  KeLeaveCriticalRegion();
  return ObfDereferenceObject((char *)this - 24) == 0;
}
