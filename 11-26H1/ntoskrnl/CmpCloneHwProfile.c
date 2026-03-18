/*
 * XREFs of CmpCloneHwProfile @ 0x140852134
 * Callers:
 *     CmSetAcpiHwProfile @ 0x140851648 (CmSetAcpiHwProfile.c)
 *     CmpCreateHardwareProfiles @ 0x140CE9D78 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     _wtoi @ 0x1405368D0 (_wtoi.c)
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1407236B0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x140723A30 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     ZwQuerySecurityObject @ 0x140726110 (ZwQuerySecurityObject.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14085294C (CmpCreateHwProfileFriendlyName.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpRebuildKcbCache @ 0x1408BCBD8 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     CmpCopySyncTree @ 0x14098709C (CmpCopySyncTree.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x140A76B60 (ExUuidCreate.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
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
  __int64 v17; // r8
  HANDLE v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rdi
  _QWORD *v21; // rsi
  __int64 v22; // rax
  ULONG_PTR v23; // rcx
  __int64 CellFlat; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  ULONG_PTR v27; // rcx
  __int64 CellPaged; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v34; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v37; // [rsp+68h] [rbp-98h] BYREF
  ULONG Disposition; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v42; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  PVOID v44[2]; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v46; // [rsp+E8h] [rbp-18h] BYREF
  _KAFFINITY_EX v47; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t Dst[64]; // [rsp+220h] [rbp+120h] BYREF

  Pool2 = 0LL;
  v34 = a3;
  Length = 0;
  *KeyHandle = 0LL;
  *a7 = a4;
  v9 = a3;
  DestinationString = 0LL;
  v37 = 0LL;
  ValueName = 0LL;
  Disposition = 0;
  *(_OWORD *)Object = 0LL;
  Data = 0;
  *(_OWORD *)v44 = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes, 0, 44);
  v42 = 0LL;
  Handle = 0LL;
  v46 = 0LL;
  memset(&v47, 0, 40);
  CmpInitializeDelayDerefContext(&v46);
  CmpInitializeThreadInfo(&v47);
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
      v12 = ZwCreateKey(&v37, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      if ( v12 >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"Hardware Profiles");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = ZwOpenKey(&v42, 0x20019u, &ObjectAttributes);
        if ( v12 >= 0 )
        {
          v12 = ZwQueryKey(v42, KeyFullInformation, &v47.StaticBitmap[4], 0x100u, &ResultLength);
          if ( v12 >= 0 )
          {
            v14 = HIDWORD(v47.StaticBitmap[6]);
            v15 = -1;
            Data = -1;
            if ( HIDWORD(v47.StaticBitmap[6]) )
            {
              do
              {
                if ( ZwEnumerateKey(v42, v13, KeyBasicInformation, &v47.StaticBitmap[4], 0xFEu, &ResultLength) < 0 )
                  break;
                *((_WORD *)&v47.StaticBitmap[6] + ((unsigned __int64)HIDWORD(v47.StaticBitmap[5]) >> 1)) = 0;
                if ( wtoi((const wchar_t *)&v47.StaticBitmap[6]) )
                {
                  v16 = *a7;
                  if ( wtoi((const wchar_t *)&v47.StaticBitmap[6]) != v16 )
                  {
                    ValueName.Length = WORD2(v47.StaticBitmap[5]);
                    ObjectAttributes.Length = 48;
                    ValueName.MaximumLength = WORD2(v47.StaticBitmap[5]) + 2;
                    ObjectAttributes.Attributes = 576;
                    ValueName.Buffer = (wchar_t *)&v47.StaticBitmap[6];
                    ObjectAttributes.RootDirectory = v42;
                    ObjectAttributes.ObjectName = &ValueName;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                    {
                      RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
                      if ( ZwQueryValueKey(
                             Handle,
                             &ValueName,
                             KeyValueFullInformation,
                             &v47.StaticBitmap[4],
                             0x100u,
                             &ResultLength) >= 0
                        && HIDWORD(v47.StaticBitmap[4]) == 4
                        && (*(_DWORD *)((char *)&v47.StaticBitmap[4] + LODWORD(v47.StaticBitmap[5])) > Data || Data == -1) )
                      {
                        Data = *(_DWORD *)((char *)&v47.StaticBitmap[4] + LODWORD(v47.StaticBitmap[5]));
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
              v9 = v34;
            }
            Data = v15 + 1;
            RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
            ZwSetValueKey(v37, &ValueName, 0, 4u, &Data, 4u);
            if ( (int)CmpCreateHwProfileFriendlyName(a1, a5, *a7, Object) >= 0 )
            {
              RtlInitUnicodeString(&ValueName, L"FriendlyName");
              ZwSetValueKey(v37, &ValueName, 0, 1u, Object[1], LOWORD(Object[0]) + 2);
              RtlFreeAnsiString((PUNICODE_STRING)Object);
            }
            Data = 0;
            RtlInitUnicodeString(&ValueName, L"Aliasable");
            ZwSetValueKey(v37, &ValueName, 0, 4u, &Data, 4u);
            Data = 1;
            RtlInitUnicodeString(&ValueName, L"Cloned");
            ZwSetValueKey(v37, &ValueName, 0, 4u, &Data, 4u);
            if ( ExUuidCreate((UUID *)&v47.StaticBitmap[2]) >= 0 )
            {
              LOBYTE(v17) = 1;
              if ( (int)RtlStringFromGUIDEx(&v47.StaticBitmap[2], v44, v17) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"HwProfileGuid");
                ZwSetValueKey(v37, &ValueName, 0, 1u, v44[1], WORD1(v44[0]));
                RtlFreeAnsiString((PUNICODE_STRING)v44);
              }
            }
            Object[0] = 0LL;
            v12 = ObReferenceObjectByHandle(v9, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, Object, 0LL);
            if ( v12 >= 0 )
            {
              v18 = *KeyHandle;
              v34 = 0LL;
              v12 = ObReferenceObjectByHandle(v18, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &v34, 0LL);
              if ( v12 >= 0 )
              {
                CmpLockRegistryExclusive(v19);
                v20 = v34;
                v21 = Object[0];
                v12 = CmpCopySyncTree(
                        *(_QWORD *)(*((_QWORD *)Object[0] + 1) + 32LL),
                        *(_DWORD *)(*((_QWORD *)Object[0] + 1) + 40LL),
                        *(_QWORD *)(*((_QWORD *)v34 + 1) + 32LL),
                        *(_DWORD *)(*((_QWORD *)v34 + 1) + 40LL),
                        2,
                        0);
                if ( v12 >= 0 )
                {
                  v22 = v21[1];
                  v34 = (PVOID)0xFFFFFFFFLL;
                  Object[0] = (PVOID)0xFFFFFFFFLL;
                  v23 = *(_QWORD *)(v22 + 32);
                  if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
                    CellFlat = HvpGetCellFlat(v23, *(unsigned int *)(v22 + 40), &v34);
                  else
                    CellFlat = HvpGetCellPaged(v23);
                  v25 = CellFlat;
                  if ( CellFlat )
                  {
                    v26 = v20[1];
                    v27 = *(_QWORD *)(v26 + 32);
                    if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
                      CellPaged = HvpGetCellFlat(v27, *(unsigned int *)(v26 + 40), Object);
                    else
                      CellPaged = HvpGetCellPaged(v27);
                    if ( CellPaged )
                    {
                      *(_WORD *)(CellPaged + 52) = *(_WORD *)(v25 + 52);
                      *(_DWORD *)(CellPaged + 56) = *(_DWORD *)(v25 + 56);
                      CmpRebuildKcbCache(v20[1]);
                      v29 = *(_QWORD *)(v20[1] + 32LL);
                      if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v29, Object);
                      else
                        HvpReleaseCellPaged(v29, Object);
                      v12 = 0;
                    }
                    else
                    {
                      v12 = -1073741670;
                    }
                    v30 = *(_QWORD *)(v21[1] + 32LL);
                    if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v30, &v34);
                    else
                      HvpReleaseCellPaged(v30, &v34);
                  }
                  else
                  {
                    v12 = -1073741670;
                  }
                }
                CmpDrainDelayDerefContext((_QWORD **)&v46);
                CmpUnlockRegistry(v31);
              }
            }
          }
        }
        else
        {
          v42 = 0LL;
        }
      }
      else
      {
        v37 = 0LL;
      }
    }
    else
    {
      v12 = 0;
    }
  }
LABEL_60:
  ZwClose(v9);
  if ( v37 )
    ZwClose(v37);
  if ( v42 )
    ZwClose(v42);
  if ( v12 < 0 && *KeyHandle )
    ZwClose(*KeyHandle);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v47);
  return (unsigned int)v12;
}
