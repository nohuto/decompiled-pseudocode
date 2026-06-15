/*
 * XREFs of ?TryAcquireGlobalLock@CConstraintModelResourceManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAVCEndpointStore@@@Z @ 0x1800F5750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CConstraintModelResourceManager::TryAcquireGlobalLock(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbx

  if ( *(_BYTE *)(a3 + 256) )
  {
    v4 = a1 + 16;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    *a2 = v4;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
