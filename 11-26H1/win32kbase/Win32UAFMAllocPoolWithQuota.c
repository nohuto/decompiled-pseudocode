/*
 * XREFs of Win32UAFMAllocPoolWithQuota @ 0x1401EAB20
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400B3D24 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401EADB0 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401EAFF8 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

__int64 __fastcall Win32UAFMAllocPoolWithQuota(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v5; // rbx
  int v6; // edx
  int v7; // ecx
  __int64 v8; // rdi
  int v9; // r8d
  __int64 UserSessionState; // rax
  __int64 Quota; // rax
  int Cookie; // eax

  v5 = 0LL;
  v8 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize();
  if ( v8 )
  {
    UserSessionState = W32GetUserSessionState(v7, v6, v9);
    Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
              (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
              256LL,
              v8,
              a2);
    if ( Quota )
    {
      v5 = Quota + 16;
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *(_DWORD *)(v5 - 4) = Cookie;
      *a3 = Cookie - 1;
    }
  }
  return v5;
}
