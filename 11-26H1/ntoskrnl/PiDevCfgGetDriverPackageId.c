/*
 * XREFs of PiDevCfgGetDriverPackageId @ 0x140AE9CA0
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x1407AC524 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AD478 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDriverNode @ 0x140B72708 (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PiDevCfgGetDriverPackageId(__int64 a1, __int64 a2)
{
  int v3; // edi
  int v4; // ecx
  int ObjectProperties; // ebx
  _QWORD v7[3]; // [rsp+40h] [rbp-30h] BYREF
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]
  __int64 v10; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF

  Handle = 0LL;
  v3 = a1;
  ObjectProperties = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 9, 131097, 0, (__int64)&Handle);
  if ( ObjectProperties >= 0 )
  {
    v7[0] = DEVPKEY_DriverInfFile_ActiveDriverPackage;
    v7[1] = 18LL;
    v8 = 0;
    v10 = 0LL;
    v7[2] = a2;
    v9 = 6;
    ObjectProperties = PiDevCfgQueryObjectProperties(v4, v3, 9, (_DWORD)Handle, (__int64)v7, 1);
    if ( ObjectProperties >= 0 && (int)v10 < 0 )
      ObjectProperties = v10;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectProperties;
}
