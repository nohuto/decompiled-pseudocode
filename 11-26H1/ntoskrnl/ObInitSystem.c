/*
 * XREFs of ObInitSystem @ 0x140D0F63C
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     ObpReleaseLookupContext @ 0x14027B380 (ObpReleaseLookupContext.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlGetAce @ 0x140420040 (RtlGetAce.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     ObInitServerSilo @ 0x1407C5350 (ObInitServerSilo.c)
 *     ObInitializeProcessor @ 0x1407C54F4 (ObInitializeProcessor.c)
 *     ObpInitializeRootNamespace @ 0x1407C5FFC (ObpInitializeRootNamespace.c)
 *     ObpInitObjectTypeSD @ 0x1407C6FF4 (ObpInitObjectTypeSD.c)
 *     RtlAddAuditAccessAce @ 0x140808DC0 (RtlAddAuditAccessAce.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     ExCreateHandleTable @ 0x1409BCDDC (ExCreateHandleTable.c)
 *     ObpLockDirectoryExclusive @ 0x1409DF1C8 (ObpLockDirectoryExclusive.c)
 *     ObpLookupDirectoryEntry @ 0x1409DF360 (ObpLookupDirectoryEntry.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ObpInsertDirectoryEntry @ 0x140A8F820 (ObpInsertDirectoryEntry.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A93E90 (RtlSetSaclSecurityDescriptor.c)
 *     NtCreateDirectoryObject @ 0x140AFC2C0 (NtCreateDirectoryObject.c)
 *     ExInitializeSystemLookasideList @ 0x140C136D0 (ExInitializeSystemLookasideList.c)
 *     ObpInitInfoBlockOffsets @ 0x140CD3EE4 (ObpInitInfoBlockOffsets.c)
 *     ObpInitStackTrace @ 0x140CD3FDC (ObpInitStackTrace.c)
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
  ULONG v13; // edx
  void *v14; // r9
  _BYTE *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 *v19; // r15
  __int64 *j; // rdi
  __int64 *v21; // rax
  __int64 v22; // rcx
  BOOLEAN AuditSuccess; // [rsp+28h] [rbp-E0h]
  BOOLEAN AuditFailure; // [rsp+30h] [rbp-D8h]
  PVOID Ace; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE v27[5]; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v28; // [rsp+78h] [rbp-90h] BYREF
  char v29; // [rsp+7Ah] [rbp-8Eh]
  char v30; // [rsp+7Bh] [rbp-8Dh]
  _QWORD v31[3]; // [rsp+7Ch] [rbp-8Ch]
  int v32; // [rsp+94h] [rbp-74h]
  int v33; // [rsp+9Ch] [rbp-6Ch]
  int v34; // [rsp+A4h] [rbp-64h]
  __int64 (__fastcall *v35)(__int64, unsigned int *, __int64, __int64); // [rsp+B8h] [rbp-50h]
  void *v36; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall *v37)(char *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, char, int, __int64, unsigned __int16 *, int, int, __int64, _QWORD *); // [rsp+C8h] [rbp-40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+128h] [rbp+20h] BYREF
  UNICODE_STRING v40; // [rsp+138h] [rbp+30h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v42; // [rsp+168h] [rbp+60h]
  ACL Acl; // [rsp+178h] [rbp+70h] BYREF

  Ace = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v42 = 0LL;
  v40 = 0LL;
  memset(v27, 0, 24);
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( (_BYTE)dword_140FBF22C )
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
      v12 = 4 * *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL) + 28;
      if ( v12 < 0xFA
        && RtlCreateAcl(&Acl, v12, 2u) >= 0
        && RtlAddAuditAccessAce(&Acl, v13, 0x60000000u, v14, AuditSuccess, AuditFailure) >= 0
        && RtlGetAce(&Acl, 0, &Ace) >= 0 )
      {
        v15 = Ace;
        if ( ObpAuditBaseDirectories )
          *((_BYTE *)Ace + 1) |= 0xAu;
        if ( ObpAuditBaseObjects )
          v15[1] |= 9u;
        v11 = SecurityDescriptor;
        if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
          && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
          && RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0 )
        {
LABEL_38:
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 80;
          ObjectAttributes.SecurityDescriptor = v11;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          if ( NtCreateDirectoryObject(v27, 0xF000Fu, &ObjectAttributes) >= 0 )
          {
            Ace = 0LL;
            v16 = ObReferenceObjectByHandle(v27[0], 0, ObpDirectoryObjectType, 0, &Ace, 0LL);
            *(_QWORD *)&ObpStackTraceLock.PriorityFloorCounts[24] = Ace;
            if ( v16 >= 0 && (int)ObpInitializeRootNamespace(0LL, v27[0], 0LL, 0LL) >= 0 && NtClose(v27[0]) >= 0 )
            {
              memset(&v27[1], 0, 24);
              ObpLockDirectoryExclusive((__int64)&v27[1], (__int64)ObpTypeDirectoryObject, v17, v18);
              v19 = *(__int64 **)&ObpStackTraceLock.PriorityFloorSummary;
              for ( j = **(__int64 ***)&ObpStackTraceLock.PriorityFloorSummary; j != v19; j = (__int64 *)*j )
              {
                if ( (*((_BYTE *)j + 58) & 2) != 0 )
                {
                  v21 = (__int64 *)ObpInfoMaskToOffset[*((_BYTE *)j + 58) & 3];
                  v22 = (char *)(j + 4) - (char *)v21;
                  if ( j + 4 != v21
                    && !*(_QWORD *)v22
                    && !ObpLookupDirectoryEntry((unsigned __int16 *)(v22 + 8), 64, (__int64)&v27[1])
                    && (!j[9] && (int)ObpInitObjectTypeSD((__int64)(j + 10), 0LL) < 0
                     || !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, (char *)j + 80, (__int64)&v27[1])) )
                  {
                    return 0;
                  }
                }
              }
              ObpReleaseLookupContext((__int64)&v27[1]);
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
  v6 = &unk_140FCD448;
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
  qword_140F14110 = (__int64)&qword_140F14108;
  qword_140F14108 = (__int64)&qword_140F14108;
  byte_140F14102 = 6;
  dword_140F14104 = 1;
  ObpKernelHandleTable = ExCreateHandleTable(0LL, 1);
  KeGetCurrentThread()->ApcState.Process[1].KernelTime = ObpKernelHandleTable;
  if ( !ObpKernelHandleTable )
    return 0;
  ObpRemoveObjectWorkItem.Parameter = 0LL;
  ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
  qword_140F14138 = (__int64)ObpProcessRemoveObjectDpcWorker;
  ObpRemoveObjectWorkItem.List.Flink = 0LL;
  LODWORD(ObpRemoveObjectDpc) = 275;
  qword_140F14140 = 0LL;
  qword_140F14158 = 0LL;
  qword_140F14130 = 0LL;
  ObpInitInfoBlockOffsets();
  qword_140FC1978 = (__int64)MmBadPointer;
  memset_0(&v28, 0, 0x78uLL);
  v28 = 120;
  HIDWORD(v31[0]) = 256;
  v33 = 512;
  RtlInitUnicodeString(&DestinationString, L"Type");
  v29 |= 0x24u;
  v32 = 983041;
  v34 = 224;
  *(_OWORD *)&v31[1] = ObpTypeMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v28, 0LL, (__int64)&ObpStackTraceLock.PriorityFloorSummary) < 0 )
    return 0;
  v33 = 1;
  RtlInitUnicodeString(&v40, L"Directory");
  v34 = 344;
  v32 = 983055;
  v29 = v29 & 0xD2 | 0xD;
  v35 = ObpCloseDirectoryObject;
  v36 = ObpDeleteDirectoryObject;
  *(_OWORD *)&v31[1] = ObpDirectoryMapping;
  if ( (int)ObCreateObjectType(&v40, &v28, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
    return 0;
  v35 = 0LL;
  ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
  RtlInitUnicodeString((PUNICODE_STRING)&v27[1], L"SymbolicLink");
  v30 |= 1u;
  v36 = ObpDeleteSymbolicLink;
  v34 = 40;
  v37 = ObpParseSymbolicLinkEx;
  v33 = 1;
  v32 = 0xFFFFF;
  v29 = v29 & 0xF6 | 1;
  *(_OWORD *)&v31[1] = ObpSymbolicLinkMapping;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)&v27[1], &v28, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
    return 0;
  *((_DWORD *)ObpSymbolicLinkObjectType + 23) &= ~0x100000u;
  ObpInitStackTrace();
  return 1;
}
