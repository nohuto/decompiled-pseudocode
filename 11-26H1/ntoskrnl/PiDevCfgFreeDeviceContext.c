/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x140AE836C
 * Callers:
 *     PiDevCfgInitDeviceCallback @ 0x1407AC820 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407AD0C0 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1407AEDDC (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x1407AEE54 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AF25C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407AF9D4 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AE8284 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgInitDeviceContext @ 0x140AE83CC (PiDevCfgInitDeviceContext.c)
 * Callees:
 *     Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x1405DDA04 (Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiDevCfgClearDeviceDrivers @ 0x1407AC044 (PiDevCfgClearDeviceDrivers.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 */

void __fastcall PiDevCfgFreeDeviceContext(__int64 a1)
{
  void *v2; // rcx
  UNICODE_STRING *v3; // rbx
  __int64 v4; // rdi

  if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
    PiDevCfgClearDeviceDrivers(a1);
  if ( *(int *)a1 < 0 )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 )
      ZwClose(v2);
  }
  v3 = (UNICODE_STRING *)(a1 + 40);
  v4 = 3LL;
  do
  {
    RtlFreeAnsiString(v3++);
    --v4;
  }
  while ( v4 );
}
