/*
 * XREFs of DrvDxgkConfigureKernelDisplayPolicy @ 0x14007CDE0
 * Callers:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14007CD30 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkConfigureKernelDisplayPolicy(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 DxgkWin32kInterface; // rax

  v2 = a2;
  v3 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 752))(v3, v2);
}
