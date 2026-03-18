/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x1409F966C
 * Callers:
 *     NtSetSecurityObject @ 0x1408ECC30 (NtSetSecurityObject.c)
 * Callees:
 *     SeMaximumAuditMask @ 0x1404A5E44 (SeMaximumAuditMask.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     SepIsSidEqual @ 0x1408169B0 (SepIsSidEqual.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x140932EA0 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     SepIsAclEqual @ 0x1409F9158 (SepIsAclEqual.c)
 *     SepQueryTypeString @ 0x1409F95CC (SepQueryTypeString.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409F9DCC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryNameString @ 0x1409FBF48 (SepQueryNameString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140AB6258 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  char v19; // r15
  unsigned int v20; // r14d
  __int64 v21; // r15
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // r8
  __int16 v25; // ax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rcx
  unsigned __int16 *v29; // r9
  __int64 v30; // rdx
  __int16 v31; // r10
  unsigned __int16 *v32; // r13
  int v33; // ebx
  __int16 v34; // r11
  unsigned __int16 *v35; // r12
  _WORD *v36; // r15
  unsigned __int16 *v37; // r14
  int v38; // edx
  __int16 v39; // cx
  unsigned int v40; // eax
  int v41; // esi
  __int16 v42; // ax
  int v43; // r12d
  int v44; // r13d
  __int64 v45; // rbx
  unsigned int v46; // edi
  UNICODE_STRING *v47; // rax
  __int64 v48; // rax
  __int16 v49; // ax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int16 v52; // ax
  __int64 v53; // rax
  __int16 v54; // ax
  __int64 v55; // rax
  __int16 v56; // ax
  ACCESS_MASK v57; // ebx
  __int64 v58; // rax
  void *v59; // rdx
  SIZE_T v60; // rbx
  SIZE_T v61; // rax
  bool v62; // zf
  SIZE_T v63; // rbx
  SIZE_T v64; // rax
  SIZE_T v65; // rbx
  SIZE_T v66; // rax
  SIZE_T v67; // rbx
  SIZE_T v68; // rax
  __int64 v69; // rax
  void *v70; // rcx
  __int64 v71; // rax
  void *v72; // rdx
  __int64 v73; // rax
  void *v74; // rcx
  __int16 v75; // ax
  __int64 v76; // rax
  _WORD *v77; // rdx
  __int16 v78; // ax
  __int64 v79; // rax
  unsigned __int16 *v80; // rcx
  int v81; // [rsp+58h] [rbp-99h]
  unsigned __int16 *v82; // [rsp+60h] [rbp-91h]
  __int64 v83; // [rsp+68h] [rbp-89h]
  ACCESS_MASK AuditMask; // [rsp+70h] [rbp-81h] BYREF
  signed int v85; // [rsp+74h] [rbp-7Dh]
  PUNICODE_STRING ObjectTypeName; // [rsp+80h] [rbp-71h]
  int v87; // [rsp+88h] [rbp-69h]
  PACCESS_TOKEN Token; // [rsp+90h] [rbp-61h]
  PVOID P; // [rsp+98h] [rbp-59h] BYREF
  PVOID v90; // [rsp+A0h] [rbp-51h] BYREF
  void *Source1; // [rsp+A8h] [rbp-49h]
  void *Source2; // [rsp+B8h] [rbp-39h]
  __int64 v93; // [rsp+C0h] [rbp-31h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-29h] BYREF
  __int16 v95; // [rsp+138h] [rbp+47h]
  __int16 v97; // [rsp+150h] [rbp+5Fh]
  __int16 v98; // [rsp+160h] [rbp+6Fh]

  AuditMask = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v13 = 0;
  P = 0LL;
  v90 = 0LL;
  v14 = 0;
  v93 = 0LL;
  v15 = 0LL;
  ObjectTypeName = 0LL;
  v16 = 0LL;
  v85 = 0;
  v87 = 0;
  v81 = 0;
  v82 = 0LL;
  v95 = 0;
  Source2 = 0LL;
  v97 = 0;
  v98 = 0;
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
  v19 = SepAdtAuditThisEventWithContext(142LL, 1, 0, &SubjectContext);
  if ( v19 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    if ( SepAdtAuditThisEventWithContext(140LL, 1, 0, &SubjectContext) )
      v14 |= a8 & 8;
    if ( v19 && a12 )
      v14 |= a8 & 0x40;
  }
  if ( a3 && a3->Length )
  {
    ObjectTypeName = a3;
  }
  else if ( a2 )
  {
    v85 = SepQueryTypeString(a2, &v90);
    if ( v85 < 0 )
      goto LABEL_84;
    v47 = 0LL;
    if ( v90 )
      v47 = (UNICODE_STRING *)v90;
    ObjectTypeName = v47;
  }
  v20 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) != 0 )
  {
    v49 = *(_WORD *)(a10 + 2);
    if ( (v49 & 0x10) == 0 )
      goto LABEL_139;
    if ( v49 >= 0 )
    {
      v51 = *(_QWORD *)(a10 + 24);
      goto LABEL_141;
    }
    v50 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v50 )
      v51 = a10 + v50;
    else
LABEL_139:
      v51 = 0LL;
LABEL_141:
    SeMaximumAuditMask(v51, v20, (__int64)Token, &AuditMask);
    SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, v20, Token, &AuditMask);
    if ( (AuditMask & 0x80000) != 0 && v19 )
      v14 |= a8 & 0x10;
  }
  v21 = a13;
  v22 = *(_WORD *)(a13 + 2);
  if ( (v22 & 0x10) == 0 )
  {
LABEL_66:
    v24 = 0LL;
    goto LABEL_17;
  }
  if ( v22 < 0 )
  {
    v23 = *(unsigned int *)(a13 + 12);
    if ( (_DWORD)v23 )
    {
      v24 = a13 + v23;
      goto LABEL_17;
    }
    goto LABEL_66;
  }
  v24 = *(_QWORD *)(a13 + 24);
