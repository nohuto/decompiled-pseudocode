/*
 * XREFs of ?AllocatePoolWithPriority@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IW4_EX_POOL_PRIORITY@@PEAI@Z @ 0x1401C2414
 * Callers:
 *     Win32UAFMAllocPoolWithPriority @ 0x1401C1F10 (Win32UAFMAllocPoolWithPriority.c)
 * Callees:
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401C22C8 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401C2514 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z @ 0x1401D3228 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z.c)
 */

char *__fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePoolWithPriority(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        enum _EX_POOL_PRIORITY a4,
        _DWORD *a5)
{
  char *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 UserSessionState; // rax
  _DWORD *Priority; // rdi
  int Cookie; // eax

  v8 = 0LL;
  v11 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  if ( v11 )
  {
    UserSessionState = W32GetUserSessionState(v10, v9);
    Priority = NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(
                 (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
                 a1,
                 v11,
                 a3,
                 a4);
    if ( Priority )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      Priority[3] = Cookie;
      v8 = (char *)(Priority + 4);
      *a5 = Cookie - 1;
    }
  }
  return v8;
}
