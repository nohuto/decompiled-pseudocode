/*
 * XREFs of CmpCloneHwProfile @ 0x140858444
 * Callers:
 *     CmSetAcpiHwProfile @ 0x140857958 (CmSetAcpiHwProfile.c)
 *     CmpCreateHardwareProfiles @ 0x140CF0118 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     _wtoi @ 0x140538D50 (_wtoi.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwQuerySecurityObject @ 0x14072ACE0 (ZwQuerySecurityObject.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140858C5C (CmpCreateHwProfileFriendlyName.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpRebuildKcbCache @ 0x1408C31A8 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmpCopySyncTree @ 0x140948D9C (CmpCopySyncTree.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCloneHwProfile(
        void *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        unsigned __int16 a5,
        PHANDLE KeyHandle,
        unsigned int *a7)
{
  void *Pool2; // rdi
  PVOID v9; // r12
  NTSTATUS v11; // eax
  NTSTATUS v12; // ebx
  ULONG v13; // edi
  ULONG v14; // esi
  int v15; // eax
  unsigned int v16; // ebx
  HANDLE v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  _QWORD *v20; // rsi
  __int64 v21; // rax
  ULONG_PTR v22; // rcx
  __int64 CellFlat; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  __int64 CellPaged; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v33; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v36; // [rsp+68h] [rbp-98h] BYREF
  ULONG Disposition; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v41; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING GuidString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v45; // [rsp+E8h] [rbp-18h] BYREF
  _KAFFINITY_EX v46; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t Dst[64]; // [rsp+220h] [rbp+120h] BYREF

  Pool2 = 0LL;
  v33 = a3;
  Length = 0;
  *KeyHandle = 0LL;
  *a7 = a4;
  v9 = a3;
  DestinationString = 0LL;
  v36 = 0LL;
  ValueName = 0LL;
  Disposition = 0;
  *(_OWORD *)Object = 0LL;
  Data = 0;
  GuidString = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes, 0, 44);
  v41 = 0LL;
  Handle = 0LL;
  v45 = 0LL;
  memset(&v46, 0, 40);
  CmpInitializeDelayDerefContext(&v45);
  CmpInitializeThreadInfo(&v46);
  while ( *a7 < 0xC8 )
  {
    ++*a7;
    swprintf_s(Dst, 0x40uLL, L"%04d");
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwOpenKey(KeyHandle, 0x2001Fu, &ObjectAttributes);
    v12 = v11;
    if ( v11 < 0 )
    {
      if ( v11 != -1073741772 )
        goto LABEL_60;
      break;
    }
    ZwClose(*KeyHandle);
  }
  if ( ZwQuerySecurityObject(v9, 4u, 0LL, 0, &Length) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      if ( ZwQuerySecurityObject(v9, 4u, Pool2, Length, &Length) < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
      }
    }
  }
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = Pool2;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v12 = ZwCreateKey(KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v13 = 0;
  if ( v12 >= 0 )
  {
    if ( Disposition == 1 )
    {
      swprintf_s(Dst, 0x40uLL, L"Hardware Profiles\\%04d", *a7);
      RtlInitUnicodeString(&ValueName, Dst);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &ValueName;
      ObjectAttributes.RootDirectory = a1;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwCreateKey(&v36, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      if ( v12 >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"Hardware Profiles");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = ZwOpenKey(&v41, 0x20019u, &ObjectAttributes);
        if ( v12 >= 0 )
        {
          v12 = ZwQueryKey(v41, KeyFullInformation, &v46.StaticBitmap[4], 0x100u, &ResultLength);
          if ( v12 >= 0 )
          {
            v14 = HIDWORD(v46.StaticBitmap[6]);
            v15 = -1;
            Data = -1;
            if ( HIDWORD(v46.StaticBitmap[6]) )
            {
              do
              {
                if ( ZwEnumerateKey(v41, v13, KeyBasicInformation, &v46.StaticBitmap[4], 0xFEu, &ResultLength) < 0 )
                  break;
                *((_WORD *)&v46.StaticBitmap[6] + ((unsigned __int64)HIDWORD(v46.StaticBitmap[5]) >> 1)) = 0;
                if ( wtoi((const wchar_t *)&v46.StaticBitmap[6]) )
                {
                  v16 = *a7;
                  if ( wtoi((const wchar_t *)&v46.StaticBitmap[6]) != v16 )
                  {
                    ValueName.Length = WORD2(v46.StaticBitmap[5]);
                    ObjectAttributes.Length = 48;
                    ValueName.MaximumLength = WORD2(v46.StaticBitmap[5]) + 2;
                    ObjectAttributes.Attributes = 576;
                    ValueName.Buffer = (wchar_t *)&v46.StaticBitmap[6];
                    ObjectAttributes.RootDirectory = v41;
                    ObjectAttributes.ObjectName = &ValueName;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                    {
                      RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
                      if ( ZwQueryValueKey(
                             Handle,
                             &ValueName,
                             KeyValueFullInformation,
                             &v46.StaticBitmap[4],
                             0x100u,
                             &ResultLength) >= 0
                        && HIDWORD(v46.StaticBitmap[4]) == 4
                        && (*(_DWORD *)((char *)&v46.StaticBitmap[4] + LODWORD(v46.StaticBitmap[5])) > Data || Data == -1) )
                      {
                        Data = *(_DWORD *)((char *)&v46.StaticBitmap[4] + LODWORD(v46.StaticBitmap[5]));
                      }
                      ZwClose(Handle);
                    }
                    Handle = 0LL;
                  }
                }
                ++v13;
              }
              while ( v13 < v14 );
              v15 = Data;
              v9 = v33;
            }
            Data = v15 + 1;
            RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
            ZwSetValueKey(v36, &ValueName, 0, 4u, &Data, 4u);
            if ( (int)CmpCreateHwProfileFriendlyName(a1, a5, *a7, Object) >= 0 )
            {
              RtlInitUnicodeString(&ValueName, L"FriendlyName");
              ZwSetValueKey(v36, &ValueName, 0, 1u, Object[1], LOWORD(Object[0]) + 2);
              RtlFreeAnsiString((PUNICODE_STRING)Object);
            }
            Data = 0;
            RtlInitUnicodeString(&ValueName, L"Aliasable");
            ZwSetValueKey(v36, &ValueName, 0, 4u, &Data, 4u);
            Data = 1;
            RtlInitUnicodeString(&ValueName, L"Cloned");
            ZwSetValueKey(v36, &ValueName, 0, 4u, &Data, 4u);
            if ( ExUuidCreate((UUID *)&v46.StaticBitmap[2]) >= 0
              && RtlStringFromGUIDEx((PGUID)&v46.StaticBitmap[2], &GuidString, 1u) >= 0 )
            {
              RtlInitUnicodeString(&ValueName, L"HwProfileGuid");
              ZwSetValueKey(v36, &ValueName, 0, 1u, GuidString.Buffer, GuidString.MaximumLength);
              RtlFreeAnsiString(&GuidString);
            }
            Object[0] = 0LL;
            v12 = ObReferenceObjectByHandle(v9, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, Object, 0LL);
            if ( v12 >= 0 )
            {
              v17 = *KeyHandle;
              v33 = 0LL;
              v12 = ObReferenceObjectByHandle(v17, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &v33, 0LL);
              if ( v12 >= 0 )
              {
                CmpLockRegistryExclusive(v18);
                v19 = v33;
                v20 = Object[0];
                v12 = CmpCopySyncTree(
                        *(_QWORD *)(*((_QWORD *)Object[0] + 1) + 32LL),
                        *(_DWORD *)(*((_QWORD *)Object[0] + 1) + 40LL),
                        *(_QWORD *)(*((_QWORD *)v33 + 1) + 32LL),
                        *(_DWORD *)(*((_QWORD *)v33 + 1) + 40LL),
                        2,
                        0);
                if ( v12 >= 0 )
                {
                  v21 = v20[1];
                  v33 = (PVOID)0xFFFFFFFFLL;
                  Object[0] = (PVOID)0xFFFFFFFFLL;
                  v22 = *(_QWORD *)(v21 + 32);
                  if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
                    CellFlat = HvpGetCellFlat(v22, *(unsigned int *)(v21 + 40), &v33);
                  else
                    CellFlat = HvpGetCellPaged(v22);
                  v24 = CellFlat;
                  if ( CellFlat )
                  {
                    v25 = v19[1];
                    v26 = *(_QWORD *)(v25 + 32);
                    if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
                      CellPaged = HvpGetCellFlat(v26, *(unsigned int *)(v25 + 40), Object);
                    else
                      CellPaged = HvpGetCellPaged(v26);
                    if ( CellPaged )
                    {
                      *(_WORD *)(CellPaged + 52) = *(_WORD *)(v24 + 52);
                      *(_DWORD *)(CellPaged + 56) = *(_DWORD *)(v24 + 56);
                      CmpRebuildKcbCache(v19[1]);
                      v28 = *(_QWORD *)(v19[1] + 32LL);
                      if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v28, Object);
                      else
                        HvpReleaseCellPaged(v28, Object);
                      v12 = 0;
                    }
                    else
                    {
                      v12 = -1073741670;
                    }
                    v29 = *(_QWORD *)(v20[1] + 32LL);
                    if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v29, &v33);
                    else
                      HvpReleaseCellPaged(v29, &v33);
                  }
                  else
                  {
                    v12 = -1073741670;
                  }
                }
                CmpDrainDelayDerefContext((_QWORD **)&v45);
                CmpUnlockRegistry(v30);
              }
            }
          }
        }
        else
        {
          v41 = 0LL;
        }
      }
      else
      {
        v36 = 0LL;
      }
    }
    else
    {
      v12 = 0;
    }
  }
LABEL_60:
  ZwClose(v9);
  if ( v36 )
    ZwClose(v36);
  if ( v41 )
    ZwClose(v41);
  if ( v12 < 0 && *KeyHandle )
    ZwClose(*KeyHandle);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v46);
  return (unsigned int)v12;
}
