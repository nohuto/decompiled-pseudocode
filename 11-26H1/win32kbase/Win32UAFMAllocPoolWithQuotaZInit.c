/*
 * XREFs of Win32UAFMAllocPoolWithQuotaZInit @ 0x1401EABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400B3D24 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401EADB0 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401EAFF8 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_DWORD *__fastcall Win32UAFMAllocPoolWithQuotaZInit(size_t Size, unsigned int a2, _DWORD *a3)
{
  _DWORD *v6; // rbx
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rsi
  int v10; // r8d
  __int64 UserSessionState; // rax
  __int64 Quota; // rax
  int Cookie; // eax

  v6 = 0LL;
  v9 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize();
  if ( v9 )
  {
    UserSessionState = W32GetUserSessionState(v8, v7, v10);
    Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
              (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
              256LL,
              v9,
              a2);
    if ( Quota )
    {
      v6 = (_DWORD *)(Quota + 16);
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *(v6 - 1) = Cookie;
      *a3 = Cookie - 1;
      memset(v6, 0, Size);
    }
  }
  return v6;
}
