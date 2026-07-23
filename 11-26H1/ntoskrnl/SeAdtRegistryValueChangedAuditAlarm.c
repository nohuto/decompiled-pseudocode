/*
 * XREFs of SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C
 * Callers:
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AdtpBuildRegistryValueString @ 0x1408962BC (AdtpBuildRegistryValueString.c)
 *     AdtpBuildReplacementString @ 0x1408969A4 (AdtpBuildReplacementString.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObNormalizeHandleValue @ 0x14091F114 (ObNormalizeHandleValue.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepQueryNameString @ 0x140920B48 (SepQueryNameString.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     SeExamineSacl @ 0x140A60F70 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140A61298 (SeExamineGlobalSacl.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeAdtRegistryValueChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        int a8)
{
  unsigned __int16 *v10; // rdi
  PACCESS_TOKEN ClientToken; // r15
  PACCESS_TOKEN PrimaryToken; // r13
  PACCESS_TOKEN v13; // rdx
  __int16 v14; // ax
  void *v15; // r8
  ACL *v16; // rdx
  ACL *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int16 v20; // ax
  void *v21; // r8
  ACL *v22; // rdx
  __int64 v23; // rax
  signed int NameString; // eax
  unsigned int v25; // ebx
  unsigned int v26; // edx
  ULONG v27; // ecx
  ULONG v28; // ecx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rbx
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD **v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // r10d
  int v37; // eax
  int v38; // r9d
  int v39; // r11d
  BOOLEAN GenerateAudit[8]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 *v42; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v43; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v44; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v45; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v46; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v47; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD Src[12]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v51; // [rsp+118h] [rbp+10h]
  int v52; // [rsp+120h] [rbp+18h]
  int v53; // [rsp+124h] [rbp+1Ch]
  const int *v54; // [rsp+138h] [rbp+30h]
  int v55; // [rsp+140h] [rbp+38h]
  int v56; // [rsp+144h] [rbp+3Ch]
  __int64 v57; // [rsp+148h] [rbp+40h]
  int v58; // [rsp+160h] [rbp+58h]
  int v59; // [rsp+164h] [rbp+5Ch]
  unsigned __int16 *v60; // [rsp+178h] [rbp+70h]
  int v61; // [rsp+180h] [rbp+78h]
  int v62; // [rsp+184h] [rbp+7Ch]
  unsigned __int16 *v63; // [rsp+198h] [rbp+90h]
  int v64; // [rsp+1A0h] [rbp+98h]
  int v65; // [rsp+1A4h] [rbp+9Ch]
  unsigned __int64 v66; // [rsp+1A8h] [rbp+A0h]
  int v67; // [rsp+1C0h] [rbp+B8h]
  int v68; // [rsp+1C4h] [rbp+BCh]
  UNICODE_STRING *v69; // [rsp+1D8h] [rbp+D0h]
  int v70; // [rsp+1E0h] [rbp+D8h]
  int v71; // [rsp+1E4h] [rbp+DCh]
  UNICODE_STRING *v72; // [rsp+1F8h] [rbp+F0h]
  int v73; // [rsp+200h] [rbp+F8h]
  int v74; // [rsp+204h] [rbp+FCh]
  UNICODE_STRING *v75; // [rsp+218h] [rbp+110h]
  int v76; // [rsp+220h] [rbp+118h]
  int v77; // [rsp+224h] [rbp+11Ch]
  UNICODE_STRING *v78; // [rsp+238h] [rbp+130h]
  int v79; // [rsp+240h] [rbp+138h]
  int v80; // [rsp+244h] [rbp+13Ch]
  UNICODE_STRING *v81; // [rsp+258h] [rbp+150h]
  int v82; // [rsp+260h] [rbp+158h]
  int v83; // [rsp+264h] [rbp+15Ch]
  struct _LIST_ENTRY *v84; // [rsp+268h] [rbp+160h]
  int v85; // [rsp+280h] [rbp+178h]
  int v86; // [rsp+284h] [rbp+17Ch]
  PVOID v87; // [rsp+298h] [rbp+190h]
  char v88; // [rsp+508h] [rbp+400h] BYREF
  char v89; // [rsp+528h] [rbp+420h] BYREF
  char v90; // [rsp+548h] [rbp+440h] BYREF

  memset_0(Src, 0, 0x418uLL);
  v42 = 0LL;
  GenerateAudit[2] = 0;
  v10 = 0LL;
  GenerateAudit[3] = 0;
  v46 = 0LL;
  P = 0LL;
  v47 = 0LL;
  GenerateAudit[1] = 0;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  DestinationString = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v13 = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v13 = SubjectContext.ClientToken;
  GenerateAudit[0] = SeAuditingWithTokenForSubcategory(118, v13);
  if ( GenerateAudit[0] )
  {
    v14 = *(_WORD *)(a2 + 2);
    v15 = PrimaryToken;
    if ( ClientToken )
      v15 = ClientToken;
    if ( (v14 & 0x10) == 0 )
    {
      v16 = 0LL;
LABEL_8:
      v17 = 0LL;
      goto LABEL_18;
    }
    if ( v14 >= 0 )
    {
      v16 = *(ACL **)(a2 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(a2 + 12);
      if ( (_DWORD)v18 )
        v16 = (ACL *)(a2 + v18);
      else
        v16 = 0LL;
    }
    if ( v14 >= 0 )
    {
      v17 = *(ACL **)(a2 + 24);
    }
    else
    {
      v19 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v19 )
        goto LABEL_8;
      v17 = (ACL *)(a2 + v19);
    }
LABEL_18:
    SeExamineSacl(v17, v16, v15, 2u, 1u, GenerateAudit, &GenerateAudit[1]);
    RtlInitUnicodeString(&DestinationString, L"Key");
    v20 = *(_WORD *)(a2 + 2);
    v21 = PrimaryToken;
    if ( ClientToken )
      v21 = ClientToken;
    if ( (v20 & 0x10) == 0 )
      goto LABEL_21;
    if ( v20 >= 0 )
    {
      v22 = *(ACL **)(a2 + 24);
    }
    else
    {
      v23 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v23 )
      {
LABEL_21:
        v22 = 0LL;
        goto LABEL_26;
      }
      v22 = (ACL *)(a2 + v23);
    }
LABEL_26:
    SeExamineGlobalSacl(&DestinationString, v22, v21, 2u, 1u, GenerateAudit, &GenerateAudit[1]);
    if ( !GenerateAudit[0] )
      goto LABEL_61;
    if ( a5 )
    {
      NameString = SepQueryNameString(a5, (PVOID *)&v42);
      if ( NameString < 0 )
        goto LABEL_52;
      if ( v42 )
        v10 = v42;
    }
    v25 = 4096;
    if ( a8 )
    {
      v26 = 4096;
      if ( *(_DWORD *)(a7 + 4) < 0x1000u )
        v26 = *(_DWORD *)(a7 + 4);
      NameString = AdtpBuildRegistryValueString(
                     *(_DWORD *)a7,
                     v26,
                     *(unsigned int **)(a7 + 8),
                     &v46,
                     (char *)&GenerateAudit[2]);
      if ( NameString < 0 )
        goto LABEL_52;
      v27 = *(_DWORD *)a7 + 1872;
      v43.MaximumLength = 26;
      v43.Buffer = (wchar_t *)&v88;
      NameString = AdtpBuildReplacementString(v27, &v43);
      if ( NameString < 0 )
        goto LABEL_52;
      if ( a8 == 2 )
      {
        RtlInitUnicodeString(&v47, L"-");
        RtlInitUnicodeString(&v44, L"-");
LABEL_43:
        v45.MaximumLength = 26;
        v45.Buffer = (wchar_t *)&v90;
        NameString = AdtpBuildReplacementString(a8 + 1904, &v45);
        if ( NameString >= 0 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
          NameString = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64 *)&P);
          if ( NameString >= 0 )
          {
            Src[0] = 3;
            v31 = PrimaryToken;
            Src[4] = 524406;
            if ( ClientToken )
              v31 = ClientToken;
            Src[1] = 4657;
            Src[6] = 4;
            v53 = 32;
            v52 = 1;
            v32 = v31[19];
            v55 = 5;
            v56 = 8;
            Src[7] = 4 * *(unsigned __int8 *)(*(_QWORD *)v32 + 1LL) + 8;
            v33 = (_QWORD **)PrimaryToken;
            if ( ClientToken )
            {
              v33 = (_QWORD **)ClientToken;
              PrimaryToken = ClientToken;
            }
            v34 = *v33[19];
            v54 = &SeSubsystemName;
            v57 = *((_QWORD *)PrimaryToken + 3);
            v51 = v34;
            if ( v10 )
            {
              v35 = *v10;
              v58 = 1;
              v59 = v35 + 16;
              v60 = v10;
            }
            v62 = *a4 + 16;
            v61 = 1;
            v63 = a4;
            v64 = 11;
            v65 = 8;
            v66 = ObNormalizeHandleValue(a6);
            v87 = P;
            v68 = v45.Length + 16;
            v69 = &v45;
            v67 = v36;
            v71 = v43.Length + 16;
            v72 = &v43;
            v70 = v36;
            v74 = v46.Length + 16;
            v75 = &v46;
            v73 = v36;
            v77 = v44.Length + 16;
            v78 = &v44;
            v76 = v36;
            v80 = v47.Length + 16;
            v81 = &v47;
            v37 = *(unsigned __int16 *)P + 16;
            v79 = v36;
            v86 = v37;
            v82 = v38;
            v83 = v39;
            v84 = Flink;
            v85 = 2;
            Src[2] = 13;
            SepAdtLogAuditRecord(Src);
            goto LABEL_53;
          }
        }
LABEL_52:
        SepAuditFailed(NameString);
LABEL_53:
        if ( GenerateAudit[2] )
          ExFreePoolWithTag(v46.Buffer, 0);
        if ( GenerateAudit[3] )
          ExFreePoolWithTag(v47.Buffer, 0);
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v42 )
          ExFreePoolWithTag(v42, 0);
        goto LABEL_61;
      }
    }
    else
    {
      RtlInitUnicodeString(&v46, L"-");
      RtlInitUnicodeString(&v43, L"-");
    }
    if ( *(_DWORD *)(a7 + 20) < 0x1000u )
      v25 = *(_DWORD *)(a7 + 20);
    NameString = AdtpBuildRegistryValueString(
                   *(_DWORD *)(a7 + 16),
                   v25,
                   *(unsigned int **)(a7 + 24),
                   &v47,
                   (char *)&GenerateAudit[3]);
    if ( NameString < 0 )
      goto LABEL_52;
    v28 = *(_DWORD *)(a7 + 16) + 1872;
    v44.MaximumLength = 26;
    v44.Buffer = (wchar_t *)&v89;
    NameString = AdtpBuildReplacementString(v28, &v44);
    if ( NameString < 0 )
      goto LABEL_52;
    goto LABEL_43;
  }
LABEL_61:
  SeReleaseSubjectContext(&SubjectContext);
}
