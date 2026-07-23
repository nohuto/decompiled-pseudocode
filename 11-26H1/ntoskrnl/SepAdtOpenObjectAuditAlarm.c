/*
 * XREFs of SepAdtOpenObjectAuditAlarm @ 0x14091FB0C
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAuditHandleCreation @ 0x14091F860 (SeAuditHandleCreation.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140A61470 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140B0BB70 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1404A8CA4 (SepCheckAndCopySelfRelativeSD.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     SepSecurityDescriptorStrictLength @ 0x14091EFBC (SepSecurityDescriptorStrictLength.c)
 *     ObNormalizeHandleValue @ 0x14091F114 (ObNormalizeHandleValue.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepSDContainsAttributeACE @ 0x140B5CE18 (SepSDContainsAttributeACE.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall SepAdtOpenObjectAuditAlarm(
        __int16 a1,
        const int *a2,
        unsigned __int64 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int16 *a6,
        _QWORD *a7,
        _QWORD *a8,
        unsigned int a9,
        unsigned int a10,
        int *a11,
        unsigned __int8 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        unsigned int a16,
        _DWORD *a17,
        __int128 *a18,
        __int64 a19)
{
  __int16 *v19; // r15
  __int64 v21; // rbx
  __int128 *v23; // r13
  _KPROCESS *CurrentThreadProcess; // rax
  signed int AllocatedFullProcessImageName; // edi
  _QWORD *v26; // rax
  unsigned __int8 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // ecx
  const int *v31; // rdx
  __int64 v32; // r11
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // rcx
  int v39; // ecx
  unsigned int v40; // ebx
  char *Pool2; // rax
  char *v42; // r12
  unsigned int v43; // eax
  __int64 v44; // rax
  int v45; // ebx
  int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned __int16 *v49; // rdx
  int v50; // ecx
  int v51; // ecx
  PVOID v52; // rbx
  PVOID v53; // r14
  int v54; // r8d
  unsigned int v55; // edx
  int v56; // eax
  unsigned __int16 v57; // r13
  _WORD *v58; // r8
  char *v59; // rax
  _OWORD *v60; // r9
  __int64 v61; // r8
  unsigned int v62; // edx
  _DWORD *v63; // r10
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  __int16 v68; // [rsp+28h] [rbp-E0h] BYREF
  char v69; // [rsp+2Ah] [rbp-DEh] BYREF
  int v70; // [rsp+2Ch] [rbp-DCh]
  size_t Size; // [rsp+30h] [rbp-D8h] BYREF
  PVOID v72; // [rsp+38h] [rbp-D0h]
  PVOID v73; // [rsp+40h] [rbp-C8h] BYREF
  void *Src; // [rsp+48h] [rbp-C0h]
  PVOID v75; // [rsp+50h] [rbp-B8h] BYREF
  __int16 *v76; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h]
  PVOID v78; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+70h] [rbp-98h]
  _QWORD *v80; // [rsp+78h] [rbp-90h]
  const int *v81; // [rsp+80h] [rbp-88h]
  unsigned __int64 *v82; // [rsp+88h] [rbp-80h]
  __int16 *v83; // [rsp+90h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT v84; // [rsp+98h] [rbp-70h] BYREF
  int v85; // [rsp+B8h] [rbp-50h] BYREF
  int v86; // [rsp+BCh] [rbp-4Ch]
  unsigned int v87; // [rsp+C0h] [rbp-48h]
  __int16 v88; // [rsp+C8h] [rbp-40h]
  __int16 v89; // [rsp+CAh] [rbp-3Eh]
  int v90; // [rsp+D0h] [rbp-38h]
  _DWORD v91[5]; // [rsp+D4h] [rbp-34h]
  __int64 v92; // [rsp+E8h] [rbp-20h]
  int v93; // [rsp+F0h] [rbp-18h]
  int v94; // [rsp+F4h] [rbp-14h]
  const int *v95; // [rsp+108h] [rbp+0h]
  int v96; // [rsp+110h] [rbp+8h]
  int v97; // [rsp+114h] [rbp+Ch]
  __int64 v98; // [rsp+118h] [rbp+10h]
  int v99; // [rsp+130h] [rbp+28h]
  int v100; // [rsp+134h] [rbp+2Ch]
  const int *v101; // [rsp+148h] [rbp+40h]
  int v102; // [rsp+150h] [rbp+48h]
  int v103; // [rsp+154h] [rbp+4Ch]
  unsigned __int16 *v104; // [rsp+168h] [rbp+60h]
  int v105; // [rsp+170h] [rbp+68h]
  int v106; // [rsp+174h] [rbp+6Ch]
  unsigned __int16 *v107; // [rsp+188h] [rbp+80h]
  int v108; // [rsp+190h] [rbp+88h]
  int v109; // [rsp+194h] [rbp+8Ch]
  unsigned __int64 v110; // [rsp+198h] [rbp+90h]
  int v111; // [rsp+1B0h] [rbp+A8h]
  int v112; // [rsp+1B4h] [rbp+ACh]
  __int128 *v113; // [rsp+1C8h] [rbp+C0h]
  int v114; // [rsp+1D0h] [rbp+C8h]
  int v115; // [rsp+1D4h] [rbp+CCh]
  __int64 v116; // [rsp+1D8h] [rbp+D0h]
  __int64 v117; // [rsp+1E0h] [rbp+D8h]
  __int128 v118; // [rsp+4D8h] [rbp+3D0h] BYREF

  v19 = a6;
  v82 = a3;
  v81 = a2;
  LOWORD(v70) = a1;
  v80 = a8;
  v83 = a6;
  v76 = a6;
  v79 = a19;
  memset_0(&v85, 0, 0x418uLL);
  v84.ClientToken = a7;
  P = 0LL;
  Src = 0LL;
  v73 = 0LL;
  v72 = 0LL;
  v75 = 0LL;
  v21 = 0LL;
  v78 = 0LL;
  *(_QWORD *)&v84.ImpersonationLevel = 0LL;
  v84.ProcessAuditId = 0LL;
  v118 = 0LL;
  Size = 0LL;
  v69 = 0;
  v68 = 0;
  v84.PrimaryToken = a8;
  if ( !SepAdtAuditThisEventWithContext(124LL, a12, a12 == 0, &v84) )
    return 1;
  v23 = &v118;
  if ( a18 )
    v23 = a18;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64 *)&v78);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_54;
  if ( a7 )
    v21 = a7[3];
  v26 = a7;
  if ( !a7 )
    v26 = v80;
  v27 = a12;
  v28 = *(_QWORD *)v26[19];
  v29 = v80[3];
  v30 = 8;
  if ( a14 == 2 )
    v30 = 3;
  v86 = 4656;
  v85 = v30;
  v88 = v70;
  v89 = 8;
  if ( !a12 )
    v89 = 16;
  v31 = &SeSubsystemName;
  v32 = 4LL;
  v90 = 4;
  if ( v81 )
    v31 = v81;
  v33 = *(unsigned __int8 *)(v28 + 1);
  v92 = v28;
  v93 = 1;
  v95 = v31;
  v96 = 5;
  v91[0] = 4 * v33 + 8;
  v34 = *(unsigned __int16 *)v31 + 16;
  v97 = 8;
  v94 = v34;
  v98 = v21;
  if ( !a7 )
    v98 = v29;
  v99 = 1;
  v100 = v34;
  v101 = v31;
  v87 = 4;
  if ( !a4 )
  {
    AllocatedFullProcessImageName = -1073741811;
    goto LABEL_54;
  }
  v35 = *a4 + 16;
  v104 = a4;
  v103 = v35;
  v102 = 1;
  if ( a5 )
  {
    if ( (_WORD)v70 == 117 || (v105 = 1, (_WORD)v70 == 129) )
      v105 = 2;
    v36 = *a5;
    v107 = a5;
    v106 = v36 + 16;
  }
  v108 = 11;
  v109 = 8;
  if ( v82 )
    v110 = ObNormalizeHandleValue(*v82);
  else
    v110 = 0LL;
  v113 = v23;
  v116 = a10;
  v111 = 13;
  v112 = 16;
  v114 = 7;
  v115 = v32;
  v117 = v32;
  if ( !v27 )
    v116 = a9;
  v37 = v79;
  v87 = 9;
  if ( !v79 )
    goto LABEL_33;
  v38 = *(_QWORD *)(v79 + 72);
  if ( !v38 )
    goto LABEL_33;
  AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                    *(__int16 **)(v38 + 56),
                                    &v73,
                                    (ULONG *)&Size,
                                    (_BYTE *)&v68 + 1);
  if ( AllocatedFullProcessImageName < 0 )
  {
    v52 = v73;
    goto LABEL_55;
  }
  AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                    *(__int16 **)(*(_QWORD *)(v37 + 72) + 64LL),
                                    &v75,
                                    (ULONG *)&Size + 1,
                                    &v69);
  if ( AllocatedFullProcessImageName < 0 )
  {
    v52 = v73;
    v53 = v75;
    goto LABEL_56;
  }
  v72 = v75;
  Src = v73;
  if ( v73 || v75 )
    v39 = 8;
  else
LABEL_33:
    v39 = 0;
  LODWORD(v73) = Size + 152 + HIDWORD(Size) - v39;
  v40 = (unsigned int)v73;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v42 = Pool2;
  if ( !Pool2 )
  {
    AllocatedFullProcessImageName = -1073741670;
    goto LABEL_54;
  }
  memset_0(Pool2, 0, v40);
  v43 = a10;
  *((_DWORD *)v42 + 34) = a12;
  *((_DWORD *)v42 + 33) = 4;
  if ( !a12 )
    v43 = a9;
  *(_DWORD *)v42 = v43 & 0xFDFFFFFF;
  if ( v79 )
  {
    v44 = *(_QWORD *)(v79 + 72);
    if ( v44 )
    {
      *(_OWORD *)(v42 + 4) = *(_OWORD *)(v44 + 88);
      *(_OWORD *)(v42 + 20) = *(_OWORD *)(v44 + 104);
      *(_OWORD *)(v42 + 36) = *(_OWORD *)(v44 + 120);
      *(_OWORD *)(v42 + 52) = *(_OWORD *)(v44 + 136);
      *(_OWORD *)(v42 + 68) = *(_OWORD *)(v44 + 152);
      *(_OWORD *)(v42 + 84) = *(_OWORD *)(v44 + 168);
      *(_OWORD *)(v42 + 100) = *(_OWORD *)(v44 + 184);
      *(_OWORD *)(v42 + 116) = *(_OWORD *)(v44 + 200);
    }
  }
  v45 = Size;
  if ( Src )
    memmove(v42 + 144, Src, (unsigned int)Size);
  if ( v72 )
    memmove(&v42[v45 + 144], v72, HIDWORD(Size));
  v46 = (int)v73;
  v91[8 * v87 - 1] = 29;
  v91[8 * v87] = v46;
  *(&v92 + 4 * v87++) = (__int64)v42;
  v91[8 * v87 - 1] = 10;
  v91[8 * v87] = 4;
  if ( a12 )
    *(_QWORD *)&v91[8 * v87 + 1] = a10;
  else
    *(_QWORD *)&v91[8 * v87 + 1] = a9;
  v47 = ++v87;
  if ( a11 )
  {
    v54 = *a11;
    if ( *a11 )
    {
      v91[8 * v47 - 1] = 8;
      v91[8 * v87] = 12 * v54 + 8;
      *(&v92 + 4 * v87) = (__int64)a11;
      v47 = v87;
    }
  }
  v48 = v47 + 1;
  v87 = v48;
  if ( !a16 )
    goto LABEL_48;
  v55 = 0;
  v56 = 0;
  v57 = 2 - (a12 != 0);
  v58 = (_WORD *)(a15 + 2);
  do
  {
    if ( !v55 || (v57 & *v58) != 0 )
      ++v56;
    ++v55;
    v58 += 24;
  }
  while ( v55 < a16 );
  if ( !v56 )
  {
LABEL_48:
    v49 = (unsigned __int16 *)v78;
    v91[8 * v48 - 1] = 27;
    v91[8 * v87] = 4;
    *(_QWORD *)&v91[8 * v87++ + 1] = *((unsigned int *)v80 + 32);
    v91[8 * v87 - 1] = 11;
    v91[8 * v87] = 8;
    *(_QWORD *)&v91[8 * v87++ + 1] = a13;
    v91[8 * v87 - 1] = 2;
    v91[8 * v87] = *v49 + 16;
    v50 = (unsigned __int16)v70;
    *(&v92 + 4 * v87++) = (__int64)v49;
    v51 = v50 - 117;
    if ( (!v51 || v51 == 12) && v19 && v86 == 4656 && (unsigned __int8)SepSDContainsAttributeACE(v19) )
    {
      v65 = SepCheckAndCopySelfRelativeSD(v19, (PVOID *)&v76, (ULONG *)&Size, &v68);
      v19 = v76;
      AllocatedFullProcessImageName = v65;
      if ( v65 < 0 )
      {
LABEL_51:
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_53;
      }
      v66 = (__int64)v76;
      v91[8 * v87 - 1] = 31;
      v67 = SepSecurityDescriptorStrictLength(v66);
      v91[8 * v87] = v67;
      *(&v92 + 4 * v87) = (__int64)v19;
      *(_QWORD *)&v91[8 * v87 + 1] = 32LL;
      *(_QWORD *)&v91[8 * v87 + 3] = 0LL;
    }
    ++v87;
    SepAdtLogAuditRecord(&v85);
    goto LABEL_51;
  }
  v59 = (char *)ExAllocatePool2(0x100uLL);
  P = v59;
  if ( v59 )
  {
    v60 = (_OWORD *)(a15 + 4);
    v61 = 0LL;
    v62 = 0;
    v63 = a17;
    do
    {
      if ( !v62 || (v57 & *((_WORD *)v60 - 1)) != 0 )
      {
        v64 = 3 * v61;
        *(_OWORD *)&v59[8 * v64] = *v60;
        *(_WORD *)&v59[8 * v64 + 18] = *((_WORD *)v60 - 2);
        if ( v62 )
        {
          *(_WORD *)&v59[24 * v61 + 16] = 0;
          if ( a17 && a12 )
            *(_DWORD *)&v59[24 * v61 + 20] = *v63;
        }
        else
        {
          *(_WORD *)&v59[24 * v61 + 16] = 1;
          *(_DWORD *)&v59[24 * v61 + 20] = 0;
        }
        v61 = (unsigned int)(v61 + 1);
      }
      ++v62;
      v60 += 3;
      ++v63;
    }
    while ( v62 < a16 );
    v91[8 * v87 - 1] = 9;
    v91[8 * v87] = 24 * v61;
    *(&v92 + 4 * v87) = (__int64)v59;
    v19 = v83;
    *(_QWORD *)&v91[8 * v87 + 3] = 4LL;
    v48 = v87 + 1;
    v86 = 4661;
    ++v87;
    goto LABEL_48;
  }
  AllocatedFullProcessImageName = -1073741670;
LABEL_53:
  ExFreePoolWithTag(v42, 0);
LABEL_54:
  v52 = Src;
LABEL_55:
  v53 = v72;
LABEL_56:
  if ( v78 )
    ExFreePoolWithTag(v78, 0);
  if ( (_BYTE)v68 && v19 )
    ExFreePoolWithTag(v19, 0);
  if ( HIBYTE(v68) && v52 )
    ExFreePoolWithTag(v52, 0);
  if ( v69 && v53 )
    ExFreePoolWithTag(v53, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed(AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
