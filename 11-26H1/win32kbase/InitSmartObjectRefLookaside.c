/*
 * XREFs of InitSmartObjectRefLookaside @ 0x14010E6A4
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x14010EB20 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

__int64 __fastcall InitSmartObjectRefLookaside(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 result; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  result = (__int64)NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                      (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
                      0x10uLL,
                      0x616C7355u,
                      0x6C6F7355u,
                      0xFFFEu);
  if ( result )
  {
    *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 42608) = result;
    return 1LL;
  }
  return result;
}
