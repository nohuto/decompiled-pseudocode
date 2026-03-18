/*
 * XREFs of GetMonitorCapabilityFromInf @ 0x14002AD24
 * Callers:
 *     GetMonitorCapability @ 0x140029B44 (GetMonitorCapability.c)
 * Callees:
 *     xwtol @ 0x14002B140 (xwtol.c)
 *     ParseModeCap @ 0x14002B480 (ParseModeCap.c)
 *     InsertModecapList @ 0x14002BB04 (InsertModecapList.c)
 *     __report_rangecheckfailure @ 0x1401C6D80 (__report_rangecheckfailure.c)
 *     wcschr @ 0x1401C73A4 (wcschr.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall GetMonitorCapabilityFromInf(struct _DEVICE_OBJECT *a1, __int64 a2, char a3)
{
  unsigned int inserted; // esi
  ULONG v6; // r14d
  unsigned __int64 v8; // r9
  wchar_t *v9; // rdi
  unsigned int v10; // ebx
  wchar_t *v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // edi
  unsigned int v17; // ebx
  unsigned __int64 v18; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v22; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  void *DeviceRegKey; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-88h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _DWORD KeyInformation[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v29; // [rsp+1B0h] [rbp+B0h]
  __int64 v30; // [rsp+1B4h] [rbp+B4h]
  WCHAR SourceString[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  wchar_t Dst[128]; // [rsp+1D0h] [rbp+D0h] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  if ( IoOpenDeviceRegistryKey(a1, 2u, 0x20019u, &DeviceRegKey) < 0 )
    return 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  inserted = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"MODES");
  ObjectAttributes.RootDirectory = DeviceRegKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset(KeyInformation, 0, sizeof(KeyInformation));
    ResultLength = 0;
    v6 = 0;
    v25 = 0LL;
    v26 = 0LL;
    while ( ZwEnumerateKey(KeyHandle, v6, KeyBasicInformation, KeyInformation, 0x100u, &ResultLength) >= 0 )
    {
      ++v6;
      DestinationString.Buffer = (PWSTR)&KeyInformation[4];
      v22 = v6;
      DestinationString.Length = KeyInformation[3];
      DestinationString.MaximumLength = KeyInformation[3];
      v8 = LOWORD(KeyInformation[3]);
      if ( LOWORD(KeyInformation[3]) >= 0x100u )
        v8 = 256LL;
      wcsncpy_s(Dst, 0x80uLL, (const wchar_t *)&KeyInformation[4], v8 >> 1);
      if ( DestinationString.Length < 0x100u )
      {
        v18 = DestinationString.Length & 0xFFFE;
        if ( v18 >= 0x100 )
          _report_rangecheckfailure();
        *(wchar_t *)((char *)Dst + v18) = 0;
      }
      Dst[127] = 0;
      v9 = Dst;
      v29 = 0;
      v10 = 0;
      v30 = 0xFFFFFFFFLL;
      do
      {
        if ( v10 >= 4 )
          break;
        v11 = wcschr(v9, 0x2Cu);
        if ( v11 )
          *v11 = 0;
        v13 = xwtol(v9, v12, v11);
        v14 = v10;
        v9 = (wchar_t *)(v15 + 2);
        ++v10;
        *(&v29 + v14) = v13;
      }
      while ( v15 );
      if ( v29 )
      {
        if ( (_DWORD)v30 != -1 )
        {
          LODWORD(v25) = v29;
          ObjectAttributes.RootDirectory = KeyHandle;
          *(_QWORD *)((char *)&v25 + 4) = v30;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 0x2000000u, &ObjectAttributes) >= 0 )
          {
            v16 = 0;
            v17 = 0;
            wcscpy(SourceString, L"Mode1");
            do
            {
              RtlInitUnicodeString(&DestinationString, SourceString);
              if ( ZwQueryValueKey(
                     Handle,
                     &DestinationString,
                     KeyValueFullInformation,
                     KeyInformation,
                     0x100u,
                     &ResultLength) >= 0 )
              {
                wcsncpy_s(Dst, 0x80uLL, (const wchar_t *)((char *)KeyInformation + KeyInformation[2]), 0x7FuLL);
                v26 = 0xFFFFFFFF00000000uLL;
                DWORD2(v25) = -1;
                HIDWORD(v25) = a3 == 0 ? 0x38 : 0;
                if ( (unsigned int)ParseModeCap(Dst) )
                  inserted = InsertModecapList(&v25, a2, inserted);
                v16 = 1;
              }
              else if ( v16 )
              {
                break;
              }
              ++SourceString[4];
              ++v17;
            }
            while ( v17 < 9 );
            ZwClose(Handle);
            v6 = v22;
          }
        }
      }
    }
    ZwClose(KeyHandle);
  }
  ZwClose(DeviceRegKey);
  return inserted;
}
