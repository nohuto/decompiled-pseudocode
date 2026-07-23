/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x140A6173C
 * Callers:
 *     NtSetSecurityObject @ 0x1408F31F0 (NtSetSecurityObject.c)
 * Callees:
 *     SeMaximumAuditMask @ 0x14049F4D4 (SeMaximumAuditMask.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     SepIsSidEqual @ 0x14081CBC0 (SepIsSidEqual.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091D6BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryNameString @ 0x140920B48 (SepQueryNameString.c)
 *     SepQueryTypeString @ 0x140A61E9C (SepQueryTypeString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140AB75F8 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepIsAclEqual @ 0x140AE29D8 (SepIsAclEqual.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeSecurityDescriptorChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        UNICODE_STRING *a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v13; // edi
  int v14; // esi
  __int64 v15; // r12
  __int64 v16; // r13
  PACCESS_TOKEN PrimaryToken; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // r15
  unsigned int v22; // r14d
  __int64 v23; // r15
  __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // r8
  __int16 v27; // ax
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int16 v32; // r10
  unsigned __int16 *v33; // r13
  int v34; // ebx
  unsigned __int16 *v35; // r9
  __int16 v36; // r11
  unsigned __int16 *v37; // r12
  _WORD *v38; // r15
  unsigned __int16 *v39; // r14
  int v40; // edx
  __int16 v41; // cx
  unsigned int v42; // eax
  int v43; // esi
  __int16 v44; // ax
  unsigned __int16 *v45; // r12
  PUNICODE_STRING v46; // r13
  __int64 v47; // rbx
  unsigned int v48; // edi
  UNICODE_STRING *v49; // rax
  __int64 v50; // rax
  __int16 v51; // ax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int16 v54; // ax
  __int64 v55; // rax
  __int16 v56; // ax
  __int64 v57; // rax
  __int16 v58; // ax
  ACCESS_MASK v59; // ebx
  __int64 v60; // rax
  void *v61; // rdx
  SIZE_T v62; // rbx
  SIZE_T v63; // rax
  bool v64; // zf
  SIZE_T v65; // rbx
  SIZE_T v66; // rax
  SIZE_T v67; // rbx
  SIZE_T v68; // rax
  SIZE_T v69; // rbx
  SIZE_T v70; // rax
  __int64 v71; // rax
  void *v72; // rcx
  __int64 v73; // rax
  void *v74; // rdx
  __int64 v75; // rax
  void *v76; // rcx
  __int16 v77; // ax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int16 v80; // ax
  __int64 v81; // rax
  __int64 v82; // rcx
  int v83; // [rsp+58h] [rbp-99h]
  unsigned __int16 *v84; // [rsp+60h] [rbp-91h]
  __int64 v85; // [rsp+68h] [rbp-89h]
  ACCESS_MASK AuditMask; // [rsp+70h] [rbp-81h] BYREF
  signed int v87; // [rsp+74h] [rbp-7Dh]
  PUNICODE_STRING ObjectTypeName; // [rsp+80h] [rbp-71h]
  int v89; // [rsp+88h] [rbp-69h]
  PACCESS_TOKEN Token; // [rsp+90h] [rbp-61h]
  PVOID P; // [rsp+98h] [rbp-59h] BYREF
  PVOID v92; // [rsp+A0h] [rbp-51h] BYREF
  void *Source1; // [rsp+A8h] [rbp-49h]
  void *Source2; // [rsp+B8h] [rbp-39h]
  unsigned __int16 *v95; // [rsp+C0h] [rbp-31h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-29h] BYREF
  __int16 v97; // [rsp+138h] [rbp+47h]
  __int16 v99; // [rsp+150h] [rbp+5Fh]
  __int16 v100; // [rsp+160h] [rbp+6Fh]

  AuditMask = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v13 = 0;
  P = 0LL;
  v92 = 0LL;
  v14 = 0;
  v95 = 0LL;
  v15 = 0LL;
  ObjectTypeName = 0LL;
  v16 = 0LL;
  v87 = 0;
  v89 = 0;
  v83 = 0;
  v84 = 0LL;
  v97 = 0;
  Source2 = 0LL;
  v99 = 0;
  v100 = 0;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  Token = PrimaryToken;
  if ( !PrimaryToken )
  {
    SepAuditFailed(-1073741700);
    return;
  }
  v21 = SepAdtAuditThisEventWithContext(142LL, 1, 0, &SubjectContext);
  if ( v21 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    if ( SepAdtAuditThisEventWithContext(140LL, 1, 0, &SubjectContext) )
      v14 |= a8 & 8;
    if ( v21 && a12 )
      v14 |= a8 & 0x40;
  }
  if ( a3 && a3->Length )
  {
    ObjectTypeName = a3;
  }
  else if ( a2 )
  {
    v87 = SepQueryTypeString(a2, &v92, v19, v20);
    if ( v87 < 0 )
      goto LABEL_84;
    v49 = 0LL;
    if ( v92 )
      v49 = (UNICODE_STRING *)v92;
    ObjectTypeName = v49;
  }
  v22 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) != 0 )
  {
    v51 = *(_WORD *)(a10 + 2);
    if ( (v51 & 0x10) == 0 )
      goto LABEL_139;
    if ( v51 >= 0 )
    {
      v53 = *(_QWORD *)(a10 + 24);
      goto LABEL_141;
    }
    v52 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v52 )
      v53 = a10 + v52;
    else
LABEL_139:
      v53 = 0LL;
LABEL_141:
    SeMaximumAuditMask(v53, v22, (__int64)Token, &AuditMask);
    SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, v22, Token, &AuditMask);
    if ( (AuditMask & 0x80000) != 0 && v21 )
      v14 |= a8 & 0x10;
  }
  v23 = a13;
  v24 = *(_WORD *)(a13 + 2);
  if ( (v24 & 0x10) == 0 )
  {
LABEL_66:
    v26 = 0LL;
    goto LABEL_17;
  }
  if ( v24 < 0 )
  {
    v25 = *(unsigned int *)(a13 + 12);
    if ( (_DWORD)v25 )
    {
      v26 = a13 + v25;
      goto LABEL_17;
    }
    goto LABEL_66;
  }
  v26 = *(_QWORD *)(a13 + 24);
