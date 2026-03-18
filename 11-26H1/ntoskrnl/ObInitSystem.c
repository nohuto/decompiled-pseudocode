/*
 * XREFs of ObInitSystem @ 0x140D0936C
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     ObpReleaseLookupContext @ 0x14027BE10 (ObpReleaseLookupContext.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlGetAce @ 0x140433010 (RtlGetAce.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectType @ 0x14077B990 (ObCreateObjectType.c)
 *     ObInitServerSilo @ 0x1407C22F0 (ObInitServerSilo.c)
 *     ObInitializeProcessor @ 0x1407C2494 (ObInitializeProcessor.c)
 *     ObpInitializeRootNamespace @ 0x1407C2F9C (ObpInitializeRootNamespace.c)
 *     ObpInitObjectTypeSD @ 0x1407C3F94 (ObpInitObjectTypeSD.c)
 *     RtlAddAuditAccessAce @ 0x140803320 (RtlAddAuditAccessAce.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExCreateHandleTable @ 0x140971AEC (ExCreateHandleTable.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     ObpLockDirectoryExclusive @ 0x1409E21B8 (ObpLockDirectoryExclusive.c)
 *     ObpLookupDirectoryEntry @ 0x1409E2350 (ObpLookupDirectoryEntry.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     ObpInsertDirectoryEntry @ 0x140A88ABC (ObpInsertDirectoryEntry.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A8F1C0 (RtlSetSaclSecurityDescriptor.c)
 *     NtCreateDirectoryObject @ 0x140AF9E30 (NtCreateDirectoryObject.c)
 *     ExInitializeSystemLookasideList @ 0x140C0D4C0 (ExInitializeSystemLookasideList.c)
 *     ObpInitInfoBlockOffsets @ 0x140CCDD84 (ObpInitInfoBlockOffsets.c)
 *     ObpInitStackTrace @ 0x140CCDE7C (ObpInitStackTrace.c)
 */

