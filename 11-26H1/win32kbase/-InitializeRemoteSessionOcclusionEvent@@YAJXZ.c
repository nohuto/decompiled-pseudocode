/*
 * XREFs of ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x140193948
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     CreateKernelEventObject @ 0x1401BC480 (CreateKernelEventObject.c)
 */

__int64 __fastcall InitializeRemoteSessionOcclusionEvent(__int64 a1, __int64 a2)
{
  __int64 KernelEventObject; // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  LOBYTE(a2) = 1;
  KernelEventObject = CreateKernelEventObject(a1, a2);
  *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 68432) = KernelEventObject;
  W32GetUserSessionState(v7, v6, v8);
  return *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 68432) == 0LL ? 0xC0000017 : 0;
}