LABEL_17:
  v85 = v26;
  if ( !a10 )
    goto LABEL_22;
  v27 = *(_WORD *)(a10 + 2);
  if ( (v27 & 0x10) == 0 )
  {
LABEL_67:
    v16 = 0LL;
    goto LABEL_22;
  }
  if ( v27 < 0 )
  {
    v28 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v28 )
    {
      v16 = a10 + v28;
      goto LABEL_22;
    }
    goto LABEL_67;
  }
  v16 = *(_QWORD *)(a10 + 24);
LABEL_22:
  v29 = a9;
  if ( !a9 )
    goto LABEL_23;
  v54 = *(_WORD *)(a9 + 2);
  if ( (v54 & 0x10) == 0 )
  {
LABEL_144:
    v15 = 0LL;
    goto LABEL_23;
  }
  if ( v54 < 0 )
  {
    v55 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v55 )
    {
      v15 = a9 + v55;
      goto LABEL_23;
    }
    goto LABEL_144;
  }
  v15 = *(_QWORD *)(a9 + 24);
LABEL_23:
  if ( !a11 )
  {
    v30 = 0LL;
    goto LABEL_25;
  }
  v44 = *(_WORD *)(a11 + 2);
  if ( (v44 & 0x10) == 0 )
    goto LABEL_71;
  if ( v44 >= 0 )
  {
    v30 = *(_QWORD *)(a11 + 24);
  }
  else
  {
    v50 = *(unsigned int *)(a11 + 12);
    if ( !(_DWORD)v50 )
    {
LABEL_71:
      v30 = 0LL;
      goto LABEL_25;
    }
    v30 = a11 + v50;
  }
LABEL_25:
  if ( a12 )
  {
    v56 = *(_WORD *)(a12 + 2);
    if ( (v56 & 0x10) == 0 )
      goto LABEL_146;
    if ( v56 >= 0 )
    {
      v31 = *(_QWORD *)(a12 + 24);
      goto LABEL_27;
    }
    v57 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v57 )
      v31 = a12 + v57;
    else
LABEL_146:
      v31 = 0LL;
  }
  else
  {
    v31 = 0LL;
  }
