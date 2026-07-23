/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x1409DA988
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     PnpOpenFirstMatchingSubKey @ 0x1407A7370 (PnpOpenFirstMatchingSubKey.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1409AC818 (PnpDeviceObjectToDeviceInstance.c)
 *     PipFindDeviceOverrideEntry @ 0x1409DAC70 (PipFindDeviceOverrideEntry.c)
 *     PnpGetDeviceLocationStrings @ 0x1409DB334 (PnpGetDeviceLocationStrings.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, void *a2, void *a3, bool *a4)
{
  unsigned int v4; // r12d
  void *v5; // r14
  bool *v6; // r13
  int DeviceRegProp; // ebx
  char v11; // cl
  int DeviceOverrideEntry; // eax
  char v13; // dl
  char v14; // r8
  int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rcx
  unsigned int *v21; // r13
  int v22; // edi
  __int64 Pool2; // rax
  int v24; // eax
  __int64 v25; // rcx
  char v26; // al
  NTSTATUS v27; // eax
  int v28; // [rsp+40h] [rbp-89h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-81h] BYREF
  int v30; // [rsp+58h] [rbp-71h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-69h] BYREF
  __int128 v32; // [rsp+68h] [rbp-61h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-51h]
  unsigned int v34; // [rsp+88h] [rbp-41h]
  int v35; // [rsp+8Ch] [rbp-3Dh] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp-39h] BYREF
  HANDLE v37; // [rsp+98h] [rbp-31h] BYREF
  PVOID P; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD v39[2]; // [rsp+A8h] [rbp-21h] BYREF
  bool *v40; // [rsp+B0h] [rbp-19h]
  char KeyValueInformation[4]; // [rsp+B8h] [rbp-11h] BYREF
  int v42; // [rsp+BCh] [rbp-Dh]
  int v43; // [rsp+C0h] [rbp-9h]
  unsigned int v44; // [rsp+C4h] [rbp-5h]

  v4 = 0;
  v40 = a4;
  v5 = 0LL;
  v37 = 0LL;
  v6 = a4;
  ResultLength = 0;
  P = 0LL;
  v35 = 0;
  v28 = 0;
  v30 = 0;
  DeviceRegProp = -1073741772;
  v34 = 0;
  ValueName = 0LL;
  if ( !PnpDeviceOverrideHashList )
    return (unsigned int)DeviceRegProp;
  v11 = *(_BYTE *)(a1 + 680);
  DeviceOverrideEntry = -1073741772;
  v13 = v11;
  v32 = 0LL;
  *(_OWORD *)Handle = 0LL;
  if ( (v11 & 1) == 0 )
  {
    *((_QWORD *)&v32 + 1) = L"ChildLocationPaths";
    v14 = v11;
    LODWORD(v32) = 2490404;
    if ( a2 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2);
      v13 = *(_BYTE *)(a1 + 680);
      v14 = v13;
    }
    v11 = v14;
    if ( DeviceOverrideEntry >= 0 )
      goto LABEL_23;
    if ( a3 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a3);
      v11 = *(_BYTE *)(a1 + 680);
      v13 = v11;
    }
    if ( DeviceOverrideEntry >= 0 )
    {
LABEL_23:
      ZwClose(Handle[0]);
      *(_BYTE *)(a1 + 680) |= 4u;
      v11 = *(_BYTE *)(a1 + 680);
      v13 = v11;
    }
  }
  if ( (v11 & 3) != 1 )
  {
    LODWORD(v32) = 1835034;
    *((_QWORD *)&v32 + 1) = L"LocationPaths";
    if ( a2 )
    {
      v15 = PipFindDeviceOverrideEntry(a2);
      v11 = *(_BYTE *)(a1 + 680);
      DeviceRegProp = v15;
      v13 = v11;
    }
    if ( DeviceRegProp >= 0 )
      goto LABEL_24;
    if ( a3 )
    {
      v16 = PipFindDeviceOverrideEntry(a3);
      v11 = *(_BYTE *)(a1 + 680);
      DeviceRegProp = v16;
      v13 = v11;
    }
    if ( DeviceRegProp >= 0 )
LABEL_24:
      v11 = v13 | 2;
  }
  *(_BYTE *)(a1 + 680) = v11 | 1;
  if ( DeviceRegProp >= 0 )
    goto LABEL_17;
  v20 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v20 + 680) & 5) == 1 )
    return (unsigned int)DeviceRegProp;
  LODWORD(v32) = 2490404;
  *((_QWORD *)&v32 + 1) = L"ChildLocationPaths";
  DeviceRegProp = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v20 + 32), (__int64)&v37, 131097);
  if ( DeviceRegProp < 0 )
    return (unsigned int)DeviceRegProp;
  v39[0] = 2;
  v21 = v39;
  v22 = 256;
  v39[1] = 3;
  v28 = 256;
  do
  {
    if ( !v5 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v22 = v28;
      v5 = (void *)Pool2;
      if ( !Pool2 )
        goto LABEL_38;
    }
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
                      (__int64)v37,
                      *v21,
                      (__int64)&v30,
                      (__int64)v5,
                      (__int64)&v28,
                      0);
    if ( DeviceRegProp == -1073741789 )
    {
      ExFreePoolWithTag(v5, 0);
      v5 = (void *)ExAllocatePool2(0x100uLL);
      if ( v5 )
      {
        v22 = v28;
        goto LABEL_43;
      }
      v22 = v28;
LABEL_38:
      DeviceRegProp = -1073741670;
LABEL_51:
      v28 = v22;
      goto LABEL_43;
    }
    v24 = v22;
    if ( DeviceRegProp >= 0 )
    {
      if ( v30 != 7 )
      {
        DeviceRegProp = -1073741823;
        goto LABEL_51;
      }
      DeviceRegProp = PipFindDeviceOverrideEntry(v5);
      v24 = v22;
    }
    v28 = v24;
    v22 = v24;
    if ( DeviceRegProp >= 0 )
      break;
