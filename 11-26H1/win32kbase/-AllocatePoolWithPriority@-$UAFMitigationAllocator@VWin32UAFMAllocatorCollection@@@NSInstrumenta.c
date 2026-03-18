/*
 * XREFs of ?AllocatePoolWithPriority@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IW4_EX_POOL_PRIORITY@@PEAI@Z @ 0x1401EAEF8
 * Callers:
 *     Win32UAFMAllocPoolWithPriority @ 0x1401EAB00 (Win32UAFMAllocPoolWithPriority.c)
 * Callees:
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401EADB0 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401EAFF8 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z @ 0x1401FC760 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z.c)
 */

char *__fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePoolWithPriority(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        enum _EX_POOL_PRIORITY a4,
        _DWORD *a5)
{
  char *v8; // rbx
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // rdi
  int v12; // r8d
  __int64 UserSessionState; // rax
  char *Priority; // rax
  int Cookie; // eax

  v8 = 0LL;
  v11 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  if ( v11 )
  {
    UserSessionState = W32GetUserSessionState(v10, v9, v12);
    Priority = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(
                         (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
                         a1,
                         v11,
                         a3,
                         a4);
    if ( Priority )
    {
      v8 = Priority + 16;
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *((_DWORD *)v8 - 1) = Cookie;
      *a5 = Cookie - 1;
    }
  }
  return v8;
}
