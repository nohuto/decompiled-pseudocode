/*
 * XREFs of VrpPostUnloadKey @ 0x140B60EDC
 * Callers:
 *     VrpRegistryCallback @ 0x140973A30 (VrpRegistryCallback.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     VrpDestroyNamespaceNode @ 0x140977AF4 (VrpDestroyNamespaceNode.c)
 *     VrpUnlockJobContextExclusive @ 0x1409787A4 (VrpUnlockJobContextExclusive.c)
 */

__int64 __fastcall VrpPostUnloadKey(__int64 a1, size_t *a2)
{
  __int64 v4; // rdx
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    if ( *(int *)(a1 + 8) >= 0 )
      VrpDestroyNamespaceNode(a2, v4);
    VrpUnlockJobContextExclusive((__int64)a2);
  }
  return 0LL;
}
