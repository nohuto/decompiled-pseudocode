/*
 * XREFs of ExpWnfLookupPermanentName @ 0x1409C8E98
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1408454E8 (ExpNtDeleteWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1409C3B60 (NtQueryWnfStateNameInformation.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1409C46A4 (ExpWnfSubscribeWnfStateChange.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409C4A4C (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateName @ 0x1409C4FD0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1409C5400 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     ExpWnfComposeValueName @ 0x1409C78CC (ExpWnfComposeValueName.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1409C907C (ExpWnfGetNameStoreRegistryRoot.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1409C9570 (RtlValidRelativeSecurityDescriptor.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1409C9C60 (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfLookupPermanentName(unsigned __int64 a1, PSECURITY_DESCRIPTOR **a2)
{
  PSECURITY_DESCRIPTOR *v4; // rdi
  unsigned int v5; // ebx
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // r14
  char v8; // r15
  int NameStoreRegistryRoot; // ebx
  char *i; // rsi
  NTSTATUS v11; // eax
  char *v12; // rbx
  ULONG v13; // esi
  ULONG v14; // eax
  unsigned int v15; // esi
  char *v16; // rbx
  _DWORD *v17; // rcx
  __int64 Pool2; // rax
  ULONG Length; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  char v23; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&ValueName.Length = 2228224LL;
  KeyHandle = 0LL;
  Length = 0;
  v4 = 0LL;
  ValueName.Buffer = (wchar_t *)&v23;
  ExpWnfComposeValueName(a1, &ValueName);
  v5 = (a1 >> 4) & 3;
  if ( v5 )
  {
    v7 = 0LL;
    v8 = 0;
  }
  else
  {
    v6 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
    v7 = PsAttachSiloToCurrentThread(v6);
    v8 = 1;
  }
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(v5, &KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_16;
  for ( i = 0LL; ; i = (char *)(Pool2 + 24) )
  {
    v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, i, Length, &Length);
    NameStoreRegistryRoot = v11;
    if ( v11 != -1073741789 )
      break;
    if ( v4 )
      ExFreePoolWithTag(v4, 0x20666E57u);
    Pool2 = ExAllocatePool2(0x100uLL);
    v4 = (PSECURITY_DESCRIPTOR *)Pool2;
    if ( !Pool2 )
    {
      NameStoreRegistryRoot = -1073741670;
      goto LABEL_16;
    }
  }
  if ( v11 >= 0 )
  {
    if ( *((_DWORD *)i + 1) == 3 )
    {
      v12 = i + 12;
      *(_OWORD *)v4 = 0LL;
      v4[2] = 0LL;
      v13 = *((_DWORD *)i + 2);
      v4[2] = v12;
      if ( RtlValidRelativeSecurityDescriptor(v12, v13, 0) )
      {
        ExpWnfSpecializeSecurityDescriptor(v4[2]);
        v14 = RtlLengthSecurityDescriptor(v4[2]);
        v15 = v13 - v14;
        v16 = &v12[v14];
        if ( v15 >= 4 )
        {
          v17 = v16 + 4;
          *(_DWORD *)v4 = *(_DWORD *)v16;
          NameStoreRegistryRoot = 0;
          if ( v15 - 4 < 0x10 )
            v17 = 0LL;
          v4[1] = v17;
          *a2 = v4;
          goto LABEL_16;
        }
      }
    }
    NameStoreRegistryRoot = -1073741823;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x20666E57u);
LABEL_16:
  if ( v8 )
    PsDetachSiloFromCurrentThread(v7);
  return (unsigned int)NameStoreRegistryRoot;
}