LABEL_17:
  v83 = v24;
  if ( !a10 )
    goto LABEL_22;
  v25 = *(_WORD *)(a10 + 2);
  if ( (v25 & 0x10) == 0 )
  {
LABEL_67:
    v16 = 0LL;
    goto LABEL_22;
  }
  if ( v25 < 0 )
  {
    v26 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v26 )
    {
      v16 = a10 + v26;
      goto LABEL_22;
    }
    goto LABEL_67;
  }
  v16 = *(_QWORD *)(a10 + 24);
LABEL_22:
  v27 = a9;
  if ( !a9 )
    goto LABEL_23;
  v52 = *(_WORD *)(a9 + 2);
  if ( (v52 & 0x10) == 0 )
  {
LABEL_144:
    v15 = 0LL;
    goto LABEL_23;
  }
  if ( v52 < 0 )
  {
    v53 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v53 )
    {
      v15 = a9 + v53;
      goto LABEL_23;
    }
    goto LABEL_144;
  }
  v15 = *(_QWORD *)(a9 + 24);
LABEL_23:
  if ( !a11 )
  {
    v28 = 0LL;
    goto LABEL_25;
  }
  v42 = *(_WORD *)(a11 + 2);
  if ( (v42 & 0x10) == 0 )
    goto LABEL_71;
  if ( v42 >= 0 )
  {
    v28 = *(_QWORD *)(a11 + 24);
  }
  else
  {
    v48 = *(unsigned int *)(a11 + 12);
    if ( !(_DWORD)v48 )
    {
LABEL_71:
      v28 = 0LL;
      goto LABEL_25;
    }
    v28 = a11 + v48;
  }
LABEL_25:
  v29 = (unsigned __int16 *)a12;
  if ( a12 )
  {
    v54 = *(_WORD *)(a12 + 2);
    if ( (v54 & 0x10) == 0 )
      goto LABEL_146;
    if ( v54 >= 0 )
    {
      v30 = *(_QWORD *)(a12 + 24);
      goto LABEL_27;
    }
    v55 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v55 )
      v30 = a12 + v55;
    else
LABEL_146:
      v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