LABEL_43:
    ++v4;
    ++v21;
  }
  while ( v4 < 2 );
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  ZwClose(v37);
  v25 = *(_QWORD *)(a1 + 16);
  v26 = *(_BYTE *)(v25 + 680);
  if ( (v26 & 1) == 0 )
  {
    if ( DeviceRegProp >= 0 )
      *(_BYTE *)(v25 + 680) = v26 | 4;
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + 680LL) |= 1u;
  }
  if ( DeviceRegProp >= 0 )
  {
    v4 = v34;
    v6 = v40;
LABEL_17:
    KeyHandle = 0LL;
    if ( LODWORD(Handle[1]) != 1
      || (*(_DWORD *)&ValueName.Length = 262146,
          ValueName.Buffer = (wchar_t *)L"*",
          DeviceRegProp = IopOpenRegistryKeyEx(&KeyHandle, Handle[0], &ValueName, 131097LL),
          DeviceRegProp < 0) )
    {
      DeviceRegProp = PnpGetDeviceLocationStrings(a1, &P, &v35);
      if ( DeviceRegProp < 0
        || (DeviceRegProp = PnpOpenFirstMatchingSubKey((PCWSTR)P, (__int64)Handle[0], v17, v18, &KeyHandle),
            ExFreePoolWithTag(P, 0),
            DeviceRegProp < 0) )
      {
        if ( LODWORD(Handle[1]) > 1 )
        {
          *(_DWORD *)&ValueName.Length = 262146;
          ValueName.Buffer = (wchar_t *)L"*";
          DeviceRegProp = IopOpenRegistryKeyEx(&KeyHandle, Handle[0], &ValueName, 131097LL);
        }
      }
    }
    ZwClose(Handle[0]);
    if ( DeviceRegProp >= 0 )
    {
      *(_DWORD *)&ValueName.Length = 1310738;
      ValueName.Buffer = L"Removable";
      v27 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x14u,
              &ResultLength);
      DeviceRegProp = v27;
      if ( v27 >= 0 )
      {
        if ( v42 == 4 && v43 == 4 )
          v4 = v44;
        else
          DeviceRegProp = -1073741823;
      }
      ZwClose(KeyHandle);
      *v6 = v4 != 0;
    }
  }
  return (unsigned int)DeviceRegProp;
}
