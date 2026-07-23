/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x1407AF9D4
 * Callers:
 *     PiConfigureDevice @ 0x1407A7A70 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14094DB08 (PiDevCfgSetDeviceRegProp.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFreeDeviceContext @ 0x140AE836C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x140AE83CC (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B34F1C (PiDevCfgResetDeviceDriverSettings.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  NTSTATUS inited; // ebx
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING GuidString; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v18[3]; // [rsp+70h] [rbp-98h] BYREF
  int v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+8Ch] [rbp-7Ch]
  int v21; // [rsp+94h] [rbp-74h]
  int v22[4]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-60h]
  GUID Guid; // [rsp+F8h] [rbp-10h] BYREF

  memset_0(v22, 0, 0x58uLL);
  Handle = 0LL;
  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v13 = 0;
  v15 = 0x100000000LL;
  v14 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_20;
  }
  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
  {
    inited = -1073741808;
    goto LABEL_20;
  }
  inited = PiDevCfgInitDeviceContext(v3, 0LL, v22);
  if ( inited >= 0 )
  {
    v5 = v23;
    v6 = *(_QWORD *)(a1 + 48);
    v18[0] = &DEVPKEY_Device_ClassGuid;
    v18[2] = &Guid;
    v18[1] = 13LL;
    v20 = 0LL;
    v21 = 0;
    v19 = 16;
    inited = PiDevCfgQueryObjectProperties(v4, v6, 1, v23, (__int64)v18, 1);
    if ( inited >= 0 )
    {
      if ( v20 >= 0 )
      {
        inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
        if ( inited < 0 )
          goto LABEL_20;
        if ( (int)PnpOpenObjectRegKey(PiPnpRtlCtx, GuidString.Buffer, 2, 131097, 0, (__int64)&Handle) >= 0 )
          goto LABEL_12;
        RtlFreeAnsiString(&GuidString);
      }
      Guid = 0LL;
LABEL_12:
      v7 = PiDevCfgMigrateDevice(
             a1,
             (unsigned int)v22,
             (unsigned __int64)&GuidString & -(__int64)(GuidString.Buffer != 0LL),
             0,
             (__int64)&v15,
             0LL);
      v8 = v15;
      if ( v7 < 0 )
        v8 = 0;
      PiDevCfgResetDeviceDriverSettings(
        a1,
        (int)v22,
        (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
        (int)Handle,
        0LL);
      PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v5, L"Devices");
      PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v5, L"Filters");
      if ( v8 )
      {
        v9 = *(_QWORD *)(a1 + 48);
        v14 = 4;
        if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v9, v5, 11, (__int64)&v15 + 4, (__int64)&v13, (__int64)&v14, 0) < 0
          || HIDWORD(v15) != 4
          || (v11 = v13, v14 != 4) )
        {
          v11 = 0;
        }
        v13 = v8 | v11;
        PiDevCfgSetDeviceRegProp(v10, (unsigned int)v22, 11, 4, (__int64)&v13, 4);
      }
    }
  }
LABEL_20:
  RtlFreeAnsiString(&GuidString);
  if ( Handle )
    ZwClose(Handle);
  PiDevCfgFreeDeviceContext(v22);
  return (unsigned int)inited;
}