LABEL_27:
  if ( v26 && *(_WORD *)(v26 + 4) )
  {
    if ( !v14 )
      goto LABEL_61;
    Source1 = (void *)(v26 + 8);
    if ( v16 && (v58 = *(_WORD *)(v16 + 4)) != 0 )
    {
      v33 = (unsigned __int16 *)(v16 + 8);
      v97 = v58;
      v32 = v58;
    }
    else
    {
      v32 = 0;
      v33 = 0LL;
    }
    if ( v15 && *(_WORD *)(v15 + 4) )
    {
      v35 = (unsigned __int16 *)(v15 + 8);
      v83 = *(unsigned __int16 *)(v15 + 4);
      v84 = (unsigned __int16 *)(v15 + 8);
      v34 = v83;
    }
    else
    {
      v34 = 0;
      v35 = 0LL;
    }
    if ( v30 && *(_WORD *)(v30 + 4) )
    {
      v99 = *(_WORD *)(v30 + 4);
      Source2 = (void *)(v30 + 8);
    }
    if ( v31 && *(_WORD *)(v31 + 4) )
    {
      v37 = (unsigned __int16 *)(v31 + 8);
      v100 = *(_WORD *)(v31 + 4);
      v36 = v100;
    }
    else
    {
      v36 = 0;
      v37 = 0LL;
    }
    v38 = Source1;
    v39 = (unsigned __int16 *)Source2;
    while ( 1 )
    {
      v40 = *(unsigned __int8 *)v38;
      if ( (unsigned __int8)v40 > 0xEu && v40 != 15 && v40 != 16 )
      {
        switch ( v40 )
        {
          case 17:
            if ( (v14 & 0x10) == 0 )
              goto LABEL_46;
            if ( v35 && v38[1] == v35[1] )
            {
              v67 = v35[1];
              v68 = RtlCompareMemory(v38, v35, v67);
              v26 = v85;
              if ( v68 == v67 )
              {
                v32 = v97;
                v64 = v83 == 1;
                v34 = v83 - 1;
                v41 = v99;
                v36 = v100;
                --v83;
                if ( v64 )
                  v35 = 0LL;
                else
                  v35 = (unsigned __int16 *)((char *)v84 + v84[1]);
                v84 = v35;
                goto LABEL_47;
              }
              v35 = v84;
            }
            v13 |= 0x10u;
            v14 &= ~0x10u;
            goto LABEL_45;
          case 18:
            if ( (v14 & 0x20) == 0 )
              goto LABEL_46;
            if ( v39 )
            {
              if ( v38[1] == v39[1] )
              {
                v65 = v39[1];
                v66 = RtlCompareMemory(v38, v39, v65);
                v26 = v85;
                if ( v66 == v65 )
                {
                  v35 = v84;
                  v64 = v99 == 1;
                  v41 = v99 - 1;
                  v32 = v97;
                  v36 = v100;
                  v34 = v83;
                  --v99;
                  if ( v64 )
                    v39 = 0LL;
                  else
                    v39 = (unsigned __int16 *)((char *)v39 + v39[1]);
                  goto LABEL_47;
                }
              }
            }
            v13 |= 0x20u;
            v14 &= ~0x20u;
            goto LABEL_44;
          case 19:
            if ( (v14 & 0x40) == 0 )
              goto LABEL_46;
            if ( v37 )
            {
              if ( v38[1] == v37[1] )
              {
                v62 = v37[1];
                v63 = RtlCompareMemory(v38, v37, v62);
                v26 = v85;
                if ( v63 == v62 )
                {
                  v35 = v84;
                  v64 = v100 == 1;
                  v36 = v100 - 1;
                  v32 = v97;
                  v41 = v99;
                  v34 = v83;
                  --v100;
                  if ( v64 )
                    v37 = 0LL;
                  else
                    v37 = (unsigned __int16 *)((char *)v37 + v37[1]);
                  goto LABEL_47;
                }
              }
            }
            v13 |= 0x40u;
            v14 &= ~0x40u;
LABEL_44:
            v35 = v84;
LABEL_45:
            v34 = v83;
            v36 = v100;
            v32 = v97;
            goto LABEL_46;
        }
      }
      if ( (v14 & 8) != 0 )
      {
        if ( v33 )
        {
          if ( *(_BYTE *)v33 == (_BYTE)v40 && v38[1] == v33[1] )
          {
            v69 = v33[1];
            v70 = RtlCompareMemory(v38, v33, v69);
            v26 = v85;
            if ( v70 == v69 )
            {
              v35 = v84;
              v64 = v97 == 1;
              v32 = v97 - 1;
              v41 = v99;
              v36 = v100;
              v34 = v83;
              --v97;
              if ( v64 )
                v33 = 0LL;
              else
                v33 = (unsigned __int16 *)((char *)v33 + v33[1]);
              goto LABEL_47;
            }
          }
        }
        v13 |= 8u;
        v14 &= ~8u;
        goto LABEL_44;
      }
LABEL_46:
      v41 = v99;
LABEL_47:
      v38 = (_WORD *)((char *)v38 + (unsigned __int16)v38[1]);
      v42 = *(unsigned __int16 *)(v26 + 4);
      if ( ++v89 >= v42 || !v14 )
      {
        v29 = a9;
        v23 = a13;
        if ( v32 )
          v13 |= v14 & 8;
        if ( v41 )
          v13 |= v14 & 0x20;
        if ( v36 )
          v13 |= v14 & 0x40;
        if ( v34 )
        {
          v43 = v14 & 0x10;
          goto LABEL_56;
        }
        goto LABEL_61;
      }
    }
  }
  if ( v16 && *(_WORD *)(v16 + 4) )
    v13 = v14 & 8;
  if ( v15 && *(_WORD *)(v15 + 4) )
    v13 |= v14 & 0x10;
  if ( v30 && *(_WORD *)(v30 + 4) )
    v13 |= v14 & 0x20;
  if ( v31 && *(_WORD *)(v31 + 4) )
  {
    v43 = v14 & 0x40;
LABEL_56:
    v13 |= v43;
  }