LABEL_27:
  if ( v24 && *(_WORD *)(v24 + 4) )
  {
    if ( !v14 )
      goto LABEL_61;
    Source1 = (void *)(v24 + 8);
    if ( v16 && (v56 = *(_WORD *)(v16 + 4)) != 0 )
    {
      v32 = (unsigned __int16 *)(v16 + 8);
      v95 = v56;
      v31 = v56;
    }
    else
    {
      v31 = 0;
      v32 = 0LL;
    }
    if ( v15 && *(_WORD *)(v15 + 4) )
    {
      v29 = (unsigned __int16 *)(v15 + 8);
      v81 = *(unsigned __int16 *)(v15 + 4);
      v82 = (unsigned __int16 *)(v15 + 8);
      v33 = v81;
    }
    else
    {
      v33 = 0;
      v29 = 0LL;
    }
    if ( v28 && *(_WORD *)(v28 + 4) )
    {
      v97 = *(_WORD *)(v28 + 4);
      Source2 = (void *)(v28 + 8);
    }
    if ( v30 && *(_WORD *)(v30 + 4) )
    {
      v35 = (unsigned __int16 *)(v30 + 8);
      v98 = *(_WORD *)(v30 + 4);
      v34 = v98;
    }
    else
    {
      v34 = 0;
      v35 = 0LL;
    }
    v36 = Source1;
    v37 = (unsigned __int16 *)Source2;
    while ( 1 )
    {
      v38 = *(unsigned __int8 *)v36;
      if ( (unsigned __int8)v38 > 0xEu && v38 != 15 && v38 != 16 )
      {
        switch ( v38 )
        {
          case 17:
            if ( (v14 & 0x10) == 0 )
              goto LABEL_46;
            if ( v29 && v36[1] == v29[1] )
            {
              v65 = v29[1];
              v66 = RtlCompareMemory(v36, v29, v65);
              v24 = v83;
              if ( v66 == v65 )
              {
                v31 = v95;
                v62 = v81 == 1;
                v33 = v81 - 1;
                v39 = v97;
                v34 = v98;
                --v81;
                if ( v62 )
                  v29 = 0LL;
                else
                  v29 = (unsigned __int16 *)((char *)v82 + v82[1]);
                v82 = v29;
                goto LABEL_47;
              }
              v29 = v82;
            }
            v13 |= 0x10u;
            v14 &= ~0x10u;
            goto LABEL_45;
          case 18:
            if ( (v14 & 0x20) == 0 )
              goto LABEL_46;
            if ( v37 )
            {
              if ( v36[1] == v37[1] )
              {
                v63 = v37[1];
                v64 = RtlCompareMemory(v36, v37, v63);
                v24 = v83;
                if ( v64 == v63 )
                {
                  v29 = v82;
                  v62 = v97 == 1;
                  v39 = v97 - 1;
                  v31 = v95;
                  v34 = v98;
                  v33 = v81;
                  --v97;
                  if ( v62 )
                    v37 = 0LL;
                  else
                    v37 = (unsigned __int16 *)((char *)v37 + v37[1]);
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
            if ( v35 )
            {
              if ( v36[1] == v35[1] )
              {
                v60 = v35[1];
                v61 = RtlCompareMemory(v36, v35, v60);
                v24 = v83;
                if ( v61 == v60 )
                {
                  v29 = v82;
                  v62 = v98 == 1;
                  v34 = v98 - 1;
                  v31 = v95;
                  v39 = v97;
                  v33 = v81;
                  --v98;
                  if ( v62 )
                    v35 = 0LL;
                  else
                    v35 = (unsigned __int16 *)((char *)v35 + v35[1]);
                  goto LABEL_47;
                }
              }
            }
            v13 |= 0x40u;
            v14 &= ~0x40u;
LABEL_44:
            v29 = v82;
LABEL_45:
            v33 = v81;
            v34 = v98;
            v31 = v95;
            goto LABEL_46;
        }
      }
      if ( (v14 & 8) != 0 )
      {
        if ( v32 )
        {
          if ( *(_BYTE *)v32 == (_BYTE)v38 && v36[1] == v32[1] )
          {
            v67 = v32[1];
            v68 = RtlCompareMemory(v36, v32, v67);
            v24 = v83;
            if ( v68 == v67 )
            {
              v29 = v82;
              v62 = v95 == 1;
              v31 = v95 - 1;
              v39 = v97;
              v34 = v98;
              v33 = v81;
              --v95;
              if ( v62 )
                v32 = 0LL;
              else
                v32 = (unsigned __int16 *)((char *)v32 + v32[1]);
              goto LABEL_47;
            }
          }
        }
        v13 |= 8u;
        v14 &= ~8u;
        goto LABEL_44;
      }
LABEL_46:
      v39 = v97;
LABEL_47:
      v36 = (_WORD *)((char *)v36 + (unsigned __int16)v36[1]);
      v40 = *(unsigned __int16 *)(v24 + 4);
      if ( ++v87 >= v40 || !v14 )
      {
        v27 = a9;
        v21 = a13;
        if ( v31 )
          v13 |= v14 & 8;
        if ( v39 )
          v13 |= v14 & 0x20;
        if ( v34 )
          v13 |= v14 & 0x40;
        if ( v33 )
        {
          v41 = v14 & 0x10;
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
  if ( v28 && *(_WORD *)(v28 + 4) )
    v13 |= v14 & 0x20;
  if ( v30 && *(_WORD *)(v30 + 4) )
  {
    v41 = v14 & 0x40;
LABEL_56:
    v13 |= v41;
  }
LABEL_61:
  if ( v27 )
  {
    v57 = AuditMask;
    if ( (AuditMask & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( *(__int16 *)(v21 + 2) >= 0 )
        {
          v59 = *(void **)(v21 + 8);
        }
        else
        {
          v58 = *(unsigned int *)(v21 + 4);
          v59 = (_DWORD)v58 ? (void *)(v21 + v58) : 0LL;
        }
        if ( *(__int16 *)(v27 + 2) >= 0 )
        {
          v70 = *(void **)(v27 + 8);
        }
        else
        {
          v69 = *(unsigned int *)(v27 + 4);
          v70 = (_DWORD)v69 ? (void *)(v27 + v69) : 0LL;
        }
        if ( !SepIsSidEqual(v70, v59) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( *(__int16 *)(v21 + 2) >= 0 )
        {
          v72 = *(void **)(v21 + 16);
        }
        else
        {
          v71 = *(unsigned int *)(v21 + 8);
          v72 = (_DWORD)v71 ? (void *)(v21 + v71) : 0LL;
        }
        if ( *(__int16 *)(v27 + 2) >= 0 )
        {
          v74 = *(void **)(v27 + 16);
        }
        else
        {
          v73 = *(unsigned int *)(v27 + 8);
          v74 = (_DWORD)v73 ? (void *)(v27 + v73) : 0LL;
        }
        if ( !SepIsSidEqual(v74, v72) )
          v13 |= 2u;
      }
    }
    if ( (v57 & 0x40000) != 0 )
    {
      v75 = *(_WORD *)(v21 + 2);
      if ( (v75 & 4) != 0 )
      {
        if ( v75 >= 0 )
        {
          v77 = *(_WORD **)(v21 + 32);
LABEL_212:
          v78 = *(_WORD *)(v27 + 2);
          if ( (v78 & 4) != 0 )
          {
            if ( v78 >= 0 )
            {
              v80 = *(unsigned __int16 **)(v27 + 32);
LABEL_218:
              if ( !SepIsAclEqual(v80, v77) )
                v13 |= 4u;
              goto LABEL_62;
            }
            v79 = *(unsigned int *)(v27 + 16);
            if ( (_DWORD)v79 )
            {
              v80 = (unsigned __int16 *)(v27 + v79);
              goto LABEL_218;
            }
          }
          v80 = 0LL;
          goto LABEL_218;
        }
        v76 = *(unsigned int *)(v21 + 16);
        if ( (_DWORD)v76 )
        {
          v77 = (_WORD *)(v21 + v76);
          goto LABEL_212;
        }
      }
      v77 = 0LL;
      goto LABEL_212;
    }
  }
LABEL_62:
  if ( v13 )
  {
    if ( !a2 )
    {
      v43 = v93;
LABEL_76:
      v44 = (int)ObjectTypeName;
      v45 = **((_QWORD **)Token + 19);
      if ( (v13 & 8) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          (_DWORD)ObjectTypeName,
          v43,
          a5,
          v45,
          a10,
          8,
          v21);
      if ( (v13 & 0x20) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v44,
          v43,
          a5,
          v45,
          a11,
          32,
          v21);
      if ( (v13 & 0x40) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v44,
          v43,
          a5,
          v45,
          a12,
          64,
          v21);
      v46 = v13 & 0xFFFFFF97;
      if ( v46 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v44,
          v43,
          a5,
          v45,
          v27,
          v46,
          v21);
      goto LABEL_84;
    }
    v85 = SepQueryNameString(a2, &P, v24, v29);
    if ( v85 >= 0 )
    {
      v43 = 0;
      if ( P )
        v43 = (int)P;
      goto LABEL_76;
    }
LABEL_84:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v90 )
      ExFreePoolWithTag(v90, 0);
  }
  if ( v85 < 0 )
    SepAuditFailed(v85);
  SeReleaseSubjectContext(&SubjectContext);
}