char __fastcall ObInitSystem(int a1, __int64 a2)
{
  __int16 v2; // di
  __int16 v3; // bx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  unsigned int i; // edi
  unsigned int v8; // edi
  char *v9; // rsi
  unsigned int v10; // eax
  _OWORD *v11; // rdi
  ULONG v12; // edx
  __int64 v13; // rdx
  _BYTE *v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  char *v18; // r15
  char *j; // rdi
  char *v20; // rax
  unsigned __int16 *v21; // rcx
  PVOID Ace; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE v24[5]; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v25; // [rsp+78h] [rbp-90h] BYREF
  char v26; // [rsp+7Ah] [rbp-8Eh]
  char v27; // [rsp+7Bh] [rbp-8Dh]
  _QWORD v28[3]; // [rsp+7Ch] [rbp-8Ch]
  int v29; // [rsp+94h] [rbp-74h]
  int v30; // [rsp+9Ch] [rbp-6Ch]
  int v31; // [rsp+A4h] [rbp-64h]
  __int64 (__fastcall *v32)(__int64, unsigned int *, __int64, __int64); // [rsp+B8h] [rbp-50h]
  void *v33; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall *v34)(char *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, char, int, __int64, unsigned __int16 *, int, int, __int64, _QWORD *); // [rsp+C8h] [rbp-40h]
  __int128 v35; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v36; // [rsp+108h] [rbp+0h]
  _OWORD *v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  UNICODE_STRING DestinationString; // [rsp+128h] [rbp+20h] BYREF
  UNICODE_STRING v40; // [rsp+138h] [rbp+30h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v42; // [rsp+168h] [rbp+60h]
  ACL Acl; // [rsp+178h] [rbp+70h] BYREF

  Ace = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v42 = 0LL;
  v37 = 0LL;
  LODWORD(v38) = 0;
  v40 = 0LL;
  memset(v24, 0, 24);
  v35 = 0LL;
  v36 = 0LL;
  DestinationString = 0LL;
  if ( (_BYTE)dword_140FBE22C )
  {
    v2 = 64;
    v3 = 32;
  }
  else
  {
    v2 = 32;
    v3 = 16;
  }
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07360, 0LL, 0LL);
      return 1;
    }
    if ( ObInitServerSilo(0LL) >= 0 )
    {
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        if ( (int)ObInitializeProcessor((_QWORD *)KiProcessorBlock[i]) < 0 )
          return 0;
      }
      v8 = 0;
      v9 = (char *)&ObpWaitBlockLookaside;
      do
      {
        v10 = 14 * v8 + 24;
        if ( v10 >= 0x40 )
          v10 = 64;
        ExInitializeNPagedLookasideListInternal((__int64)v9, 0LL, 0LL, 512, 48 * v10, 1834443343, 0, 0);
        ++v8;
        v9 += 128;
      }
      while ( v8 < 4 );
      v11 = (_OWORD *)SePublicDefaultUnrestrictedSd;
      if ( !ObpAuditBaseDirectories && !ObpAuditBaseObjects )
        goto LABEL_38;
      v12 = 4 * HIBYTE(RtlpBootStatHandleLock.StateSaveArea->ControlWord) + 28;
      if ( v12 < 0xFA
        && RtlCreateAcl(&Acl, v12, 2u) >= 0
        && (int)RtlAddAuditAccessAce((int)&Acl, v13, 1610612736) >= 0
        && RtlGetAce(&Acl, 0, &Ace) >= 0 )
      {
        v14 = Ace;
        if ( ObpAuditBaseDirectories )
          *((_BYTE *)Ace + 1) |= 0xAu;
        if ( ObpAuditBaseObjects )
          v14[1] |= 9u;
        v11 = SecurityDescriptor;
        if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
          && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
          && (int)RtlSetSaclSecurityDescriptor((__int64)SecurityDescriptor, 1, (__int64)&Acl, 0) >= 0 )
        {
LABEL_38:
          LODWORD(v35) = 48;
          *(_QWORD *)&v36 = &ObpRootDirectoryName;
          *((_QWORD *)&v35 + 1) = 0LL;
          DWORD2(v36) = 80;
          v37 = v11;
          v38 = 0LL;
          if ( (int)NtCreateDirectoryObject((__int64)v24, 983055LL, (__int64)&v35) >= 0 )
          {
            Ace = 0LL;
            v15 = ObReferenceObjectByHandle(v24[0], 0, ObpDirectoryObjectType, 0, &Ace, 0LL);
            ObpRootDirectoryObject = Ace;
            if ( v15 >= 0 && (int)ObpInitializeRootNamespace(0LL, v24[0], 0LL, 0LL) >= 0 && NtClose(v24[0]) >= 0 )
            {
              memset(&v24[1], 0, 24);
              ObpLockDirectoryExclusive((__int64)&v24[1], (__int64)ObpTypeDirectoryObject, v16, v17);
              v18 = (char *)ObpTypeObjectType;
              for ( j = *(char **)ObpTypeObjectType; j != v18; j = *(char **)j )
              {
                if ( (j[58] & 2) != 0 )
                {
                  v20 = (char *)ObpInfoMaskToOffset[j[58] & 3];
                  v21 = (unsigned __int16 *)(j + 32 - v20);
                  if ( j + 32 != v20
                    && !*(_QWORD *)v21
                    && !ObpLookupDirectoryEntry(v21 + 4, 64, (__int64)&v24[1])
                    && (!*((_QWORD *)j + 9) && (int)ObpInitObjectTypeSD((__int64)(j + 80), 0LL) < 0
                     || !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, j + 80, (__int64)&v24[1])) )
                  {
                    return 0;
                  }
                }
              }
              ObpReleaseLookupContext((__int64)&v24[1]);
              Ace = &ObpLUIDDeviceMapsEnabled;
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
  ObHeaderCookie = ExGenRandom(0, a2);
  ExInitializeSystemLookasideList((__int64)&ObpCreateInfoLookasideList, 512, 64, 1766023759, v2);
  ExInitializeSystemLookasideList((__int64)&ObpNameBufferLookasideList, 1, 248, 1833853519, v3);
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 1024LL;
  CurrentPrcb->PPLookasideList[4].L = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
  CurrentPrcb->PPLookasideList[4].P = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
  CurrentPrcb->PPLookasideList[5].L = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
  CurrentPrcb->PPLookasideList[5].P = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
  v6 = &unk_140FCC448;
  ObpRemoveObjectList = 0LL;
  ObpRemoveObjectWait = 0LL;
  do
  {
    *(v6 - 1) = 0LL;
    *v6 = 0LL;
    v6 += 2;
    --v5;
  }
  while ( v5 );
  ObpDefaultObject = 0;
  qword_140F13D70 = (__int64)&qword_140F13D68;
  qword_140F13D68 = (__int64)&qword_140F13D68;
  byte_140F13D62 = 6;
  dword_140F13D64 = 1;
  ObpKernelHandleTable = ExCreateHandleTable(0LL, 1);
  KeGetCurrentThread()->ApcState.Process[1].KernelTime = ObpKernelHandleTable;
  if ( !ObpKernelHandleTable )
    return 0;
  ObpRemoveObjectWorkItem.Parameter = 0LL;
  ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
  qword_140F13DB8 = (__int64)ObpProcessRemoveObjectDpcWorker;
  ObpRemoveObjectWorkItem.List.Flink = 0LL;
  LODWORD(ObpRemoveObjectDpc) = 275;
  qword_140F13DC0 = 0LL;
  qword_140F13DD8 = 0LL;
  qword_140F13DB0 = 0LL;
  ObpInitInfoBlockOffsets();
  qword_140FC0978 = (__int64)MmBadPointer;
  memset_0(&v25, 0, 0x78uLL);
  v25 = 120;
  HIDWORD(v28[0]) = 256;
  v30 = 512;
  RtlInitUnicodeString(&DestinationString, L"Type");
  v26 |= 0x24u;
  v29 = 983041;
  v31 = 224;
  *(_OWORD *)&v28[1] = ObpTypeMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v25, 0LL, (__int64)&ObpTypeObjectType) < 0 )
    return 0;
  v30 = 1;
  RtlInitUnicodeString(&v40, L"Directory");
  v31 = 344;
  v29 = 983055;
  v26 = v26 & 0xD2 | 0xD;
  v32 = ObpCloseDirectoryObject;
  v33 = ObpDeleteDirectoryObject;
  *(_OWORD *)&v28[1] = ObpDirectoryMapping;
  if ( (int)ObCreateObjectType(&v40, &v25, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
    return 0;
  v32 = 0LL;
  ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
  RtlInitUnicodeString((PUNICODE_STRING)&v24[1], L"SymbolicLink");
  v27 |= 1u;
  v33 = ObpDeleteSymbolicLink;
  v31 = 40;
  v34 = ObpParseSymbolicLinkEx;
  v30 = 1;
  v29 = 0xFFFFF;
  v26 = v26 & 0xF6 | 1;
  *(_OWORD *)&v28[1] = ObpSymbolicLinkMapping;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)&v24[1], &v25, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
    return 0;
  *((_DWORD *)ObpSymbolicLinkObjectType + 23) &= ~0x100000u;
  ObpInitStackTrace();
  return 1;
}
