/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x1407AC990
 * Callers:
 *     PiConfigureDevice @ 0x1407A4F30 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PiDevCfgMigrateDevice @ 0x14098B138 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14098D0A8 (PiDevCfgSetDeviceRegProp.c)
 *     _CmGetDeviceRegProp @ 0x140996210 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x14099E110 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegDeleteTree @ 0x140A2D8F8 (_PnpCtxRegDeleteTree.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     PiDevCfgFreeDeviceContext @ 0x140AD11C4 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x140AD1214 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AD2A4C (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B32ACC (PiDevCfgResetDeviceDriverSettings.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  int inited; // ebx
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  int v9; // r14d
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  int v14; // [rsp+48h] [rbp-79h] BYREF
  int v15; // [rsp+4Ch] [rbp-75h] BYREF
  int v16; // [rsp+50h] [rbp-71h] BYREF
  int v17; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v20[3]; // [rsp+70h] [rbp-51h] BYREF
  int v21; // [rsp+88h] [rbp-39h]
  __int64 v22; // [rsp+8Ch] [rbp-35h]
  int v23; // [rsp+94h] [rbp-2Dh]
  _BYTE v24[16]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-19h]
  __int128 v26; // [rsp+E8h] [rbp+27h] BYREF

  memset_0(v24, 0, 0x48uLL);
  Handle = 0LL;
  v26 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v17 = 1;
  UnicodeString.Buffer = 0LL;
  v14 = 0;
  v16 = 0;
  v15 = 0;
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
  inited = PiDevCfgInitDeviceContext(v3, 0LL, v24);
  if ( inited >= 0 )
  {
    v5 = v25;
    v6 = *(_QWORD *)(a1 + 48);
    v20[0] = &DEVPKEY_Device_ClassGuid;
    v20[2] = &v26;
    v20[1] = 13LL;
    v22 = 0LL;
    v23 = 0;
    v21 = 16;
    inited = PiDevCfgQueryObjectProperties(v4, v6, 1, v25, (__int64)v20, 1);
    if ( inited >= 0 )
    {
      if ( v22 >= 0 )
      {
        LOBYTE(v7) = 1;
        inited = RtlStringFromGUIDEx(&v26, &UnicodeString, v7);
        if ( inited < 0 )
          goto LABEL_20;
        if ( (int)PnpOpenObjectRegKey(PiPnpRtlCtx, UnicodeString.Buffer, 2, 131097, 0, (__int64)&Handle) >= 0 )
          goto LABEL_12;
        RtlFreeAnsiString(&UnicodeString);
      }
      v26 = 0LL;
LABEL_12:
      v8 = PiDevCfgMigrateDevice(
             a1,
             (unsigned int)v24,
             (unsigned __int64)&UnicodeString & -(__int64)(UnicodeString.Buffer != 0LL),
             0,
             (__int64)&v16,
             0LL);
      v9 = v16;
      if ( v8 < 0 )
        v9 = 0;
      PiDevCfgResetDeviceDriverSettings(
        a1,
        (unsigned int)v24,
        (unsigned __int64)&v26 & -(__int64)(UnicodeString.Buffer != 0LL),
        (_DWORD)Handle,
        0LL);
      PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v5, L"Devices");
      PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v5, L"Filters");
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 48);
        v15 = 4;
        if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v10, v5, 11, (__int64)&v17, (__int64)&v14, (__int64)&v15, 0) < 0
          || v17 != 4
          || (v12 = v14, v15 != 4) )
        {
          v12 = 0;
        }
        v14 = v9 | v12;
        PiDevCfgSetDeviceRegProp(v11, (unsigned int)v24, 11, 4, (__int64)&v14, 4);
      }
    }
  }
LABEL_20:
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  PiDevCfgFreeDeviceContext(v24);
  return (unsigned int)inited;
}
