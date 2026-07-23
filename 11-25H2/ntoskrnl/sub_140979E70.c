/*
 * XREFs of sub_140979E70 @ 0x140979E70
 * Callers:
 *     Callout @ 0x140A29C30 (Callout.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     RtlUIntAdd @ 0x1404561F4 (RtlUIntAdd.c)
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     sub_1404BA858 @ 0x1404BA858 (sub_1404BA858.c)
 *     sub_1404D3840 @ 0x1404D3840 (sub_1404D3840.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     sub_1406E9830 @ 0x1406E9830 (sub_1406E9830.c)
 *     sub_1406EA1C4 @ 0x1406EA1C4 (sub_1406EA1C4.c)
 *     sub_1406EA460 @ 0x1406EA460 (sub_1406EA460.c)
 *     sub_1406EA830 @ 0x1406EA830 (sub_1406EA830.c)
 *     sub_1406EE164 @ 0x1406EE164 (sub_1406EE164.c)
 *     sub_1406EE700 @ 0x1406EE700 (sub_1406EE700.c)
 *     sub_1406EEAB8 @ 0x1406EEAB8 (sub_1406EEAB8.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     sub_140979A80 @ 0x140979A80 (sub_140979A80.c)
 *     sub_140979B60 @ 0x140979B60 (sub_140979B60.c)
 *     sub_140979C40 @ 0x140979C40 (sub_140979C40.c)
 *     sub_140979C70 @ 0x140979C70 (sub_140979C70.c)
 *     sub_140979CA0 @ 0x140979CA0 (sub_140979CA0.c)
 *     sub_140979D30 @ 0x140979D30 (sub_140979D30.c)
 *     sub_140979D60 @ 0x140979D60 (sub_140979D60.c)
 *     sub_140979DE0 @ 0x140979DE0 (sub_140979DE0.c)
 *     SPCallServerHandleQueryPolicy @ 0x14097D124 (SPCallServerHandleQueryPolicy.c)
 *     sub_14097E278 @ 0x14097E278 (sub_14097E278.c)
 *     sub_1409FF21C @ 0x1409FF21C (sub_1409FF21C.c)
 *     sub_1409FF648 @ 0x1409FF648 (sub_1409FF648.c)
 *     sub_1409FFD00 @ 0x1409FFD00 (sub_1409FFD00.c)
 *     sub_140A2E578 @ 0x140A2E578 (sub_140A2E578.c)
 *     sub_140A3626C @ 0x140A3626C (sub_140A3626C.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x140A53A04 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_140A54400 @ 0x140A54400 (sub_140A54400.c)
 *     SPCallServerHandleUpdatePolicies @ 0x140A67588 (SPCallServerHandleUpdatePolicies.c)
 *     SPCallServerHandleUpdateLicense @ 0x140A88010 (SPCallServerHandleUpdateLicense.c)
 *     sub_140AA1E68 @ 0x140AA1E68 (sub_140AA1E68.c)
 *     sub_140AAB7C8 @ 0x140AAB7C8 (sub_140AAB7C8.c)
 *     sub_140AB4A2C @ 0x140AB4A2C (sub_140AB4A2C.c)
 *     sub_140AB5F18 @ 0x140AB5F18 (sub_140AB5F18.c)
 *     sub_140AB6360 @ 0x140AB6360 (sub_140AB6360.c)
 *     sub_140AB6990 @ 0x140AB6990 (sub_140AB6990.c)
 *     sub_140AB9F74 @ 0x140AB9F74 (sub_140AB9F74.c)
 *     sub_140ABA558 @ 0x140ABA558 (sub_140ABA558.c)
 *     sub_140ABBF04 @ 0x140ABBF04 (sub_140ABBF04.c)
 *     sub_140ABD3B0 @ 0x140ABD3B0 (sub_140ABD3B0.c)
 *     sub_140ABEAF8 @ 0x140ABEAF8 (sub_140ABEAF8.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140979E70(unsigned int *a1, unsigned int a2, int a3, char **a4, unsigned int *a5)
{
  unsigned __int8 *v5; // r15
  void *v6; // rsi
  unsigned int *v7; // r12
  __int64 v8; // r13
  PVOID v9; // r14
  size_t v10; // r13
  unsigned int *v11; // r8
  unsigned int *v12; // rcx
  size_t v13; // r14
  char *v14; // r15
  unsigned int v15; // r9d
  unsigned int *v16; // rcx
  unsigned int v17; // r8d
  size_t v18; // rsi
  const void *v19; // r12
  int Acl; // edi
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  unsigned int v28; // ecx
  __int64 Pool2; // rax
  unsigned int *v30; // rbx
  void *v31; // rax
  void *v32; // rax
  unsigned __int8 *v33; // r14
  unsigned __int64 v34; // rcx
  __int64 *v35; // rbx
  unsigned int v36; // edx
  __int64 v37; // rsi
  unsigned int v38; // eax
  __int64 v39; // rbx
  unsigned __int8 v40; // di
  void *v41; // rax
  unsigned __int64 v42; // r9
  unsigned __int8 *v43; // r12
  unsigned __int8 *v44; // r11
  unsigned int v45; // r13d
  unsigned __int8 *v46; // r8
  int v47; // edx
  int v48; // eax
  unsigned int v49; // r15d
  int v50; // edx
  int v51; // r8d
  unsigned int v52; // r13d
  int v53; // r15d
  int v54; // r13d
  int v55; // r15d
  int v56; // r13d
  int v57; // r15d
  int v58; // r13d
  __int64 v59; // r12
  unsigned __int64 v60; // r14
  unsigned __int8 *v61; // rsi
  int v62; // r15d
  int v63; // r13d
  unsigned int v64; // r15d
  unsigned __int8 *v65; // rbx
  unsigned int v66; // r13d
  unsigned int v67; // r15d
  __int64 v68; // rax
  __int64 (__fastcall *v69)(char, unsigned __int64, unsigned __int64, __int64, int, __int64, unsigned int); // rax
  int v70; // ecx
  __int64 v71; // r9
  unsigned __int64 v72; // r12
  unsigned __int64 v73; // r11
  unsigned int v74; // r9d
  __int64 v75; // rax
  __int64 (__fastcall *v76)(unsigned __int64, __int64, __int64, __int64, int, __int64, int); // rax
  int v77; // edx
  _BYTE *v78; // r11
  int v79; // edi
  bool v80; // zf
  unsigned int v81; // eax
  int v82; // eax
  unsigned __int64 i; // rax
  void *v84; // rcx
  void *v85; // rcx
  void *v86; // rcx
  void *v87; // rax
  const void *v88; // rdx
  size_t v89; // rsi
  char *v90; // rbx
  unsigned __int64 v91; // rdx
  size_t v92; // r11
  char *v93; // rcx
  unsigned int v94; // eax
  char *v95; // r8
  int v96; // r9d
  int v97; // r10d
  int v98; // r8d
  int v99; // r13d
  char v100; // dl
  int v101; // eax
  __int64 v102; // rdi
  __int64 v103; // rbx
  _BYTE *v104; // rsi
  __int64 v105; // rcx
  int v106; // eax
  int v107; // eax
  unsigned int v108; // r10d
  unsigned int v109; // r13d
  unsigned int v110; // r8d
  unsigned int v111; // r14d
  unsigned int v112; // r9d
  _BYTE *v113; // rdx
  _BYTE *v114; // r11
  char v115; // al
  void *v116; // rcx
  void *v117; // rcx
  void *v118; // rcx
  unsigned int *v119; // rax
  int v120; // edx
  int *v121; // rsi
  int v122; // esi
  int j; // r9d
  unsigned int *v124; // rcx
  PVOID v125; // r8
  size_t v126; // r14
  void *v127; // r11
  const void *v128; // r12
  unsigned int *v129; // r10
  unsigned int v130; // r9d
  unsigned int *v131; // rax
  size_t v132; // r15
  unsigned int *v133; // rcx
  const void *v134; // r13
  _OWORD *v135; // rax
  __int64 v136; // r8
  _OWORD *v137; // rbx
  unsigned int *v138; // rax
  PVOID v139; // rcx
  void *v140; // rax
  void *v141; // rax
  void *v142; // rcx
  void *v143; // rcx
  void *v144; // rcx
  unsigned __int64 v145; // rdi
  __int64 v146; // rbx
  unsigned __int8 *v147; // rax
  __int64 *v148; // rdx
  int v149; // ecx
  unsigned __int8 *v150; // rdi
  int v151; // eax
  unsigned __int64 v152; // r8
  __int64 v153; // rbx
  unsigned __int64 v154; // rax
  unsigned __int8 v155; // si
  unsigned int v156; // r13d
  __int64 v157; // rax
  char *v158; // r12
  unsigned int v159; // r14d
  unsigned __int8 *v160; // rsi
  _BYTE *v161; // r15
  unsigned __int64 v162; // rbx
  unsigned __int8 *v163; // rdx
  unsigned __int8 *v164; // rcx
  unsigned __int8 *v165; // rbx
  unsigned __int8 *v166; // rdi
  int v167; // r13d
  int v168; // r14d
  int v169; // r13d
  int v170; // r12d
  unsigned __int64 v171; // rsi
  __int64 v172; // r15
  __int64 v173; // rax
  __int64 (__fastcall *v174)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int); // rax
  int v175; // ecx
  unsigned __int64 v176; // r9
  unsigned __int64 v177; // r8
  unsigned __int64 v178; // rdx
  int v179; // eax
  __int64 v180; // rax
  __int64 (__fastcall *v181)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int); // rax
  int v182; // ecx
  unsigned __int64 v183; // r9
  unsigned __int64 v184; // r8
  unsigned __int64 v185; // rdx
  int v186; // eax
  int v187; // eax
  int v188; // ebx
  unsigned int v189; // r14d
  int v190; // r12d
  int v191; // r14d
  int v192; // r12d
  int v193; // r14d
  int v194; // r12d
  int v195; // r14d
  unsigned int v196; // r12d
  int v197; // r14d
  int v198; // r12d
  _BYTE *v199; // r9
  int v200; // r13d
  int v201; // r14d
  int v202; // r12d
  unsigned int v203; // r12d
  void *v204; // rax
  void *v205; // rbx
  _DWORD *v206; // r14
  _DWORD *v207; // rsi
  unsigned int v208; // r11d
  unsigned int v209; // r10d
  unsigned int v210; // ecx
  unsigned int v211; // eax
  unsigned int v212; // ebx
  _DWORD *v213; // rax
  char *v214; // rcx
  _DWORD *v215; // rdi
  _DWORD *v216; // rcx
  _DWORD *v217; // rdi
  _DWORD *v218; // rcx
  _DWORD *v219; // rdi
  __int64 v220; // rax
  __int64 v221; // r14
  ULONG v222; // ebx
  ULONG v223; // ebx
  ULONG v224; // ebx
  ACL *v225; // rax
  ACL *v226; // rsi
  BOOLEAN v227; // bl
  size_t v228; // rbx
  const void *v229; // rsi
  const void *v230; // rdi
  int updated; // eax
  __int64 v232; // rdx
  __int64 v233; // r8
  int v234; // r8d
  int v235; // r9d
  int v236; // edx
  char v237; // r13
  unsigned __int8 *v238; // rdi
  int v239; // eax
  __int64 v240; // rcx
  _BYTE *v241; // r13
  unsigned __int8 *v242; // r12
  int v243; // edi
  __int64 v244; // r15
  int v245; // eax
  int v246; // eax
  unsigned int v247; // eax
  unsigned int v248; // r9d
  unsigned int v249; // ebx
  unsigned int v250; // edx
  unsigned int v251; // r8d
  char v252; // al
  __int64 v253; // r14
  ULONG v254; // ebx
  ULONG v255; // ebx
  ULONG v256; // ebx
  ACL *v257; // rax
  ACL *v258; // rsi
  BOOLEAN v259; // bl
  const void *v260; // rdi
  int v261; // eax
  unsigned int *v262; // rax
  unsigned int v263; // edx
  __int64 v264; // r8
  unsigned int *v265; // rcx
  __int64 *v266; // rbx
  __int64 v267; // rbx
  unsigned int *v268; // rax
  unsigned int k; // edx
  size_t v270; // rdi
  unsigned int *v271; // rcx
  unsigned int *v272; // rsi
  void *v273; // rax
  unsigned int *v274; // rax
  unsigned int v275; // edx
  unsigned int *v276; // rcx
  PVOID v277; // r10
  size_t v278; // r14
  __int64 v279; // r8
  size_t v280; // rbx
  const void *v281; // r14
  const void *v282; // rsi
  const void *v283; // rdi
  void *v284; // rax
  int v285; // edi
  _DWORD *v286; // rax
  int v287; // edi
  unsigned int v288; // ecx
  unsigned __int64 v289; // rdx
  unsigned int m; // r8d
  unsigned int v291; // eax
  ACCESS_MASK PreviouslyGrantedAccess[2]; // [rsp+28h] [rbp-E0h]
  PPRIVILEGE_SET *Privileges; // [rsp+30h] [rbp-D8h]
  unsigned __int8 *v294; // [rsp+58h] [rbp-B0h]
  PVOID v295; // [rsp+60h] [rbp-A8h]
  PVOID v296; // [rsp+60h] [rbp-A8h]
  PVOID v297; // [rsp+60h] [rbp-A8h]
  char *v298; // [rsp+68h] [rbp-A0h]
  unsigned int *v299; // [rsp+70h] [rbp-98h]
  unsigned int *v300; // [rsp+78h] [rbp-90h]
  PVOID v301[2]; // [rsp+80h] [rbp-88h] BYREF
  PVOID P[2]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int8 v303; // [rsp+A0h] [rbp-68h]
  int v304; // [rsp+A4h] [rbp-64h]
  int v305; // [rsp+A8h] [rbp-60h]
  int v306; // [rsp+ACh] [rbp-5Ch]
  unsigned __int8 *v307; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v308; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v309; // [rsp+C0h] [rbp-48h]
  int v310; // [rsp+C8h] [rbp-40h]
  __int64 v311; // [rsp+D0h] [rbp-38h]
  PVOID v312; // [rsp+D8h] [rbp-30h]
  char *v313; // [rsp+E0h] [rbp-28h]
  int v314; // [rsp+E8h] [rbp-20h]
  __int64 v315; // [rsp+F0h] [rbp-18h]
  unsigned __int8 *v316; // [rsp+F8h] [rbp-10h]
  NTSTATUS AccessStatus; // [rsp+100h] [rbp-8h] BYREF
  int v318; // [rsp+104h] [rbp-4h] BYREF
  _BYTE *v319; // [rsp+108h] [rbp+0h]
  NTSTATUS v320; // [rsp+110h] [rbp+8h] BYREF
  unsigned int *v321; // [rsp+118h] [rbp+10h]
  ACCESS_MASK v322; // [rsp+120h] [rbp+18h] BYREF
  ULONG v323; // [rsp+124h] [rbp+1Ch] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+128h] [rbp+20h] BYREF
  ULONG ReturnLength; // [rsp+12Ch] [rbp+24h] BYREF
  ULONG v326; // [rsp+130h] [rbp+28h] BYREF
  unsigned __int8 *v327; // [rsp+138h] [rbp+30h]
  __int64 v328; // [rsp+140h] [rbp+38h] BYREF
  __int64 SystemInformation; // [rsp+148h] [rbp+40h] BYREF
  __int64 v330; // [rsp+150h] [rbp+48h] BYREF
  void *v331; // [rsp+158h] [rbp+50h]
  char **v332; // [rsp+168h] [rbp+60h]
  unsigned int *v333; // [rsp+170h] [rbp+68h]
  _OWORD v334[2]; // [rsp+178h] [rbp+70h] BYREF
  ACL *v335; // [rsp+198h] [rbp+90h]
  _OWORD SecurityDescriptor[2]; // [rsp+1A0h] [rbp+98h] BYREF
  ACL *v337; // [rsp+1C0h] [rbp+B8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v340; // [rsp+210h] [rbp+108h] BYREF
  __int64 v341; // [rsp+218h] [rbp+110h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v308 = (unsigned __int64)a1;
  v332 = a4;
  LODWORD(v313) = a3;
  v333 = a5;
  v307 = 0LL;
  v331 = 0LL;
  v321 = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v301 = 0LL;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
    goto LABEL_19;
  }
  v10 = *a1;
  v11 = a1 + 1;
  if ( a1 + 1 < a1 )
    goto LABEL_17;
  if ( a2 - 4 < (unsigned int)v10 )
  {
    Acl = -1073741762;
    goto LABEL_18;
  }
  v12 = (unsigned int *)((char *)v11 + v10);
  if ( (unsigned int *)((char *)v11 + v10) < v11 || (unsigned int)v10 >= 0xFFFFFFFC )
  {
LABEL_17:
    Acl = -1073741675;
LABEL_18:
    v8 = 0LL;
    goto LABEL_19;
  }
  if ( a2 - ((_DWORD)v10 + 4) < 4 )
  {
    Acl = -1073741762;
    goto LABEL_18;
  }
  v13 = *v12;
  v14 = (char *)(v12 + 1);
  if ( v12 + 1 < v12 )
    goto LABEL_16;
  v15 = v10 + 8;
  if ( (int)v10 + 8 < (unsigned int)(v10 + 4) )
    goto LABEL_16;
  if ( a2 - v15 < (unsigned int)v13 )
  {
    Acl = -1073741762;
    v9 = 0LL;
    v5 = 0LL;
    goto LABEL_18;
  }
  v16 = (unsigned int *)&v14[v13];
  if ( &v14[v13] < v14 || (v17 = v13 + v15, (unsigned int)v13 + v15 < v15) )
  {
LABEL_16:
    v5 = 0LL;
    v9 = 0LL;
    goto LABEL_17;
  }
  if ( a2 - v17 < 4 )
  {
    Acl = -1073741762;
    v9 = 0LL;
    v5 = 0LL;
    goto LABEL_18;
  }
  v18 = *v16;
  v19 = v16 + 1;
  if ( v16 + 1 < v16 )
    goto LABEL_14;
  v28 = v17 + 4;
  if ( v17 + 4 < v17 )
    goto LABEL_14;
  if ( a2 - v28 < (unsigned int)v18 )
  {
LABEL_121:
    Acl = -1073741762;
    goto LABEL_15;
  }
  if ( (unsigned int)v18 + v28 < v28 )
  {
LABEL_14:
    Acl = -1073741675;
LABEL_15:
    v7 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( a2 != (_DWORD)v18 + v28 || (unsigned int)(v10 + v18 + v13) + 12LL != a2 )
    goto LABEL_121;
  Pool2 = ExAllocatePool2(0x100uLL);
  v30 = (unsigned int *)Pool2;
  if ( !Pool2 )
  {
    Acl = -1073741801;
    goto LABEL_15;
  }
  *(_OWORD *)Pool2 = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_OWORD *)(Pool2 + 32) = 0LL;
  Acl = 0;
  if ( v308 == -4LL )
  {
    *(_DWORD *)Pool2 = 0;
    *(_QWORD *)(Pool2 + 8) = 0LL;
  }
  else
  {
    *(_DWORD *)Pool2 = v10;
    if ( !(_DWORD)v10 )
    {
      Acl = -1073741762;
      LODWORD(v14) = 0;
      goto LABEL_110;
    }
    v87 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v87 )
    {
      LODWORD(v14) = 0;
      goto LABEL_109;
    }
    v88 = (const void *)(v308 + 4);
    *((_QWORD *)v30 + 1) = v87;
    memmove(v87, v88, v10);
  }
  if ( v14 )
  {
    v30[4] = v13;
    if ( !(_DWORD)v13 )
    {
      Acl = -1073741762;
      LODWORD(v14) = 0;
      goto LABEL_110;
    }
    v31 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v31 )
    {
      LODWORD(v14) = 0;
      goto LABEL_109;
    }
    *((_QWORD *)v30 + 3) = v31;
    Acl = 0;
    memmove(v31, v14, v13);
    LODWORD(v14) = 0;
  }
  else
  {
    v30[4] = 0;
    *((_QWORD *)v30 + 3) = 0LL;
  }
  if ( !v19 )
  {
    v30[8] = 0;
    *((_QWORD *)v30 + 5) = 0LL;
    goto LABEL_62;
  }
  v30[8] = v18;
  if ( !(_DWORD)v18 )
  {
    Acl = -1073741762;
    goto LABEL_110;
  }
  v32 = (void *)ExAllocatePool2(0x100uLL);
  if ( v32 )
  {
    *((_QWORD *)v30 + 5) = v32;
    Acl = 0;
    memmove(v32, v19, v18);
    goto LABEL_62;
  }
LABEL_109:
  Acl = -1073741801;
LABEL_110:
  v84 = (void *)*((_QWORD *)v30 + 1);
  if ( v84 )
  {
    ExFreePoolWithTag(v84, 0);
    *((_QWORD *)v30 + 1) = 0LL;
  }
  v85 = (void *)*((_QWORD *)v30 + 3);
  if ( v85 )
  {
    ExFreePoolWithTag(v85, 0);
    *((_QWORD *)v30 + 3) = 0LL;
  }
  v86 = (void *)*((_QWORD *)v30 + 5);
  if ( v86 )
  {
    ExFreePoolWithTag(v86, 0);
    *((_QWORD *)v30 + 5) = 0LL;
  }
  ExFreePoolWithTag(v30, 0);
  v30 = v321;
LABEL_62:
  if ( Acl < 0 )
  {
    if ( v30 )
    {
      v116 = (void *)*((_QWORD *)v30 + 1);
      if ( v116 )
      {
        ExFreePoolWithTag(v116, 0);
        *((_QWORD *)v30 + 1) = 0LL;
      }
      v117 = (void *)*((_QWORD *)v30 + 3);
      if ( v117 )
      {
        ExFreePoolWithTag(v117, 0);
        *((_QWORD *)v30 + 3) = 0LL;
      }
      v118 = (void *)*((_QWORD *)v30 + 5);
      if ( v118 )
      {
        ExFreePoolWithTag(v118, 0);
        *((_QWORD *)v30 + 5) = 0LL;
      }
      ExFreePoolWithTag(v30, 0);
    }
    goto LABEL_15;
  }
  v300 = v30;
  v7 = v30;
  if ( !v30
    || (v33 = (unsigned __int8 *)*((_QWORD *)v30 + 1), (v319 = v33) == 0LL)
    || (v34 = *v30, !(_DWORD)v34)
    || (v35 = (__int64 *)*((_QWORD *)v30 + 5)) == 0LL
    || (v36 = v7[8]) == 0
    || (v37 = *((_QWORD *)v7 + 3)) == 0
    || (v38 = v7[4]) == 0 )
  {
    Acl = -1073741811;
    goto LABEL_151;
  }
  if ( v36 != 8
    || v38 != 160
    || v34 <= 8
    || (v39 = *v35, v315 = v34 - 8, v40 = 0, v41 = (void *)ExAllocatePool2(0x100uLL), (v312 = v41) == 0LL) )
  {
LABEL_150:
    Acl = -1073741823;
LABEL_151:
    v9 = 0LL;
    v8 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v42 = v315;
  v43 = v33;
  v340 = v39;
  v308 = (unsigned __int64)v41;
  v309 = v315 & 7;
  if ( (v315 & 7) != 0 )
  {
    v96 = 0;
    v97 = 0;
    v305 = 0;
    v98 = 0;
    v306 = -1;
    v304 = 0;
    v99 = -1;
    v100 = 56;
    do
    {
      v101 = *v43++;
      if ( (unsigned int)v98 >= 4 )
        v96 |= v101 << v100;
      else
        v97 |= v101 << (v100 - 32);
      ++v98;
      v100 -= 8;
    }
    while ( v98 < (v315 & 7) );
    v304 = v97;
    v305 = v96;
    v102 = 30LL;
    v316 = (unsigned __int8 *)(v37 + 158);
    v321 = (unsigned int *)(v37 + 126);
    v103 = v37 + 126;
    v104 = (_BYTE *)(v37 + 158);
    v105 = 16LL;
    v311 = 16LL;
    do
    {
      if ( v104[1] < 0x1Fu )
      {
        Privileges = (PPRIVILEGE_SET *)&v340;
        *(_QWORD *)PreviouslyGrantedAccess = *(unsigned __int8 *)(v103 + 1);
        v106 = guard_dispatch_icall_no_overrides(v102 + 1);
        v105 = v311;
        v99 ^= v106;
      }
      if ( *v104 < 0x1Fu )
      {
        Privileges = (PPRIVILEGE_SET *)&v340;
        *(_QWORD *)PreviouslyGrantedAccess = *(unsigned __int8 *)(v103 - 3);
        v107 = guard_dispatch_icall_no_overrides(v102);
        v105 = v311;
        LODWORD(v14) = v107 ^ (unsigned int)v14;
      }
      v102 -= 2LL;
      v104 -= 2;
      v103 -= 8LL;
      v311 = --v105;
    }
    while ( v105 );
    LODWORD(v14) = v304 ^ (unsigned int)v14;
    v108 = 0;
    v109 = v305 ^ v99;
    v110 = (unsigned int)v14;
    v111 = v309;
    v112 = v109;
    v40 = 0;
    if ( (_DWORD)v309 )
    {
      v113 = (_BYTE *)v308;
      do
      {
        v114 = v113 + 1;
        if ( v108 >= 4 )
        {
          v112 = (v112 << 8) | HIBYTE(v112);
          v115 = v112;
        }
        else
        {
          v110 = (v110 << 8) | HIBYTE(v110);
          v115 = v110;
        }
        ++v108;
        *v113++ = v115;
      }
      while ( (int)v108 < (int)v111 );
      v41 = v114;
    }
    else
    {
      v41 = (void *)v308;
    }
    if ( v111 <= 4 )
    {
      v45 = 0;
      if ( v111 < 4 )
        LODWORD(v14) = (unsigned int)v14 >> (8 * (4 - v111)) << (8 * (4 - v111));
    }
    else
    {
      v45 = v109 >> (8 * (8 - v111)) << (8 * (8 - v111));
    }
    LODWORD(v39) = v340;
    v42 = v315;
    v44 = v316;
  }
  else
  {
    v304 = 0;
    v306 = -1;
    v44 = (unsigned __int8 *)(v37 + 158);
    v305 = -1;
    v45 = 0;
    v316 = (unsigned __int8 *)(v37 + 158);
    v321 = (unsigned int *)(v37 + 126);
  }
  v309 = v42 >> 3;
  if ( !(v42 >> 3) )
    goto LABEL_103;
  v46 = v43 + 2;
  v311 = (__int64)v41 + 7;
  while ( 2 )
  {
    v47 = v46[2] << 8;
    v48 = v46[3];
    v49 = (v46[1] | ((*v46 | ((*(v46 - 1) | (*(v46 - 2) << 8)) << 8)) << 8)) ^ (unsigned int)v14;
    v314 = v46[1] | ((*v46 | ((*(v46 - 1) | (*(v46 - 2) << 8)) << 8)) << 8);
    v50 = v46[5] | ((v46[4] | ((v48 | v47) << 8)) << 8);
    v327 = v46 + 8;
    v310 = v50;
    v51 = (unsigned __int16)v39;
    v52 = v49 ^ v39 ^ HIDWORD(v340) ^ v50 ^ v45;
    v53 = (v52 >> 8) ^ (WORD2(v340) * (WORD1(v340) ^ v52)) ^ v49;
    v54 = (WORD1(v340) * __ROR4__(HIDWORD(v340) - v53, 11) - __ROR4__(v53, 12)) ^ v52;
    v55 = ((unsigned __int16)v39 * __ROR4__(v54 ^ HIDWORD(v340), 24) - __ROR4__(v54, 30)) ^ v53;
    v56 = __ROR4__(v55, 9) ^ (HIWORD(v340) * __ROR4__(v55 - v39, 4)) ^ v54;
    v57 = (__ROR4__(v56, 4) + WORD2(v340) * __ROR4__(v39 - v56, 10)) ^ v55;
    v58 = (WORD1(v340) * __ROR4__(v57 ^ HIWORD(v340), 28) - __ROR4__(v57, 16)) ^ v56;
    v59 = 16LL;
    v60 = 30LL;
    v61 = v44;
    v308 = 16LL;
    v62 = ((unsigned __int16)v39 * (v58 ^ WORD1(v340)) - __ROR4__(v58, 7)) ^ v57;
    v63 = (v62 - v39 - HIWORD(v340)) ^ v58;
    v64 = __ROR4__(v63, 11) ^ (WORD2(v340) * __ROR4__(v39 - v63, 9)) ^ v62;
    v65 = (unsigned __int8 *)v321;
    v66 = (WORD1(v340) * (v64 - WORD2(v340)) - (v64 >> 13)) ^ v63;
    v67 = (v66 >> 15) ^ (v51 * ((8 * (v66 - WORD2(v340))) | ((unsigned __int64)(v66 - WORD2(v340)) >> 29))) ^ v64;
    do
    {
      v68 = v61[1];
      if ( (unsigned __int8)v68 >= 0x1Fu )
        goto LABEL_83;
      v69 = (__int64 (__fastcall *)(char, unsigned __int64, unsigned __int64, __int64, int, __int64, unsigned int))off_140FD74B0[v68];
      v70 = v65[1];
      v71 = *v65;
      v72 = *(v65 - 1);
      v73 = *(v65 - 2);
      if ( (char *)v69 != (char *)sub_1409EAB20 )
      {
        if ( v69 == sub_140979D60 )
        {
          v81 = sub_140979D60((unsigned __int8)v60 + 1, v73, v72, v71, v70, (__int64)&v340, v67);
        }
        else
        {
          if ( v69 == sub_140979DE0 )
          {
            v74 = sub_140979DE0((unsigned __int8)v60 + 1, v73, v72, v71, v70, (__int64)&v340, v67);
            goto LABEL_82;
          }
          Privileges = (PPRIVILEGE_SET *)&v340;
          *(_QWORD *)PreviouslyGrantedAccess = v65[1];
          v81 = guard_dispatch_icall_no_overrides(v60 + 1);
        }
        v74 = v81;
        goto LABEL_82;
      }
      v74 = *((unsigned __int16 *)&v340 + ((*(v65 - 1) + *(v65 - 1) / 3u + (((_BYTE)v60 + 1) & 3) + 1) & 3))
          * (*((unsigned __int16 *)&v340 + (((_BYTE)v60 + 1) & 3))
           + ((~v67 << (15 * (*(v65 - 2) / 0xFu) - *(v65 - 2) + 31)) | (~v67 >> (*(v65 - 2) % 0xFu + 1))));
LABEL_82:
      v59 = v308;
      v66 ^= v74;
LABEL_83:
      v75 = *v61;
      if ( (unsigned __int8)v75 < 0x1Fu )
      {
        v76 = (__int64 (__fastcall *)(unsigned __int64, __int64, __int64, __int64, int, __int64, int))off_140FD74B0[v75];
        if ( (char *)v76 == (char *)sub_140A014B0 )
        {
          v77 = *((_DWORD *)&v340 + (((v60 & 1) - 1) & 1)) - (*((_DWORD *)&v340 + (v60 & 1)) ^ v66);
        }
        else if ( v76 == sub_140979C40 )
        {
          v77 = *((_DWORD *)&v340 + (((unsigned __int8)(v60 >> 1) - 1) & 1)) ^ (v66
                                                                              - *((unsigned __int16 *)&v340 + (v60 & 3)));
        }
        else
        {
          if ( v76 == sub_140979D30 )
          {
            v82 = sub_140979D30(v60, *(v65 - 6), *(v65 - 5), *(v65 - 4), *(v65 - 3), (__int64)&v340, v66);
          }
          else
          {
            Privileges = (PPRIVILEGE_SET *)&v340;
            *(_QWORD *)PreviouslyGrantedAccess = *(v65 - 3);
            v82 = guard_dispatch_icall_no_overrides(v60);
          }
          v77 = v82;
        }
        v67 ^= v77;
      }
      v60 -= 2LL;
      v61 -= 2;
      v65 -= 8;
      v308 = --v59;
    }
    while ( v59 );
    v78 = (_BYTE *)v311;
    LODWORD(v14) = v304 ^ v67;
    v45 = v305 ^ v66;
    v79 = v310;
    *(_BYTE *)(v311 - 4) = (_BYTE)v14;
    *v78 = v45;
    *(v78 - 5) = BYTE1(v14);
    *(v78 - 1) = BYTE1(v45);
    *(v78 - 6) = (unsigned __int16)((unsigned int)v14 >> 8) >> 8;
    *(v78 - 2) = (unsigned __int16)(v45 >> 8) >> 8;
    *(v78 - 7) = __ROR4__(
                   ((((unsigned int)v14 >> 8) | ((_DWORD)v14 << 24)) >> 8) | ((((unsigned int)v14 >> 8) | ((_DWORD)v14 << 24)) << 24),
                   8);
    *(v78 - 3) = __ROR4__((((v45 >> 8) | (v45 << 24)) >> 8) | (((v45 >> 8) | (v45 << 24)) << 24), 8);
    v80 = v309-- == 1;
    v304 = v314;
    v305 = v79;
    v311 = (__int64)(v78 + 8);
    if ( !v80 )
    {
      LODWORD(v39) = v340;
      v46 = v327;
      v44 = v316;
      continue;
    }
    break;
  }
  v42 = v315;
  v40 = 0;
LABEL_103:
  v5 = 0LL;
  for ( i = 0LL; i < v42; ++i )
    v40 ^= *((_BYTE *)v312 + i);
  v7 = v300;
  if ( v40 != *(_QWORD *)&v319[v42] )
  {
    ExFreePoolWithTag(v312, 0);
    goto LABEL_150;
  }
  v9 = v312;
  if ( (unsigned int)v42 < 4 )
    goto LABEL_397;
  v310 = *(_DWORD *)v312;
  if ( (char *)v312 + 4 < v312 )
    goto LABEL_108;
  if ( (unsigned int)(v42 - 4) < 4 )
  {
    Acl = -1073741762;
    v8 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v89 = *((unsigned int *)v312 + 1);
  v90 = (char *)v312 + 8;
  if ( (char *)v312 + 8 < (char *)v312 + 4 )
    goto LABEL_108;
  if ( (int)v42 - 8 < (unsigned int)v89 )
  {
    Acl = -1073741762;
    v8 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( (unsigned int)v89 >= 0xFFFFFFF8 )
  {
LABEL_108:
    Acl = -1073741675;
    v8 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v91 = (unsigned __int64)&v90[v89];
  v92 = (unsigned int)v89;
  if ( (char *)v312 + (unsigned int)v42 < &v90[v89] || (unsigned __int64)(unsigned int)v42 + -(__int64)v89 - 8 >= 8 )
  {
LABEL_397:
    Acl = -1073741762;
    v8 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v295 = v312;
  v8 = 0LL;
  if ( v312 != (PVOID)-8LL )
  {
    v93 = (char *)v312 + 8;
    if ( v91 < (unsigned __int64)v90 )
    {
      Acl = -1073741675;
      v6 = 0LL;
    }
    else
    {
      v295 = v312;
      while ( (unsigned __int64)v93 < v91 )
      {
        if ( v93 + 4 < v93 )
          goto LABEL_133;
        v295 = v312;
        if ( (unsigned __int64)(v93 + 4) > v91 )
          goto LABEL_586;
        v94 = *(_DWORD *)v93 + 4;
        if ( *(_DWORD *)v93 >= 0xFFFFFFFC || (v95 = &v93[v94], v95 < v93) )
        {
LABEL_133:
          Acl = -1073741675;
          goto LABEL_134;
        }
        v93 += v94;
        if ( (unsigned __int64)v95 > v91 )
          goto LABEL_586;
        LODWORD(v5) = (_DWORD)v5 + 1;
      }
      if ( v93 == (char *)v91 )
        goto LABEL_141;
LABEL_586:
      Acl = -1073741811;
LABEL_134:
      v5 = 0LL;
      v6 = 0LL;
    }
    goto LABEL_19;
  }
LABEL_141:
  if ( (_DWORD)v89 )
  {
    v8 = ExAllocatePool2(0x100uLL);
    if ( v8 )
    {
      v92 = v89;
      goto LABEL_144;
    }
    Acl = -1073741801;
LABEL_247:
    v8 = 0LL;
    goto LABEL_134;
  }
LABEL_144:
  if ( v312 != (PVOID)-8LL )
    memmove((void *)v8, v90, v92);
  P[1] = (PVOID)v8;
  P[0] = (PVOID)__PAIR64__(v89, (unsigned int)v5);
  if ( v310 != (_DWORD)v5 )
  {
    v8 = 0LL;
    Acl = -1073741762;
    v5 = 0LL;
    v7 = v300;
    v6 = 0LL;
    v9 = v295;
    goto LABEL_19;
  }
  if ( !P[1] )
  {
    v7 = v300;
    Acl = -1073741811;
    v9 = v295;
    v8 = 0LL;
    goto LABEL_134;
  }
  if ( !(_DWORD)v5 )
  {
    v7 = v300;
    Acl = -1073741811;
    v9 = v295;
    v8 = 0LL;
    goto LABEL_134;
  }
  v119 = (unsigned int *)P[1];
  v7 = v300;
  v9 = v295;
  v120 = *(_DWORD *)P[1];
  if ( (char *)P[1] + 4 < P[1] )
  {
LABEL_199:
    v8 = 0LL;
    Acl = -1073741675;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v121 = 0LL;
  if ( v120 )
    v121 = (int *)((char *)P[1] + 4);
  if ( v120 != 4 )
  {
    v8 = 0LL;
    Acl = -1073741789;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v122 = *v121;
  if ( (unsigned int)v5 <= 1 )
  {
    v8 = 0LL;
    Acl = -1073741811;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  for ( j = 0; ; j = 1 )
  {
    v124 = v119 + 1;
    v125 = v9;
    v126 = *v119;
    if ( j )
      break;
    if ( v124 < v119 )
      goto LABEL_200;
    v119 = (unsigned int *)((char *)v124 + v126);
    v295 = v125;
    v9 = v125;
    if ( v119 < v124 )
      goto LABEL_199;
  }
  if ( v124 < v119 )
  {
LABEL_200:
    v8 = 0LL;
    Acl = -1073741675;
    v9 = v295;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v127 = v295;
  v128 = 0LL;
  if ( (_DWORD)v126 )
    v128 = v119 + 1;
  if ( (unsigned int)v5 <= 2 )
  {
    v8 = 0LL;
    Acl = -1073741811;
    v7 = v300;
    v5 = 0LL;
    v6 = 0LL;
    v9 = v295;
    goto LABEL_19;
  }
  v129 = v300;
  v130 = 0;
  v131 = (unsigned int *)P[1];
  while ( 1 )
  {
    v132 = *v131;
    v133 = v131 + 1;
    if ( v130 >= 2 )
      break;
    if ( v133 < v131 )
    {
      v8 = 0LL;
      Acl = -1073741675;
      v9 = v295;
      v5 = 0LL;
      v7 = v300;
      v6 = 0LL;
      goto LABEL_19;
    }
    v131 = (unsigned int *)((char *)v133 + v132);
    v300 = v129;
    v295 = v127;
    if ( (unsigned int *)((char *)v133 + v132) < v133 )
    {
      v8 = 0LL;
      Acl = -1073741675;
      v5 = 0LL;
      v6 = 0LL;
      v9 = v127;
      v7 = v129;
      goto LABEL_19;
    }
    ++v130;
  }
  if ( v133 < v131 )
  {
    Acl = -1073741675;
LABEL_246:
    v7 = v300;
    v9 = v295;
    goto LABEL_247;
  }
  v134 = 0LL;
  v300 = v129;
  v295 = v127;
  v309 = (unsigned __int64)v129;
  if ( (_DWORD)v132 )
    v134 = v131 + 1;
  v312 = v127;
  v135 = (_OWORD *)ExAllocatePool2(0x100uLL);
  v137 = v135;
  if ( !v135 )
  {
    Acl = -1073741801;
    goto LABEL_246;
  }
  *v135 = 0LL;
  v135[1] = 0LL;
  v135[2] = 0LL;
  v138 = (unsigned int *)v309;
  v139 = v312;
  Acl = 0;
  *(_DWORD *)v137 = 0;
  *((_QWORD *)v137 + 1) = 0LL;
  v300 = v138;
  v296 = v139;
  if ( v128 )
  {
    *((_DWORD *)v137 + 4) = v126;
    if ( (_DWORD)v126 )
    {
      v140 = (void *)ExAllocatePool2(0x100uLL);
      if ( v140 )
      {
        *((_QWORD *)v137 + 3) = v140;
        memmove(v140, v128, v126);
        v7 = v300;
        v9 = v296;
        goto LABEL_221;
      }
      v9 = v312;
      v7 = (unsigned int *)v309;
      v296 = v312;
LABEL_227:
      Acl = -1073741801;
    }
    else
    {
      Acl = -1073741762;
      v296 = v139;
      v9 = v139;
      v7 = v138;
    }
LABEL_228:
    v142 = (void *)*((_QWORD *)v137 + 1);
    if ( v142 )
    {
      ExFreePoolWithTag(v142, 0);
      *((_QWORD *)v137 + 1) = 0LL;
    }
    v143 = (void *)*((_QWORD *)v137 + 3);
    if ( v143 )
    {
      ExFreePoolWithTag(v143, 0);
      *((_QWORD *)v137 + 3) = 0LL;
    }
    v144 = (void *)*((_QWORD *)v137 + 5);
    if ( v144 )
    {
      ExFreePoolWithTag(v144, 0);
      *((_QWORD *)v137 + 5) = 0LL;
    }
    ExFreePoolWithTag(v137, 0);
    v8 = 0LL;
  }
  else
  {
    *((_DWORD *)v137 + 4) = 0;
    v9 = v139;
    *((_QWORD *)v137 + 3) = 0LL;
    v7 = v138;
    v296 = v139;
LABEL_221:
    if ( v134 )
    {
      *((_DWORD *)v137 + 8) = v132;
      if ( !(_DWORD)v132 )
      {
        Acl = -1073741762;
        goto LABEL_228;
      }
      v141 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v141 )
      {
        v9 = v296;
        goto LABEL_227;
      }
      Acl = 0;
      *((_QWORD *)v137 + 5) = v141;
      memmove(v141, v134, v132);
      v9 = v296;
    }
    else
    {
      *((_DWORD *)v137 + 8) = 0;
      *((_QWORD *)v137 + 5) = 0LL;
    }
    v8 = (__int64)v137;
  }
  if ( Acl < 0 )
  {
LABEL_555:
    v5 = 0LL;
    v9 = v296;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( v122 )
  {
    switch ( v122 )
    {
      case 1:
        v253 = qword_140FD7448;
        v5 = 0LL;
        memset(v334, 0, sizeof(v334));
        v335 = 0LL;
        v322 = 0;
        memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
        v320 = 0;
        v254 = RtlLengthSid(*(PSID *)(qword_140FD7448 + 384));
        v255 = RtlLengthSid(*(PSID *)(v253 + 272)) + v254;
        v256 = RtlLengthSid(*(PSID *)(v253 + 392)) + 32 + v255;
        v257 = (ACL *)ExAllocatePool2(0x100uLL);
        v258 = v257;
        if ( !v257 )
        {
          v9 = v296;
          Acl = -1073741801;
          v6 = 0LL;
          goto LABEL_19;
        }
        Acl = RtlCreateAcl(v257, v256, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v258, 2u, 0, 32, *(unsigned __int8 **)(v253 + 384), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v258, 2u, 0, 32, *(unsigned __int8 **)(v253 + 392), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v258, 2u, 0, 32, *(unsigned __int8 **)(v253 + 272), 0);
              if ( Acl >= 0 )
              {
                LOBYTE(v334[0]) = 1;
                if ( SWORD1(v334[0]) < 0 )
                {
                  Acl = -1073741703;
                }
                else
                {
                  v335 = v258;
                  Acl = 0;
                  WORD1(v334[0]) = WORD1(v334[0]) & 0xFFF3 | 4;
                  SeCaptureSubjectContext(&SubjectSecurityContext);
                  v259 = SeAccessCheck(
                           v334,
                           &SubjectSecurityContext,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           &v322,
                           &v320);
                  SeReleaseSubjectContext(&SubjectSecurityContext);
                  if ( !v259 )
                    Acl = v320;
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v258, 0);
        if ( Acl < 0 )
          goto LABEL_555;
        v323 = 0;
        v328 = 8LL;
        ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v328, 8u, &v323);
        if ( v7[4] != 160 )
          goto LABEL_387;
        v260 = (const void *)*((_QWORD *)v7 + 3);
        if ( (memcmp(qword_140B30910, v260, 0xA0uLL)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B30FF0, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B2C238, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B2C1C0, *(const void **)(v8 + 40), 8uLL))
          && (memcmp(qword_140B30A50, v260, 0xA0uLL)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B30730, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B2C228, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B2C218, *(const void **)(v8 + 40), 8uLL)) )
        {
          goto LABEL_387;
        }
        v261 = 0;
        if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x70000) == 0 )
          v261 = -2147024891;
        Acl = v261;
        if ( v261 >= 0 )
        {
          Acl = SPCallServerHandleUpdatePolicies(
                  P,
                  v8,
                  (unsigned int)v313,
                  v301,
                  *(_QWORD *)PreviouslyGrantedAccess,
                  Privileges);
          if ( Acl >= 0 )
          {
            v9 = v296;
            goto LABEL_238;
          }
        }
        goto LABEL_555;
      case 2:
        Acl = sub_140AAB7C8(v139, v8, (unsigned int)v313, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 4:
        Acl = sub_140AA1E68(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 5:
        Acl = sub_14097E278(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 6:
        Acl = sub_1406EEAB8((__int64)P, v8, v136, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 7:
        Acl = sub_1406EE700((__int64)P, v8, v136, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 22:
        Acl = sub_1409FF21C(P, 0x140000000uLL, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 23:
        v221 = qword_140FD7448;
        v5 = 0LL;
        memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
        v337 = 0LL;
        GrantedAccess = 0;
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        AccessStatus = 0;
        v222 = RtlLengthSid(*(PSID *)(qword_140FD7448 + 392));
        v223 = RtlLengthSid(*(PSID *)(v221 + 384)) + v222;
        v224 = RtlLengthSid(*(PSID *)(v221 + 272)) + 32 + v223;
        v225 = (ACL *)ExAllocatePool2(0x100uLL);
        v226 = v225;
        if ( !v225 )
        {
          v9 = v296;
          Acl = -1073741801;
          v6 = 0LL;
          goto LABEL_19;
        }
        Acl = RtlCreateAcl(v225, v224, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v226, 2u, 0, 32, *(unsigned __int8 **)(v221 + 384), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v226, 2u, 0, 32, *(unsigned __int8 **)(v221 + 392), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v226, 2u, 0, 32, *(unsigned __int8 **)(v221 + 272), 0);
              if ( Acl >= 0 )
              {
                LOBYTE(SecurityDescriptor[0]) = 1;
                if ( SWORD1(SecurityDescriptor[0]) < 0 )
                {
                  Acl = -1073741703;
                }
                else
                {
                  v337 = v226;
                  Acl = 0;
                  WORD1(SecurityDescriptor[0]) = WORD1(SecurityDescriptor[0]) & 0xFFF3 | 4;
                  SeCaptureSubjectContext(&SubjectContext);
                  v227 = SeAccessCheck(
                           SecurityDescriptor,
                           &SubjectContext,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           &GrantedAccess,
                           &AccessStatus);
                  SeReleaseSubjectContext(&SubjectContext);
                  if ( !v227 )
                    Acl = AccessStatus;
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v226, 0);
        if ( Acl >= 0 )
        {
          ReturnLength = 0;
          SystemInformation = 8LL;
          ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
          v228 = v7[4];
          if ( (_DWORD)v228 != 160
            || ((v229 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B30E10, v229, 0xA0uLL))
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(qword_140B30EB0, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp(&qword_140B2C1E8, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp(&qword_140B2C1C8, *(const void **)(v8 + 40), 8uLL))
            && (memcmp(qword_140B30B90, v229, v228)
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(qword_140B31270, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp(&qword_140B2C1D8, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp(&qword_140B2C248, *(const void **)(v8 + 40), 8uLL))
            && ((v230 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B311D0, v230, v228))
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(sub_140B30690, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp(&qword_140B2C1F0, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp(sub_140B2C1F8, *(const void **)(v8 + 40), 8uLL))
            && (memcmp(qword_140B30CD0, v230, v228)
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(qword_140B30AF0, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp(&qword_140B2C250, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp(&qword_140B2C1D0, *(const void **)(v8 + 40), 8uLL)) )
          {
LABEL_387:
            v9 = v296;
            Acl = -2147024891;
            v6 = 0LL;
            goto LABEL_19;
          }
          v318 = 0;
          Acl = 0;
          updated = QueryUpdateFileEaAllowedExt(&v318);
          if ( updated == -1073741637 || (Acl = updated, updated >= 0) && v318 != 1 )
          {
            if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x70000) == 0 )
              Acl = -2147024891;
          }
          if ( Acl >= 0 )
          {
            Acl = sub_1409FF648(P, v232, v233, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
            if ( Acl >= 0 )
            {
              v9 = v296;
              goto LABEL_238;
            }
          }
        }
        goto LABEL_555;
      case 24:
        Acl = sub_1409FFD00(P, 0x140000000uLL, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 100:
        Acl = SPCallServerHandleUpdateLicense(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 101:
        Acl = sub_1406EE164((__int64)P, v8, v136, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 102:
        v5 = 0LL;
        Acl = -1073741822;
        v6 = 0LL;
        goto LABEL_19;
      case 103:
        Acl = sub_140AB6360(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 104:
        Acl = sub_140AB9F74(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 105:
        Acl = sub_1406EA460((__int64)P, v8, v136, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 106:
        Acl = sub_140AB4A2C(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 107:
        Acl = sub_1404D3840((__int64)P, v8, v136, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 109:
        Acl = sub_140A2E578(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 110:
        Acl = sub_140ABD3B0(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 111:
        Acl = sub_1406EA1C4((__int64)P, v8, v136, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 112:
        Acl = sub_140AB5F18(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 113:
        Acl = sub_140A3626C(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 204:
        Acl = sub_140ABBF04(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 205:
        Acl = sub_140A54400(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 206:
        v326 = 0;
        Acl = 0;
        v330 = 8LL;
        ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v330, 8u, &v326);
        v280 = v7[4];
        if ( (_DWORD)v280 != 160
          || ((v281 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B30C30, v281, 0xA0uLL))
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B31130, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B2C230, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B2C258, *(const void **)(v8 + 40), 8uLL))
          && (memcmp(qword_140B31090, v281, v280)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B30F50, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B2C1E0, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B2C200, *(const void **)(v8 + 40), 8uLL))
          && ((v282 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B30870, v282, v280))
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B30D70, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B2C210, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B2C240, *(const void **)(v8 + 40), 8uLL))
          && (memcmp(qword_140B307D0, v282, v280)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B309B0, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B2C220, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B2C208, *(const void **)(v8 + 40), 8uLL)) )
        {
          Acl = -2147024891;
        }
        if ( Acl < 0 )
          goto LABEL_555;
        Acl = sub_1404BA858((__int64)P, v8, v279, (__int64)v301);
        if ( Acl < 0 )
          goto LABEL_555;
        v9 = v296;
        goto LABEL_238;
      case 207:
        Acl = sub_140AB6990(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 208:
        Acl = SPCallServerHandleGetAppPolicyValue(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 209:
        Acl = sub_140ABA558(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 210:
        Acl = sub_1406EA830((__int64)P, v8, v136, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 211:
        Acl = sub_140ABEAF8(P, v8, v136, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_238;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 212:
        if ( !P[1] )
        {
          v5 = 0LL;
          Acl = -1073741811;
          v6 = 0LL;
          goto LABEL_19;
        }
        if ( LODWORD(P[0]) <= 3 )
        {
          v5 = 0LL;
          Acl = -1073741811;
          v6 = 0LL;
          goto LABEL_19;
        }
        v262 = (unsigned int *)P[1];
        v263 = 0;
        break;
      default:
        Acl = sub_1406E9830((__int64)v139, (unsigned int *)v301);
        if ( Acl < 0 )
          goto LABEL_317;
        goto LABEL_238;
    }
    while ( 1 )
    {
      v264 = *v262;
      v265 = v262 + 1;
      if ( v263 >= 3 )
        break;
      if ( v265 < v262 )
        goto LABEL_244;
      v262 = (unsigned int *)((char *)v265 + v264);
      if ( (unsigned int *)((char *)v265 + v264) < v265 )
        goto LABEL_244;
      ++v263;
    }
    if ( v265 < v262 )
      goto LABEL_244;
    v266 = 0LL;
    if ( (_DWORD)v264 )
      v266 = (__int64 *)(v262 + 1);
    if ( (_DWORD)v264 != 8 )
    {
      v5 = 0LL;
      Acl = -1073741789;
      v6 = 0LL;
      goto LABEL_19;
    }
    v267 = *v266;
    if ( LODWORD(P[0]) <= 4 )
    {
      v5 = 0LL;
      Acl = -1073741811;
      v6 = 0LL;
      goto LABEL_19;
    }
    v268 = (unsigned int *)P[1];
    for ( k = 0; ; ++k )
    {
      v270 = *v268;
      v271 = v268 + 1;
      if ( k >= 4 )
        break;
      if ( v271 < v268 )
        goto LABEL_244;
      v268 = (unsigned int *)((char *)v271 + v270);
      if ( (unsigned int *)((char *)v271 + v270) < v271 )
        goto LABEL_244;
    }
    if ( v271 < v268 )
      goto LABEL_244;
    if ( !(_DWORD)v270 )
    {
      v5 = 0LL;
      Acl = -1073741762;
      v6 = 0LL;
      goto LABEL_19;
    }
    v272 = v268 + 1;
    v273 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v273 )
    {
      v5 = 0LL;
      Acl = -1073741801;
      v6 = 0LL;
      goto LABEL_19;
    }
    memmove(v273, v272, v270);
    if ( (_DWORD)v270 != 4 )
    {
      v5 = 0LL;
      Acl = -1073741306;
      v6 = 0LL;
      goto LABEL_19;
    }
    if ( LODWORD(P[0]) <= 5 )
    {
      v5 = 0LL;
      Acl = -1073741811;
      v6 = 0LL;
      goto LABEL_19;
    }
    v274 = (unsigned int *)P[1];
    v275 = 0;
    v296 = v9;
    while ( 1 )
    {
      v276 = v274 + 1;
      v277 = v9;
      v278 = *v274;
      if ( v275 >= 5 )
        break;
      if ( v276 < v274 )
        goto LABEL_459;
      v274 = (unsigned int *)((char *)v276 + v278);
      v296 = v277;
      v9 = v277;
      if ( v274 < v276 )
        goto LABEL_244;
      ++v275;
    }
    if ( v276 < v274 )
    {
LABEL_459:
      v5 = 0LL;
      Acl = -1073741675;
      v9 = v296;
      v6 = 0LL;
      goto LABEL_19;
    }
    if ( !(_DWORD)v278 )
    {
      v5 = 0LL;
      v9 = v296;
      v6 = 0LL;
      Acl = -1073741762;
      goto LABEL_19;
    }
    v283 = v274 + 1;
    v284 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v284 )
    {
      v5 = 0LL;
      v9 = v296;
      v6 = 0LL;
      Acl = -1073741801;
      goto LABEL_19;
    }
    memmove(v284, v283, v278);
    if ( (_DWORD)v278 != 8 )
    {
      Acl = -1073741306;
      goto LABEL_555;
    }
    v285 = guard_dispatch_icall_no_overrides(*v272);
    HIDWORD(v301[0]) = 20;
    v286 = (_DWORD *)ExAllocatePool2(0x100uLL);
    v9 = v296;
    if ( !v286 )
    {
      v5 = 0LL;
      Acl = -1073741801;
      v6 = 0LL;
      goto LABEL_19;
    }
    v5 = 0LL;
    v301[1] = v286;
    v287 = v285 | 0x10000000;
    LODWORD(v301[0]) = 0;
    if ( v286 + 1 < v286 )
    {
      Acl = -1073741675;
      v6 = 0LL;
      goto LABEL_19;
    }
    if ( v286 + 2 > (_DWORD *)((char *)v301[1] + HIDWORD(v301[0])) )
    {
      Acl = -1073741789;
      v6 = 0LL;
      goto LABEL_19;
    }
    *v286 = 4;
    v286[1] = v287;
    v288 = ++LODWORD(v301[0]);
    if ( v301[1] )
    {
      v289 = (unsigned __int64)v301[1];
      for ( m = 0; m < v288; ++m )
      {
        v291 = *(_DWORD *)v289 + 4;
        if ( *(_DWORD *)v289 >= 0xFFFFFFFC || v289 + v291 < v289 )
          goto LABEL_545;
        v289 += v291;
      }
      if ( v289 + 4 < v289 )
      {
LABEL_545:
        Acl = -1073741675;
        goto LABEL_546;
      }
      Acl = 0;
      if ( (PVOID)(v289 + 12) > (char *)v301[1] + HIDWORD(v301[0]) )
      {
        Acl = -1073741789;
      }
      else
      {
        *(_DWORD *)v289 = 8;
        *(_QWORD *)(v289 + 4) = v267;
        ++LODWORD(v301[0]);
      }
    }
    else
    {
      Acl = RtlUIntAdd(HIDWORD(v301[0]), 0xCu, (UINT *)v301 + 1);
      if ( Acl >= 0 )
      {
        ++LODWORD(v301[0]);
        Acl = 0;
      }
    }
LABEL_546:
    if ( Acl < 0 )
    {
      v6 = 0LL;
      goto LABEL_19;
    }
  }
  else
  {
    Acl = SPCallServerHandleQueryPolicy(P, v8, (unsigned int)v313, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
    if ( Acl < 0 )
    {
LABEL_317:
      v5 = 0LL;
      v6 = 0LL;
      goto LABEL_19;
    }
  }
LABEL_238:
  v145 = __rdtsc();
  if ( HIDWORD(v301[0]) >= 0xFFFFFFF8
    || (v146 = (HIDWORD(v301[0]) + 15) & 0xFFFFFFF8, (unsigned int)v146 < HIDWORD(v301[0]) + 8) )
  {
LABEL_244:
    v5 = 0LL;
    Acl = -1073741675;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( !(_DWORD)v146 )
  {
    v5 = 0LL;
    Acl = -1073741762;
    v6 = 0LL;
    goto LABEL_19;
  }
  v147 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
  if ( !v147 )
  {
    v5 = 0LL;
    Acl = -1073741801;
    v6 = 0LL;
    goto LABEL_19;
  }
  v294 = v147;
  v299 = (unsigned int *)v8;
  v300 = v7;
  v297 = v9;
  *(_DWORD *)v147 = v301[0];
  if ( v147 + 4 < v147 || (*((_DWORD *)v147 + 1) = HIDWORD(v301[0]), v147 + 8 < v147 + 4) )
  {
    Acl = -1073741675;
    ExFreePoolWithTag(v147, 0);
    v5 = v307;
    v6 = 0LL;
    goto LABEL_19;
  }
  *(_QWORD *)&v147[v146 - 8] = v145;
  v5 = v147;
  memmove(v147 + 8, v301[1], HIDWORD(v301[0]));
  v148 = *(__int64 **)(v8 + 40);
  if ( !v148 )
  {
    Acl = -1073741811;
LABEL_282:
    v6 = 0LL;
    goto LABEL_19;
  }
  v149 = *(_DWORD *)(v8 + 32);
  if ( !v149 )
  {
    v6 = 0LL;
    Acl = -1073741811;
    goto LABEL_19;
  }
  v150 = *(unsigned __int8 **)(v8 + 24);
  v316 = v150;
  if ( !v150 )
  {
    v6 = 0LL;
    Acl = -1073741811;
    goto LABEL_19;
  }
  v151 = *(_DWORD *)(v8 + 16);
  if ( !v151 )
  {
    v6 = 0LL;
    Acl = -1073741811;
    goto LABEL_19;
  }
  v152 = (unsigned int)v146;
  v308 = (unsigned int)v146;
  if ( v149 != 8 || v151 != 160 )
  {
LABEL_607:
    v6 = 0LL;
    Acl = -1073741823;
    goto LABEL_19;
  }
  v153 = *v148;
  v154 = 0LL;
  v303 = 0;
  v155 = 0;
  do
    v155 ^= v5[v154++];
  while ( v154 < v152 );
  v303 = v155;
  v156 = v152 + 8;
  v311 = v152 + 8;
  v327 = v150 + 128;
  v157 = ExAllocatePool2(0x100uLL);
  v313 = (char *)v157;
  v158 = (char *)v157;
  if ( !v157 )
  {
    v7 = v300;
    v8 = (__int64)v299;
    goto LABEL_607;
  }
  v159 = 0;
  v341 = v153;
  v160 = v5;
  v319 = (_BYTE *)v157;
  v307 = (unsigned __int8 *)(v308 & 7);
  v161 = (_BYTE *)v157;
  v304 = 0;
  v305 = 0;
  if ( (v308 & 7) != 0 )
  {
    v234 = 0;
    v235 = 0;
    v236 = 0;
    v304 = 0;
    v305 = 0;
    v237 = 56;
    v238 = v160;
    do
    {
      v239 = *v160++;
      if ( (unsigned int)v236 >= 4 )
        v234 |= v239 << v237;
      else
        v235 |= v239 << (v237 - 32);
      ++v236;
      v237 -= 8;
    }
    while ( v236 < (unsigned __int8)(v308 & 7) );
    v294 = v238;
    v305 = v235;
    v304 = v234;
    v240 = 16LL;
    v241 = v316 + 158;
    v242 = v316 + 126;
    v315 = 16LL;
    v243 = -1;
    v244 = 30LL;
    do
    {
      if ( v241[1] < 0x1Fu )
      {
        v245 = guard_dispatch_icall_no_overrides(v244 + 1);
        v240 = v315;
        v243 ^= v245;
      }
      if ( *v241 < 0x1Fu )
      {
        v246 = guard_dispatch_icall_no_overrides(v244);
        v240 = v315;
        v159 ^= v246;
      }
      v244 -= 2LL;
      v241 -= 2;
      v242 -= 8;
      v315 = --v240;
    }
    while ( v240 );
    v159 ^= v305;
    v247 = v304 ^ v243;
    v248 = 0;
    v249 = (unsigned int)v307;
    v250 = v159;
    v161 = v319;
    v251 = v247;
    v150 = v316;
    v306 = v247;
    if ( (_DWORD)v307 )
    {
      do
      {
        if ( v248 >= 4 )
        {
          v251 = (v251 << 8) | HIBYTE(v251);
          v252 = v251;
        }
        else
        {
          v250 = (v250 << 8) | HIBYTE(v250);
          v252 = v250;
        }
        ++v248;
        *v161++ = v252;
      }
      while ( (int)v248 < (int)v249 );
      v247 = v306;
      v150 = v316;
    }
    if ( v249 <= 4 )
    {
      v306 = 0;
      if ( v249 < 4 )
        v159 = v159 >> (8 * (4 - v249)) << (8 * (4 - v249));
    }
    else
    {
      v306 = v247 >> (8 * (8 - v249)) << (8 * (8 - v249));
    }
    v158 = v313;
    v156 = v311;
  }
  v162 = v308;
  v309 = v308 >> 3;
  if ( v308 >> 3 )
  {
    v163 = v150 + 2;
    v319 = v150 + 2;
    v164 = v160 + 2;
    v312 = v161 + 7;
    do
    {
      v165 = v163;
      v166 = v327;
      v167 = v164[3] | (v164[2] << 8);
      v310 = v164[1] | ((*v164 | ((*(v164 - 1) | (*(v164 - 2) << 8)) << 8)) << 8);
      v168 = v310 ^ v159;
      v169 = v164[5] | ((v164[4] | (v167 << 8)) << 8);
      v307 = v164 + 8;
      v170 = v169 ^ v306;
      v314 = v169;
      v171 = 0LL;
      v172 = 16LL;
      do
      {
        v173 = *v166;
        if ( (unsigned __int8)v173 < 0x1Fu )
        {
          v174 = (__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int))off_140FD74B0[v173];
          v175 = v165[1];
          v176 = *v165;
          v177 = *(v165 - 1);
          v178 = *(v165 - 2);
          if ( (char *)v174 == (char *)sub_140979C70 )
          {
            v179 = sub_140979C70(v171, v178, v177, v176, v175, (__int64)&v341, v170);
          }
          else if ( (char *)v174 == (char *)sub_140979CA0 )
          {
            v179 = sub_140979CA0(v171, v178, v177, v176, v175, (__int64)&v341, v170);
          }
          else if ( v174 == sub_140979A80 )
          {
            v179 = sub_140979A80(v171, v178, v177, v176, v175, (__int64)&v341, v170);
          }
          else
          {
            v179 = guard_dispatch_icall_no_overrides(v171);
          }
          v168 ^= v179;
        }
        v180 = v166[1];
        if ( (unsigned __int8)v180 < 0x1Fu )
        {
          v181 = (__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int))off_140FD74B0[v180];
          v182 = v165[5];
          v183 = v165[4];
          v184 = v165[3];
          v185 = v165[2];
          if ( (char *)v181 == (char *)sub_140979DE0 )
          {
            v186 = sub_140979DE0((unsigned __int8)v171 + 1, v185, v184, v183, v182, (__int64)&v341, v168);
          }
          else if ( (char *)v181 == (char *)sub_140979C40 )
          {
            v186 = sub_140979C40(v171 + 1, v185, v184, v183, v182, (__int64)&v341, v168);
          }
          else if ( v181 == sub_140979B60 )
          {
            v186 = sub_140979B60(v171 + 1, v185, v184, v183, v182, (__int64)&v341, v168);
          }
          else
          {
            v186 = guard_dispatch_icall_no_overrides(v171 + 1);
          }
          v170 ^= v186;
        }
        v171 += 2LL;
        v166 += 2;
        v165 += 8;
        --v172;
      }
      while ( v172 );
      v187 = v341;
      v188 = HIDWORD(v341);
      v189 = (HIWORD(v341) * ((unsigned __int16)v341 + __ROR4__(~v170, 5))) ^ v168;
      v190 = (v189 >> 10) ^ (WORD1(v341) * (v189 ^ HIWORD(v341))) ^ v170;
      v191 = __ROR4__(v190, 10) ^ (WORD2(v341) * __ROR4__(v341 ^ v190, 12)) ^ v189;
      v192 = (HIWORD(v341) * __ROR4__(v191 - v341, 14) - __ROR4__(v191, 24)) ^ v190;
      v193 = (__ROR4__(v192, 30) + (unsigned __int16)v341 * __ROR4__(v192 + HIDWORD(v341), 15)) ^ v191;
      v194 = (WORD1(v341) * (v193 ^ WORD2(v341))) ^ __ROR4__(v193, 6) ^ v192;
      v195 = (HIDWORD(v341) - (v341 ^ v194)) ^ v193;
      v196 = (HIWORD(v341) * __ROR4__(v195 ^ WORD1(v341), 26) - __ROR4__(v195, 30)) ^ v194;
      v197 = ((unsigned __int16)v341 * (v196 - WORD2(v341)) - (v196 >> 13)) ^ v195;
      v198 = (WORD1(v341) * __ROR4__(v197 + HIDWORD(v341), 9) - __ROR4__(v197, 30)) ^ v196;
      v199 = v312;
      v200 = v314;
      v201 = (__ROR4__(v198, 22) + WORD2(v341) * __ROR4__(v198 - v341, 27)) ^ v197;
      v202 = v201 ^ v198;
      v159 = v305 ^ v201;
      *((char *)v312 - 4) = v159;
      v203 = v304 ^ v187 ^ v188 ^ v202;
      *v199 = v203;
      *(v199 - 5) = (unsigned __int64)v159 >> 8;
      *(v199 - 1) = BYTE1(v203);
      v164 = v307;
      *(v199 - 6) = (unsigned __int16)((unsigned __int64)v159 >> 8) >> 8;
      v163 = v319;
      *(v199 - 2) = (unsigned __int16)(v203 >> 8) >> 8;
      *(v199 - 7) = __ROR4__(
                      ((((unsigned __int64)v159 >> 8) | (v159 << 24)) >> 8) | ((((unsigned __int64)v159 >> 8) | (v159 << 24)) << 24),
                      8);
      *(v199 - 3) = __ROR4__((((v203 >> 8) | (v203 << 24)) >> 8) | (((v203 >> 8) | (v203 << 24)) << 24), 8);
      v80 = v309-- == 1;
      v306 = v203;
      v305 = v310;
      v304 = v200;
      v312 = v199 + 8;
    }
    while ( !v80 );
    v162 = v308;
    v158 = v313;
    v156 = v311;
  }
  Acl = 0;
  *(_QWORD *)&v158[v162] = v303;
  if ( v156 )
  {
    v204 = (void *)ExAllocatePool2(0x100uLL);
    v205 = v204;
    if ( v204 )
    {
      memmove(v204, v158, v156);
      *((_QWORD *)v299 + 1) = v205;
      *v299 = v156;
    }
    else
    {
      Acl = -1073741801;
    }
  }
  else
  {
    Acl = -1073741762;
  }
  v5 = v294;
  v9 = v297;
  v8 = (__int64)v299;
  ExFreePoolWithTag(v158, 0);
  v7 = v300;
  if ( Acl < 0 )
    goto LABEL_282;
  v206 = v299 + 8;
  v207 = v299 + 4;
  v208 = v299[4];
  if ( *v299 >= 0xFFFFFFFC
    || (v209 = *v299 + 8, v209 < *v299 + 4)
    || (v210 = v209 + v208, v209 + v208 < v209)
    || (v211 = v210 + 4, v210 + 4 < v210)
    || (v212 = v211 + v299[8], v212 < v211) )
  {
    v6 = 0LL;
    Acl = -1073741675;
    v9 = v297;
    goto LABEL_19;
  }
  v307 = v294;
  if ( v212 )
  {
    v213 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( v213 )
    {
      v214 = (char *)v213;
      v298 = (char *)v213;
      v215 = v213 + 1;
      *v213 = *v299;
      if ( v214 + 4 < v214 )
      {
        v9 = v297;
        v8 = (__int64)v299;
        v5 = v307;
      }
      else
      {
        v8 = (__int64)v299;
        memmove(v213 + 1, *((const void **)v299 + 1), *v299);
        v216 = (_DWORD *)((char *)v215 + *v299);
        if ( v216 < v215
          || (v217 = v216 + 1, *v216 = *v207, v216 + 1 < v216)
          || (memmove(v216 + 1, *((const void **)v299 + 3), (unsigned int)*v207),
              v218 = (_DWORD *)((char *)v217 + (unsigned int)*v207),
              v218 < v217)
          || (v219 = v218 + 1, *v218 = *v206, v218 + 1 < v218) )
        {
          v214 = v298;
          v5 = v294;
          v9 = v297;
        }
        else
        {
          memmove(v218 + 1, *((const void **)v299 + 5), (unsigned int)*v206);
          v220 = (unsigned int)*v206;
          v9 = v297;
          v5 = v294;
          if ( (_DWORD *)((char *)v219 + v220) >= v219 )
          {
            Acl = 0;
            *v332 = v298;
            v6 = 0LL;
            *v333 = v212;
            goto LABEL_19;
          }
          v214 = v298;
        }
      }
      Acl = -1073741675;
      ExFreePoolWithTag(v214, 0);
      v6 = v331;
      goto LABEL_19;
    }
    v5 = v294;
    v9 = v297;
    v8 = (__int64)v299;
    Acl = -1073741801;
    v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
    v8 = (__int64)v299;
    v5 = v294;
    Acl = -1073741762;
    v9 = v297;
  }
LABEL_19:
  P[0] = 0LL;
  if ( P[1] )
  {
    ExFreePoolWithTag(P[1], 0);
    P[1] = 0LL;
  }
  v301[0] = 0LL;
  if ( v301[1] )
  {
    ExFreePoolWithTag(v301[1], 0);
    v301[1] = 0LL;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v7 )
  {
    v21 = (void *)*((_QWORD *)v7 + 1);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *((_QWORD *)v7 + 1) = 0LL;
    }
    v22 = (void *)*((_QWORD *)v7 + 3);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)v7 + 3) = 0LL;
    }
    v23 = (void *)*((_QWORD *)v7 + 5);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *((_QWORD *)v7 + 5) = 0LL;
    }
    ExFreePoolWithTag(v7, 0);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v8 )
  {
    v24 = *(void **)(v8 + 8);
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      *(_QWORD *)(v8 + 8) = 0LL;
    }
    v25 = *(void **)(v8 + 24);
    if ( v25 )
    {
      ExFreePoolWithTag(v25, 0);
      *(_QWORD *)(v8 + 24) = 0LL;
    }
    v26 = *(void **)(v8 + 40);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
      *(_QWORD *)(v8 + 40) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v8, 0);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)Acl;
}
