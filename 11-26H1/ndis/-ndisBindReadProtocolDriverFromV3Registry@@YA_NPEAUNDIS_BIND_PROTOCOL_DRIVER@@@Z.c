/*
 * XREFs of ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x14014BB60
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x14016B3E0 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140138C60 (--_V@YAXPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1401603F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV3Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  void *v1; // r14
  __int64 v2; // r15
  __int64 v3; // rdx
  const wchar_t *v4; // rax
  int v6; // r12d
  int v7; // ecx
  __int16 v8; // dx
  NTSTATUS v9; // eax
  HANDLE v10; // rbx
  Rtl::KString *value; // rsi
  _BYTE *Pool2; // rdi
  NTSTATUS ValueKey; // eax
  NTSTATUS v14; // eax
  void *v15; // rcx
  int v17; // esi
  _WORD *v18; // rax
  HANDLE v19; // rsi
  __int64 v20; // rcx
  int v21; // edi
  NTSTATUS v22; // eax
  _WORD *v23; // rax
  __int64 v24; // rcx
  int v25; // edi
  NTSTATUS v26; // eax
  void *v27; // rsi
  char v28; // r13
  wchar_t *v29; // rax
  void *v30; // rdi
  __int16 v31; // r15
  NTSTATUS v32; // eax
  _DWORD *v33; // rcx
  struct NDIS_BIND_PROTOCOL_DRIVER *v34; // rax
  _BYTE *v35; // r12
  NTSTATUS v36; // eax
  NTSTATUS v37; // r15d
  void *v38; // rcx
  _BYTE *Length; // [rsp+20h] [rbp-E0h]
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG v41[2]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v42[2]; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES v43; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp-30h] BYREF
  struct NDIS_BIND_PROTOCOL_DRIVER *v45; // [rsp+D8h] [rbp-28h]
  __int128 v46; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v47; // [rsp+F0h] [rbp-10h] BYREF
  _GUID v48; // [rsp+100h] [rbp+0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+110h] [rbp+10h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+20h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v52[256]; // [rsp+250h] [rbp+150h] BYREF
  wchar_t Dst[48]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v54[512]; // [rsp+3B0h] [rbp+2B0h] BYREF

  v1 = 0LL;
  v45 = a1;
  a1->ProtocolBindFlags = 0;
  v2 = 0x7FFFLL;
  v46 = 0LL;
  v3 = 0x7FFFLL;
  v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  v6 = -1073741811;
  v7 = -1073741811;
  if ( v3 )
  {
    v7 = 0;
    v8 = 2 * v3;
    *((_QWORD *)&v46 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
    LOWORD(v46) = -2 - v8;
    WORD1(v46) = -v8;
  }
  if ( v7 < 0 )
    return 0;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v46;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v10 = KeyHandle;
  if ( v9 < 0 )
    goto LABEL_12;
  value = a1->Name.__ptr_.__value_;
  v48 = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v41[0] = 0;
  Pool2 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(
               KeyHandle,
               &value->_UNICODE_STRING,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x100u,
               v41);
  if ( ValueKey == -2147483643 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, v41[0], 1852392018LL);
    if ( !Pool2 )
      goto LABEL_12;
    v14 = ZwQueryValueKey(v10, &value->_UNICODE_STRING, KeyValuePartialInformation, Pool2, v41[0], v41);
    v15 = Pool2;
    if ( v14 < 0 )
      goto LABEL_11;
  }
  else
  {
    v15 = 0LL;
    if ( ValueKey < 0 )
      goto LABEL_12;
  }
  if ( *((_DWORD *)Pool2 + 1) != 3 )
  {
    if ( v15 )
LABEL_11:
      operator delete[](v15);
LABEL_12:
    if ( v10 )
      ZwClose(v10);
    return 0;
  }
  v17 = *((_DWORD *)Pool2 + 2);
  if ( v17 == 16 )
    v48 = *(_GUID *)(Pool2 + 12);
  if ( v15 )
    operator delete[](v15);
  if ( v17 != 16 )
    goto LABEL_12;
  Length = v54;
  netsetupBuildObjectPath(4LL, &v48, 0LL);
  v18 = v54;
  *(_OWORD *)v42 = 0LL;
  v19 = 0LL;
  v20 = 0x7FFFLL;
  do
  {
    if ( !*v18 )
      break;
    ++v18;
    --v20;
  }
  while ( v20 );
  v21 = -1073741811;
  if ( v20 )
  {
    v21 = 0;
    LOWORD(v42[0]) = -2 - 2 * v20;
    WORD1(v42[0]) = -2 * v20;
    v42[1] = v54;
  }
  if ( v21 >= 0 )
  {
    *(_QWORD *)v41 = 0LL;
    v43.ObjectName = (PUNICODE_STRING)v42;
    *(_QWORD *)&v43.Length = 48LL;
    *(_QWORD *)&v43.Attributes = 576LL;
    v43.RootDirectory = 0LL;
    *(_OWORD *)&v43.SecurityDescriptor = 0LL;
    v22 = ZwOpenKey((PHANDLE)v41, 1u, &v43);
    v1 = *(void **)v41;
    v21 = v22;
  }
  if ( v21 == -1073741772 )
  {
    if ( !*((_BYTE *)qword_14011F6E0 + 96) )
      goto LABEL_43;
    Length = v54;
    netsetupBuildObjectPath(4LL, &v48, 1LL);
    v23 = v54;
    *(_OWORD *)v42 = 0LL;
    v24 = 0x7FFFLL;
    do
    {
      if ( !*v23 )
        break;
      ++v23;
      --v24;
    }
    while ( v24 );
    v25 = -1073741811;
    if ( v24 )
    {
      v25 = 0;
      LOWORD(v42[0]) = -2 - 2 * v24;
      WORD1(v42[0]) = -2 * v24;
      v42[1] = v54;
    }
    if ( v25 < 0 )
      goto LABEL_43;
    *(_QWORD *)v41 = 0LL;
    v43.ObjectName = (PUNICODE_STRING)v42;
    *(_QWORD *)&v43.Length = 48LL;
    *(_QWORD *)&v43.Attributes = 576LL;
    v43.RootDirectory = 0LL;
    *(_OWORD *)&v43.SecurityDescriptor = 0LL;
    v26 = ZwOpenKey((PHANDLE)v41, 1u, &v43);
    v27 = *(void **)v41;
    v21 = v26;
    if ( v1 )
      ZwClose(v1);
    v1 = v27;
    v19 = 0LL;
  }
  if ( v21 < 0 )
  {
LABEL_43:
    if ( v1 )
      ZwClose(v1);
    goto LABEL_12;
  }
  v28 = 0;
  LODWORD(ResultLength) = 18368;
  LODWORD(Length) = 22819;
  swprintf_s(
    Dst,
    0x2DuLL,
    L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04x",
    2702307829LL,
    Length,
    ResultLength,
    154,
    104,
    208,
    186,
    251,
    87,
    121,
    1,
    2);
  v29 = Dst;
  v47 = 0LL;
  do
  {
    if ( !*v29 )
      break;
    ++v29;
    --v2;
  }
  while ( v2 );
  v30 = 0LL;
  if ( v2 )
  {
    v6 = 0;
    v31 = 2 * v2;
    LOWORD(v47) = -2 - v31;
    WORD1(v47) = -v31;
    *((_QWORD *)&v47 + 1) = Dst;
  }
  if ( v6 >= 0 )
  {
    v42[0] = 0LL;
    v43.ObjectName = (PUNICODE_STRING)&v47;
    *(_QWORD *)&v43.Length = 48LL;
    *(_QWORD *)&v43.Attributes = 576LL;
    v43.RootDirectory = v1;
    *(_OWORD *)&v43.SecurityDescriptor = 0LL;
    v32 = ZwOpenKey(v42, 1u, &v43);
    v19 = v42[0];
    v6 = v32;
  }
  if ( v6 != -1073741772 )
  {
    if ( v6 )
    {
LABEL_62:
      if ( v19 )
        ZwClose(v19);
      goto LABEL_43;
    }
    ValueName = 0LL;
    memset(v52, 0, sizeof(v52));
    v41[0] = 0;
    v35 = v52;
    v36 = ZwQueryValueKey(v19, &ValueName, KeyValuePartialInformation, v52, 0x100u, v41);
    v37 = v36;
    if ( v36 == -2147483643 )
    {
      v35 = (_BYTE *)ExAllocatePool2(256LL, v41[0], 1852392018LL);
      v30 = v35;
      if ( !v35 )
      {
        v37 = -1073741670;
        goto LABEL_84;
      }
      v37 = ZwQueryValueKey(v19, &ValueName, KeyValuePartialInformation, v35, v41[0], v41);
      if ( v37 < 0 )
      {
        v38 = v35;
LABEL_83:
        operator delete[](v38);
        goto LABEL_84;
      }
    }
    else if ( v36 < 0 )
    {
      goto LABEL_84;
    }
    if ( *((_DWORD *)v35 + 1) != -65519 )
    {
      if ( v30 )
        operator delete[](v30);
      v37 = -1073741788;
LABEL_84:
      if ( v19 )
        ZwClose(v19);
      if ( v37 )
        goto LABEL_43;
      if ( v28 )
      {
        v34 = v45;
        goto LABEL_90;
      }
      goto LABEL_88;
    }
    if ( *((_DWORD *)v35 + 2) != 1 )
    {
      v37 = -1073741762;
LABEL_81:
      if ( !v30 )
        goto LABEL_84;
      v38 = v30;
      goto LABEL_83;
    }
    if ( v35[12] )
    {
      if ( v35[12] != 1 )
      {
        v37 = -1073741762;
        goto LABEL_81;
      }
      v28 = 1;
    }
    v37 = 0;
    goto LABEL_81;
  }
  v33 = &unk_1400F7FA0;
  while ( v33[4] != 2
       || *(_QWORD *)v33 != NETSETUPPKEY_ProtocolDriver_NoStartAtBootHint
       || *((_QWORD *)v33 + 1) != 0x17957FBBAD0689ALL )
  {
    v33 += 5;
    if ( v33 == (_DWORD *)&unk_1400F87FC )
      goto LABEL_62;
  }
  if ( !v19 )
  {
LABEL_88:
    v34 = v45;
    v45->ProtocolBindFlags |= 1u;
    goto LABEL_90;
  }
  ZwClose(v19);
  v34 = v45;
  v45->ProtocolBindFlags |= 1u;
LABEL_90:
  v34->Guid = v48;
  if ( v1 )
    ZwClose(v1);
  if ( v10 )
    ZwClose(v10);
  return 1;
}
