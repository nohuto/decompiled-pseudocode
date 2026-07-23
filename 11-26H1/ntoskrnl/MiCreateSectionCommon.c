/*
 * XREFs of MiCreateSectionCommon @ 0x14098AD7C
 * Callers:
 *     NtCreateSectionEx @ 0x14086EE60 (NtCreateSectionEx.c)
 *     MmCreateSectionForHotpatch @ 0x14087AE7C (MmCreateSectionForHotpatch.c)
 *     PfSnGetSectionObject @ 0x14098A718 (PfSnGetSectionObject.c)
 *     NtCreateSection @ 0x14098ACD0 (NtCreateSection.c)
 *     PfpFileBuildReadSupport @ 0x140A589EC (PfpFileBuildReadSupport.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     CcZeroEndOfLastPage @ 0x1403110A8 (CcZeroEndOfLastPage.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14098BA5C (MiCaptureSectionCreateExtendedParameters.c)
 */

__int64 __fastcall MiCreateSectionCommon(
        _QWORD *a1,
        int a2,
        int a3,
        _QWORD *a4,
        int a5,
        int a6,
        __int64 a7,
        volatile void *Address,
        ULONGLONG ullMultiplicand,
        char a10,
        char a11)
{
  char v13; // r15
  __int64 v14; // r12
  int v16; // r8d
  int v17; // eax
  __int64 ULong64FromUser; // rax
  __int64 result; // rax
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // r13
  void *v24; // rsi
  int v25; // eax
  int v26; // ecx
  int i; // eax
  struct _FILE_OBJECT *v28; // rbx
  int inserted; // ebx
  unsigned int v30; // eax
  int v31; // r14d
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  int SessionId; // [rsp+70h] [rbp-78h]
  char *v35; // [rsp+78h] [rbp-70h] BYREF
  __int64 v36[2]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v37[3]; // [rsp+90h] [rbp-58h] BYREF
  int v38; // [rsp+A8h] [rbp-40h]
  char v39; // [rsp+ACh] [rbp-3Ch]
  int v43; // [rsp+118h] [rbp+30h]

  v13 = 0;
  v35 = 0LL;
  v36[0] = 0LL;
  memset(v37, 0, sizeof(v37));
  v38 = 0;
  v39 = 0;
  LODWORD(v14) = 0;
  if ( (a6 & 0x3000000) == 0x3000000 )
    return 3221225716LL;
  if ( (a6 & 0x2100000) == 0 || (v16 = 1, (a6 & 0x1100000) == 0x1100000) )
    v16 = 0;
  if ( (a6 & 0x2080FFFF) != 0 || (a6 & 0xF100000) == 0 )
    return 3221225716LL;
  if ( (a6 & 0x3100000) != 0 )
  {
    v30 = (2 * (a6 & 0x100000 | 0xE6238000)) & 0xFFBFFFFF;
    if ( (a6 & 0x2100000) == 0 )
      v30 = 2 * (a6 & 0x100000 | 0xE6238000);
    if ( (v30 & a6) != 0 )
      return 3221225716LL;
  }
  if ( (a6 & 0xC000000) == 0xC000000 )
    return 3221225716LL;
  if ( a6 < 0 )
  {
    if ( (a6 & 0x80000) != 0 || (a6 & 0x20000) != 0 )
      return 3221225716LL;
    v17 = 0;
  }
  else
  {
    v17 = a6 & 0x20000;
    if ( (a6 & 0x20000) != 0 && (a6 & 0x80000) != 0 )
      return 3221225716LL;
  }
  if ( (a6 & 0x10000) != 0 && !v17 )
    return 3221225716LL;
  if ( (a5 & 0x701) != 0 )
    return 3221225541LL;
  if ( a11 && v16 )
    return 3221225716LL;
  if ( a11 )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  if ( a4 )
  {
    if ( a11 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = RtlReadULong64FromUser(a4);
    }
    else
    {
      v14 = *a4;
    }
    v36[1] = v14;
  }
  result = MiCaptureSectionCreateExtendedParameters(Address, (unsigned int)ullMultiplicand, (__int64)v37);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    if ( a11 == 1 || (a10 & 2) != 0 )
    {
      v13 = *(_BYTE *)(Process + 1529);
      v24 = (void *)PsReferencePrimaryTokenWithTag((__int64)CurrentThread->ApcState.Process, 0x746C6644u, v20, v21);
      v25 = 0;
    }
    else
    {
      if ( (v37[1] & 0x800000000LL) != 0 )
      {
        v13 = v37[1];
        v25 = 16;
      }
      else
      {
        v25 = 0;
      }
      v24 = 0LL;
    }
    v26 = v25 | 0x40;
    if ( (a10 & 4) == 0 )
      v26 = v25;
    v43 = v26;
    SessionId = PsGetSessionIdEx(Process);
    for ( i = MiCreateSection(
                (unsigned int)&v35,
                a3,
                v14,
                a5,
                a6,
                v43,
                (__int64)v24,
                v13,
                a7,
                0LL,
                a11,
                SessionId,
                (__int64)v37);
          ;
          i = MiCreateSection(
                (unsigned int)&v35,
                a3,
                v14,
                a5,
                a6,
                v43,
                (__int64)v24,
                v13,
                a7,
                0LL,
                a11,
                SessionId,
                (__int64)v37) )
    {
      v31 = i;
      if ( i != -1073741740 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    }
    if ( v24 )
      ObfDereferenceObject(v24);
    if ( v31 < 0 )
    {
      return (unsigned int)v31;
    }
    else
    {
      v32 = MiSectionControlArea((__int64)v35);
      v33 = v32;
      if ( v32 && *(_QWORD *)(v32 + 64) )
      {
        v28 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v32);
        CcZeroEndOfLastPage(v28);
        MiDereferenceControlAreaFile(v33, (unsigned __int64)v28);
      }
      inserted = ObInsertObjectEx(v35, 0LL, a2, 0, 0, 0LL, v36);
      if ( inserted >= 0 )
      {
        if ( a11 )
          RtlWriteULong64ToUser(a1, v36[0]);
        else
          *a1 = v36[0];
      }
      return (unsigned int)inserted;
    }
  }
  return result;
}