LABEL_61:
  if ( v29 )
  {
    v59 = AuditMask;
    if ( (AuditMask & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v61 = *(void **)(v23 + 8);
        }
        else
        {
          v60 = *(unsigned int *)(v23 + 4);
          v61 = (_DWORD)v60 ? (void *)(v23 + v60) : 0LL;
        }
        if ( *(__int16 *)(v29 + 2) >= 0 )
        {
          v72 = *(void **)(v29 + 8);
        }
        else
        {
          v71 = *(unsigned int *)(v29 + 4);
          v72 = (_DWORD)v71 ? (void *)(v29 + v71) : 0LL;
        }
        if ( !SepIsSidEqual(v72, v61) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v74 = *(void **)(v23 + 16);
        }
        else
        {
          v73 = *(unsigned int *)(v23 + 8);
          v74 = (_DWORD)v73 ? (void *)(v23 + v73) : 0LL;
        }
        if ( *(__int16 *)(v29 + 2) >= 0 )
        {
          v76 = *(void **)(v29 + 16);
        }
        else
        {
          v75 = *(unsigned int *)(v29 + 8);
          v76 = (_DWORD)v75 ? (void *)(v29 + v75) : 0LL;
        }
        if ( !SepIsSidEqual(v76, v74) )
          v13 |= 2u;
      }
    }
    if ( (v59 & 0x40000) != 0 )
    {
      v77 = *(_WORD *)(v23 + 2);
      if ( (v77 & 4) != 0 )
      {
        if ( v77 >= 0 )
        {
          v79 = *(_QWORD *)(v23 + 32);
LABEL_212:
          v80 = *(_WORD *)(v29 + 2);
          if ( (v80 & 4) != 0 )
          {
            if ( v80 >= 0 )
            {
              v82 = *(_QWORD *)(v29 + 32);
LABEL_218:
              if ( !(unsigned __int8)SepIsAclEqual(v82, v79) )
                v13 |= 4u;
              goto LABEL_62;
            }
            v81 = *(unsigned int *)(v29 + 16);
            if ( (_DWORD)v81 )
            {
              v82 = v29 + v81;
              goto LABEL_218;
            }
          }
          v82 = 0LL;
          goto LABEL_218;
        }
        v78 = *(unsigned int *)(v23 + 16);
        if ( (_DWORD)v78 )
        {
          v79 = v23 + v78;
          goto LABEL_212;
        }
      }
      v79 = 0LL;
      goto LABEL_212;
    }
  }
LABEL_62:
  if ( v13 )
  {
    if ( !a2 )
    {
      v45 = v95;
LABEL_76:
      v46 = ObjectTypeName;
      v47 = **((_QWORD **)Token + 19);
      if ( (v13 & 8) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          &ObjectTypeName->Length,
          v45,
          a5,
          v47,
          a10,
          8,
          v23);
      if ( (v13 & 0x20) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          &v46->Length,
          v45,
          a5,
          v47,
          a11,
          32,
          v23);
      if ( (v13 & 0x40) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          &v46->Length,
          v45,
          a5,
          v47,
          a12,
          64,
          v23);
      v48 = v13 & 0xFFFFFF97;
      if ( v48 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          &v46->Length,
          v45,
          a5,
          v47,
          v29,
          v48,
          v23);
      goto LABEL_84;
    }
    v87 = SepQueryNameString(a2, &P);
    if ( v87 >= 0 )
    {
      v45 = 0LL;
      if ( P )
        v45 = (unsigned __int16 *)P;
      goto LABEL_76;
    }
LABEL_84:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v92 )
      ExFreePoolWithTag(v92, 0);
  }
  if ( v87 < 0 )
    SepAuditFailed(v87);
  SeReleaseSubjectContext(&SubjectContext);
}
