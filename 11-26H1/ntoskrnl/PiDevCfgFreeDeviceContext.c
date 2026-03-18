/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x140AD11C4
 * Callers:
 *     PiDevCfgInitDeviceCallback @ 0x1407A9BB0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407AA380 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1407ABD9C (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x1407ABE10 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AC218 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407AC990 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AD10DC (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgInitDeviceContext @ 0x140AD1214 (PiDevCfgInitDeviceContext.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 */

void __fastcall PiDevCfgFreeDeviceContext(__int64 a1)
{
  UNICODE_STRING *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rcx

  if ( *(int *)a1 < 0 )
  {
    v4 = *(void **)(a1 + 16);
    if ( v4 )
      ZwClose(v4);
  }
  v2 = (UNICODE_STRING *)(a1 + 24);
  v3 = 3LL;
  do
  {
    RtlFreeAnsiString(v2++);
    --v3;
  }
  while ( v3 );
}
