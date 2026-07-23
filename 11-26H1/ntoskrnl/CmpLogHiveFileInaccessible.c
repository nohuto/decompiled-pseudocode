/*
 * XREFs of CmpLogHiveFileInaccessible @ 0x1408BBF64
 * Callers:
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteTransfer @ 0x140213010 (EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1404A9950 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1408BC384 (CmpQueryFileSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SeQueryUserSidToken @ 0x1409C9AA0 (SeQueryUserSidToken.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLogHiveFileInaccessible(UNICODE_STRING *a1, ULONG a2, ULONG a3, ULONG a4)
{
  struct _LIST_ENTRY *Blink; // r14
  char v8; // si
  WCHAR *v9; // rdi
  unsigned int v10; // r8d
  PACCESS_TOKEN PrimaryToken; // rcx
  int v12; // eax
  __int64 v13; // rcx
  char v14; // r9
  ULONG ShareAccess; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v22[80]; // [rsp+A0h] [rbp-60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-10h] BYREF
  void *v24; // [rsp+110h] [rbp+10h]
  __int64 v25; // [rsp+118h] [rbp+18h]
  ULONG *v26; // [rsp+120h] [rbp+20h]
  __int64 v27; // [rsp+128h] [rbp+28h]
  __int64 *v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+140h] [rbp+40h] BYREF
  ULONG *p_ShareAccess; // [rsp+160h] [rbp+60h]
  __int64 v32; // [rsp+168h] [rbp+68h]
  _BYTE v33[16]; // [rsp+170h] [rbp+70h] BYREF
  struct _LIST_ENTRY *v34; // [rsp+180h] [rbp+80h]
  int v35; // [rsp+188h] [rbp+88h]
  int v36; // [rsp+18Ch] [rbp+8Ch]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+190h] [rbp+90h]
  __int64 v38; // [rsp+198h] [rbp+98h]

  ShareAccess = a4;
  memset_0(v22, 0, 0x44uLL);
  Blink = PspSiloMonitorLock.Header.WaitListHead.Blink;
  FileHandle = 0LL;
  v17 = 0LL;
  *(_QWORD *)&EventDescriptor.Id = 0LL;
  v8 = 0;
  v9 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a2 == -1073741790 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&FileHandle, 0x20000u, &ObjectAttributes, &IoStatusBlock, ShareAccess, a3) >= 0
      && (int)CmpQueryFileSecurityDescriptor(FileHandle) >= 0 )
    {
      if ( (int)SeConvertSecurityDescriptorToStringSecurityDescriptor(
                  *(__int64 *)&EventDescriptor.Id,
                  1LL,
                  12LL,
                  &v17,
                  &v16) >= 0 )
      {
        SeCaptureSubjectContext(&SubjectContext);
        PrimaryToken = SubjectContext.PrimaryToken;
        v8 = 1;
        if ( SubjectContext.ClientToken )
          PrimaryToken = SubjectContext.ClientToken;
        SeQueryUserSidToken(PrimaryToken, v22, 68LL);
        Blink = (struct _LIST_ENTRY *)v22;
      }
      v9 = (WCHAR *)v17;
    }
    if ( (unsigned int)dword_140E09EE8 > 3
      && (*(_QWORD *)&qword_140E09EF8 & 0x200000000008LL) != 0
      && (qword_140E09F00 & 0x200000000008LL) == qword_140E09F00 )
    {
      ShareAccess = -1073741790;
      p_ShareAccess = &ShareAccess;
      v32 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v33, v9);
      v12 = BYTE1(Blink->Flink);
      v34 = Blink;
      v36 = 0;
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v38 = 8LL;
      v35 = 4 * v12 + 8;
      p_EventDescriptor = &EventDescriptor;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09EE8,
        (unsigned __int8 *)word_140057C4A,
        0LL,
        0LL,
        6u,
        &v30);
    }
    if ( v8 )
      SeReleaseSubjectContext(&SubjectContext);
    goto LABEL_14;
  }
  v10 = dword_140E09EE8;
  if ( (unsigned int)dword_140E09EE8 <= 3 )
    return;
  v14 = qword_140E09EF8;
  v13 = qword_140E09F00;
  if ( (*(_QWORD *)&qword_140E09EF8 & 0x200000000008LL) != 0 && (qword_140E09F00 & 0x200000000008LL) == qword_140E09F00 )
  {
    *(_QWORD *)&EventDescriptor.Id = 1LL;
    v24 = &EventDescriptor;
    v25 = 8LL;
    v26 = &ShareAccess;
    ShareAccess = a2;
    v28 = &v17;
    v27 = 4LL;
    v17 = 0x1000000LL;
    v29 = 8LL;
    tlgWriteAgg(
      (__int64)&dword_140E09EE8,
      (unsigned __int8 *)&word_140057BF2,
      (unsigned int)dword_140E09EE8,
      5u,
      (PEVENT_DATA_DESCRIPTOR)&SubjectContext);
    v13 = qword_140E09F00;
    v14 = qword_140E09EF8;
    v10 = dword_140E09EE8;
  }
  if ( v10 > 3 && (v14 & 8) != 0 && (v13 & 8) == v13 )
  {
    ShareAccess = a2;
    v24 = &ShareAccess;
    *(_DWORD *)&EventDescriptor.Level = 3;
    SubjectContext.ClientToken = off_140E09EF0;
    v25 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    SubjectContext.ImpersonationLevel = *(unsigned __int16 *)off_140E09EF0;
    SubjectContext.PrimaryToken = (char *)&dword_140057CBA + 2;
    *((_DWORD *)&SubjectContext.ImpersonationLevel + 1) = 2;
    SubjectContext.ProcessAuditId = (PVOID)0x10000002BLL;
    v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09F08, &EventDescriptor, 0LL, 0LL, 3u, (PEVENT_DATA_DESCRIPTOR)&SubjectContext);
LABEL_14:
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
}
