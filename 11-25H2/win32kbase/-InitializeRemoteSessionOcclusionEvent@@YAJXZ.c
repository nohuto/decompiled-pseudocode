/*
 * XREFs of ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x14014E940
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     CreateKernelEventObject @ 0x14014E99C (CreateKernelEventObject.c)
 */

__int64 __fastcall InitializeRemoteSessionOcclusionEvent(__int64 a1, __int64 a2)
{
  __int64 KernelEventObject; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  LOBYTE(a2) = 1;
  KernelEventObject = CreateKernelEventObject(a1, a2);
  *(_QWORD *)(W32GetUserSessionState(v4, v3) + 68440) = KernelEventObject;
  W32GetUserSessionState(v6, v5);
  return *(_QWORD *)(W32GetUserSessionState(v8, v7) + 68440) == 0LL ? 0xC0000017 : 0;
}
