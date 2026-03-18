/*
 * XREFs of ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1401C2380
 * Callers:
 *     Win32UAFMAllocPool @ 0x1401C1EB0 (Win32UAFMAllocPool.c)
 *     Win32UAFMAllocPoolNonPaged @ 0x1401C1EE0 (Win32UAFMAllocPoolNonPaged.c)
 *     Win32UAFMAllocPoolZInit @ 0x1401C2060 (Win32UAFMAllocPoolZInit.c)
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401C22E4 (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400296B0 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401C22C8 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401C2514 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

__int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 UserSessionState; // rax
  __int64 v12; // rdi
  int Cookie; // eax

  v7 = 0LL;
  v10 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  if ( v10 )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    v12 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
            (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
            a1,
            v10,
            a3);
    if ( v12 )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *(_DWORD *)(v12 + 12) = Cookie;
      v7 = v12 + 16;
      *a4 = Cookie - 1;
    }
  }
  return v7;
}
