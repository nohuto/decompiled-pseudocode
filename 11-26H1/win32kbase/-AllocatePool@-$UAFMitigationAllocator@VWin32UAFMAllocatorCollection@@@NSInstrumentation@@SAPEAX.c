/*
 * XREFs of ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1401EAE68
 * Callers:
 *     Win32UAFMAllocPool @ 0x1401EAAA0 (Win32UAFMAllocPool.c)
 *     Win32UAFMAllocPoolNonPaged @ 0x1401EAAD0 (Win32UAFMAllocPoolNonPaged.c)
 *     Win32UAFMAllocPoolZInit @ 0x1401EAC40 (Win32UAFMAllocPoolZInit.c)
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401EADCC (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x14010EC3C (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401EADB0 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401EAFF8 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

__int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  __int64 v7; // rbx
  int v8; // edx
  int v9; // ecx
  unsigned __int64 v10; // rsi
  int v11; // r8d
  __int64 UserSessionState; // rax
  __int64 v13; // rax
  int Cookie; // eax

  v7 = 0LL;
  v10 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  if ( v10 )
  {
    UserSessionState = W32GetUserSessionState(v9, v8, v11);
    v13 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
            (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
            a1,
            v10,
            a3);
    if ( v13 )
    {
      v7 = v13 + 16;
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *(_DWORD *)(v7 - 4) = Cookie;
      *a4 = Cookie - 1;
    }
  }
  return v7;
}
