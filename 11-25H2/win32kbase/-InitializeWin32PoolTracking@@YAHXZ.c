/*
 * XREFs of ?InitializeWin32PoolTracking@@YAHXZ @ 0x1401C254C
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsCurrentSessionHostServiceSession @ 0x1401014D8 (IsCurrentSessionHostServiceSession.c)
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x14015BAE4 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1401C2590 (-IsWin32kRefreshed@@YA_NXZ.c)
 */

__int64 InitializeWin32PoolTracking(void)
{
  char v0; // bl
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // r8
  unsigned int v5; // r9d

  v0 = 0;
  if ( (unsigned int)IsCurrentSessionHostServiceSession() )
    v0 = IsWin32kRefreshed();
  UserSessionState = W32GetUserSessionState(v2, v1);
  NSInstrumentation::CLeakTrackingAllocator::Create(
    (struct NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
    v0,
    v4,
    v5);
  return 1LL;
}
