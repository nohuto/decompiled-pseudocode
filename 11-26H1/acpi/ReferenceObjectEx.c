/*
 * XREFs of ReferenceObjectEx @ 0x140036D50
 * Callers:
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     ResetSignal @ 0x140036A80 (ResetSignal.c)
 *     Wait @ 0x140036BE0 (Wait.c)
 *     PerformMutexDriverCallbacks @ 0x14004A31C (PerformMutexDriverCallbacks.c)
 *     CreateNativeNameSpaceObject @ 0x140052A74 (CreateNativeNameSpaceObject.c)
 *     AMLIGetNamespaceOverrideObject @ 0x14006DE90 (AMLIGetNamespaceOverrideObject.c)
 *     FindObjSymbol @ 0x14006F284 (FindObjSymbol.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceObjectEx(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLI;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  return result;
}
