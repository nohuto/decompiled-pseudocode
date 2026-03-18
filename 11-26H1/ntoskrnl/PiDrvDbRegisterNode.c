/*
 * XREFs of PiDrvDbRegisterNode @ 0x1407B6B90
 * Callers:
 *     PiDrvDbInit @ 0x1407B583C (PiDrvDbInit.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407B7038 (PiDrvDbRegisterNodeCallback.c)
 *     PiDrvDbMountNode @ 0x140B65614 (PiDrvDbMountNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1404B0AA4 (RtlStringCchPrintfW.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140723EF0 (ZwOpenDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x140724CF0 (ZwCreateSymbolicLinkObject.c)
 *     PiDrvDbCreateNode @ 0x1407B502C (PiDrvDbCreateNode.c)
 *     PiDrvDbDestroyNode @ 0x1407B5328 (PiDrvDbDestroyNode.c)
 *     PiDrvDbDriverStoreNodesUpdated @ 0x1407B53CC (PiDrvDbDriverStoreNodesUpdated.c)
 *     _PnpCtxRegisterMachineNode @ 0x140895FF8 (_PnpCtxRegisterMachineNode.c)
 *     DrvDbRegisterDatabase @ 0x14089F44C (DrvDbRegisterDatabase.c)
 *     DrvDbUnregisterDatabase @ 0x14089F5F4 (DrvDbUnregisterDatabase.c)
 *     RtlFindUnicodeSubstring @ 0x1408BFA80 (RtlFindUnicodeSubstring.c)
 *     RtlDuplicateUnicodeString @ 0x14091E750 (RtlDuplicateUnicodeString.c)
 *     _PnpCtxRegOpenKey @ 0x140997890 (_PnpCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbRegisterNode(PCWSTR Source, int a2, int a3, const WCHAR *a4, const WCHAR *a5)
{
  const WCHAR *v6; // rsi
  wchar_t *Pool2; // r14
  char v8; // r13
  int v11; // eax
  char *v12; // rdi
  int SymbolicLinkObject; // ebx
  unsigned __int64 v14; // rbx
  int v15; // r9d
  int v16; // esi
  int v17; // ecx
  __int64 v18; // r8
  __int64 UnicodeSubstring; // rax
  unsigned __int16 i; // cx
  int v21; // ecx
  int v22; // r9d
  int v23; // eax
  __int64 v24; // rcx
  __int64 v26; // [rsp+30h] [rbp-99h]
  UNICODE_STRING StringIn; // [rsp+68h] [rbp-61h] BYREF
  int v28; // [rsp+78h] [rbp-51h] BYREF
  int v29; // [rsp+7Ch] [rbp-4Dh] BYREF
  PVOID P; // [rsp+80h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+90h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  HANDLE v34; // [rsp+C8h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp+7h] BYREF
  UNICODE_STRING v36; // [rsp+E0h] [rbp+17h] BYREF

  P = 0LL;
  DirectoryHandle = 0LL;
  v6 = Source;
  v34 = 0LL;
  Handle = 0LL;
  v29 = 0;
  v28 = 0;
  Pool2 = 0LL;
  v8 = 0;
  StringIn = 0LL;
  DestinationString = 0LL;
  v36 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = PiDrvDbCreateNode(v6, a2, a4, a5, &P);
  v12 = (char *)P;
  SymbolicLinkObject = v11;
  if ( v11 >= 0 )
  {
    if ( (*((_DWORD *)P + 16) & 1) != 0 )
    {
      v16 = a2 & 8;
    }
    else
    {
      v14 = *((unsigned __int16 *)P + 16) + 32LL;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        SymbolicLinkObject = -1073741670;
LABEL_33:
        v6 = Source;
        goto LABEL_34;
      }
      SymbolicLinkObject = RtlStringCchPrintfW(Pool2, v14 >> 1, L"%wZ\\%ws", v12 + 32, L"DriverDatabase");
      if ( SymbolicLinkObject < 0 )
        goto LABEL_33;
      v16 = a2 & 8;
      v17 = (v16 != 0 ? 2 : 0) | 1;
      if ( (a2 & 0x40) == 0 )
        v17 = (a2 & 8) != 0 ? 2 : 0;
      SymbolicLinkObject = DrvDbRegisterDatabase(v17, (_DWORD)Source, a3, v15, (__int64)Pool2, v17);
      if ( SymbolicLinkObject < 0 )
        goto LABEL_33;
      v8 = 1;
    }
    if ( !v16 )
    {
LABEL_32:
      PiDrvDbDriverStoreNodesUpdated();
      v12 = 0LL;
      goto LABEL_33;
    }
    SymbolicLinkObject = PnpSetObjectProperty(
                           PiPnpRtlCtx,
                           *((_QWORD *)v12 + 3),
                           7,
                           *((_QWORD *)v12 + 9),
                           0LL,
                           (__int64)DEVPKEY_DriverDatabase_FilePath,
                           18,
                           *((_QWORD *)v12 + 7),
                           (unsigned int)*((unsigned __int16 *)v12 + 24) + 2,
                           0);
    if ( SymbolicLinkObject < 0 )
      goto LABEL_33;
    StringIn.Buffer = (wchar_t *)*((_QWORD *)v12 + 7);
    RtlInitUnicodeString(&v36, L"\\System32\\config\\");
    LOBYTE(v18) = 1;
    UnicodeSubstring = RtlFindUnicodeSubstring(v12 + 48, &v36, v18);
    if ( UnicodeSubstring )
    {
      i = 2 * ((__int64)(unsigned int)(UnicodeSubstring - *((_DWORD *)v12 + 14)) >> 1);
    }
    else
    {
      StringIn.Length = *((_WORD *)v12 + 24);
      for ( i = StringIn.Length; i > 2u; StringIn.Length = i )
      {
        if ( StringIn.Buffer[((unsigned __int64)i >> 1) - 1] == 92 )
          break;
        i -= 2;
      }
      if ( i <= 2u || StringIn.Buffer[((unsigned __int64)i >> 1) - 1] != 92 )
      {
LABEL_22:
        StringIn.MaximumLength = i;
        if ( (a2 & 0x10) != 0 )
        {
          RtlInitUnicodeString(&v36, L"\\DriverStore\\Nodes");
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = &v36;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          SymbolicLinkObject = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
          if ( SymbolicLinkObject < 0 )
            goto LABEL_33;
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 16);
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&v34, 983041LL);
          if ( SymbolicLinkObject < 0 )
            goto LABEL_33;
        }
        if ( (unsigned int)PnpGetObjectProperty(
                             PiPnpRtlCtx,
                             *((_QWORD *)v12 + 3),
                             7,
                             *((_QWORD *)v12 + 9),
                             0LL,
                             (__int64)DEVPKEY_DriverDatabase_SystemPath,
                             (__int64)&v29,
                             0LL,
                             0,
                             (__int64)&v28,
                             0) == -1073741275 )
        {
          SymbolicLinkObject = RtlDuplicateUnicodeString(1u, &StringIn, &DestinationString);
          if ( SymbolicLinkObject < 0 )
            goto LABEL_33;
          SymbolicLinkObject = PnpSetObjectProperty(
                                 PiPnpRtlCtx,
                                 *((_QWORD *)v12 + 3),
                                 7,
                                 *((_QWORD *)v12 + 9),
                                 0LL,
                                 (__int64)DEVPKEY_DriverDatabase_SystemPath,
                                 18,
                                 (__int64)DestinationString.Buffer,
                                 (unsigned int)DestinationString.Length + 2,
                                 0);
          if ( SymbolicLinkObject < 0 )
            goto LABEL_33;
        }
        SymbolicLinkObject = PnpCtxRegOpenKey(
                               PiPnpRtlCtx,
                               -2147483646,
                               *((_QWORD *)v12 + 3),
                               0,
                               0x2000000,
                               (__int64)&Handle);
        if ( SymbolicLinkObject < 0 )
          goto LABEL_33;
        v23 = PnpCtxRegisterMachineNode(v21, *((_QWORD *)v12 + 3), 3, v22, (__int64)Handle, v26);
        SymbolicLinkObject = v23;
        if ( v23 == 0x40000000 )
        {
          SymbolicLinkObject = 0;
        }
        else if ( v23 < 0 )
        {
          goto LABEL_33;
        }
        goto LABEL_32;
      }
      i -= 2;
    }
    StringIn.Length = i;
    goto LABEL_22;
  }
LABEL_34:
  if ( Handle )
    ZwClose(Handle);
  if ( v34 )
    ZwClose(v34);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  RtlFreeAnsiString(&DestinationString);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v12 )
  {
    if ( v8 )
      DrvDbUnregisterDatabase(v24, v6);
    PiDrvDbDestroyNode(v12);
  }
  return (unsigned int)SymbolicLinkObject;
}
