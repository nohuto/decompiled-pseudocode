/*
 * XREFs of DxgkOpenAdapterFromDeviceName @ 0x1403A0BD0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1402AEB80 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     DxgkCloseAdapterImpl @ 0x1402E7AB0 (DxgkCloseAdapterImpl.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiValidateDeviceName @ 0x1403A0FE0 (DpiValidateDeviceName.c)
 */

__int64 __fastcall DxgkOpenAdapterFromDeviceName(char *Src)
{
  __int64 v2; // r8
  WCHAR *v3; // r9
  __int64 v4; // rdx
  WCHAR *v5; // rax
  int v6; // r10d
  __int64 v7; // rcx
  WCHAR v8; // r11
  struct DXGPROCESS *Current; // rax
  DXGPROCESS *v11; // r14
  NTSTATUS DeviceObjectPointer; // edi
  unsigned int v13; // esi
  unsigned int v14; // [rsp+50h] [rbp-2B8h] BYREF
  int v15; // [rsp+54h] [rbp-2B4h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-2B0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-2A8h] BYREF
  _BYTE v18[24]; // [rsp+68h] [rbp-2A0h] BYREF
  WCHAR *v19; // [rsp+80h] [rbp-288h]
  __int64 v20; // [rsp+88h] [rbp-280h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-278h] BYREF
  WCHAR *v22; // [rsp+A0h] [rbp-268h]
  __int64 v23; // [rsp+A8h] [rbp-260h]
  __int64 v24; // [rsp+B0h] [rbp-258h]
  volatile void *Address[2]; // [rsp+B8h] [rbp-250h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-240h]
  __int64 v27; // [rsp+D0h] [rbp-238h]
  WCHAR SourceString[256]; // [rsp+E0h] [rbp-228h] BYREF

  *(_OWORD *)Address = 0LL;
  v26 = 0LL;
  DestinationString = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  RtlCopyFromUser(Address, Src, 0x18uLL);
  ProbeForRead(Address[0], 0x200uLL, 1u);
  v15 = 0;
  v2 = 2147483646LL;
  v24 = 2147483646LL;
  v3 = (WCHAR *)Address[0];
  v22 = (WCHAR *)Address[0];
  v4 = 256LL;
  v23 = 256LL;
  v5 = SourceString;
  v19 = SourceString;
  v6 = 0;
  v7 = 0LL;
  v20 = 0LL;
  while ( v4 )
  {
    if ( !v2 )
      goto LABEL_6;
    v8 = *v3;
    if ( !*v3 )
      goto LABEL_6;
    v22 = ++v3;
    *v5++ = v8;
    v19 = v5;
    v23 = --v4;
    v24 = --v2;
    v20 = ++v7;
  }
  v19 = --v5;
  v20 = --v7;
  v6 = -2147483643;
LABEL_6:
  *v5 = 0;
  v15 = v6;
  if ( v6 < 0 )
    return -1073741811LL;
  Current = DXGPROCESS::GetCurrent(v7);
  v11 = Current;
  if ( Current )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( DestinationString.Length > 1u && SourceString[1] == 92 )
      SourceString[1] = 63;
    if ( (int)DpiValidateDeviceName(&DestinationString) < 0 )
    {
      DeviceObjectPointer = -1073741811;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 641;
    }
    else
    {
      FileObject = 0LL;
      DeviceObject = 0LL;
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
      memset(v18, 0, sizeof(v18));
      v13 = 0;
      v14 = 0;
      if ( DeviceObjectPointer < 0 )
        goto LABEL_21;
      *(_QWORD *)v18 = DeviceObject;
      ObfReferenceObject(DeviceObject);
      ObfDereferenceObject(FileObject);
      FileObject = 0LL;
      DeviceObjectPointer = DxgkOpenAdapter((struct _D3DKMT_OPENADAPTER *)v18);
      ObfDereferenceObject(DeviceObject);
      DeviceObject = 0LL;
      if ( DeviceObjectPointer < 0 )
        goto LABEL_21;
      v13 = *(_DWORD *)&v18[8];
      v14 = *(_DWORD *)&v18[8];
      if ( DXGPROCESS::IsRemoteConnection(v11) )
      {
        DeviceObjectPointer = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v11 + 11) + 464LL))(*(_QWORD *)&v18[12]);
        if ( DeviceObjectPointer < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 687;
        }
      }
      if ( DeviceObjectPointer < 0 )
      {
LABEL_21:
        *(_DWORD *)&v18[8] = 0;
        *(_QWORD *)&v18[12] = 0LL;
      }
      RtlWriteULongToUser((_DWORD *)Src + 2, *(int *)&v18[8]);
      v27 = *(_QWORD *)&v18[12];
      RtlWriteULong64ToUser(Src + 12, *(unsigned int *)&v18[12] | (unsigned __int64)((__int64)*(int *)&v18[16] << 32));
      if ( DeviceObjectPointer < 0 )
      {
        if ( v13 )
        {
          v14 = v13;
          DxgkCloseAdapterImpl(&v14, 0);
        }
      }
    }
  }
  else
  {
    DeviceObjectPointer = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 620;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)DeviceObjectPointer;
}
