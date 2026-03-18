/*
 * XREFs of PiDevCfgConfigureDeviceLocation @ 0x140B393C0
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x1407ABE10 (PpDevCfgProcessDeviceClass.c)
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1404F5F44 (PnpDuplicateUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PnpOpenFirstMatchingSubKey @ 0x1407A4830 (PnpOpenFirstMatchingSubKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140988AF0 (PiDevCfgConfigureDeviceKeys.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140996AB8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     IopOpenRegistryKeyEx @ 0x140AA8B70 (IopOpenRegistryKeyEx.c)
 *     IopReplaceSeperatorWithPound @ 0x140AC3544 (IopReplaceSeperatorWithPound.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  wchar_t *Buffer; // rdi
  int CachedContextBaseKey; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int i; // r14d
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  UNICODE_STRING v20; // [rsp+30h] [rbp-79h] BYREF
  HANDLE v21; // [rsp+40h] [rbp-69h] BYREF
  HANDLE v22; // [rsp+48h] [rbp-61h] BYREF
  HANDLE v23; // [rsp+50h] [rbp-59h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-51h] BYREF
  __int64 v25; // [rsp+68h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-39h] BYREF
  void *v27; // [rsp+78h] [rbp-31h] BYREF
  __int64 v28; // [rsp+80h] [rbp-29h]
  _OWORD v29[2]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-1h]

  v28 = a1;
  v27 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  v30 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  LODWORD(v25) = 0;
  v20 = 0LL;
  memset(v29, 0, sizeof(v29));
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !*(_QWORD *)(a2 + 64) )
    return 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v27);
  if ( CachedContextBaseKey >= 0 )
  {
    v20.Buffer = L"Control\\DeviceLocations";
    *(_DWORD *)&v20.Length = 3145774;
    v9 = IopOpenRegistryKeyEx(&v23, v27, &v20, 0x20019u);
    CachedContextBaseKey = v9;
    if ( v9 == -1073741772 )
      goto LABEL_9;
    if ( v9 < 0 )
      goto LABEL_42;
    CachedContextBaseKey = NtQueryKey(v23, 4u, (unsigned __int64)v29, 0x28u, (unsigned int *)&v25);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_42;
    if ( !HIDWORD(v29[0])
      || (CachedContextBaseKey = PnpOpenFirstMatchingSubKey(*(PCWSTR *)(a2 + 64), (__int64)v23, v10, v11, &v22),
          CachedContextBaseKey == -1073741772)
      && (v20.Buffer = (wchar_t *)L"*",
          *(_DWORD *)&v20.Length = 262146,
          CachedContextBaseKey = IopOpenRegistryKeyEx(&v22, v23, &v20, 0x20019u),
          CachedContextBaseKey == -1073741772) )
    {
LABEL_9:
      CachedContextBaseKey = 0;
    }
    else if ( CachedContextBaseKey >= 0 )
    {
      for ( i = 0; i < 2; ++i )
      {
        if ( *(_QWORD *)(a2 + 16 * (i + 2LL)) )
        {
          if ( Buffer )
            RtlFreeAnsiString(&UnicodeString);
          if ( !PnpDuplicateUnicodeString((__int64)&UnicodeString, 16LL * i + a2 + 24) )
          {
            Buffer = UnicodeString.Buffer;
            CachedContextBaseKey = -1073741670;
            goto LABEL_40;
          }
          v13 = IopReplaceSeperatorWithPound((__int64)&UnicodeString, (__int64)&UnicodeString);
          Buffer = UnicodeString.Buffer;
          if ( v13 >= 0 )
          {
            v16 = PnpOpenFirstMatchingSubKey(UnicodeString.Buffer, (__int64)v22, v14, v15, &v21);
            CachedContextBaseKey = v16;
            if ( v16 == -1073741772 )
            {
              CachedContextBaseKey = 0;
            }
            else if ( v16 < 0 )
            {
              goto LABEL_40;
            }
            if ( v21 )
              goto LABEL_37;
          }
          else
          {
            CachedContextBaseKey = 0;
          }
        }
      }
      if ( CachedContextBaseKey < 0 )
        goto LABEL_40;
      if ( v21 )
        goto LABEL_37;
      v20.Buffer = (wchar_t *)L"*";
      *(_DWORD *)&v20.Length = 262146;
      v17 = IopOpenRegistryKeyEx(&v21, v22, &v20, 0x20019u);
      CachedContextBaseKey = v17;
      if ( v17 == -1073741772 )
      {
LABEL_35:
        CachedContextBaseKey = 0;
        goto LABEL_40;
      }
      if ( v17 >= 0 )
      {
LABEL_37:
        v20.Buffer = L"Configuration";
        *(_DWORD *)&v20.Length = 1835034;
        v18 = IopOpenRegistryKeyEx(&Handle, v21, &v20, 0x20019u);
        CachedContextBaseKey = v18;
        if ( v18 == -1073741772 )
          goto LABEL_35;
        if ( v18 >= 0 )
          CachedContextBaseKey = PiDevCfgConfigureDeviceKeys(v28, a2, Handle, -1, a3, a4);
      }
LABEL_40:
      if ( Buffer )
        ExFreePool(Buffer);
    }
  }
LABEL_42:
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    ZwClose(v21);
  if ( v22 )
    ZwClose(v22);
  if ( v23 )
    ZwClose(v23);
  return (unsigned int)CachedContextBaseKey;
}
