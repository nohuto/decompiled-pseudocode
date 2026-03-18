/*
 * XREFs of GetNameSpaceObject @ 0x140030FE0
 * Callers:
 *     Scope @ 0x140030B30 (Scope.c)
 *     IndexField @ 0x140030BC0 (IndexField.c)
 *     BankField @ 0x140030DC0 (BankField.c)
 *     CreateNativeNameSpaceObject @ 0x140052A74 (CreateNativeNameSpaceObject.c)
 *     Simulator_CallbackWorker @ 0x14006C690 (Simulator_CallbackWorker.c)
 *     Simulator_NotifyNode @ 0x14006CAC4 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x14006CCB0 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D1E8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIApplyNamespaceOverride @ 0x14006DA88 (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x14006DAF8 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x14006DE90 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x14006E4EC (ParseDLMObjectInternal.c)
 *     DebugExpr @ 0x14006E99C (DebugExpr.c)
 *     DebugNotify @ 0x14006EC80 (DebugNotify.c)
 *     Alias @ 0x140070A30 (Alias.c)
 *     Load @ 0x140070B90 (Load.c)
 *     LoadTable @ 0x140070D90 (LoadTable.c)
 *     ProcessLoadTable @ 0x1400711D0 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObject(_BYTE *Src, __int64 a2, __int64 *a3, int a4)
{
  size_t v8; // rbx
  _BYTE *Pool2; // rsi
  KIRQL v10; // bl
  unsigned int NameSpaceObjectNoLock; // edi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v8 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, Src, v8);
  Pool2[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return NameSpaceObjectNoLock;
}
