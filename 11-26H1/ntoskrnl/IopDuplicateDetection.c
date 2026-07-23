/*
 * XREFs of IopDuplicateDetection @ 0x1407A88D0
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IopFindLegacyBusDeviceNode @ 0x140AFBA64 (IopFindLegacyBusDeviceNode.c)
 *     IopQueryResourceHandlerInterface @ 0x140B09A60 (IopQueryResourceHandlerInterface.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopDuplicateDetection(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r14d
  __int64 LegacyBusDeviceNode; // rax
  __int64 *v6; // rdi
  __int64 v7; // rdx
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  *a4 = 0LL;
  v4 = a1;
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(a1, a2);
  if ( !LegacyBusDeviceNode )
    return 3221225488LL;
  if ( (int)IopQueryResourceHandlerInterface(3LL, *(_QWORD *)(LegacyBusDeviceNode + 32), 0LL, &P) < 0 )
    return 3221225488LL;
  v6 = (__int64 *)P;
  if ( !P )
    return 3221225488LL;
  guard_dispatch_icall_no_overrides(*((_QWORD *)P + 1), v4);
  guard_dispatch_icall_no_overrides(v6[1], v7);
  ExFreePoolWithTag(v6, 0);
  return 3221225488LL;
}
