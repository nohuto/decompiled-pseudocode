/*
 * XREFs of SeLogAccessFailure @ 0x1403006A0
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     SepFlattenAcl @ 0x140510394 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x1405109FC (SepGetLearningModeObjectInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeLogAccessFailure(char *Object, __int64 a2, __int64 a3, ULONGLONG a4, __int64 a5, char a6, char a7)
{
  char v7; // bl
  ULONG v8; // r15d
  char v10; // cl
  ULONGLONG v11; // r12
  const wchar_t *v12; // rax
  __int64 LearningModeObjectInformation; // rax
  __int64 v14; // r13
  unsigned __int16 *v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  const WCHAR *v18; // rdx
  unsigned __int16 *v19; // rdx
  const WCHAR *v20; // rcx
  int v21; // eax
  unsigned __int64 LastRebalanceQpc; // rax
  int v23; // ecx
  const WCHAR *v24; // rdx
  __int64 v25; // rax
  int *v26; // rax
  int v27; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v29; // rdi
  int *v30; // rax
  unsigned int v31; // edi
  int **v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rax
  unsigned int v37; // edx
  __int64 v38; // rcx
  unsigned int v39; // edx
  __int16 v40; // r9
  struct _LIST_ENTRY *Blink; // r8
  __int64 v42; // rcx
  unsigned int v43; // edx
  int v44; // eax
  struct _LIST_ENTRY *v45; // r8
  __int64 v46; // rcx
  unsigned int v47; // edx
  int v48; // eax
  ULONGLONG v49; // rbx
  unsigned int v50; // r12d
  __int64 v51; // r15
  __int64 v52; // rdi
  int v53; // eax
  ULONGLONG v54; // rdx
  ULONG v55; // eax
  __int64 v56; // rcx
  __int16 v57; // ax
  unsigned int v58; // r12d
  ULONGLONG v59; // rdi
  unsigned int v60; // r15d
  __int64 v61; // r14
  __int64 v62; // rbx
  int v63; // eax
  PVOID v64; // r12
  ULONG v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rdx
  ULONGLONG v70; // rcx
  int v71; // eax
  __int64 v72; // r8
  __int64 *v73; // rdx
  __int64 v74; // r9
  __int64 v75; // rax
  void *v76; // rax
  PVOID v77; // rdx
  unsigned int v78; // ecx
  __int64 v79; // rax
  __int64 v80; // rax
  _DWORD *v81; // r12
  unsigned int v82; // r13d
  __int64 v83; // rbx
  unsigned __int8 *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int16 v89; // [rsp+48h] [rbp-C0h] BYREF
  char v90[2]; // [rsp+4Ah] [rbp-BEh] BYREF
  _WORD v91[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v92; // [rsp+50h] [rbp-B8h] BYREF
  int v93; // [rsp+54h] [rbp-B4h] BYREF
  int v94; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v95; // [rsp+5Ch] [rbp-ACh] BYREF
  int v96; // [rsp+60h] [rbp-A8h] BYREF
  int v97; // [rsp+64h] [rbp-A4h] BYREF
  int v98; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v99; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG v100; // [rsp+70h] [rbp-98h] BYREF
  int v101; // [rsp+74h] [rbp-94h] BYREF
  __int64 v102; // [rsp+78h] [rbp-90h]
  PVOID v103; // [rsp+80h] [rbp-88h]
  ULONGLONG v104; // [rsp+88h] [rbp-80h]
  void *v105; // [rsp+90h] [rbp-78h] BYREF
  PVOID v106; // [rsp+98h] [rbp-70h] BYREF
  PVOID v107; // [rsp+A0h] [rbp-68h]
  __int64 v108; // [rsp+A8h] [rbp-60h]
  void *v109; // [rsp+B0h] [rbp-58h]
  PVOID P; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C8h] [rbp-40h] BYREF
  const WCHAR *v112; // [rsp+D8h] [rbp-30h]
  int v113; // [rsp+E0h] [rbp-28h]
  int v114; // [rsp+E4h] [rbp-24h]
  const WCHAR *v115; // [rsp+E8h] [rbp-20h]
  int v116; // [rsp+F0h] [rbp-18h]
  int v117; // [rsp+F4h] [rbp-14h]
  const WCHAR *v118; // [rsp+F8h] [rbp-10h]
  int v119; // [rsp+100h] [rbp-8h]
  int v120; // [rsp+104h] [rbp-4h]
  const WCHAR *v121; // [rsp+108h] [rbp+0h]
  __int64 v122; // [rsp+110h] [rbp+8h]
  char *v123; // [rsp+118h] [rbp+10h]
  __int64 v124; // [rsp+120h] [rbp+18h]
  int *v125; // [rsp+128h] [rbp+20h]
  __int64 v126; // [rsp+130h] [rbp+28h]
  int *v127; // [rsp+138h] [rbp+30h]
  __int64 v128; // [rsp+140h] [rbp+38h]
  char *v129; // [rsp+148h] [rbp+40h]
  __int64 v130; // [rsp+150h] [rbp+48h]
  int *v131; // [rsp+158h] [rbp+50h]
  __int64 v132; // [rsp+160h] [rbp+58h]
  int *v133; // [rsp+168h] [rbp+60h]
  __int64 v134; // [rsp+170h] [rbp+68h]
  _DWORD *v135; // [rsp+178h] [rbp+70h] BYREF
  int v136; // [rsp+180h] [rbp+78h]
  int v137; // [rsp+184h] [rbp+7Ch]
  char v138; // [rsp+188h] [rbp+80h] BYREF

  v7 = a7;
  v8 = 0;
  v107 = 0LL;
  v10 = 0;
  v105 = 0LL;
  v11 = a4;
  v109 = 0LL;
  v106 = 0LL;
  v104 = a4;
  v103 = 0LL;
  v95 = 0;
  LOWORD(v92) = 0;
  v99 = 0;
  v100 = 0;
  LOWORD(v93) = 0;
  v90[0] = 0;
  v97 = 0;
  v98 = 1;
  v96 = 0;
  v94 = 0;
  v89 = 0;
  v91[0] = 0;
  if ( KeGetCurrentIrql() >= 2u || !EtwKernelProvRegHandle )
    return;
  if ( Object )
  {
    v96 = *((_DWORD *)Object + 48);
    v97 = *((_DWORD *)Object + 49);
  }
  else
  {
    Object = (char *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1732535635LL, &v96, (char *)&v89 + 1, &v97, 0LL);
    if ( !Object )
      return;
    v10 = 1;
    HIBYTE(v89) = 1;
  }
  if ( (*((_DWORD *)Object + 50) & 0x1000000) == 0 )
  {
    if ( v10 )
      ObfDereferenceObjectWithTag(Object, 0x67446553u);
    return;
  }
  UserData.Reserved = 0;
  v12 = L"Normal";
  if ( v7 )
    v12 = L"Permissive";
  UserData.Ptr = (ULONGLONG)v12;
  UserData.Size = v7 != 0 ? 22 : 14;
  LearningModeObjectInformation = SepGetLearningModeObjectInformation(v90);
  v108 = LearningModeObjectInformation;
  v14 = LearningModeObjectInformation;
  if ( LearningModeObjectInformation && (v15 = *(unsigned __int16 **)(LearningModeObjectInformation + 16)) != 0LL )
  {
    v16 = *v15;
    v17 = v16 + 2;
    if ( v16 + 2 >= (unsigned __int64)v15[1] )
      v17 = v15[1];
    v18 = (const WCHAR *)*((_QWORD *)v15 + 1);
  }
  else
  {
    v17 = 2;
    v18 = &SourceString;
  }
  v112 = v18;
  v113 = v17;
  v114 = 0;
  if ( v14 && (v19 = *(unsigned __int16 **)(v14 + 24)) != 0LL )
  {
    if ( *(_QWORD *)(v14 + 32) && (v20 = *(const WCHAR **)(v14 + 48)) != 0LL )
    {
      v21 = *(unsigned __int16 *)(v14 + 42);
    }
    else
    {
      v72 = *v19;
      v21 = v72 + 2;
      if ( v72 + 2 >= (unsigned __int64)v19[1] )
        v21 = v19[1];
      v20 = (const WCHAR *)*((_QWORD *)v19 + 1);
    }
  }
  else
  {
    v21 = 2;
    v20 = &SourceString;
  }
  v117 = 0;
  v115 = v20;
  v116 = v21;
  LastRebalanceQpc = KeGetCurrentThread()->Process[1].LastRebalanceQpc;
  if ( LastRebalanceQpc )
  {
    v23 = *(unsigned __int16 *)(LastRebalanceQpc + 2);
    v24 = *(const WCHAR **)(LastRebalanceQpc + 8);
  }
  else
  {
    v23 = 2;
    v24 = &SourceString;
  }
  v118 = v24;
  v123 = &a6;
  v125 = &v96;
  v127 = &v97;
  v129 = Object + 120;
  v119 = v23;
  v120 = 0;
  v121 = &SourceString;
  v122 = 2LL;
  v124 = 4LL;
  v126 = 4LL;
  v128 = 4LL;
  v130 = 4LL;
  v25 = *((_QWORD *)Object + 135);
  if ( v25 )
    v26 = (int *)(v25 + 40);
  else
    v26 = &v94;
  v131 = v26;
  v132 = 4LL;
  v101 = 1;
  v27 = 4 * *(unsigned __int8 *)(**((_QWORD **)Object + 19) + 1LL) + 12;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  P = Pool2;
  v29 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *(_DWORD *)(*((_QWORD *)Object + 19) + 8LL);
    memmove(
      Pool2 + 1,
      **((const void ***)Object + 19),
      4LL * *(unsigned __int8 *)(**((_QWORD **)Object + 19) + 1LL) + 8);
    v135 = v29;
    v30 = &v101;
    v31 = 13;
    v136 = v27;
    v134 = 4LL;
    v32 = (int **)&v138;
    v137 = 0;
  }
  else
  {
    v30 = &v94;
    v134 = 4LL;
    v32 = &v135;
    v31 = 12;
  }
  v133 = v30;
  v33 = *((_QWORD *)Object + 98);
  v32[1] = (int *)4;
  if ( v33 )
  {
    *v32 = &v98;
    v69 = 2LL * v31;
    v70 = *((_QWORD *)Object + 98);
    ++v31;
    v71 = *(unsigned __int8 *)(v70 + 1);
    *(&UserData.Ptr + v69) = v70;
    *(&UserData.Reserved + 2 * v69) = 0;
    *(&UserData.Size + 2 * v69) = 4 * v71 + 8;
  }
  else
  {
    *v32 = &v94;
  }
  if ( !*((_DWORD *)Object + 200) )
  {
    v34 = 2LL * v31;
    *(&UserData.Ptr + v34) = (ULONGLONG)&v94;
    *((_QWORD *)&UserData.Size + v34) = 4LL;
LABEL_31:
    ++v31;
    goto LABEL_32;
  }
  v73 = (__int64 *)*((_QWORD *)Object + 99);
  v74 = *((unsigned int *)Object + 200);
  do
  {
    v75 = *v73;
    v73 += 2;
    v8 += 4 * *(unsigned __int8 *)(v75 + 1) + 12;
    --v74;
  }
  while ( v74 );
  v76 = (void *)ExAllocatePool2(0x100uLL);
  v103 = v76;
  v77 = v76;
  if ( v76 )
  {
    v78 = *((_DWORD *)Object + 200);
    v81 = v76;
    v95 = v78;
    LODWORD(v102) = 0;
    if ( v78 )
    {
      v82 = v102;
      do
      {
        v83 = 2LL * v82;
        *v81 = *(_DWORD *)(*((_QWORD *)Object + 99) + 16LL * v82 + 8);
        v84 = *(unsigned __int8 **)(*((_QWORD *)Object + 99) + 16LL * v82);
        memmove(v81 + 1, v84, 4LL * v84[1] + 8);
        ++v82;
        v78 = v95;
        v81 += *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 99) + 8 * v83) + 1LL) + 3;
      }
      while ( v82 < v95 );
      v14 = v108;
      v77 = v103;
    }
    v11 = v104;
  }
  else
  {
    v78 = v95;
  }
  v79 = 2LL * v31++;
  *(&UserData.Ptr + v79) = (ULONGLONG)&v95;
  *((_QWORD *)&UserData.Size + v79) = 4LL;
  if ( v78 )
  {
    v80 = 2LL * v31;
    *(&UserData.Size + 2 * v80) = v8;
    *(&UserData.Reserved + 2 * v80) = 0;
    *(&UserData.Ptr + v80) = (ULONGLONG)v77;
    goto LABEL_31;
  }
LABEL_32:
  v35 = v31 + 1;
  *((_QWORD *)&UserData.Size + 2 * v31) = 4LL;
  if ( v11 )
  {
    *(&UserData.Ptr + 2 * v31) = (ULONGLONG)&v98;
    v67 = 2LL * v35;
    v35 = v31 + 2;
    v68 = 4 * *(unsigned __int8 *)(v11 + 1) + 8;
    *(&UserData.Ptr + v67) = v11;
    *(&UserData.Size + 2 * v67) = v68;
    *(&UserData.Reserved + 2 * v67) = 0;
  }
  else
  {
    *(&UserData.Ptr + 2 * v31) = (ULONGLONG)&v94;
  }
  v36 = v35;
  v37 = v35 + 1;
  v36 *= 2LL;
  v38 = 2LL * v37;
  v39 = v37 + 1;
  *(&UserData.Ptr + v36) = a5;
  *((_QWORD *)&UserData.Size + v36) = 1LL;
  v40 = *(_WORD *)(a5 + 2);
  *(&UserData.Ptr + v38) = a5 + 2;
  *((_QWORD *)&UserData.Size + v38) = 2LL;
  if ( v40 >= 0 )
  {
    Blink = *(struct _LIST_ENTRY **)(a5 + 8);
    goto LABEL_36;
  }
  v85 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v85 )
  {
    Blink = (struct _LIST_ENTRY *)(a5 + v85);
LABEL_36:
    if ( Blink )
      goto LABEL_38;
  }
  Blink = PspSiloMonitorLock.Header.WaitListHead.Blink;
LABEL_38:
  v42 = v39;
  v43 = v39 + 1;
  v42 *= 2LL;
  v44 = 4 * BYTE1(Blink->Flink) + 8;
  *(&UserData.Ptr + v42) = (ULONGLONG)Blink;
  *(&UserData.Size + 2 * v42) = v44;
  *(&UserData.Reserved + 2 * v42) = 0;
  if ( v40 < 0 )
  {
    v86 = *(unsigned int *)(a5 + 4);
    if ( !(_DWORD)v86 )
      goto LABEL_41;
    v45 = (struct _LIST_ENTRY *)(a5 + v86);
  }
  else
  {
    v45 = *(struct _LIST_ENTRY **)(a5 + 8);
  }
  if ( !v45 )
LABEL_41:
    v45 = PspSiloMonitorLock.Header.WaitListHead.Blink;
  v46 = v43;
  v47 = v43 + 1;
  v46 *= 2LL;
  v48 = 4 * BYTE1(v45->Flink) + 8;
  *(&UserData.Ptr + v46) = (ULONGLONG)v45;
  *(&UserData.Size + 2 * v46) = v48;
  *(&UserData.Reserved + 2 * v46) = 0;
  if ( (v40 & 4) == 0 )
    goto LABEL_74;
  if ( v40 >= 0 )
  {
    v49 = *(_QWORD *)(a5 + 32);
    goto LABEL_45;
  }
  v87 = *(unsigned int *)(a5 + 16);
  if ( (_DWORD)v87 )
    v49 = a5 + v87;
  else
LABEL_74:
    v49 = 0LL;
LABEL_45:
  v50 = v47 + 1;
  v51 = 2LL * v47;
  v52 = 2LL * (v47 + 1);
  if ( !v49 )
  {
    *((_QWORD *)&UserData.Size + 2 * v47) = 1LL;
    goto LABEL_71;
  }
  v53 = SepFlattenAcl(v49, &v105, &v99, &v92);
  *((_QWORD *)&UserData.Size + v51) = 1LL;
  v54 = (ULONGLONG)v105;
  v107 = v105;
  if ( v53 < 0 )
  {
LABEL_71:
    *(&UserData.Ptr + v51) = (ULONGLONG)&v89;
    *((_QWORD *)&UserData.Size + v52) = 2LL;
    *(&UserData.Ptr + v52) = (ULONGLONG)v91;
    goto LABEL_48;
  }
  *(&UserData.Ptr + v51) = v49;
  *(&UserData.Ptr + v52) = (ULONGLONG)&v92;
  ++v50;
  v55 = v99;
  *((_QWORD *)&UserData.Size + v52) = 2LL;
  v56 = 2LL * v50;
  *(&UserData.Ptr + v56) = v54;
  *(&UserData.Size + 2 * v56) = v55;
  *(&UserData.Reserved + 2 * v56) = 0;
LABEL_48:
  v57 = *(_WORD *)(a5 + 2);
  v58 = v50 + 1;
  if ( (v57 & 0x10) == 0 )
    goto LABEL_75;
  if ( v57 >= 0 )
  {
    v59 = *(_QWORD *)(a5 + 24);
    goto LABEL_51;
  }
  v88 = *(unsigned int *)(a5 + 12);
  if ( (_DWORD)v88 )
    v59 = a5 + v88;
  else
LABEL_75:
    v59 = 0LL;
LABEL_51:
  v60 = v58 + 1;
  v61 = 2LL * v58;
  v62 = 2LL * (v58 + 1);
  if ( !v59 )
  {
    v64 = v109;
    *((_QWORD *)&UserData.Size + v61) = 1LL;
    goto LABEL_73;
  }
  v63 = SepFlattenAcl(v59, &v106, &v100, &v93);
  *((_QWORD *)&UserData.Size + 2 * v58) = 1LL;
  v64 = v106;
  if ( v63 < 0 )
  {
LABEL_73:
    *(&UserData.Ptr + v61) = (ULONGLONG)&v89;
    *((_QWORD *)&UserData.Size + v62) = 2LL;
    *(&UserData.Ptr + v62) = (ULONGLONG)v91;
    goto LABEL_54;
  }
  *(&UserData.Ptr + v61) = v59;
  *(&UserData.Ptr + v62) = (ULONGLONG)&v93;
  ++v60;
  v65 = v100;
  *((_QWORD *)&UserData.Size + v62) = 2LL;
  v66 = 2LL * v60;
  *(&UserData.Ptr + v66) = (ULONGLONG)v64;
  *(&UserData.Size + 2 * v66) = v65;
  *(&UserData.Reserved + 2 * v66) = 0;
LABEL_54:
  EtwWriteEx(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, 0, 0LL, 0LL, v60 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v103 )
    ExFreePoolWithTag(v103, 0);
  if ( v107 )
    ExFreePoolWithTag(v107, 0);
  if ( v64 )
    ExFreePoolWithTag(v64, 0);
  if ( HIBYTE(v89) )
    ObfDereferenceObjectWithTag(Object, 0x67446553u);
  if ( v90[0] )
  {
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v14 + 16) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v14 + 16), 0);
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v14 + 24) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v14 + 24), 0);
    ExFreePoolWithTag((PVOID)v14, 0);
  }
}
