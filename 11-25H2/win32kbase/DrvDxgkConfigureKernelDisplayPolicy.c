/*
 * XREFs of DrvDxgkConfigureKernelDisplayPolicy @ 0x14002C210
 * Callers:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14002B900 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkConfigureKernelDisplayPolicy(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 DxgkWin32kInterface; // rax

  v3 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 752))(v3, a2);
}
