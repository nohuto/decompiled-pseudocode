/*
 * XREFs of SPCall2ServerInternal @ 0x140A24430
 * Callers:
 *     Callout @ 0x140A242E0 (Callout.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     RtlULongLongAdd @ 0x140469AA0 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x14047FDD0 (RtlUIntAdd.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     SPCallServerHandleGetCurrentHardwareID @ 0x1404D31C0 (SPCallServerHandleGetCurrentHardwareID.c)
 *     sub_140508FBC @ 0x140508FBC (sub_140508FBC.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     sub_140773F50 @ 0x140773F50 (sub_140773F50.c)
 *     sub_1407746AC @ 0x1407746AC (sub_1407746AC.c)
 *     sub_14077A08C @ 0x14077A08C (sub_14077A08C.c)
 *     sub_14077AFD8 @ 0x14077AFD8 (sub_14077AFD8.c)
 *     sub_14077B28C @ 0x14077B28C (sub_14077B28C.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     sub_140A22C00 @ 0x140A22C00 (sub_140A22C00.c)
 *     sub_140A231CC @ 0x140A231CC (sub_140A231CC.c)
 *     sub_140A23D94 @ 0x140A23D94 (sub_140A23D94.c)
 *     sub_140A24318 @ 0x140A24318 (sub_140A24318.c)
 *     SPCallServerHandleQueryPolicy @ 0x140A27458 (SPCallServerHandleQueryPolicy.c)
 *     sub_140AB940C @ 0x140AB940C (sub_140AB940C.c)
 *     sub_140AC3F00 @ 0x140AC3F00 (sub_140AC3F00.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x140AE01CC (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_140AF9D4C @ 0x140AF9D4C (sub_140AF9D4C.c)
 *     SPCallServerHandleUpdatePolicies @ 0x140B0D2E8 (SPCallServerHandleUpdatePolicies.c)
 *     SPCallServerHandleUpdateLicense @ 0x140B11F30 (SPCallServerHandleUpdateLicense.c)
 *     SPCallServerHandleCallbackPaintComplete @ 0x140B23E70 (SPCallServerHandleCallbackPaintComplete.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140B25F64 (SPCallServerHandleWaitForDisplayWindow.c)
 *     sub_140B557F0 @ 0x140B557F0 (sub_140B557F0.c)
 *     sub_140B55F70 @ 0x140B55F70 (sub_140B55F70.c)
 *     sub_140B638AC @ 0x140B638AC (sub_140B638AC.c)
 *     sub_140B64EB4 @ 0x140B64EB4 (sub_140B64EB4.c)
 *     sub_140B660C0 @ 0x140B660C0 (sub_140B660C0.c)
 *     sub_140B6BD78 @ 0x140B6BD78 (sub_140B6BD78.c)
 *     sub_140B6C938 @ 0x140B6C938 (sub_140B6C938.c)
 *     sub_140B6DDD8 @ 0x140B6DDD8 (sub_140B6DDD8.c)
 *     sub_140B701DC @ 0x140B701DC (sub_140B701DC.c)
 *     sub_140B70B6C @ 0x140B70B6C (sub_140B70B6C.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCall2ServerInternal(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  int Policy; // edi
  void *v6; // rbx
  _QWORD *v7; // r15
  PVOID v8; // r13
  _DWORD *v9; // r12
  size_t v10; // r14
  char *v11; // r12
  unsigned int *v12; // r8
  size_t v13; // r15
  char *v14; // r13
  unsigned int v15; // r8d
  unsigned int *v16; // rcx
  unsigned int v17; // r9d
  size_t v18; // rsi
  unsigned int v19; // ecx
  _OWORD *Pool2; // rax
  ULONGLONG v21; // rbx
  void *v22; // rax
  void *v23; // r14
  void *v24; // rax
  unsigned int *v25; // rsi
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  unsigned int v32; // eax
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  void *v40; // rax
  char *v41; // r8
  char *v42; // rcx
  _QWORD *v43; // r9
  int v44; // r8d
  _QWORD *v45; // r13
  int v46; // edx
  void *v47; // r15
  int *v48; // rax
  int v49; // r13d
  unsigned int *v50; // rax
  int v51; // edx
  size_t v52; // r14
  unsigned int *v53; // rcx
  unsigned int *v54; // rax
  unsigned int i; // edx
  size_t v56; // rsi
  unsigned int *v57; // rcx
  const void *v58; // r15
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rbx
  void *v63; // rax
  void *v64; // rax
  void *v65; // rcx
  void *v66; // rcx
  void *v67; // rcx
  _QWORD *v68; // r14
  unsigned __int64 v69; // r15
  __int64 v70; // rbx
  _DWORD *v71; // rsi
  __int64 *v72; // rdx
  int v73; // eax
  ULONGLONG v74; // rdi
  int v75; // ecx
  unsigned __int64 v76; // r8
  __int64 v77; // rbx
  unsigned __int64 v78; // rax
  __m128 v79; // xmm1
  __m128 v80; // xmm2
  __m128 v81; // xmm0
  __m128 v82; // xmm0
  __m128 v83; // xmm1
  __m128 v84; // xmm1
  __m128 v85; // xmm1
  __m128 v86; // xmm1
  void *v87; // rax
  unsigned __int8 *v88; // rsi
  unsigned __int8 *v89; // r14
  unsigned int v90; // r15d
  unsigned __int64 v91; // rbx
  ULONGLONG v92; // rdx
  unsigned __int8 *v93; // rcx
  __int64 v94; // rsi
  ULONGLONG v95; // rbx
  __int64 v96; // r14
  _BYTE *v97; // rdi
  int v98; // r13d
  unsigned int v99; // r15d
  int v100; // r13d
  int v101; // r12d
  unsigned int v102; // edx
  int v103; // r10d
  int v104; // r9d
  int v105; // r8d
  int v106; // edx
  int v107; // r9d
  int v108; // r8d
  unsigned int v109; // r10d
  int v110; // r9d
  int v111; // edx
  int v112; // r12d
  UINT v113; // r12d
  _BYTE *v114; // rdx
  int v115; // r12d
  int v116; // eax
  int v117; // r12d
  bool v118; // zf
  PVOID v119; // r14
  unsigned int v120; // r15d
  void *v121; // rax
  void *v122; // rbx
  ULONGLONG v123; // r14
  int v124; // r8d
  unsigned int v125; // edx
  unsigned int v126; // ecx
  unsigned int v127; // eax
  int v128; // esi
  _DWORD *v129; // rbx
  _DWORD *v130; // rdi
  _DWORD *v131; // rcx
  _DWORD *v132; // rdi
  _DWORD *v133; // rcx
  _DWORD *v134; // rdi
  __int64 v135; // r14
  ULONG v136; // ebx
  ULONG v137; // ebx
  ULONG v138; // ebx
  ACL *v139; // rax
  char *v140; // rsi
  BOOLEAN v141; // bl
  UINT v142; // r8d
  int v143; // r9d
  int v144; // edx
  char v145; // r10
  int v146; // eax
  __int64 v147; // rcx
  ULONGLONG v148; // r12
  _BYTE *v149; // r13
  int v150; // edi
  __int64 v151; // r14
  int v152; // eax
  int v153; // eax
  UINT v154; // r8d
  unsigned int v155; // ebx
  unsigned int v156; // eax
  UINT v157; // ecx
  unsigned int v158; // edx
  unsigned __int8 v159; // r8
  const void *v160; // rbx
  const void *v161; // rbx
  int updated; // eax
  __int64 v163; // rdx
  int v164; // r8d
  __int64 OtherOperationCount; // r14
  ULONG v166; // ebx
  ULONG v167; // ebx
  ULONG v168; // ebx
  ACL *v169; // rax
  char *v170; // rsi
  BOOLEAN v171; // bl
  const void *v172; // rbx
  __int64 v173; // r8
  const void *v174; // rbx
  unsigned int *v175; // rax
  unsigned int v176; // edx
  __int64 v177; // r8
  unsigned int *v178; // rcx
  unsigned int *v179; // rax
  unsigned int v180; // edx
  __int64 v181; // r8
  unsigned int *v182; // rcx
  unsigned int *v183; // rax
  __int64 v184; // r12
  unsigned int *v185; // rax
  __int64 v186; // r12
  unsigned int *v187; // rax
  unsigned int j; // edx
  size_t v189; // rbx
  unsigned int *v190; // rcx
  unsigned int *v191; // rsi
  void *v192; // rax
  unsigned int *v193; // rax
  unsigned int k; // edx
  size_t v195; // rbx
  unsigned int *v196; // rcx
  _QWORD *v197; // rdi
  void *v198; // rax
  int v199; // ebx
  _DWORD *v200; // rax
  int v201; // ebx
  unsigned int v202; // ecx
  char *v203; // rdx
  unsigned int m; // r8d
  unsigned int v205; // eax
  unsigned __int8 *v206; // r14
  __int64 v207; // rax
  __int64 *v208; // rbx
  unsigned int v209; // ecx
  __int64 v210; // rdi
  unsigned int v211; // edx
  __int64 v212; // rbx
  void *v213; // rax
  unsigned __int64 v214; // r9
  _BYTE *v215; // r12
  unsigned __int8 *v216; // r13
  int v217; // r15d
  UINT v218; // r14d
  unsigned __int8 *v219; // rcx
  int v220; // r11d
  int v221; // edx
  int v222; // eax
  int v223; // edx
  unsigned int v224; // edx
  int v225; // r9d
  int v226; // r10d
  int v227; // edx
  int v228; // ecx
  int v229; // r8d
  int v230; // edx
  __int64 v231; // r12
  int v232; // ecx
  int v233; // r8d
  unsigned int v234; // ebx
  _BYTE *v235; // rdi
  unsigned int v236; // r15d
  __int64 v237; // rsi
  unsigned int v238; // r14d
  _BYTE *v239; // rbx
  _BYTE *v240; // rcx
  UINT v241; // r13d
  unsigned __int64 v242; // rax
  __m128 v243; // xmm1
  __m128 v244; // xmm2
  __m128 v245; // xmm0
  __m128 v246; // xmm0
  __m128 v247; // xmm1
  __m128 v248; // xmm1
  __m128 v249; // xmm1
  __m128 v250; // xmm1
  unsigned __int8 v251; // cl
  size_t v252; // r14
  char *v253; // rsi
  unsigned __int64 v254; // rdx
  int v255; // r15d
  unsigned int v256; // r14d
  int v257; // r9d
  UINT v258; // r10d
  int v259; // r8d
  char v260; // dl
  int v261; // eax
  _BYTE *v262; // rax
  __int64 v263; // r12
  __int64 v264; // rbx
  __int64 v265; // rdi
  unsigned int v266; // r15d
  UINT v267; // eax
  unsigned int v268; // esi
  unsigned int v269; // ecx
  unsigned int v270; // edx
  char v271; // r8
  const void *v272; // rbx
  PVOID v273; // rcx
  unsigned int v274; // r9d
  _DWORD *v275; // rax
  _QWORD *v276; // r11
  _QWORD *v277; // r14
  _DWORD *v278; // r15
  unsigned int v279; // r10d
  int v280; // r9d
  int v281; // r9d
  _DWORD *v282; // rax
  __int64 v283; // rdx
  void *v284; // r13
  int v285; // ebx
  UINT v286; // r10d
  UINT v287; // r11d
  UINT v288; // r10d
  UINT v289; // r11d
  UINT v290; // r10d
  UINT v291; // r11d
  UINT v292; // r9d
  UINT v293; // esi
  UINT v294; // r9d
  UINT v295; // ecx
  UINT v296; // r10d
  UINT v297; // r10d
  UINT v298; // r10d
  __int64 v299; // r9
  void *v300; // r10
  int v301; // ebx
  _DWORD *v302; // rsi
  _DWORD *v303; // r9
  __int64 v304; // r10
  _DWORD *v305; // rax
  char *v306; // rbx
  unsigned int v307; // r9d
  UINT v308; // r11d
  unsigned int v309; // r9d
  UINT *v310; // r10
  unsigned int v311; // r11d
  UINT v312; // edx
  ULONGLONG v313; // r10
  int v314; // r11d
  _DWORD *v315; // r10
  _QWORD *v316; // rax
  char *v317; // rbx
  UINT v318; // r11d
  unsigned int v319; // r9d
  UINT *v320; // r10
  UINT v321; // edx
  ULONGLONG v322; // r10
  int v323; // r11d
  _DWORD *v324; // r10
  void *v325; // rcx
  char *v326; // rbx
  int v327; // r11d
  UINT *v328; // r10
  UINT v329; // edx
  ULONGLONG v330; // r10
  int v331; // r11d
  _DWORD *v332; // r10
  _DWORD *v333; // rax
  ACCESS_MASK PreviouslyGrantedAccess[2]; // [rsp+20h] [rbp-E0h]
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-D8h]
  unsigned int GenericMapping; // [rsp+30h] [rbp-D0h]
  ULONGLONG v337; // [rsp+50h] [rbp-B0h]
  _QWORD *v338; // [rsp+50h] [rbp-B0h]
  _QWORD *v339; // [rsp+50h] [rbp-B0h]
  _DWORD *v340; // [rsp+58h] [rbp-A8h]
  unsigned int *v341; // [rsp+58h] [rbp-A8h]
  PVOID v342; // [rsp+68h] [rbp-98h]
  unsigned __int8 *v343; // [rsp+70h] [rbp-90h]
  UINT puResult; // [rsp+78h] [rbp-88h] BYREF
  UINT uAugend; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID v346[2]; // [rsp+80h] [rbp-80h] BYREF
  int v347; // [rsp+90h] [rbp-70h]
  PVOID P[2]; // [rsp+98h] [rbp-68h] BYREF
  ULONGLONG v349; // [rsp+A8h] [rbp-58h] BYREF
  int v350; // [rsp+B0h] [rbp-50h]
  ULONGLONG pullResult; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v352; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v353; // [rsp+C8h] [rbp-38h]
  ULONGLONG v354; // [rsp+D0h] [rbp-30h] BYREF
  void *Src; // [rsp+D8h] [rbp-28h]
  UINT v356; // [rsp+E0h] [rbp-20h]
  _BYTE *v357; // [rsp+E8h] [rbp-18h]
  PVOID v358; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v359; // [rsp+F8h] [rbp-8h]
  NTSTATUS v360; // [rsp+100h] [rbp+0h] BYREF
  NTSTATUS AccessStatus; // [rsp+104h] [rbp+4h] BYREF
  int v362; // [rsp+108h] [rbp+8h] BYREF
  UINT v363; // [rsp+10Ch] [rbp+Ch] BYREF
  unsigned __int8 *v364; // [rsp+110h] [rbp+10h]
  UINT uAddend; // [rsp+118h] [rbp+18h] BYREF
  PVOID v366; // [rsp+120h] [rbp+20h]
  _BYTE *v367; // [rsp+128h] [rbp+28h]
  ULONG v368; // [rsp+130h] [rbp+30h] BYREF
  ULONG ReturnLength; // [rsp+134h] [rbp+34h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+138h] [rbp+38h] BYREF
  ULONG v371; // [rsp+13Ch] [rbp+3Ch] BYREF
  ACCESS_MASK v372; // [rsp+140h] [rbp+40h] BYREF
  __int64 v373; // [rsp+148h] [rbp+48h] BYREF
  __int64 SystemInformation; // [rsp+150h] [rbp+50h] BYREF
  __int64 v375; // [rsp+158h] [rbp+58h] BYREF
  _QWORD *v376; // [rsp+168h] [rbp+68h]
  _DWORD *v377; // [rsp+170h] [rbp+70h]
  _OWORD v378[2]; // [rsp+178h] [rbp+78h] BYREF
  char *v379; // [rsp+198h] [rbp+98h]
  _OWORD SecurityDescriptor[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  char *v381; // [rsp+1C0h] [rbp+C0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+1C8h] [rbp+C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v384; // [rsp+210h] [rbp+110h] BYREF
  __int64 v385; // [rsp+218h] [rbp+118h]

  Policy = 0;
  v376 = a4;
  v6 = 0LL;
  v343 = 0LL;
  v352 = a3;
  v377 = a5;
  v7 = 0LL;
  v8 = 0LL;
  v340 = 0LL;
  v9 = 0LL;
  pullResult = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v346 = 0LL;
  if ( a2 < 4 )
  {
    Policy = -1073741762;
    goto LABEL_53;
  }
  v10 = *a1;
  v11 = (char *)(a1 + 1);
  if ( a1 + 1 < a1 )
    goto LABEL_31;
  if ( a2 - 4 < (unsigned int)v10 )
  {
    Policy = -1073741762;
    goto LABEL_32;
  }
  v12 = (unsigned int *)&v11[v10];
  if ( &v11[v10] < v11 || (unsigned int)v10 >= 0xFFFFFFFC )
  {
LABEL_31:
    Policy = -1073741675;
LABEL_32:
    v9 = 0LL;
    goto LABEL_53;
  }
  if ( a2 - ((_DWORD)v10 + 4) < 4 )
  {
    Policy = -1073741762;
    goto LABEL_32;
  }
  v13 = *v12;
  v14 = (char *)(v12 + 1);
  if ( v12 + 1 < v12 )
    goto LABEL_30;
  v15 = v10 + 8;
  if ( (int)v10 + 8 < (unsigned int)(v10 + 4) )
    goto LABEL_30;
  if ( a2 - v15 < (unsigned int)v13 )
  {
    Policy = -1073741762;
    v7 = 0LL;
    v8 = 0LL;
    goto LABEL_32;
  }
  v16 = (unsigned int *)&v14[v13];
  if ( &v14[v13] < v14 )
    goto LABEL_30;
  v17 = v13 + v15;
  if ( (unsigned int)v13 + v15 < v15 )
    goto LABEL_30;
  if ( a2 - v17 < 4 )
  {
    Policy = -1073741762;
    v7 = 0LL;
    v8 = 0LL;
    goto LABEL_32;
  }
  v18 = *v16;
  Src = v16 + 1;
  if ( v16 + 1 < v16 )
    goto LABEL_30;
  v19 = v17 + 4;
  if ( v17 + 4 < v17 )
    goto LABEL_30;
  if ( a2 - v19 < (unsigned int)v18 )
  {
    Policy = -1073741762;
    v7 = 0LL;
    v8 = 0LL;
    goto LABEL_32;
  }
  if ( (unsigned int)v18 + v19 < v19 )
  {
LABEL_30:
    v8 = 0LL;
    v7 = 0LL;
    goto LABEL_31;
  }
  if ( a2 != (_DWORD)v18 + v19 )
  {
    Policy = -1073741762;
    v7 = 0LL;
    v8 = 0LL;
    goto LABEL_32;
  }
  if ( (unsigned int)(v18 + v13 + v10) + 12LL != a2 )
  {
    Policy = -1073741762;
    v7 = 0LL;
    v8 = 0LL;
    goto LABEL_32;
  }
  Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL);
  v21 = (ULONGLONG)Pool2;
  if ( !Pool2 )
  {
    Policy = -1073741801;
LABEL_49:
    v7 = 0LL;
    v9 = 0LL;
    v6 = 0LL;
    v8 = 0LL;
    goto LABEL_53;
  }
  *Pool2 = 0LL;
  Pool2[1] = 0LL;
  Pool2[2] = 0LL;
  if ( !v11 )
    goto LABEL_21;
  *(_DWORD *)Pool2 = v10;
  if ( (_DWORD)v10 )
  {
    v40 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v40 )
      goto LABEL_545;
    *(_QWORD *)(v21 + 8) = v40;
    memmove(v40, v11, v10);
LABEL_21:
    if ( v14 )
    {
      *(_DWORD *)(v21 + 16) = v13;
      if ( !(_DWORD)v13 )
      {
        Policy = -1073741762;
        goto LABEL_33;
      }
      v22 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v22 )
        goto LABEL_545;
      *(_QWORD *)(v21 + 24) = v22;
      memmove(v22, v14, v13);
    }
    else
    {
      *(_DWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 24) = 0LL;
    }
    v23 = Src;
    if ( !Src )
    {
      *(_DWORD *)(v21 + 32) = 0;
      *(_QWORD *)(v21 + 40) = 0LL;
      goto LABEL_29;
    }
    *(_DWORD *)(v21 + 32) = v18;
    if ( !(_DWORD)v18 )
    {
      Policy = -1073741762;
      goto LABEL_33;
    }
    v24 = (void *)ExAllocatePool2(0x100uLL);
    if ( v24 )
    {
      *(_QWORD *)(v21 + 40) = v24;
      memmove(v24, v23, v18);
LABEL_29:
      v25 = (unsigned int *)v21;
      pullResult = v21;
      goto LABEL_40;
    }
LABEL_545:
    Policy = -1073741801;
    goto LABEL_33;
  }
  Policy = -1073741762;
LABEL_33:
  v26 = *(void **)(v21 + 8);
  if ( v26 )
  {
    ExFreePoolWithTag(v26, 0);
    *(_QWORD *)(v21 + 8) = 0LL;
  }
  v27 = *(void **)(v21 + 24);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0);
    *(_QWORD *)(v21 + 24) = 0LL;
  }
  v28 = *(void **)(v21 + 40);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    *(_QWORD *)(v21 + 40) = 0LL;
  }
  ExFreePoolWithTag((PVOID)v21, 0);
  v25 = (unsigned int *)pullResult;
LABEL_40:
  if ( Policy < 0 )
  {
    if ( v25 )
    {
      v29 = (void *)*((_QWORD *)v25 + 1);
      if ( v29 )
      {
        ExFreePoolWithTag(v29, 0);
        *((_QWORD *)v25 + 1) = 0LL;
      }
      v30 = (void *)*((_QWORD *)v25 + 3);
      if ( v30 )
      {
        ExFreePoolWithTag(v30, 0);
        *((_QWORD *)v25 + 3) = 0LL;
      }
      v31 = (void *)*((_QWORD *)v25 + 5);
      if ( v31 )
      {
        ExFreePoolWithTag(v31, 0);
        *((_QWORD *)v25 + 5) = 0LL;
      }
      ExFreePoolWithTag(v25, 0);
      goto LABEL_49;
    }
    v7 = 0LL;
    goto LABEL_488;
  }
  if ( !v25
    || (v206 = (unsigned __int8 *)*((_QWORD *)v25 + 1), (v353 = v206) == 0LL)
    || (v207 = *v25, !(_DWORD)v207)
    || (v208 = (__int64 *)*((_QWORD *)v25 + 5)) == 0LL
    || (v209 = v25[8]) == 0
    || (v210 = *((_QWORD *)v25 + 3)) == 0 )
  {
    v7 = v25;
    goto LABEL_550;
  }
  v211 = v25[4];
  v7 = v25;
  if ( !v211 )
  {
LABEL_550:
    Policy = -1073741811;
    goto LABEL_488;
  }
  if ( v209 != 8 )
    goto LABEL_487;
  if ( v211 != 160 )
    goto LABEL_487;
  if ( (unsigned int)v207 <= 8 )
    goto LABEL_487;
  v212 = *v208;
  v359 = v207 - 8;
  LOBYTE(puResult) = 0;
  v213 = (void *)ExAllocatePool2(0x100uLL);
  v358 = v213;
  if ( !v213 )
    goto LABEL_487;
  v214 = v359;
  v215 = v213;
  Src = v213;
  v384 = v212;
  v349 = v359 & 7;
  v216 = v206;
  v350 = -1;
  if ( (v359 & 7) != 0 )
  {
    v255 = -1;
    v256 = 0;
    v257 = 0;
    v347 = 0;
    v258 = 0;
    uAugend = 0;
    v259 = 0;
    v260 = 56;
    v337 = pullResult;
    do
    {
      v261 = *v216++;
      if ( (unsigned int)v259 >= 4 )
        v257 |= v261 << v260;
      else
        v258 |= v261 << (v260 - 32);
      ++v259;
      v260 -= 8;
    }
    while ( v259 < (unsigned __int8)(v359 & 7) );
    uAugend = v258;
    v347 = v257;
    v262 = (_BYTE *)(v210 + 158);
    v263 = 30LL;
    v366 = (PVOID)(v210 + 158);
    v357 = (_BYTE *)(v210 + 158);
    v367 = (_BYTE *)(v210 + 126);
    v264 = v210 + 126;
    v265 = 16LL;
    do
    {
      if ( v262[1] < 0x1Fu )
      {
        GenericMapping = v256;
        Privileges = (PPRIVILEGE_SET *)&v384;
        *(_QWORD *)PreviouslyGrantedAccess = *(unsigned __int8 *)(v264 + 1);
        v255 ^= guard_dispatch_icall_no_overrides(v263 + 1, *(unsigned __int8 *)(v264 - 2));
        v262 = v357;
      }
      if ( *v262 < 0x1Fu )
      {
        GenericMapping = v255;
        Privileges = (PPRIVILEGE_SET *)&v384;
        *(_QWORD *)PreviouslyGrantedAccess = *(unsigned __int8 *)(v264 - 3);
        v256 ^= guard_dispatch_icall_no_overrides(v263, *(unsigned __int8 *)(v264 - 6));
        v262 = v357;
      }
      v262 -= 2;
      v263 -= 2LL;
      v264 -= 8LL;
      v357 = v262;
      --v265;
    }
    while ( v265 );
    v218 = uAugend ^ v256;
    v266 = v347 ^ v255;
    v267 = v218;
    v268 = v349;
    v269 = v266;
    v215 = Src;
    v270 = 0;
    if ( (_DWORD)v349 )
    {
      do
      {
        if ( v270 >= 4 )
        {
          v269 = __ROR4__(v269, 24);
          v271 = v269;
        }
        else
        {
          v267 = __ROR4__(v267, 24);
          v271 = v267;
        }
        ++v270;
        *v215++ = v271;
      }
      while ( (int)v270 < (int)v268 );
    }
    if ( v268 <= 4 )
    {
      v217 = 0;
      if ( v268 < 4 )
        v218 = v218 >> (8 * (4 - v268)) << (8 * (4 - v268));
    }
    else
    {
      v217 = v266 >> (8 * (8 - v268)) << (8 * (8 - v268));
    }
    LODWORD(v212) = v384;
    v214 = v359;
  }
  else
  {
    v347 = -1;
    uAugend = 0;
    v366 = (PVOID)(v210 + 158);
    v217 = 0;
    v218 = 0;
    v367 = (_BYTE *)(v210 + 126);
    v337 = pullResult;
  }
  v349 = v214 >> 3;
  if ( v214 >> 3 )
  {
    v219 = v216 + 2;
    Src = v215 + 7;
    while ( 1 )
    {
      v220 = (unsigned __int16)v212;
      v221 = v219[3] | (v219[2] << 8);
      v356 = v219[1] | ((*v219 | ((*(v219 - 1) | (*(v219 - 2) << 8)) << 8)) << 8);
      v222 = v219[5];
      v223 = (v219[4] | (v221 << 8)) << 8;
      v364 = v219 + 8;
      LODWORD(v357) = v222 | v223;
      v224 = v218 ^ v356 ^ v212 ^ HIDWORD(v384) ^ v217 ^ (v222 | v223);
      v225 = v218 ^ v356 ^ (v224 >> 8) ^ (WORD2(v384) * (WORD1(v384) ^ v224));
      v226 = v224 ^ (WORD1(v384) * __ROR4__(HIDWORD(v384) - v225, 11) - __ROR4__(v225, 12));
      v227 = v225 ^ ((unsigned __int16)v212 * __ROR4__(HIDWORD(v384) ^ v226, 24) - __ROR4__(v226, 30));
      v228 = v226 ^ __ROR4__(v227, 9) ^ (HIWORD(v384) * __ROR4__(v227 - v212, 4));
      v229 = v227 ^ (__ROR4__(v228, 4) + WORD2(v384) * __ROR4__(v212 - v228, 10));
      v230 = v228 ^ (WORD1(v384) * __ROR4__(HIWORD(v384) ^ v229, 28) - __ROR4__(v229, 16));
      v231 = 16LL;
      v232 = v229 ^ ((unsigned __int16)v212 * (WORD1(v384) ^ v230) - __ROR4__(v230, 7));
      v233 = v230 ^ (v232 - v212 - HIWORD(v384));
      v234 = v232 ^ __ROR4__(v233, 11) ^ (WORD2(v384) * __ROR4__(v212 - v233, 9));
      v235 = v366;
      v236 = v233 ^ (WORD1(v384) * (v234 - WORD2(v384)) - (v234 >> 13));
      v237 = 30LL;
      v238 = v234 ^ (v236 >> 15) ^ (v220 * ((8 * (v236 - WORD2(v384))) | ((v236 - WORD2(v384)) >> 29)));
      v239 = v367;
      do
      {
        if ( v235[1] < 0x1Fu )
        {
          GenericMapping = v238;
          Privileges = (PPRIVILEGE_SET *)&v384;
          *(_QWORD *)PreviouslyGrantedAccess = (unsigned __int8)v239[1];
          v236 ^= guard_dispatch_icall_no_overrides(v237 + 1, (unsigned __int8)*(v239 - 2));
        }
        if ( *v235 < 0x1Fu )
        {
          GenericMapping = v236;
          Privileges = (PPRIVILEGE_SET *)&v384;
          *(_QWORD *)PreviouslyGrantedAccess = (unsigned __int8)*(v239 - 3);
          v238 ^= guard_dispatch_icall_no_overrides(v237, (unsigned __int8)*(v239 - 6));
        }
        v237 -= 2LL;
        v235 -= 2;
        v239 -= 8;
        --v231;
      }
      while ( v231 );
      v240 = Src;
      v218 = uAugend ^ v238;
      v217 = v347 ^ v236;
      v241 = v356;
      *((char *)Src - 4) = v218;
      *v240 = v217;
      *(v240 - 5) = __ROR4__(v218, 8);
      *(v240 - 1) = __ROR4__(v217, 8);
      *(v240 - 6) = __ROR4__(v218, 16);
      *(v240 - 2) = __ROR4__(v217, 16);
      *(v240 - 7) = __ROR4__(v218, 24);
      *(v240 - 3) = __ROR4__(v217, 24);
      v118 = v349-- == 1;
      uAugend = v241;
      v347 = (int)v357;
      Src = v240 + 8;
      if ( v118 )
        break;
      LODWORD(v212) = v384;
      v219 = v364;
    }
    v214 = v359;
  }
  v9 = 0LL;
  v242 = 0LL;
  if ( !v214 )
  {
    v251 = puResult;
    goto LABEL_471;
  }
  if ( v214 < 0x20 )
  {
    v251 = puResult;
    do
LABEL_470:
      v251 ^= *((_BYTE *)v358 + v242++);
    while ( v242 < v214 );
    goto LABEL_471;
  }
  v243 = 0LL;
  v244 = 0LL;
  do
  {
    v243 = _mm_xor_ps(v243, (__m128)_mm_loadu_si128((const __m128i *)((char *)v358 + v242)));
    v245 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v358 + v242 + 16));
    v242 += 32LL;
    v246 = _mm_xor_ps(v245, v244);
    v244 = v246;
  }
  while ( v242 < (v214 & 0xFFFFFFFFFFFFFFE0uLL) );
  v247 = _mm_xor_ps(v243, v246);
  v248 = _mm_xor_ps(v247, (__m128)_mm_srli_si128((__m128i)v247, 8));
  v249 = _mm_xor_ps(v248, (__m128)_mm_srli_si128((__m128i)v248, 4));
  v250 = _mm_xor_ps(v249, (__m128)_mm_srli_si128((__m128i)v249, 2));
  v251 = _mm_cvtsi128_si32((__m128i)_mm_xor_ps(v250, (__m128)_mm_srli_si128((__m128i)v250, 1)));
  if ( v242 < v214 )
    goto LABEL_470;
LABEL_471:
  if ( v251 != *(_QWORD *)&v353[v214] )
  {
    ExFreePoolWithTag(v358, 0);
    v7 = (_QWORD *)v337;
LABEL_487:
    Policy = -1073741823;
LABEL_488:
    v9 = 0LL;
    v8 = 0LL;
    goto LABEL_100;
  }
  v342 = v358;
  v8 = v358;
  if ( (unsigned int)v214 < 4 )
    goto LABEL_551;
  v44 = *(_DWORD *)v358;
  v347 = *(_DWORD *)v358;
  if ( (char *)v358 + 4 < v358 )
    goto LABEL_474;
  if ( (unsigned int)(v214 - 4) < 4 )
  {
    v7 = (_QWORD *)v337;
    Policy = -1073741762;
    goto LABEL_100;
  }
  v252 = *((unsigned int *)v358 + 1);
  v253 = (char *)v358 + 8;
  if ( (char *)v358 + 8 < (char *)v358 + 4 )
    goto LABEL_474;
  if ( (int)v214 - 8 < (unsigned int)v252 )
  {
    v7 = (_QWORD *)v337;
    Policy = -1073741762;
    goto LABEL_100;
  }
  if ( (unsigned int)v252 >= 0xFFFFFFF8 )
  {
LABEL_474:
    v7 = (_QWORD *)v337;
    Policy = -1073741675;
    v6 = 0LL;
    goto LABEL_53;
  }
  v254 = (unsigned __int64)&v253[v252];
  if ( (char *)v358 + (unsigned int)v214 < &v253[v252] || (unsigned int)v214 - v252 - 8 >= 8 )
  {
LABEL_551:
    v7 = (_QWORD *)v337;
    Policy = -1073741762;
    goto LABEL_100;
  }
  v47 = 0LL;
  v6 = 0LL;
  if ( v358 == (PVOID)-8LL )
  {
    v43 = (_QWORD *)v337;
  }
  else
  {
    v42 = (char *)v358 + 8;
    if ( v254 < (unsigned __int64)v253 )
    {
      v7 = (_QWORD *)v337;
      Policy = -1073741675;
      v9 = 0LL;
      goto LABEL_53;
    }
    v43 = (_QWORD *)v337;
    while ( 1 )
    {
      v337 = (ULONGLONG)v43;
      if ( (unsigned __int64)v42 >= v254 )
        break;
      if ( v42 + 4 < v42 )
        goto LABEL_52;
      if ( (unsigned __int64)(v42 + 4) > v254 )
        goto LABEL_332;
      v32 = *(_DWORD *)v42 + 4;
      if ( *(_DWORD *)v42 >= 0xFFFFFFFC || (v41 = &v42[v32], v41 < v42) )
      {
LABEL_52:
        v7 = v43;
        Policy = -1073741675;
        v9 = 0LL;
        v6 = 0LL;
        goto LABEL_53;
      }
      v42 += v32;
      if ( (unsigned __int64)v41 > v254 )
        goto LABEL_332;
      LODWORD(v6) = (_DWORD)v6 + 1;
    }
    if ( v42 != (char *)v254 )
    {
LABEL_332:
      v7 = v43;
      Policy = -1073741811;
      v9 = 0LL;
      v6 = 0LL;
      goto LABEL_53;
    }
    v44 = v347;
  }
  v45 = v43;
  if ( (_DWORD)v252 )
  {
    v47 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v47 )
    {
      v7 = (_QWORD *)v337;
      Policy = -1073741801;
      v8 = v358;
      goto LABEL_100;
    }
    v44 = v347;
  }
  if ( v358 != (PVOID)-8LL )
  {
    memmove(v47, v253, v252);
    v44 = v347;
  }
  P[1] = v47;
  v7 = v45;
  P[0] = (PVOID)__PAIR64__(v252, (unsigned int)v6);
  if ( v44 != (_DWORD)v6 )
  {
    Policy = -1073741762;
    v8 = v358;
    goto LABEL_100;
  }
  if ( !P[1] )
  {
    v8 = v358;
    Policy = -1073741811;
    v6 = 0LL;
    goto LABEL_53;
  }
  if ( !(_DWORD)v6 )
  {
    v8 = v358;
    Policy = -1073741811;
    v6 = 0LL;
    goto LABEL_53;
  }
  v46 = *(_DWORD *)P[1];
  if ( (char *)P[1] + 4 < P[1] )
    goto LABEL_99;
  Policy = 0;
  v48 = 0LL;
  if ( v46 )
    v48 = (int *)((char *)P[1] + 4);
  if ( v46 != 4 )
  {
    v8 = v358;
    Policy = -1073741789;
    goto LABEL_100;
  }
  v49 = *v48;
  if ( (unsigned int)v6 <= 1 )
  {
    v8 = v358;
    Policy = -1073741811;
    goto LABEL_100;
  }
  v50 = (unsigned int *)P[1];
  v51 = 0;
  v338 = v7;
  while ( 1 )
  {
    v52 = *v50;
    v53 = v50 + 1;
    if ( v51 )
      break;
    if ( v53 < v50 )
      goto LABEL_99;
    v50 = (unsigned int *)((char *)v53 + v52);
    if ( (unsigned int *)((char *)v53 + v52) < v53 )
      goto LABEL_99;
    v51 = 1;
  }
  if ( v53 < v50 )
  {
LABEL_99:
    v8 = v358;
    Policy = -1073741675;
LABEL_100:
    v6 = 0LL;
    goto LABEL_53;
  }
  if ( (_DWORD)v52 )
    v9 = v50 + 1;
  if ( (unsigned int)v6 <= 2 )
  {
    v9 = 0LL;
    Policy = -1073741811;
    v8 = v358;
    goto LABEL_100;
  }
  v54 = (unsigned int *)P[1];
  for ( i = 0; ; ++i )
  {
    v56 = *v54;
    v57 = v54 + 1;
    if ( i >= 2 )
      break;
    if ( v57 < v54 )
      goto LABEL_119;
    v54 = (unsigned int *)((char *)v57 + v56);
    if ( (unsigned int *)((char *)v57 + v56) < v57 )
      goto LABEL_119;
  }
  if ( v57 < v54 )
  {
LABEL_119:
    v9 = 0LL;
    Policy = -1073741675;
    v8 = v358;
    v6 = 0LL;
    goto LABEL_53;
  }
  v58 = 0LL;
  if ( (_DWORD)v56 )
    v58 = v54 + 1;
  v59 = ExAllocatePool2(0x100uLL);
  v62 = v59;
  if ( !v59 )
  {
    v7 = v338;
    Policy = -1073741801;
    v9 = 0LL;
    v8 = v358;
    goto LABEL_100;
  }
  *(_DWORD *)(v59 + 4) = 0;
  *(_QWORD *)(v59 + 20) = 0LL;
  *(_QWORD *)(v59 + 28) = 0LL;
  *(_QWORD *)(v59 + 36) = 0LL;
  *(_DWORD *)(v59 + 44) = 0;
  *(_DWORD *)v59 = 0;
  *(_QWORD *)(v59 + 8) = 0LL;
  if ( !v9 )
  {
    *(_DWORD *)(v59 + 16) = 0;
    goto LABEL_130;
  }
  *(_DWORD *)(v59 + 16) = v52;
  if ( (_DWORD)v52 )
  {
    v63 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v63 )
    {
LABEL_561:
      Policy = -1073741801;
      goto LABEL_135;
    }
    *(_QWORD *)(v62 + 24) = v63;
    memmove(v63, v9, v52);
LABEL_130:
    if ( !v58 )
    {
      *(_DWORD *)(v62 + 32) = 0;
      *(_QWORD *)(v62 + 40) = 0LL;
      goto LABEL_134;
    }
    *(_DWORD *)(v62 + 32) = v56;
    if ( !(_DWORD)v56 )
    {
      Policy = -1073741762;
      goto LABEL_135;
    }
    v64 = (void *)ExAllocatePool2(0x100uLL);
    if ( v64 )
    {
      *(_QWORD *)(v62 + 40) = v64;
      memmove(v64, v58, v56);
LABEL_134:
      v9 = (_DWORD *)v62;
      v340 = (_DWORD *)v62;
      goto LABEL_142;
    }
    goto LABEL_561;
  }
  Policy = -1073741762;
LABEL_135:
  v65 = *(void **)(v62 + 8);
  if ( v65 )
  {
    ExFreePoolWithTag(v65, 0);
    *(_QWORD *)(v62 + 8) = 0LL;
  }
  v66 = *(void **)(v62 + 24);
  if ( v66 )
  {
    ExFreePoolWithTag(v66, 0);
    *(_QWORD *)(v62 + 24) = 0LL;
  }
  v67 = *(void **)(v62 + 40);
  if ( v67 )
  {
    ExFreePoolWithTag(v67, 0);
    *(_QWORD *)(v62 + 40) = 0LL;
  }
  ExFreePoolWithTag((PVOID)v62, 0);
  v9 = 0LL;
LABEL_142:
  if ( Policy < 0 )
  {
LABEL_152:
    v7 = v338;
LABEL_153:
    v6 = 0LL;
    v8 = v342;
    goto LABEL_53;
  }
  if ( !v49 )
  {
    v7 = v338;
    Policy = SPCallServerHandleQueryPolicy(
               P,
               v9,
               v352,
               v346,
               *(_QWORD *)PreviouslyGrantedAccess,
               Privileges,
               GenericMapping);
    if ( Policy < 0 )
    {
LABEL_585:
      v6 = v343;
      goto LABEL_183;
    }
LABEL_145:
    v68 = v7;
    pullResult = (ULONGLONG)v9;
    v69 = __rdtsc();
    if ( HIDWORD(v346[0]) < 0xFFFFFFF8 )
    {
      v70 = (HIDWORD(v346[0]) + 15) & 0xFFFFFFF8;
      if ( (unsigned int)v70 >= HIDWORD(v346[0]) + 8 )
      {
        if ( !(_DWORD)v70 )
        {
          Policy = -1073741762;
          goto LABEL_152;
        }
        v71 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( !v71 )
        {
LABEL_564:
          Policy = -1073741801;
          goto LABEL_152;
        }
        *v71 = v346[0];
        if ( v71 + 1 < v71 || (v71[1] = HIDWORD(v346[0]), v71 + 2 < v71 + 1) )
        {
          Policy = -1073741675;
          ExFreePoolWithTag(v71, 0);
          goto LABEL_152;
        }
        *(_QWORD *)((char *)v71 + v70 - 8) = v69;
        memmove(v71 + 2, v346[1], HIDWORD(v346[0]));
        v72 = (__int64 *)*((_QWORD *)v9 + 5);
        if ( v72 && (v73 = v9[8]) != 0 && (v74 = *((_QWORD *)v9 + 3), (v349 = v74) != 0) )
        {
          v75 = v9[4];
          v7 = v68;
          if ( v75 )
          {
            v76 = (unsigned int)v70;
            v6 = v71;
            v359 = v76;
            if ( v73 == 8 && v75 == 160 )
            {
              v77 = *v72;
              LOBYTE(v75) = 0;
              v352 = v75;
              v78 = 0LL;
              v343 = (unsigned __int8 *)v71;
              v341 = v9;
              v339 = v68;
              if ( v76 < 0x20 )
                goto LABEL_684;
              v343 = (unsigned __int8 *)v71;
              v341 = v9;
              v79 = 0LL;
              v339 = v68;
              v80 = 0LL;
              do
              {
                v79 = _mm_xor_ps(v79, (__m128)_mm_loadu_si128((const __m128i *)((char *)v71 + v78)));
                v81 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v71 + v78 + 16));
                v78 += 32LL;
                v82 = _mm_xor_ps(v81, v80);
                v80 = v82;
              }
              while ( v78 < (v76 & 0xFFFFFFE0) );
              v83 = _mm_xor_ps(v79, v82);
              v84 = _mm_xor_ps(v83, (__m128)_mm_srli_si128((__m128i)v83, 8));
              v85 = _mm_xor_ps(v84, (__m128)_mm_srli_si128((__m128i)v84, 4));
              v86 = _mm_xor_ps(v85, (__m128)_mm_srli_si128((__m128i)v85, 2));
              v75 = _mm_cvtsi128_si32((__m128i)_mm_xor_ps(v86, (__m128)_mm_srli_si128((__m128i)v86, 1)));
              v352 = v75;
              if ( v78 < v76 )
              {
LABEL_684:
                do
                  LOBYTE(v75) = *((_BYTE *)v71 + v78++) ^ v75;
                while ( v78 < v76 );
                v352 = v75;
              }
              v367 = (_BYTE *)(v74 + 128);
              v87 = (void *)ExAllocatePool2(0x100uLL);
              v366 = v87;
              if ( v87 )
              {
                v88 = v343;
                v385 = v77;
                v89 = (unsigned __int8 *)v87;
                v90 = 0;
                v364 = (unsigned __int8 *)v87;
                v353 = (unsigned __int8 *)(v359 & 7);
                uAugend = 0;
                v347 = 0;
                if ( (v359 & 7) != 0 )
                {
                  uAugend = 0;
                  v142 = 0;
                  v347 = 0;
                  v143 = 0;
                  v144 = 0;
                  v145 = 56;
                  do
                  {
                    v146 = *v88++;
                    if ( (unsigned int)v144 >= 4 )
                      v142 |= v146 << v145;
                    else
                      v143 |= v146 << (v145 - 32);
                    ++v144;
                    v145 -= 8;
                  }
                  while ( v144 < (unsigned __int8)(v359 & 7) );
                  v347 = v143;
                  uAugend = v142;
                  v341 = v9;
                  v147 = 16LL;
                  v148 = v349 + 126;
                  v358 = (PVOID)16;
                  v149 = (_BYTE *)(v74 + 158);
                  v150 = -1;
                  v151 = 30LL;
                  do
                  {
                    if ( v149[1] < 0x1Fu )
                    {
                      v152 = guard_dispatch_icall_no_overrides(v151 + 1, *(unsigned __int8 *)(v148 - 2));
                      v147 = (__int64)v358;
                      v150 ^= v152;
                    }
                    if ( *v149 < 0x1Fu )
                    {
                      v153 = guard_dispatch_icall_no_overrides(v151, *(unsigned __int8 *)(v148 - 6));
                      v147 = (__int64)v358;
                      v90 ^= v153;
                    }
                    v151 -= 2LL;
                    v149 -= 2;
                    v148 -= 8LL;
                    v358 = (PVOID)--v147;
                  }
                  while ( v147 );
                  v90 ^= v347;
                  v154 = uAugend ^ v150;
                  v155 = (unsigned int)v353;
                  v156 = v90;
                  v89 = v364;
                  v157 = v154;
                  v158 = 0;
                  v74 = v349;
                  v350 = v154;
                  if ( (_DWORD)v353 )
                  {
                    do
                    {
                      if ( v158 >= 4 )
                      {
                        v157 = __ROR4__(v157, 24);
                        v159 = v157;
                      }
                      else
                      {
                        v156 = __ROR4__(v156, 24);
                        v159 = v156;
                      }
                      ++v158;
                      *v89++ = v159;
                    }
                    while ( (int)v158 < (int)v155 );
                    v154 = v350;
                  }
                  if ( v155 <= 4 )
                  {
                    v350 = 0;
                    if ( v155 < 4 )
                      v90 = v90 >> (8 * (4 - v155)) << (8 * (4 - v155));
                  }
                  else
                  {
                    v350 = v154 >> (8 * (8 - v155)) << (8 * (8 - v155));
                  }
                }
                v91 = v359;
                Src = (void *)(v359 >> 3);
                if ( v359 >> 3 )
                {
                  v92 = v74 + 2;
                  v364 = (unsigned __int8 *)(v74 + 2);
                  v93 = v88 + 2;
                  v349 = (ULONGLONG)(v89 + 7);
                  do
                  {
                    v94 = 0LL;
                    v95 = v92;
                    v96 = 16LL;
                    v97 = v367;
                    v98 = v93[3] | (v93[2] << 8);
                    LODWORD(v357) = v93[1] | ((*v93 | ((*(v93 - 1) | (*(v93 - 2) << 8)) << 8)) << 8);
                    v99 = (unsigned int)v357 ^ v90;
                    v100 = v93[5] | ((v93[4] | (v98 << 8)) << 8);
                    v101 = v100 ^ v350;
                    v356 = v100;
                    v353 = v93 + 8;
                    do
                    {
                      if ( *v97 < 0x1Fu )
                        v99 ^= guard_dispatch_icall_no_overrides(v94, *(unsigned __int8 *)(v95 - 2));
                      if ( v97[1] < 0x1Fu )
                        v101 ^= guard_dispatch_icall_no_overrides(v94 + 1, *(unsigned __int8 *)(v95 + 2));
                      v94 += 2LL;
                      v97 += 2;
                      v95 += 8LL;
                      --v96;
                    }
                    while ( v96 );
                    v102 = v99 ^ (HIWORD(v385) * ((unsigned __int16)v385 + __ROR4__(~v101, 5)));
                    v103 = v101 ^ (v102 >> 10) ^ (WORD1(v385) * (v102 ^ HIWORD(v385)));
                    v104 = v102 ^ __ROR4__(v103, 10) ^ (WORD2(v385) * __ROR4__(v385 ^ v103, 12));
                    v105 = v103 ^ (HIWORD(v385) * __ROR4__(v104 - v385, 14) - __ROR4__(v104, 24));
                    v106 = v104 ^ (__ROR4__(v105, 30) + (unsigned __int16)v385 * __ROR4__(v105 + HIDWORD(v385), 15));
                    v107 = v105 ^ (WORD1(v385) * (v106 ^ WORD2(v385))) ^ __ROR4__(v106, 6);
                    v108 = v106 ^ (HIDWORD(v385) - (v385 ^ v107));
                    v109 = v107 ^ (HIWORD(v385) * __ROR4__(v108 ^ WORD1(v385), 26) - __ROR4__(v108, 30));
                    v110 = v108 ^ ((unsigned __int16)v385 * (v109 - WORD2(v385)) - (v109 >> 13));
                    v111 = v109 ^ (WORD1(v385) * __ROR4__(v110 + HIDWORD(v385), 9) - __ROR4__(v110, 30));
                    v112 = __ROR4__(v111, 22) + WORD2(v385) * __ROR4__(v111 - v385, 27);
                    v93 = v353;
                    v90 = v347 ^ v110 ^ v112;
                    v113 = v111 ^ uAugend ^ v110 ^ v112;
                    v114 = (_BYTE *)v349;
                    v115 = v385 ^ HIDWORD(v385) ^ v113;
                    uAugend = v356;
                    v350 = v115;
                    *(_BYTE *)(v349 - 4) = v90;
                    *v114 = v115;
                    *(v114 - 5) = __ROR4__(v90, 8);
                    *(v114 - 1) = __ROR4__(v115, 8);
                    *(v114 - 6) = __ROR4__(v90, 16);
                    *(v114 - 2) = __ROR4__(v115, 16);
                    *(v114 - 7) = __ROR4__(v90, 24);
                    v116 = v115;
                    v117 = (int)v357;
                    *(v114 - 3) = __ROR4__(v116, 24);
                    v118 = Src == (void *)1;
                    Src = (char *)Src - 1;
                    v349 = (ULONGLONG)(v114 + 8);
                    v92 = (ULONGLONG)v364;
                    v347 = v117;
                  }
                  while ( !v118 );
                  v91 = v359;
                }
                v119 = v366;
                v120 = v91 + 8;
                Policy = 0;
                *(_QWORD *)((char *)v366 + v91) = (unsigned __int8)v352;
                if ( (_DWORD)v91 == -8 )
                {
                  v9 = v341;
                  Policy = -1073741762;
                }
                else
                {
                  v121 = (void *)ExAllocatePool2(0x100uLL);
                  v122 = v121;
                  if ( v121 )
                  {
                    memmove(v121, v119, v120);
                    v9 = v341;
                    *((_QWORD *)v341 + 1) = v122;
                    *v341 = v120;
                  }
                  else
                  {
                    v9 = v341;
                    Policy = -1073741801;
                  }
                }
                v6 = v343;
                v7 = v339;
                ExFreePoolWithTag(v119, 0);
                if ( Policy < 0 )
                  goto LABEL_183;
                v123 = pullResult;
                v124 = *(_DWORD *)(pullResult + 32);
                if ( *v9 >= 0xFFFFFFFC
                  || (v125 = *v9 + 8, v125 < *v9 + 4)
                  || (v126 = v125 + *(_DWORD *)(pullResult + 16), v126 < v125)
                  || (v127 = v126 + 4, v126 + 4 < v126)
                  || (v128 = v127 + v124, v127 + v124 < v127) )
                {
                  v8 = v342;
                  Policy = -1073741675;
                  goto LABEL_53;
                }
                if ( v128 )
                {
                  v129 = (_DWORD *)ExAllocatePool2(0x100uLL);
                  if ( v129 )
                  {
                    v130 = v129 + 1;
                    *v129 = *v9;
                    if ( v129 + 1 < v129 )
                      goto LABEL_198;
                    memmove(v129 + 1, *((const void **)v9 + 1), (unsigned int)*v9);
                    v131 = (_DWORD *)((char *)v130 + (unsigned int)*v9);
                    if ( v131 < v130
                      || (v132 = v131 + 1, *v131 = *(_DWORD *)(v123 + 16), v131 + 1 < v131)
                      || (memmove(v131 + 1, *(const void **)(v123 + 24), *(unsigned int *)(v123 + 16)),
                          v133 = (_DWORD *)((char *)v132 + *(unsigned int *)(v123 + 16)),
                          v133 < v132)
                      || (v134 = v133 + 1, *v133 = *(_DWORD *)(v123 + 32), v133 + 1 < v133)
                      || (memmove(v133 + 1, *(const void **)(v123 + 40), *(unsigned int *)(v123 + 32)),
                          (_DWORD *)((char *)v134 + *(unsigned int *)(v123 + 32)) < v134) )
                    {
LABEL_198:
                      Policy = -1073741675;
                      ExFreePoolWithTag(v129, 0);
                      v6 = v343;
                      v8 = v342;
                    }
                    else
                    {
                      Policy = 0;
                      v8 = v342;
                      *v376 = v129;
                      v6 = v343;
                      *v377 = v128;
                    }
                    goto LABEL_53;
                  }
                  Policy = -1073741801;
                  goto LABEL_585;
                }
                Policy = -1073741762;
LABEL_183:
                v8 = v342;
                goto LABEL_53;
              }
              v6 = v343;
            }
            Policy = -1073741823;
            goto LABEL_183;
          }
        }
        else
        {
          v7 = v68;
        }
        v6 = v71;
        Policy = -1073741811;
        goto LABEL_183;
      }
    }
LABEL_154:
    v6 = 0LL;
    Policy = -1073741675;
    v7 = v338;
    v8 = v342;
    goto LABEL_53;
  }
  switch ( v49 )
  {
    case 1:
      v372 = 0;
      v360 = 0;
      OtherOperationCount = ExpPlatformBinaryLock.OtherOperationCount;
      memset(v378, 0, sizeof(v378));
      v379 = 0LL;
      memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
      v166 = RtlLengthSid(*(PSID *)(ExpPlatformBinaryLock.OtherOperationCount + 384));
      v167 = RtlLengthSid(*(PSID *)(OtherOperationCount + 272)) + v166;
      v168 = RtlLengthSid(*(PSID *)(OtherOperationCount + 392)) + 32 + v167;
      v169 = (ACL *)ExAllocatePool2(0x100uLL);
      v170 = (char *)v169;
      if ( !v169 )
        goto LABEL_564;
      Policy = RtlCreateAcl(v169, v168, 2u);
      if ( Policy < 0 )
        goto LABEL_287;
      Policy = RtlpAddKnownAce(v170, 2u, 0, 32, *(unsigned __int8 **)(OtherOperationCount + 384), 0);
      if ( Policy < 0 )
        goto LABEL_287;
      Policy = RtlpAddKnownAce(v170, 2u, 0, 32, *(unsigned __int8 **)(OtherOperationCount + 392), 0);
      if ( Policy < 0 )
        goto LABEL_287;
      Policy = RtlpAddKnownAce(v170, 2u, 0, 32, *(unsigned __int8 **)(OtherOperationCount + 272), 0);
      if ( Policy < 0 )
        goto LABEL_287;
      LOBYTE(v378[0]) = 1;
      if ( SWORD1(v378[0]) < 0 )
      {
        ExFreePoolWithTag(v170, 0);
        v7 = v338;
        Policy = -1073741703;
        v6 = 0LL;
        v8 = v342;
        goto LABEL_53;
      }
      v379 = v170;
      WORD1(v378[0]) = WORD1(v378[0]) & 0xFFF3 | 4;
      Policy = 0;
      SeCaptureSubjectContext(&SubjectSecurityContext);
      v171 = SeAccessCheck(
               v378,
               &SubjectSecurityContext,
               0,
               0x20u,
               0,
               0LL,
               (PGENERIC_MAPPING)&IopFileMapping,
               1,
               &v372,
               &v360);
      SeReleaseSubjectContext(&SubjectSecurityContext);
      if ( !v171 )
        Policy = v360;
LABEL_287:
      ExFreePoolWithTag(v170, 0);
      if ( Policy < 0 )
        goto LABEL_152;
      v371 = 0;
      v373 = 8LL;
      ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v373, 8u, &v371);
      if ( *(_DWORD *)(pullResult + 16) != 160
        || ((v172 = *(const void **)(pullResult + 24), memcmp(qword_140BE4A90, v172, 0xA0uLL))
         || v9[4] != 160
         || memcmp(qword_140BE4EF0, *((const void **)v9 + 3), 0xA0uLL)
         || *(_DWORD *)(pullResult + 32) != 8
         || **(_QWORD **)(pullResult + 40) != 0xA564595855B292C4uLL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0x1B732BD76B4D09FCLL)
        && (memcmp(qword_140BE4DB0, v172, 0xA0uLL)
         || v9[4] != 160
         || memcmp(qword_140BE48B0, *((const void **)v9 + 3), 0xA0uLL)
         || *(_DWORD *)(pullResult + 32) != 8
         || **(_QWORD **)(pullResult + 40) != 0x93278D843BBDC445uLL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0x6223E824AB21D998LL) )
      {
        v7 = v338;
        Policy = -2147024891;
        v6 = 0LL;
        v8 = v342;
        goto LABEL_53;
      }
      Policy = 0;
      if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x70000) == 0 )
        Policy = -2147024891;
      if ( Policy < 0 )
        goto LABEL_152;
      v7 = v338;
      Policy = SPCallServerHandleUpdatePolicies(
                 P,
                 v9,
                 v352,
                 v346,
                 *(_QWORD *)PreviouslyGrantedAccess,
                 Privileges,
                 GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 2:
      v7 = v338;
      Policy = sub_140B55F70(v60, v9, v352, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 4:
      v7 = v338;
      Policy = SPCallServerHandleCallbackPaintComplete(
                 P,
                 v9,
                 v61,
                 v346,
                 *(_QWORD *)PreviouslyGrantedAccess,
                 Privileges,
                 GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 5:
      v7 = v338;
      Policy = SPCallServerHandleWaitForDisplayWindow(
                 P,
                 v9,
                 v61,
                 v346,
                 *(_QWORD *)PreviouslyGrantedAccess,
                 Privileges,
                 GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 6:
      v7 = v338;
      Policy = sub_14077B28C((__int64)P, (__int64)v9, v61, (__int64)v346);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 7:
      v7 = v338;
      Policy = sub_14077AFD8((__int64)P, (__int64)v9, v61, (__int64)v346);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 22:
      v7 = v338;
      Policy = sub_140A22C00((__int64)P, (void *)0x140000000LL, v61, (__int64)v346);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 23:
      GrantedAccess = 0;
      AccessStatus = 0;
      v135 = ExpPlatformBinaryLock.OtherOperationCount;
      memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
      v381 = 0LL;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      v136 = RtlLengthSid(*(PSID *)(ExpPlatformBinaryLock.OtherOperationCount + 392));
      v137 = RtlLengthSid(*(PSID *)(v135 + 384)) + v136;
      v138 = RtlLengthSid(*(PSID *)(v135 + 272)) + 32 + v137;
      v139 = (ACL *)ExAllocatePool2(0x100uLL);
      v140 = (char *)v139;
      if ( !v139 )
        goto LABEL_564;
      Policy = RtlCreateAcl(v139, v138, 2u);
      if ( Policy < 0 )
        goto LABEL_235;
      Policy = RtlpAddKnownAce(v140, 2u, 0, 32, *(unsigned __int8 **)(v135 + 384), 0);
      if ( Policy < 0 )
        goto LABEL_235;
      Policy = RtlpAddKnownAce(v140, 2u, 0, 32, *(unsigned __int8 **)(v135 + 392), 0);
      if ( Policy < 0 )
        goto LABEL_235;
      Policy = RtlpAddKnownAce(v140, 2u, 0, 32, *(unsigned __int8 **)(v135 + 272), 0);
      if ( Policy < 0 )
        goto LABEL_235;
      LOBYTE(SecurityDescriptor[0]) = 1;
      if ( SWORD1(SecurityDescriptor[0]) < 0 )
      {
        ExFreePoolWithTag(v140, 0);
        Policy = -1073741703;
        goto LABEL_152;
      }
      v381 = v140;
      WORD1(SecurityDescriptor[0]) = WORD1(SecurityDescriptor[0]) & 0xFFF3 | 4;
      Policy = 0;
      SeCaptureSubjectContext(&SubjectContext);
      v141 = SeAccessCheck(
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
      if ( !v141 )
        Policy = AccessStatus;
LABEL_235:
      ExFreePoolWithTag(v140, 0);
      if ( Policy < 0 )
        goto LABEL_152;
      ReturnLength = 0;
      SystemInformation = 8LL;
      ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
      if ( *(_DWORD *)(pullResult + 16) != 160
        || ((v160 = *(const void **)(pullResult + 24), memcmp(qword_140BE4630, v160, 0xA0uLL))
         || v9[4] != 160
         || memcmp(qword_140BE4590, *((const void **)v9 + 3), 0xA0uLL)
         || *(_DWORD *)(pullResult + 32) != 8
         || **(_QWORD **)(pullResult + 40) != 0x35DCEB18766AABAALL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0x14CEA8BAE086077CLL)
        && (memcmp(qword_140BE4C70, v160, 0xA0uLL)
         || v9[4] != 160
         || memcmp(qword_140BE50D0, *((const void **)v9 + 3), 0xA0uLL)
         || *(_DWORD *)(pullResult + 32) != 8
         || **(_QWORD **)(pullResult + 40) != 0xF10D668DB2BB8BB9uLL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0x768DFD321621EA95LL)
        && ((v161 = *(const void **)(pullResult + 24), memcmp(qword_140BE5030, v161, 0xA0uLL))
         || v9[4] != 160
         || memcmp(sub_140BE4950, *((const void **)v9 + 3), 0xA0uLL)
         || *(_DWORD *)(pullResult + 32) != 8
         || **(_QWORD **)(pullResult + 40) != 0xA10B922F1A2F2A8AuLL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0xC349B50B0A716A96uLL)
        && (memcmp(qword_140BE4770, v161, 0xA0uLL)
         || v9[4] != 160
         || memcmp(qword_140BE4D10, *((const void **)v9 + 3), 0xA0uLL)
         || *(_DWORD *)(pullResult + 32) != 8
         || **(_QWORD **)(pullResult + 40) != 0xA6723CF736811074uLL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0x7511056E178DA076LL) )
      {
        Policy = -2147024891;
        goto LABEL_152;
      }
      v362 = 0;
      Policy = 0;
      updated = QueryUpdateFileEaAllowedExt(&v362);
      if ( updated == -1073741637 || (Policy = updated, updated >= 0) && v362 != 1 )
      {
        if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x70000) == 0 )
          Policy = -2147024891;
      }
      if ( Policy < 0 )
        goto LABEL_152;
      v7 = v338;
      Policy = sub_140A231CC((__int64)P, v163, v164, (__int64)v346);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 24:
      v7 = v338;
      Policy = sub_140A23D94((__int64)P, 0x140000000LL, v61, (__int64)v346);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 100:
      v7 = v338;
      Policy = SPCallServerHandleUpdateLicense(
                 P,
                 v9,
                 v61,
                 v346,
                 *(_QWORD *)PreviouslyGrantedAccess,
                 Privileges,
                 GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 101:
      v7 = v338;
      Policy = sub_14077A08C((__int64)P, (__int64)v9, v61, (__int64)v346);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 102:
      v6 = 0LL;
      Policy = -1073741822;
      v7 = v338;
      v8 = v342;
      goto LABEL_53;
    case 103:
      v7 = v338;
      Policy = sub_140B64EB4(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 104:
      v7 = v338;
      Policy = sub_140B6BD78(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 105:
      if ( !P[1] )
      {
        v6 = 0LL;
        Policy = -1073741811;
        v7 = v338;
        v8 = v342;
        goto LABEL_53;
      }
      if ( LODWORD(P[0]) <= 3 )
      {
        v6 = 0LL;
        Policy = -1073741811;
        v7 = v338;
        v8 = v342;
        goto LABEL_53;
      }
      v175 = (unsigned int *)P[1];
      v176 = 0;
      while ( 2 )
      {
        v177 = *v175;
        v178 = v175 + 1;
        if ( v176 < 3 )
        {
          if ( v178 >= v175 )
          {
            v175 = (unsigned int *)((char *)v178 + v177);
            if ( (unsigned int *)((char *)v178 + v177) >= v178 )
            {
              ++v176;
              continue;
            }
          }
          goto LABEL_154;
        }
        break;
      }
      if ( v178 < v175 )
        goto LABEL_154;
      v183 = 0LL;
      if ( (_DWORD)v177 )
        v183 = v178;
      if ( (_DWORD)v177 != 8 )
      {
        v6 = 0LL;
        Policy = -1073741789;
        v7 = v338;
        v8 = v342;
        goto LABEL_53;
      }
      v184 = *(_QWORD *)v183;
      if ( LODWORD(P[0]) <= 4 )
      {
        v9 = v340;
        Policy = -1073741811;
        goto LABEL_152;
      }
      v273 = P[1];
      v274 = 0;
      v275 = v340;
      v276 = v338;
      pullResult = (ULONGLONG)P[1];
      while ( 1 )
      {
        v277 = v276;
        v278 = v275;
        if ( v274 >= 4 )
          break;
        Policy = RtlULongLongAdd((ULONGLONG)v273, 4uLL, &pullResult);
        if ( Policy < 0 )
          goto LABEL_598;
        Policy = RtlULongLongAdd(pullResult, v279, &pullResult);
        if ( Policy < 0 )
          goto LABEL_598;
        v273 = (PVOID)pullResult;
        v274 = v280 + 1;
        v275 = v340;
      }
      Policy = RtlULongLongAdd((ULONGLONG)v273, 4uLL, &pullResult);
      if ( Policy < 0 )
      {
LABEL_598:
        v9 = v340;
        v7 = v276;
        goto LABEL_153;
      }
      v282 = (_DWORD *)pullResult;
      if ( !v281 )
        v282 = 0LL;
      if ( v281 != 4 )
      {
        Policy = -1073741789;
LABEL_606:
        v9 = v340;
        v7 = v276;
        v8 = v342;
        v6 = 0LL;
        goto LABEL_53;
      }
      if ( *v282 != 4104 )
      {
        Policy = -1073741762;
        goto LABEL_606;
      }
      v284 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v284 )
      {
        v9 = v340;
        Policy = -1073741801;
        v7 = v277;
        goto LABEL_153;
      }
      if ( !ExpPlatformBinaryLock.SavedApcState.ApcListHead[1].Blink )
      {
        Policy = -1073741637;
        goto LABEL_624;
      }
      v285 = guard_dispatch_icall_no_overrides((__int64)v284, v283);
      Policy = v285;
      if ( v285 < 0 )
        goto LABEL_624;
      uAugend = 0;
      puResult = 0;
      Policy = RtlUIntAdd(4u, 4u, &puResult);
      if ( Policy < 0 )
        goto LABEL_624;
      Policy = RtlUIntAdd(0, puResult, &uAugend);
      if ( Policy < 0 )
        goto LABEL_680;
      puResult = v287;
      Policy = RtlUIntAdd(v286, 8u, &puResult);
      if ( Policy < 0 )
        goto LABEL_624;
      Policy = RtlUIntAdd(uAugend, puResult, &uAugend);
      if ( Policy < 0 )
        goto LABEL_680;
      puResult = v289;
      Policy = RtlUIntAdd(v288, 0x1008u, &puResult);
      if ( Policy < 0 )
        goto LABEL_624;
      Policy = RtlUIntAdd(uAugend, puResult, &uAugend);
      if ( Policy < 0 )
        goto LABEL_680;
      puResult = v291;
      Policy = RtlUIntAdd(v290, v290, &puResult);
      if ( Policy < 0 )
        goto LABEL_624;
      Policy = RtlUIntAdd(uAugend, puResult, &uAugend);
      if ( Policy < 0 )
        goto LABEL_680;
      v293 = uAugend;
      v363 = v292;
      Policy = RtlUIntAdd(v292, uAugend, &v363);
      if ( Policy < 0 )
        goto LABEL_631;
      v295 = (v363 + 7) & 0xFFFFFFF8;
      if ( v295 < v363 )
      {
        Policy = -1073741675;
LABEL_624:
        v9 = v340;
        v7 = v277;
        goto LABEL_518;
      }
      uAddend = (v363 + 7) & 0xFFFFFFF8;
      Policy = RtlUIntAdd(v295, v294, &uAddend);
      if ( Policy < 0 )
        goto LABEL_624;
      uAugend = v296;
      Policy = RtlUIntAdd(v296, uAddend, &uAugend);
      if ( Policy >= 0 )
      {
        Policy = RtlUIntAdd(uAugend, v297, &uAugend);
        if ( Policy >= 0 )
        {
          Policy = RtlUIntAdd(uAugend, v340[4], &uAugend);
          if ( Policy >= 0 )
          {
            Policy = RtlUIntAdd(uAugend, v298, &uAugend);
            if ( Policy >= 0 )
              Policy = RtlUIntAdd(uAugend, *(_DWORD *)(v299 + 32), &uAugend);
          }
        }
      }
LABEL_631:
      if ( Policy < 0 )
      {
LABEL_680:
        v7 = v277;
        goto LABEL_681;
      }
      HIDWORD(v346[0]) = v293;
      if ( !v293 )
      {
        Policy = -1073741762;
        goto LABEL_624;
      }
      v300 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v300 )
      {
        Policy = -1073741801;
        goto LABEL_624;
      }
      v346[1] = v300;
      LODWORD(v354) = 0;
      v301 = v285 | 0x10000000;
      v353 = 0LL;
      LODWORD(v346[0]) = 0;
      v302 = v278;
      v338 = v277;
      v7 = v277;
      v349 = (ULONGLONG)v300;
      v340 = v302;
      Policy = RtlULongLongAdd((ULONGLONG)v300, 4uLL, &v354);
      if ( Policy < 0 )
        goto LABEL_681;
      if ( (unsigned __int64)(v303 + 2) > v304 + (unsigned __int64)HIDWORD(v346[0]) )
      {
        Policy = -1073741789;
LABEL_639:
        v9 = v340;
        goto LABEL_518;
      }
      v305 = (_DWORD *)v354;
      *v303 = 4;
      *v305 = v301;
      v306 = (char *)v346[1];
      v307 = LODWORD(v346[0]) + 1;
      LODWORD(v354) = 0;
      ++LODWORD(v346[0]);
      v353 = 0LL;
      if ( !v346[1] )
      {
        puResult = 0;
        Policy = RtlUIntAdd(4u, 8u, &puResult);
        if ( Policy < 0 )
          goto LABEL_639;
        Policy = RtlUIntAdd(HIDWORD(v346[0]), puResult, (UINT *)v346 + 1);
        if ( Policy >= 0 )
        {
          v309 = LODWORD(v346[0]) + 1;
          goto LABEL_653;
        }
LABEL_681:
        v9 = v340;
        goto LABEL_518;
      }
      v310 = (UINT *)v346[1];
      v349 = (ULONGLONG)v346[1];
      v311 = 0;
      while ( v311 < v307 )
      {
        v312 = *v310;
        puResult = 0;
        Policy = RtlUIntAdd(4u, v312, &puResult);
        if ( Policy < 0 )
          goto LABEL_639;
        v338 = v277;
        Policy = RtlULongLongAdd(v313, puResult, &v349);
        if ( Policy < 0 )
          goto LABEL_639;
        v310 = (UINT *)v349;
        v311 = v314 + 1;
        v340 = v302;
      }
      Policy = RtlULongLongAdd((ULONGLONG)v310, 4uLL, &v354);
      if ( Policy < 0 )
        goto LABEL_681;
      if ( v315 + 3 > (_DWORD *)&v306[HIDWORD(v346[0])] )
      {
        v9 = v340;
        Policy = -1073741789;
        goto LABEL_518;
      }
      v316 = (_QWORD *)v354;
      *v315 = 8;
      *v316 = v184;
      v309 = LODWORD(v346[0]) + 1;
      v308 = 0;
LABEL_653:
      v317 = (char *)v346[1];
      LODWORD(v354) = 0;
      v353 = 0LL;
      LODWORD(v346[0]) = v309;
      if ( v346[1] )
      {
        v9 = v340;
        v320 = (UINT *)v346[1];
        v349 = (ULONGLONG)v346[1];
        while ( v308 < v309 )
        {
          v321 = *v320;
          puResult = 0;
          Policy = RtlUIntAdd(4u, v321, &puResult);
          if ( Policy < 0 )
            goto LABEL_518;
          v338 = v277;
          Policy = RtlULongLongAdd(v322, puResult, &v349);
          if ( Policy < 0 )
            goto LABEL_518;
          v320 = (UINT *)v349;
          v308 = v323 + 1;
        }
        Policy = RtlULongLongAdd((ULONGLONG)v320, 4uLL, &v354);
        if ( Policy < 0 )
          goto LABEL_518;
        if ( v324 + 1027 > (_DWORD *)&v317[HIDWORD(v346[0])] )
        {
          Policy = -1073741789;
          goto LABEL_518;
        }
        v325 = (void *)v354;
        *v324 = 4104;
        memmove(v325, v284, 0x1008uLL);
        v319 = LODWORD(v346[0]) + 1;
        v318 = 0;
        goto LABEL_666;
      }
      puResult = v308;
      Policy = RtlUIntAdd(4u, 0x1008u, &puResult);
      if ( Policy < 0 )
        goto LABEL_639;
      v9 = v340;
      Policy = RtlUIntAdd(HIDWORD(v346[0]), puResult, (UINT *)v346 + 1);
      if ( Policy >= 0 )
      {
        v319 = LODWORD(v346[0]) + 1;
LABEL_666:
        v326 = (char *)v346[1];
        LODWORD(v354) = 0;
        v353 = 0LL;
        LODWORD(v346[0]) = v319;
        if ( v346[1] )
        {
          v328 = (UINT *)v346[1];
          v349 = (ULONGLONG)v346[1];
          while ( v318 < v319 )
          {
            v329 = *v328;
            puResult = 0;
            Policy = RtlUIntAdd(4u, v329, &puResult);
            if ( Policy < 0 )
              goto LABEL_518;
            Policy = RtlULongLongAdd(v330, puResult, &v349);
            if ( Policy < 0 )
              goto LABEL_518;
            v328 = (UINT *)v349;
            v318 = v331 + 1;
          }
          Policy = RtlULongLongAdd((ULONGLONG)v328, 4uLL, &v354);
          if ( Policy >= 0 )
          {
            if ( v332 + 2 <= (_DWORD *)&v326[HIDWORD(v346[0])] )
            {
              v333 = (_DWORD *)v354;
              *v332 = 4;
              *v333 = 4104;
              ++LODWORD(v346[0]);
            }
            else
            {
              Policy = -1073741789;
            }
          }
        }
        else
        {
          puResult = v318;
          Policy = RtlUIntAdd(4u, 4u, &puResult);
          if ( Policy >= 0 )
          {
            Policy = RtlUIntAdd(HIDWORD(v346[0]), puResult, (UINT *)v346 + 1);
            if ( Policy >= 0 )
            {
              ++LODWORD(v346[0]);
              Policy = v327;
            }
          }
        }
      }
LABEL_518:
      ExFreePoolWithTag(v284, 0);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
LABEL_53:
      P[0] = 0LL;
      if ( P[1] )
      {
        ExFreePoolWithTag(P[1], 0);
        P[1] = 0LL;
      }
      v346[0] = 0LL;
      if ( v346[1] )
      {
        ExFreePoolWithTag(v346[1], 0);
        v346[1] = 0LL;
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      if ( v7 )
      {
        v33 = (void *)v7[1];
        if ( v33 )
        {
          ExFreePoolWithTag(v33, 0);
          v7[1] = 0LL;
        }
        v34 = (void *)v7[3];
        if ( v34 )
        {
          ExFreePoolWithTag(v34, 0);
          v7[3] = 0LL;
        }
        v35 = (void *)v7[5];
        if ( v35 )
        {
          ExFreePoolWithTag(v35, 0);
          v7[5] = 0LL;
        }
        ExFreePoolWithTag(v7, 0);
      }
      if ( v9 )
      {
        v36 = (void *)*((_QWORD *)v9 + 1);
        if ( v36 )
        {
          ExFreePoolWithTag(v36, 0);
          *((_QWORD *)v9 + 1) = 0LL;
        }
        v37 = (void *)*((_QWORD *)v9 + 3);
        if ( v37 )
        {
          ExFreePoolWithTag(v37, 0);
          *((_QWORD *)v9 + 3) = 0LL;
        }
        v38 = (void *)*((_QWORD *)v9 + 5);
        if ( v38 )
        {
          ExFreePoolWithTag(v38, 0);
          *((_QWORD *)v9 + 5) = 0LL;
        }
        ExFreePoolWithTag(v9, 0);
      }
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      return (unsigned int)Policy;
    case 106:
      v7 = v338;
      Policy = sub_140B638AC(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 107:
      v7 = v338;
      Policy = sub_140508FBC((__int64)P, (__int64)v9, v61, (__int64)v346);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 109:
      v7 = v338;
      Policy = sub_140AB940C(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 110:
      v7 = v338;
      Policy = sub_140B701DC(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 111:
      v7 = v338;
      Policy = sub_1407746AC((__int64)P, (__int64)v9, v61, (__int64)v346);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 112:
      v7 = v338;
      Policy = sub_140B557F0(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 113:
      v7 = v338;
      Policy = sub_140AC3F00(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 204:
      v7 = v338;
      Policy = sub_140B6DDD8(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 205:
      v7 = v338;
      Policy = sub_140AF9D4C(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 206:
      v368 = 0;
      v375 = 8LL;
      Policy = 0;
      ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v375, 8u, &v368);
      if ( *(_DWORD *)(pullResult + 16) != 160
        || ((v174 = *(const void **)(pullResult + 24), memcmp(qword_140BE4810, v174, 0xA0uLL))
         || v9[4] != 160
         || memcmp(qword_140BE4BD0, *((const void **)v9 + 3), 0xA0uLL)
         || *(_DWORD *)(pullResult + 32) != 8
         || **(_QWORD **)(pullResult + 40) != 0x5638EBB72F3355A5LL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0x9F2DD8784FE939B7uLL)
        && (memcmp(qword_140BE4E50, v174, 0xA0uLL)
         || v9[4] != 160
         || memcmp(qword_140BE4F90, *((const void **)v9 + 3), 0xA0uLL)
         || *(_DWORD *)(pullResult + 32) != 8
         || **(_QWORD **)(pullResult + 40) != 0x5638EBB72F3355A5LL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0x9F2DD8784FE939B7uLL)
        && ((v272 = *(const void **)(pullResult + 24), memcmp(qword_140BE4B30, v272, 0xA0uLL))
         || v9[4] != 160
         || memcmp(qword_140BE46D0, *((const void **)v9 + 3), 0xA0uLL)
         || *(_DWORD *)(pullResult + 32) != 8
         || **(_QWORD **)(pullResult + 40) != 0xF10D668DB2BB8BB9uLL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0x768DFD321621EA95LL)
        && (memcmp(qword_140BE44F0, v272, 0xA0uLL)
         || v9[4] != 160
         || memcmp(qword_140BE49F0, *((const void **)v9 + 3), 0xA0uLL)
         || *(_DWORD *)(pullResult + 32) != 8
         || **(_QWORD **)(pullResult + 40) != 0xF10D668DB2BB8BB9uLL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0x768DFD321621EA95LL) )
      {
        Policy = -2147024891;
      }
      if ( Policy < 0 )
        goto LABEL_152;
      v7 = v338;
      Policy = SPCallServerHandleGetCurrentHardwareID((__int64)P, (__int64)v9, v173, (__int64)v346);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 207:
      v7 = v338;
      Policy = sub_140B660C0(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 208:
      v7 = v338;
      Policy = SPCallServerHandleGetAppPolicyValue(
                 P,
                 v9,
                 v61,
                 v346,
                 *(_QWORD *)PreviouslyGrantedAccess,
                 Privileges,
                 GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 209:
      v7 = v338;
      Policy = sub_140B6C938(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 210:
      v7 = v338;
      Policy = sub_140773F50((__int64)P, (__int64)v9, v61, (__int64)v346);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 211:
      v7 = v338;
      Policy = sub_140B70B6C(P, v9, v61, v346, *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      if ( Policy >= 0 )
        goto LABEL_145;
      v6 = 0LL;
      v8 = v342;
      goto LABEL_53;
    case 212:
      if ( !P[1] )
      {
        v6 = 0LL;
        Policy = -1073741811;
        v7 = v338;
        v8 = v342;
        goto LABEL_53;
      }
      if ( LODWORD(P[0]) <= 3 )
      {
        v6 = 0LL;
        Policy = -1073741811;
        v7 = v338;
        v8 = v342;
        goto LABEL_53;
      }
      v179 = (unsigned int *)P[1];
      v180 = 0;
      while ( 2 )
      {
        v181 = *v179;
        v182 = v179 + 1;
        if ( v180 < 3 )
        {
          if ( v182 >= v179 )
          {
            v179 = (unsigned int *)((char *)v182 + v181);
            if ( (unsigned int *)((char *)v182 + v181) >= v182 )
            {
              ++v180;
              continue;
            }
          }
          goto LABEL_154;
        }
        break;
      }
      if ( v182 < v179 )
        goto LABEL_154;
      v185 = 0LL;
      if ( (_DWORD)v181 )
        v185 = v182;
      if ( (_DWORD)v181 != 8 )
      {
        Policy = -1073741789;
        goto LABEL_152;
      }
      v186 = *(_QWORD *)v185;
      v7 = v338;
      if ( LODWORD(P[0]) <= 4 )
      {
        v9 = v340;
        Policy = -1073741811;
        goto LABEL_153;
      }
      v187 = (unsigned int *)P[1];
      for ( j = 0; ; ++j )
      {
        v189 = *v187;
        v190 = v187 + 1;
        if ( j >= 4 )
          break;
        if ( v190 < v187 )
          goto LABEL_360;
        v187 = (unsigned int *)((char *)v190 + v189);
        if ( (unsigned int *)((char *)v190 + v189) < v190 )
          goto LABEL_360;
      }
      if ( v190 < v187 )
      {
LABEL_360:
        v6 = 0LL;
        v9 = v340;
        v8 = v342;
        Policy = -1073741675;
        goto LABEL_53;
      }
      if ( !(_DWORD)v189 )
      {
        Policy = -1073741762;
        v9 = v340;
        goto LABEL_153;
      }
      v191 = v187 + 1;
      v192 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v192 )
      {
        Policy = -1073741801;
        v9 = v340;
        goto LABEL_153;
      }
      memmove(v192, v191, v189);
      if ( (_DWORD)v189 != 4 )
      {
        Policy = -1073741306;
        v9 = v340;
        goto LABEL_153;
      }
      if ( LODWORD(P[0]) <= 5 )
      {
        Policy = -1073741811;
        v9 = v340;
        goto LABEL_153;
      }
      v193 = (unsigned int *)P[1];
      for ( k = 0; ; ++k )
      {
        v195 = *v193;
        v196 = v193 + 1;
        if ( k >= 5 )
          break;
        if ( v196 < v193 )
          goto LABEL_404;
        v7 = v338;
        v193 = (unsigned int *)((char *)v196 + v195);
        if ( (unsigned int *)((char *)v196 + v195) < v196 )
          goto LABEL_360;
      }
      if ( v196 < v193 )
      {
LABEL_404:
        v6 = 0LL;
        v9 = v340;
        v7 = v338;
        v8 = v342;
        Policy = -1073741675;
        goto LABEL_53;
      }
      if ( !(_DWORD)v195 )
      {
        v7 = v338;
        v9 = v340;
        v8 = v342;
        Policy = -1073741762;
        v6 = 0LL;
        goto LABEL_53;
      }
      v197 = v193 + 1;
      v198 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v198 )
      {
        v9 = v340;
        goto LABEL_564;
      }
      memmove(v198, v197, v195);
      if ( (_DWORD)v195 != 8 )
      {
        Policy = -1073741306;
        v9 = v340;
        goto LABEL_153;
      }
      v199 = guard_dispatch_icall_no_overrides(*v191, *v197);
      HIDWORD(v346[0]) = 20;
      v200 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !v200 )
      {
        Policy = -1073741801;
        v9 = v340;
        goto LABEL_153;
      }
      v346[1] = v200;
      v201 = v199 | 0x10000000;
      LODWORD(v346[0]) = 0;
      v338 = v7;
      if ( v200 + 1 < v200 )
      {
        v9 = v340;
        Policy = -1073741675;
        v8 = v342;
        v6 = 0LL;
        goto LABEL_53;
      }
      if ( v200 + 2 > (_DWORD *)((char *)v346[1] + HIDWORD(v346[0])) )
      {
        v9 = v340;
        Policy = -1073741789;
        v8 = v342;
        v6 = 0LL;
        goto LABEL_53;
      }
      *v200 = 4;
      v200[1] = v201;
      v202 = ++LODWORD(v346[0]);
      if ( v346[1] )
      {
        v203 = (char *)v346[1];
        for ( m = 0; m < v202; ++m )
        {
          v205 = *(_DWORD *)v203 + 4;
          if ( *(_DWORD *)v203 >= 0xFFFFFFFC || &v203[v205] < v203 )
            goto LABEL_418;
          v203 += v205;
        }
        if ( v203 + 4 < v203 )
        {
LABEL_418:
          Policy = -1073741675;
          goto LABEL_419;
        }
        Policy = 0;
        if ( v203 + 12 > (char *)v346[1] + HIDWORD(v346[0]) )
        {
          Policy = -1073741789;
        }
        else
        {
          *(_DWORD *)v203 = 8;
          *(_QWORD *)(v203 + 4) = v186;
          ++LODWORD(v346[0]);
        }
      }
      else
      {
        Policy = RtlUIntAdd(HIDWORD(v346[0]), 0xCu, (UINT *)v346 + 1);
        if ( Policy >= 0 )
        {
          ++LODWORD(v346[0]);
          Policy = 0;
        }
      }
LABEL_419:
      v9 = v340;
      if ( Policy < 0 )
      {
        v8 = v342;
        v6 = 0LL;
        goto LABEL_53;
      }
      goto LABEL_145;
    default:
      v7 = v338;
      Policy = sub_140A24318(v60, (int *)v346);
      if ( Policy < 0 )
        goto LABEL_153;
      goto LABEL_145;
  }
}
