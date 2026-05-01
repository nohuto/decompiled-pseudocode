/*
 * XREFs of CemRcObjectCleanup @ 0x18003D080
 * Callers:
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003CDBC (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003CE34 (-HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x18003CEC4 (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003CF44 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampActCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18003D038 (-HampActCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003DC60 (-HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180065430 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampSessionCleanup@@YAXPEAU_HAM_SESSION@@@Z @ 0x18007E7B0 (-HampSessionCleanup@@YAXPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CemRcObjectCleanup(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax

  if ( a1[3] )
    NT_ASSERT("Object->ReferenceCount == 0");
  if ( a1[2] != -1LL )
  {
    v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
    RtlAcquireSRWLockExclusive(v2 + 16);
    RtlRbRemoveNode(v2, a1);
    *(_QWORD *)(v2 + 40) = *(_QWORD *)(v2 + 40) & 1LL | (2LL * (*(_QWORD *)(v2 + 40) >> 1) - 2);
    RtlReleaseSRWLockExclusive(v2 + 16);
    result = RtlWakeAllConditionVariable(v2 + 32);
  }
  a1[4] |= 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
