/*
 * XREFs of Win32UAFMAllocateFromPagedLookasideList @ 0x1401EAC90
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x140016A50 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401EAFF8 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

_QWORD *__fastcall Win32UAFMAllocateFromPagedLookasideList(char **a1, _DWORD *a2, int a3)
{
  char *v3; // rbx
  __int64 UserSessionState; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int Cookie; // eax

  v3 = *a1;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  v6 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
         (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
         v3);
  v7 = 0LL;
  if ( v6 )
  {
    v7 = v6 + 2;
    Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
    *((_DWORD *)v7 - 1) = Cookie;
    *a2 = Cookie - 1;
  }
  return v7;
}
