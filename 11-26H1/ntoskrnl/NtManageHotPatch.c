/*
 * XREFs of NtManageHotPatch @ 0x140A9D550
 * Callers:
 *     DifNtManageHotPatchWrapper @ 0x14067ED90 (DifNtManageHotPatchWrapper.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     MiDuplicateUnicodeString @ 0x14086DC40 (MiDuplicateUnicodeString.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiCreatePatchSectionRequest @ 0x140875B58 (MiCreatePatchSectionRequest.c)
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140877654 (MiLoadHotPatchForUserSid.c)
 *     MiLogHotPatchManagement @ 0x140877AC8 (MiLogHotPatchManagement.c)
 *     MiQueryLoadedPatches @ 0x14087A3A0 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x14087A690 (MiQueryProcessActivePatches.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     MiQuerySingleLoadedPatch @ 0x140A9D93C (MiQuerySingleLoadedPatch.c)
 *     MiFindHotPatchRecord @ 0x140AC2084 (MiFindHotPatchRecord.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtManageHotPatch(int a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4; // r15
  SIZE_T v5; // r12
  KPROCESSOR_MODE PreviousMode; // r13
  int SingleLoadedPatch; // edi
  int v9; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // r15d
  struct _KLOCK_ENTRIES *v14; // r15
  int ULongFromUser; // eax
  ULONG v16; // r8d
  int v17; // r14d
  unsigned int *v18; // rdx
  unsigned __int64 CurrentServerSilo; // rbx
  int *p_Sid; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // r14d
  int v25; // r14d
  int PatchSectionRequest; // eax
  unsigned int Size; // [rsp+50h] [rbp-F8h] BYREF
  int Size_4; // [rsp+54h] [rbp-F4h]
  void *Src; // [rsp+58h] [rbp-F0h]
  unsigned int *v31; // [rsp+60h] [rbp-E8h]
  PVOID v32; // [rsp+68h] [rbp-E0h] BYREF
  PVOID v33; // [rsp+70h] [rbp-D8h] BYREF
  PVOID P; // [rsp+78h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-C8h] BYREF
  unsigned int v36; // [rsp+90h] [rbp-B8h] BYREF
  int Sid; // [rsp+94h] [rbp-B4h] BYREF
  UNICODE_STRING v38; // [rsp+98h] [rbp-B0h] BYREF
  _DWORD v39[17]; // [rsp+A8h] [rbp-A0h] BYREF
  int v40; // [rsp+ECh] [rbp-5Ch] BYREF
  int v41[4]; // [rsp+F0h] [rbp-58h] BYREF

  v4 = a4;
  v5 = a3;
  Src = a2;
  v31 = a4;
  DestinationString = 0LL;
  Sid = 0;
  memset_0(&v36, 0, 0x64uLL);
  v32 = 0LL;
  v33 = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Size = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SingleLoadedPatch = -1073741823;
  if ( (stru_140E366D8.QuantumTarget & 0x100000000LL) == 0 )
    goto LABEL_2;
  if ( !LOBYTE(stru_140E366D8.SListFaultAddress) )
  {
    SingleLoadedPatch = -1073741661;
    goto LABEL_3;
  }
  if ( a1 != 7 && a1 != 8 && a1 != 9 && (unsigned int)(a1 - 10) > 1 )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    {
      SingleLoadedPatch = -1073741727;
      goto LABEL_3;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( CurrentServerSilo != HalSystemVectorDispatchEntry() )
    {
      SingleLoadedPatch = -1073741790;
      goto LABEL_3;
    }
  }
  v11 = 0;
  Size_4 = 0;
  if ( a1 > 6 )
  {
    switch ( a1 )
    {
      case 7:
        v12 = 32;
        v11 = 1;
        Size_4 = 1;
        goto LABEL_27;
      case 8:
        v12 = 48;
        goto LABEL_27;
      case 9:
        v12 = 8;
        v11 = 1;
        v13 = 4;
        Size_4 = 1;
        goto LABEL_28;
      case 10:
        v12 = 40;
        goto LABEL_27;
      case 11:
        v12 = 20;
        v13 = 4;
        goto LABEL_28;
    }
    goto LABEL_73;
  }
  switch ( a1 )
  {
    case 6:
      v12 = 40;
      goto LABEL_27;
    case 0:
      goto LABEL_26;
    case 1:
LABEL_2:
      SingleLoadedPatch = -1073741637;
      goto LABEL_3;
    case 2:
LABEL_59:
      v12 = 96;
      goto LABEL_27;
  }
  if ( a1 != 3 )
  {
    if ( a1 != 4 )
    {
      if ( a1 == 5 )
        goto LABEL_59;
LABEL_73:
      SingleLoadedPatch = -1073741821;
      goto LABEL_3;
    }
    goto LABEL_2;
  }
LABEL_26:
  v12 = 104;
LABEL_27:
  v13 = 8;
LABEL_28:
  if ( (unsigned int)v5 < v12 )
  {
    SingleLoadedPatch = -1073741820;
    goto LABEL_68;
  }
  if ( v11 && (_DWORD)v5 && ((v13 - 1) & (unsigned int)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( !PreviousMode || (ULongFromUser = RtlReadULongFromUser(a4), RtlWriteULongToUser(a4, ULongFromUser), Size_4) )
  {
    v14 = (struct _KLOCK_ENTRIES *)Src;
  }
  else
  {
    v16 = v13;
    v14 = (struct _KLOCK_ENTRIES *)Src;
    ProbeForWrite(Src, v5, v16);
  }
  if ( PreviousMode )
    RtlCopyFromUser(&v36, v14, v12);
  else
    RtlCopyVolatileMemory(&v36, v14, v12);
  if ( a1 > 7 )
  {
    v17 = a1 - 8;
    if ( !v17 )
    {
      if ( v36 == 1 && *(_QWORD *)&v38.Length == -1LL && !v39[0] && v38.Buffer )
      {
        SingleLoadedPatch = MiQuerySingleLoadedPatch(
                              (unsigned int)&P,
                              (unsigned int)&Size,
                              v38.Buffer,
                              0,
                              (__int64)v14,
                              v5);
        if ( SingleLoadedPatch < 0 )
        {
LABEL_68:
          v4 = a4;
          goto LABEL_3;
        }
        if ( Size <= (unsigned int)v5 )
        {
          v18 = (unsigned int *)P;
          goto LABEL_49;
        }
LABEL_70:
        SingleLoadedPatch = -1073741789;
        goto LABEL_68;
      }
LABEL_69:
      SingleLoadedPatch = -1073741811;
      goto LABEL_68;
    }
    v24 = v17 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( !v25 )
      {
        PatchSectionRequest = MiCreatePatchSectionRequest((__int64)&v36, PreviousMode);
LABEL_124:
        SingleLoadedPatch = PatchSectionRequest;
        if ( PatchSectionRequest < 0 )
          goto LABEL_68;
        goto LABEL_110;
      }
      if ( v25 == 1 )
      {
        if ( v36 != 1 || Sid || LODWORD(v38.Buffer) )
          goto LABEL_69;
        PatchSectionRequest = MiFindHotPatchRecord(
                                (unsigned int)&xmmword_140E366C0,
                                0,
                                *(_DWORD *)&v38.Length,
                                *(_DWORD *)(&v38.MaximumLength + 1),
                                0,
                                (__int64)&v38.Buffer,
                                0LL);
        goto LABEL_124;
      }
    }
    else
    {
      if ( v36 != 1 || Sid )
        goto LABEL_69;
      SingleLoadedPatch = 0;
    }
    goto LABEL_115;
  }
  switch ( a1 )
  {
    case 7:
      SingleLoadedPatch = MiApplyImageHotPatchRequest((__int64)&v36);
      if ( stru_140E366D8.FirstArgument
        && *(_DWORD *)stru_140E366D8.FirstArgument
        && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 32LL) )
      {
        MiLogHotPatchManagement(v23, 7, (__int64)&v36, 0LL, SingleLoadedPatch);
      }
LABEL_115:
      v18 = 0LL;
      goto LABEL_49;
    case 0:
      goto LABEL_98;
    case 2:
LABEL_89:
      if ( v36 != 2 )
        goto LABEL_69;
      p_Sid = 0LL;
      if ( a1 != 5 )
        goto LABEL_93;
      if ( RtlValidSid(&Sid) )
      {
        p_Sid = &Sid;
LABEL_93:
        SingleLoadedPatch = MiQueryLoadedPatches(p_Sid, &v32, &Size, v14, v5);
        if ( SingleLoadedPatch < 0 )
          goto LABEL_68;
        if ( Size > (unsigned int)v5 )
          goto LABEL_70;
        v18 = (unsigned int *)v32;
        goto LABEL_49;
      }
LABEL_96:
      SingleLoadedPatch = -1073741704;
      goto LABEL_68;
    case 3:
LABEL_98:
      if ( v36 != 2 || !v38.Length )
        goto LABEL_69;
      if ( ((__int64)v38.Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      SingleLoadedPatch = MiDuplicateUnicodeString(&DestinationString, &v38, PreviousMode);
      if ( SingleLoadedPatch < 0 )
        goto LABEL_68;
      if ( a1 == 3 )
      {
        if ( !RtlValidSid(v39) )
          goto LABEL_96;
        v21 = MiLoadHotPatchForUserSid((const void **)&DestinationString, v39, &v40);
      }
      else
      {
        v21 = MiLoadHotPatch(&DestinationString, 1, &v40, v41);
      }
      SingleLoadedPatch = v21;
      if ( stru_140E366D8.FirstArgument
        && *(_DWORD *)stru_140E366D8.FirstArgument
        && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 32LL) )
      {
        MiLogHotPatchManagement(v22, a1, (__int64)&v36, &DestinationString.Length, SingleLoadedPatch);
      }
LABEL_110:
      v18 = &v36;
      Size = v12;
      goto LABEL_49;
    case 5:
      goto LABEL_89;
  }
  if ( v36 != 3 && (v36 < 2 || v36 > 3) )
    goto LABEL_69;
  SingleLoadedPatch = MiQueryProcessActivePatches(
                        *(ULONG_PTR *)&v38.Length,
                        &v33,
                        &Size,
                        (__int64)v14,
                        v5,
                        PreviousMode,
                        v36);
  if ( SingleLoadedPatch < 0 )
    goto LABEL_68;
  if ( Size > (unsigned int)v5 )
    goto LABEL_70;
  v18 = (unsigned int *)v33;
LABEL_49:
  if ( Size_4 )
    goto LABEL_68;
  if ( PreviousMode )
    RtlCopyToUser(v14, v18, Size);
  else
    RtlCopyVolatileMemory(v14, v18, Size);
  v4 = a4;
LABEL_3:
  if ( PreviousMode )
  {
    v9 = RtlReadULongFromUser(v4);
    RtlWriteULongToUser(v4, v9);
    RtlWriteULongToUser(v4, Size);
  }
  else
  {
    *v4 = Size;
  }
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)SingleLoadedPatch;
}
