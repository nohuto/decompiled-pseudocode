/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140971D58
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x14095F340 (_PnpDispatchDeviceInterface.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x140971B14 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095F9BC (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 a1,
        const WCHAR *a2,
        char *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  int inited; // ebx
  _BYTE *v10; // rsi
  _DWORD *v12; // r9
  int v15; // r14d
  unsigned int v16; // eax
  unsigned int v17; // r8d
  DEVPROPKEY **v18; // r10
  DEVPROPKEY *v19; // r11
  DEVPROPKEY **v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  __int64 v25; // rax
  char *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  int v30; // edi
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // [rsp+44h] [rbp-3Ch] BYREF
  int v34; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v35; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v36; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v40; // [rsp+E0h] [rbp+60h]

  inited = 0;
  v10 = (_BYTE *)a6;
  v12 = a8;
  Handle = 0LL;
  *a5 = 0;
  v36 = 0LL;
  *a8 = 0;
  v35 = 0LL;
  v34 = 0;
  v33 = 0;
  if ( a6 )
  {
    v15 = a7;
    v10 = (_BYTE *)(a6 & -(__int64)(a7 != 0));
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  v40 = v16;
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  v17 = 0;
  v18 = &off_140BDFEB0;
  while ( 1 )
  {
    v19 = *v18;
    v20 = &off_140BDFEB0 + 2 * v17;
    if ( v16 == (*v18)->pid )
      break;
LABEL_26:
    v20 = 0LL;
    ++v17;
    v18 += 2;
    if ( v17 >= 3 )
      goto LABEL_9;
  }
  v21 = *(_QWORD *)a4 - *(_QWORD *)&v19->fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&v19->fmtid.Data1 )
    v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v19->fmtid.Data4;
  if ( v21 )
  {
    v16 = v40;
    goto LABEL_26;
  }
LABEL_9:
  if ( !v20 )
    return (unsigned int)-1073741264;
  if ( a3 )
    goto LABEL_11;
  inited = CmOpenDeviceInterfaceRegKey(a1, (__int64)a2, 48, (__int64)a8, 1, 0, (__int64)&Handle, 0LL);
  if ( inited >= 0 )
  {
    v12 = a8;
LABEL_11:
    v22 = *(_DWORD *)(a4 + 16);
    if ( v22 != 2 )
    {
      if ( v22 == 3 )
      {
        v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
          v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
        if ( !v23 )
        {
          *v12 = 1;
          *a5 = 17;
          if ( v15 )
          {
            DestinationString = 0LL;
            inited = RtlInitUnicodeStringEx(&DestinationString, a2);
            if ( inited >= 0 )
            {
              if ( *(_QWORD *)(a1 + 288) )
                inited = guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
              else
                inited = -1073741822;
            }
            if ( inited >= 0 )
              *v10 = 0;
          }
          else
          {
            inited = -1073741789;
          }
          goto LABEL_22;
        }
LABEL_64:
        inited = -1073741264;
        goto LABEL_22;
      }
      if ( v22 != 256 )
        goto LABEL_64;
      v31 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v31 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      if ( v31 )
        goto LABEL_64;
      inited = CmOpenDeviceInterfaceRegKey(a1, (__int64)a2, 49, (__int64)v12, 1, 0, (__int64)&v36, 0LL);
      if ( inited < 0 )
        goto LABEL_22;
      v33 = v15;
      v30 = PnpCtxRegQueryValue(v32, v36, L"DeviceInstance", &v34, v10, &v33);
      ZwClose(v36);
      if ( v30 != -1073741772 && v30 != -1073741444 )
      {
        if ( !v30 || v30 == -1073741789 )
        {
          *a8 = v33;
          *a5 = 18;
          if ( v30 || !v15 )
            inited = -1073741789;
          goto LABEL_22;
        }
LABEL_63:
        inited = v30;
        goto LABEL_22;
      }
LABEL_61:
      inited = -1073741275;
      goto LABEL_22;
    }
    v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
      v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
    if ( v25 )
      goto LABEL_64;
    v26 = (char *)Handle;
    if ( a3 )
      v26 = a3;
    if ( a1 && (v27 = *(_QWORD *)(a1 + 224)) != 0 )
      v28 = *(_QWORD *)(v27 + 8);
    else
      v28 = 0LL;
    v29 = RegRtlOpenKeyTransacted(v26, L"Device Parameters", 0, 1u, &v35, v28);
    if ( v29 == -1073741772 || v29 == -1073741444 )
      goto LABEL_61;
    if ( v29 < 0 )
    {
      inited = v29;
      goto LABEL_22;
    }
    v33 = v15;
    v30 = guard_dispatch_icall_no_overrides(a1, (__int64)v35);
    ZwClose(v35);
    if ( v30 == -1073741772 || v30 == -1073741444 )
      goto LABEL_61;
    if ( v30 && v30 != -1073741789 )
      goto LABEL_63;
    *a8 = v33;
    *a5 = 18;
    if ( v30 || !v15 )
      inited = -1073741789;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
