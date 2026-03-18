/*
 * XREFs of Win32UAFMAllocPoolWithQuotaZInit @ 0x1401C1FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400692A8 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401C22C8 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401C2514 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 *     memset @ 0x140243000 (memset.c)
 */

_DWORD *__fastcall Win32UAFMAllocPoolWithQuotaZInit(size_t Size, unsigned int a2, _DWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _DWORD *v9; // rbx
  __int64 UserSessionState; // rax
  __int64 Quota; // rax
  int Cookie; // eax

  v8 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize();
  if ( !v8 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v7, v6);
  Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
            (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
            256LL,
            v8,
            a2);
  if ( !Quota )
    return 0LL;
  v9 = (_DWORD *)(Quota + 16);
  Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
  *(v9 - 1) = Cookie;
  *a3 = Cookie - 1;
  if ( v9 )
    memset(v9, 0, Size);
  return v9;
}
