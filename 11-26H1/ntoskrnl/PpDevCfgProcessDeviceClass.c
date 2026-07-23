/*
 * XREFs of PpDevCfgProcessDeviceClass @ 0x1407AEE54
 * Callers:
 *     PiConfigureDevice @ 0x1407A7A70 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x1407AC524 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14094DB08 (PiDevCfgSetDeviceRegProp.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140A4321C (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgFreeDeviceContext @ 0x140AE836C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x140AE83CC (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140B3B5D0 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140B3CD40 (PiDevCfgGetDeviceClassConfigFlags.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceClass(__int64 a1)
{
  wchar_t *Buffer; // rsi
  int v3; // edi
  unsigned __int8 v4; // r14
  NTSTATUS inited; // ebx
  __int64 v6; // rcx
  int v7; // r12d
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  char v11; // al
  int v12; // eax
  int v13; // edi
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  _WORD v18[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  const DEVPROPKEY *v24; // [rsp+70h] [rbp-98h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h]
  GUID *p_Guid; // [rsp+80h] [rbp-88h]
  int v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+8Ch] [rbp-7Ch]
  int v29; // [rsp+94h] [rbp-74h]
  UNICODE_STRING GuidString; // [rsp+98h] [rbp-70h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v32[16]; // [rsp+B8h] [rbp-50h] BYREF
  int v33[20]; // [rsp+C8h] [rbp-40h]
  GUID Guid; // [rsp+118h] [rbp+10h] BYREF

  memset_0(v32, 0, 0x58uLL);
  LODWORD(v22) = 1;
  v21 = 0LL;
  v31 = 0LL;
  Handle = 0LL;
  Buffer = 0LL;
  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  v3 = 0;
  GuidString.Buffer = 0LL;
  v4 = 0;
  v18[0] = 0;
  v19 = 0;
  v20 = 0LL;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_38;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
  {
    inited = -1073741808;
    goto LABEL_38;
  }
  inited = PiDevCfgInitDeviceContext(v6, 0LL, v32);
  if ( inited < 0 )
    goto LABEL_38;
  v7 = v33[0];
  v8 = *(_QWORD *)(a1 + 48);
  v24 = &DEVPKEY_Device_ClassGuid;
  p_Guid = &Guid;
  v25 = 13LL;
  v28 = 0LL;
  v29 = 0;
  v27 = 16;
  inited = PiDevCfgQueryObjectProperties(1, v8, 1, v33[0], (__int64)&v24, 1);
  if ( inited < 0 )
    goto LABEL_38;
  if ( v28 < 0 )
    goto LABEL_12;
  inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
  if ( inited < 0 )
    goto LABEL_38;
  Buffer = GuidString.Buffer;
  v10 = PnpOpenObjectRegKey(PiPnpRtlCtx, GuidString.Buffer, 2, 131097, 0, (__int64)&v21);
  inited = v10;
  if ( v10 != -1073741772 )
  {
    if ( v10 < 0 )
      goto LABEL_38;
LABEL_12:
    if ( v21 )
    {
      v25 = 17LL;
      v24 = (const DEVPROPKEY *)&DEVPKEY_DeviceClass_Configurable;
      v28 = 0LL;
      p_Guid = (GUID *)v18;
      v29 = 0;
      v27 = 1;
      inited = PiDevCfgQueryObjectProperties(v9, (_DWORD)Buffer, 2, (_DWORD)v21, (__int64)&v24, 1);
      if ( inited < 0 )
        goto LABEL_38;
      if ( v28 >= 0 )
      {
        v11 = v18[0];
      }
      else
      {
        v11 = 0;
        LOBYTE(v18[0]) = 0;
      }
      if ( !v11
        && (int)PiDevCfgGetDeviceClassDriverConfigurable(
                  (int)Buffer,
                  (int)v21,
                  *(_QWORD *)(a1 + 48),
                  v7,
                  0LL,
                  0LL,
                  (_BYTE *)v18 + 1) >= 0
        && HIBYTE(v18[0]) )
      {
        LOBYTE(v18[0]) = -1;
      }
      *((_QWORD *)&v31 + 1) = L"Configuration";
      LODWORD(v31) = 1835034;
      v12 = IopOpenRegistryKeyEx(&Handle, v21, &v31, 131097LL);
      inited = v12;
      if ( v12 != -1073741772 )
      {
        if ( v12 < 0 )
          goto LABEL_38;
        inited = PiDevCfgConfigureDeviceKeys(a1, (unsigned int)v32, (_DWORD)Handle, -1, (__int64)&v19, (__int64)&v20);
        if ( inited < 0 )
          goto LABEL_38;
        v3 = v19;
        v4 = v20;
      }
    }
    goto LABEL_25;
  }
  v21 = 0LL;
LABEL_25:
  inited = PiDevCfgConfigureDeviceLocation(a1, v32, &v19, &v20);
  if ( inited < 0 )
    goto LABEL_38;
  v13 = v19 | v3;
  if ( (((unsigned __int8)v20 | v4) & 2) == 0 && LOBYTE(v18[0]) == 0xFF && Buffer && v21 )
  {
    inited = PiDevCfgGetDeviceClassConfigFlags(Buffer, v21, &v19);
    if ( inited < 0 )
      goto LABEL_38;
    v13 |= v19;
  }
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 48);
    HIDWORD(v20) = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v14, v7, 11, (__int64)&v22, (__int64)&v19, (__int64)&v20 + 4, 0) < 0
      || (_DWORD)v22 != 4
      || (v16 = v19, HIDWORD(v20) != 4) )
    {
      v16 = 0;
    }
    v19 = v13 | v16;
    PiDevCfgSetDeviceRegProp(v15, (unsigned int)v32, 11, 4, (__int64)&v19, 4);
  }
LABEL_38:
  RtlFreeAnsiString(&GuidString);
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    ZwClose(v21);
  PiDevCfgFreeDeviceContext(v32);
  return (unsigned int)inited;
}
