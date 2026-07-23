/*
 * XREFs of PopDiagTraceCsExitReason @ 0x140B5BB78
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140529210 (Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall PopDiagTraceCsExitReason(int *a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int v11; // esi
  struct _EVENT_DATA_DESCRIPTOR *Pool2; // rax
  int v13; // ecx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rdi
  bool v15; // zf
  BOOLEAN v16; // al
  int IsEnabledDeviceUsageNoInline; // eax
  char v19; // [rsp+38h] [rbp-D0h] BYREF
  char v20; // [rsp+39h] [rbp-CFh] BYREF
  char v21; // [rsp+3Ah] [rbp-CEh] BYREF
  int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  int v23; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+44h] [rbp-C4h] BYREF
  BOOL v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  int v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  int v31; // [rsp+60h] [rbp-A8h] BYREF
  int v32; // [rsp+64h] [rbp-A4h] BYREF
  int v33; // [rsp+68h] [rbp-A0h] BYREF
  int v34; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v35; // [rsp+70h] [rbp-98h] BYREF
  BOOL v36; // [rsp+74h] [rbp-94h] BYREF
  int v37; // [rsp+78h] [rbp-90h] BYREF
  int v38; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v39; // [rsp+80h] [rbp-88h] BYREF
  BOOL v40; // [rsp+84h] [rbp-84h] BYREF
  int v41; // [rsp+88h] [rbp-80h] BYREF
  int v42; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v43; // [rsp+90h] [rbp-78h] BYREF
  int v44; // [rsp+94h] [rbp-74h] BYREF
  int v45; // [rsp+98h] [rbp-70h] BYREF
  int v46; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v47; // [rsp+A0h] [rbp-68h] BYREF
  int v48; // [rsp+A4h] [rbp-64h] BYREF
  int v49; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-58h] BYREF
  int v51; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-38h] BYREF
  ULONGLONG v55; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-20h] BYREF
  int v58; // [rsp+F0h] [rbp-18h] BYREF
  int v59; // [rsp+F4h] [rbp-14h] BYREF
  int v60; // [rsp+F8h] [rbp-10h] BYREF
  int v61; // [rsp+FCh] [rbp-Ch] BYREF
  __int64 v62; // [rsp+100h] [rbp-8h] BYREF
  __int64 v63; // [rsp+108h] [rbp+0h] BYREF
  __int64 v64; // [rsp+110h] [rbp+8h] BYREF
  __int64 v65; // [rsp+118h] [rbp+10h] BYREF
  __int64 v66; // [rsp+120h] [rbp+18h] BYREF
  ULONGLONG v67; // [rsp+128h] [rbp+20h] BYREF
  __int64 v68; // [rsp+130h] [rbp+28h] BYREF
  __int64 v69; // [rsp+138h] [rbp+30h] BYREF
  __int64 v70; // [rsp+140h] [rbp+38h] BYREF
  __int64 v71; // [rsp+148h] [rbp+40h] BYREF
  __int64 v72; // [rsp+150h] [rbp+48h] BYREF
  __int64 v73; // [rsp+158h] [rbp+50h] BYREF
  __int64 v74; // [rsp+160h] [rbp+58h] BYREF
  __int64 v75; // [rsp+168h] [rbp+60h] BYREF
  __int64 v76; // [rsp+170h] [rbp+68h] BYREF
  __int64 v77; // [rsp+178h] [rbp+70h] BYREF
  __int64 v78; // [rsp+180h] [rbp+78h] BYREF
  __int64 v79; // [rsp+188h] [rbp+80h] BYREF
  __int64 v80; // [rsp+190h] [rbp+88h] BYREF
  ULONGLONG v81; // [rsp+198h] [rbp+90h] BYREF
  __int64 v82; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v83; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v84; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v85; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v86; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v87; // [rsp+1C8h] [rbp+C0h] BYREF
  ULONGLONG v88; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v89; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v90; // [rsp+1E0h] [rbp+D8h] BYREF
  __int64 v91; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v92; // [rsp+1F0h] [rbp+E8h] BYREF
  ULONGLONG v93; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v94[2]; // [rsp+208h] [rbp+100h] BYREF
  __int64 *v95; // [rsp+228h] [rbp+120h]
  __int64 v96; // [rsp+230h] [rbp+128h]
  __int64 *v97; // [rsp+238h] [rbp+130h]
  __int64 v98; // [rsp+240h] [rbp+138h]
  __int64 *v99; // [rsp+248h] [rbp+140h]
  __int64 v100; // [rsp+250h] [rbp+148h]
  __int64 *v101; // [rsp+258h] [rbp+150h]
  __int64 v102; // [rsp+260h] [rbp+158h]
  __int64 *v103; // [rsp+268h] [rbp+160h]
  __int64 v104; // [rsp+270h] [rbp+168h]
  ULONGLONG *v105; // [rsp+278h] [rbp+170h]
  __int64 v106; // [rsp+280h] [rbp+178h]
  __int64 *v107; // [rsp+288h] [rbp+180h]
  __int64 v108; // [rsp+290h] [rbp+188h]
  __int64 *v109; // [rsp+298h] [rbp+190h]
  __int64 v110; // [rsp+2A0h] [rbp+198h]
  __int64 *v111; // [rsp+2A8h] [rbp+1A0h]
  __int64 v112; // [rsp+2B0h] [rbp+1A8h]
  BOOL *v113; // [rsp+2B8h] [rbp+1B0h]
  __int64 v114; // [rsp+2C0h] [rbp+1B8h]
  int *v115; // [rsp+2C8h] [rbp+1C0h]
  __int64 v116; // [rsp+2D0h] [rbp+1C8h]
  ULONGLONG *v117; // [rsp+2D8h] [rbp+1D0h]
  __int64 v118; // [rsp+2E0h] [rbp+1D8h]
  __int64 *v119; // [rsp+2E8h] [rbp+1E0h]
  __int64 v120; // [rsp+2F0h] [rbp+1E8h]
  int *v121; // [rsp+2F8h] [rbp+1F0h]
  __int64 v122; // [rsp+300h] [rbp+1F8h]
  __int64 *v123; // [rsp+308h] [rbp+200h]
  __int64 v124; // [rsp+310h] [rbp+208h]
  __int64 *v125; // [rsp+318h] [rbp+210h]
  __int64 v126; // [rsp+320h] [rbp+218h]
  BOOL *v127; // [rsp+328h] [rbp+220h]
  __int64 v128; // [rsp+330h] [rbp+228h]
  int *v129; // [rsp+338h] [rbp+230h]
  __int64 v130; // [rsp+340h] [rbp+238h]
  __int64 *v131; // [rsp+348h] [rbp+240h]
  __int64 v132; // [rsp+350h] [rbp+248h]
  __int64 *v133; // [rsp+358h] [rbp+250h]
  __int64 v134; // [rsp+360h] [rbp+258h]
  int *v135; // [rsp+368h] [rbp+260h]
  __int64 v136; // [rsp+370h] [rbp+268h]
  int *v137; // [rsp+378h] [rbp+270h]
  __int64 v138; // [rsp+380h] [rbp+278h]
  int *v139; // [rsp+388h] [rbp+280h]
  __int64 v140; // [rsp+390h] [rbp+288h]
  int *v141; // [rsp+398h] [rbp+290h]
  __int64 v142; // [rsp+3A0h] [rbp+298h]
  BOOL *v143; // [rsp+3A8h] [rbp+2A0h]
  __int64 v144; // [rsp+3B0h] [rbp+2A8h]
  __int64 *v145; // [rsp+3B8h] [rbp+2B0h]
  __int64 v146; // [rsp+3C0h] [rbp+2B8h]
  ULONGLONG *v147; // [rsp+3C8h] [rbp+2C0h]
  __int64 v148; // [rsp+3D0h] [rbp+2C8h]
  __int64 *v149; // [rsp+3D8h] [rbp+2D0h]
  __int64 v150; // [rsp+3E0h] [rbp+2D8h]
  int *v151; // [rsp+3E8h] [rbp+2E0h]
  __int64 v152; // [rsp+3F0h] [rbp+2E8h]
  int *v153; // [rsp+3F8h] [rbp+2F0h]
  __int64 v154; // [rsp+400h] [rbp+2F8h]
  int *v155; // [rsp+408h] [rbp+300h]
  __int64 v156; // [rsp+410h] [rbp+308h]
  BOOL *v157; // [rsp+418h] [rbp+310h]
  __int64 v158; // [rsp+420h] [rbp+318h]
  __int64 *v159; // [rsp+428h] [rbp+320h]
  __int64 v160; // [rsp+430h] [rbp+328h]
  ULONGLONG *v161; // [rsp+438h] [rbp+330h]
  __int64 v162; // [rsp+440h] [rbp+338h]
  __int64 *v163; // [rsp+448h] [rbp+340h]
  __int64 v164; // [rsp+450h] [rbp+348h]
  __int64 *v165; // [rsp+458h] [rbp+350h]
  __int64 v166; // [rsp+460h] [rbp+358h]
  __int64 *v167; // [rsp+468h] [rbp+360h]
  __int64 v168; // [rsp+470h] [rbp+368h]
  __int64 *v169; // [rsp+478h] [rbp+370h]
  __int64 v170; // [rsp+480h] [rbp+378h]
  int *v171; // [rsp+488h] [rbp+380h]
  __int64 v172; // [rsp+490h] [rbp+388h]
  __int64 *v173; // [rsp+498h] [rbp+390h]
  __int64 v174; // [rsp+4A0h] [rbp+398h]
  char *v175; // [rsp+4A8h] [rbp+3A0h]
  __int64 v176; // [rsp+4B0h] [rbp+3A8h]
  __int64 v177; // [rsp+500h] [rbp+3F8h] BYREF

  v177 = a2;
  v23 = *a1;
  v3 = 0LL;
  v56 = *((_QWORD *)a1 + 4);
  v4 = 0LL;
  v5 = 0;
  v55 = *((_QWORD *)a1 + 5);
  v6 = 0LL;
  v57 = *((_QWORD *)a1 + 6);
  v24 = a1[14];
  v54 = *((_QWORD *)a1 + 8);
  v53 = *((_QWORD *)a1 + 9);
  v52 = *((_QWORD *)a1 + 11);
  v62 = *((_QWORD *)a1 + 12);
  v65 = *((_QWORD *)a1 + 13);
  v66 = *((_QWORD *)a1 + 10);
  v7 = *((_QWORD *)a1 + 18);
  v8 = *((_BYTE *)a1 + 136);
  v63 = v7;
  v19 = v8 >> 1;
  v26 = a1[32];
  v64 = *((_QWORD *)a1 + 21);
  v27 = v8 & 1;
  v9 = *((unsigned __int8 *)a1 + 137);
  LOBYTE(v7) = *((_BYTE *)a1 + 137);
  v50 = 0LL;
  v29 = v7 & 1;
  v68 = *((_QWORD *)a1 + 31);
  v67 = *((_QWORD *)a1 + 32);
  v69 = *((_QWORD *)a1 + 33);
  v70 = *((_QWORD *)a1 + 34);
  v71 = *((_QWORD *)a1 + 35);
  v58 = a1[50];
  v59 = a1[51];
  v31 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v30 = (unsigned __int8)PopLidOpened;
  v60 = *((unsigned __int8 *)a1 + 208);
  v32 = a1[53];
  v33 = a1[54];
  v34 = a1[60];
  v35 = a1[86];
  v51 = 0;
  v22 = 0;
  v28 = (v9 >> 1) & 1;
  if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = *((_QWORD *)a1 + 57);
    v4 = *((_QWORD *)a1 + 58);
    v5 = a1[122];
    v6 = *((_QWORD *)a1 + 59);
    v22 = a1[112];
    v50 = *((_QWORD *)a1 + 60);
  }
  if ( v56 )
  {
    v10 = v52;
  }
  else
  {
    v10 = 0LL;
    v57 = 0LL;
    v52 = 0LL;
    v55 = 0LL;
    v54 = 0LL;
    v53 = 0LL;
  }
  v25 = v10 != 0;
  v11 = 0;
  Pool2 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePool2(0x100uLL);
  LOBYTE(v13) = 0;
  UserData = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)&Pool2->Size = 4LL;
    Pool2->Ptr = (ULONGLONG)&v23;
    Pool2[1].Ptr = (ULONGLONG)&v57;
    *(_QWORD *)&Pool2[1].Size = 8LL;
    Pool2[2].Ptr = (ULONGLONG)&v53;
    *(_QWORD *)&Pool2[2].Size = 8LL;
    Pool2[3].Ptr = (ULONGLONG)&v54;
    *(_QWORD *)&Pool2[3].Size = 8LL;
    Pool2[4].Ptr = (ULONGLONG)&v55;
    *(_QWORD *)&Pool2[4].Size = 8LL;
    Pool2[5].Ptr = (ULONGLONG)&v56;
    *(_QWORD *)&Pool2[5].Size = 8LL;
    Pool2[6].Ptr = (ULONGLONG)&v24;
    *(_QWORD *)&Pool2[6].Size = 4LL;
    Pool2[7].Ptr = (ULONGLONG)&v19;
    *(_QWORD *)&Pool2[7].Size = 1LL;
    Pool2[8].Ptr = (ULONGLONG)&v25;
    *(_QWORD *)&Pool2[8].Size = 4LL;
    Pool2[9].Ptr = (ULONGLONG)&v26;
    *(_QWORD *)&Pool2[9].Size = 4LL;
    Pool2[10].Ptr = (ULONGLONG)&v52;
    *(_QWORD *)&Pool2[10].Size = 8LL;
    Pool2[11].Ptr = (ULONGLONG)&v62;
    *(_QWORD *)&Pool2[11].Size = 8LL;
    Pool2[12].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&Pool2[12].Size = 4LL;
    Pool2[13].Ptr = (ULONGLONG)&v63;
    *(_QWORD *)&Pool2[13].Size = 8LL;
    Pool2[14].Ptr = (ULONGLONG)&v64;
    *(_QWORD *)&Pool2[14].Size = 8LL;
    Pool2[15].Ptr = (ULONGLONG)&v28;
    *(_QWORD *)&Pool2[15].Size = 4LL;
    Pool2[16].Ptr = (ULONGLONG)&v29;
    *(_QWORD *)&Pool2[16].Size = 4LL;
    Pool2[17].Ptr = (ULONGLONG)&v65;
    *(_QWORD *)&Pool2[17].Size = 8LL;
    Pool2[18].Ptr = (ULONGLONG)&v58;
    *(_QWORD *)&Pool2[18].Size = 4LL;
    Pool2[19].Ptr = (ULONGLONG)&v59;
    *(_QWORD *)&Pool2[19].Size = 4LL;
    Pool2[20].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&Pool2[20].Size = 4LL;
    Pool2[21].Ptr = (ULONGLONG)&v31;
    *(_QWORD *)&Pool2[21].Size = 4LL;
    Pool2[22].Ptr = (ULONGLONG)&v177;
    *(_QWORD *)&Pool2[22].Size = 1LL;
    Pool2[23].Ptr = (ULONGLONG)&v60;
    *(_QWORD *)&Pool2[23].Size = 4LL;
    Pool2[24].Ptr = (ULONGLONG)&v32;
    *(_QWORD *)&Pool2[24].Size = 4LL;
    Pool2[25].Ptr = (ULONGLONG)&v33;
    *(_QWORD *)&Pool2[25].Size = 4LL;
    Pool2[26].Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
    *(_QWORD *)&Pool2[26].Size = 8LL;
    *(_QWORD *)&Pool2[27].Size = 4LL;
    Pool2[27].Ptr = 0xFFFFF780000002C4uLL;
    Pool2[28].Ptr = (ULONGLONG)&v34;
    *(_QWORD *)&Pool2[28].Size = 4LL;
    Pool2[29].Ptr = (ULONGLONG)&v66;
    *(_QWORD *)&Pool2[29].Size = 8LL;
    Pool2[30].Ptr = (ULONGLONG)&v67;
    *(_QWORD *)&Pool2[30].Size = 8LL;
    Pool2[31].Ptr = (ULONGLONG)&v68;
    *(_QWORD *)&Pool2[31].Size = 8LL;
    Pool2[32].Ptr = (ULONGLONG)&v69;
    *(_QWORD *)&Pool2[32].Size = 8LL;
    Pool2[33].Ptr = (ULONGLONG)&v70;
    *(_QWORD *)&Pool2[33].Size = 8LL;
    Pool2[34].Ptr = (ULONGLONG)&v71;
    *(_QWORD *)&Pool2[34].Size = 8LL;
    v51 = *((unsigned __int8 *)a1 + 288);
    Pool2[35].Ptr = (ULONGLONG)&v51;
    *(_QWORD *)&Pool2[35].Size = 4LL;
    Pool2[36].Ptr = (ULONGLONG)(a1 + 76);
    *(_QWORD *)&Pool2[36].Size = 4LL;
    Pool2[37].Ptr = (ULONGLONG)(a1 + 77);
    *(_QWORD *)&Pool2[37].Size = 4LL;
    Pool2[38].Ptr = (ULONGLONG)(a1 + 74);
    *(_QWORD *)&Pool2[38].Size = 8LL;
    Pool2[39].Ptr = (ULONGLONG)(a1 + 82);
    *(_QWORD *)&Pool2[39].Size = 4LL;
    Pool2[40].Ptr = (ULONGLONG)(a1 + 83);
    *(_QWORD *)&Pool2[40].Size = 4LL;
    Pool2[41].Ptr = (ULONGLONG)(a1 + 80);
    *(_QWORD *)&Pool2[41].Size = 8LL;
    Pool2[42].Ptr = (ULONGLONG)(a1 + 78);
    *(_QWORD *)&Pool2[42].Size = 4LL;
    Pool2[43].Ptr = (ULONGLONG)(a1 + 79);
    *(_QWORD *)&Pool2[43].Size = 4LL;
    Pool2[44].Ptr = (ULONGLONG)(a1 + 84);
    *(_QWORD *)&Pool2[44].Size = 4LL;
    Pool2[45].Ptr = (ULONGLONG)(a1 + 85);
    *(_QWORD *)&Pool2[45].Size = 4LL;
    Pool2[46].Ptr = (ULONGLONG)(a1 + 59);
    *(_QWORD *)&Pool2[46].Size = 4LL;
    Pool2[47].Ptr = (ULONGLONG)&v35;
    *(_QWORD *)&Pool2[47].Size = 4LL;
    Pool2[48].Ptr = (ULONGLONG)(a1 + 100);
    *(_QWORD *)&Pool2[48].Size = 8LL;
    Pool2[49].Ptr = (ULONGLONG)(a1 + 102);
    *(_QWORD *)&Pool2[49].Size = 8LL;
    Pool2[50].Ptr = (ULONGLONG)(a1 + 104);
    *(_QWORD *)&Pool2[50].Size = 8LL;
    Pool2[51].Ptr = (ULONGLONG)(a1 + 106);
    *(_QWORD *)&Pool2[51].Size = 8LL;
    Pool2[52].Ptr = (ULONGLONG)(a1 + 108);
    *(_QWORD *)&Pool2[52].Size = 4LL;
    v15 = PopDiagHandleRegistered == 0;
    Pool2[53].Ptr = (ULONGLONG)(a1 + 109);
    *(_QWORD *)&Pool2[53].Size = 4LL;
    Pool2[54].Ptr = (ULONGLONG)(a1 + 110);
    *(_QWORD *)&Pool2[54].Size = 4LL;
    Pool2[55].Ptr = (ULONGLONG)(a1 + 111);
    *(_QWORD *)&Pool2[55].Size = 4LL;
    if ( !v15 )
    {
      v16 = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON);
      LOBYTE(v13) = 0;
      if ( v16 )
      {
        if ( SSHSupportIsPlatformAoAc() )
        {
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON, 0LL, v13 + 56, UserData);
          LOBYTE(v13) = 0;
        }
      }
    }
    if ( PopDiagSleepStudyHandleRegistered != (_BYTE)v13
      && EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_EXIT_REASON)
      && SSHSupportIsPlatformAoAc() )
    {
      EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_EXIT_REASON, 0LL, 0x38u, UserData);
    }
    ExFreePoolWithTag(UserData, 0x50455654u);
  }
  else
  {
    v11 = -1073741670;
  }
  IsEnabledDeviceUsageNoInline = Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( (unsigned int)dword_140E07560 > 5 )
    {
      LOBYTE(IsEnabledDeviceUsageNoInline) = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
      if ( (_BYTE)IsEnabledDeviceUsageNoInline )
      {
        v89 = PopWnfCsEnterScenarioId;
        v95 = &v89;
        v61 = v23;
        v97 = (__int64 *)&v61;
        v90 = v57;
        v99 = &v90;
        v91 = v53;
        v101 = &v91;
        v92 = v54;
        v103 = &v92;
        v93 = v55;
        v105 = &v93;
        v107 = (__int64 *)&v22;
        v109 = &v77;
        v111 = &v78;
        v113 = (BOOL *)&v79;
        v80 = v50;
        v115 = (int *)&v80;
        v81 = PopQpcFrequency;
        v117 = &v81;
        v119 = (__int64 *)&v38;
        v82 = v56;
        v121 = (int *)&v82;
        v39 = v24;
        v123 = (__int64 *)&v39;
        v21 = v19;
        v125 = (__int64 *)&v21;
        v40 = v25;
        v127 = &v40;
        v96 = 8LL;
        v98 = 4LL;
        v100 = 8LL;
        v102 = 8LL;
        v104 = 8LL;
        v106 = 8LL;
        v108 = 4LL;
        v77 = v3;
        v110 = 8LL;
        v78 = v4;
        v112 = 8LL;
        v79 = v6;
        v114 = 8LL;
        v116 = 8LL;
        v118 = 8LL;
        v38 = v5;
        v120 = 4LL;
        v122 = 8LL;
        v124 = 4LL;
        v126 = 1LL;
        v128 = 4LL;
        v41 = v26;
        v129 = &v41;
        v83 = v52;
        v131 = &v83;
        v84 = v62;
        v133 = &v84;
        v42 = v27;
        v135 = &v42;
        v76 = v63;
        v137 = (int *)&v76;
        v85 = v64;
        v139 = (int *)&v85;
        v43 = v28;
        v141 = &v43;
        v44 = v29;
        v143 = &v44;
        v86 = v65;
        v145 = &v86;
        v45 = v30;
        v147 = (ULONGLONG *)&v45;
        v46 = v31;
        v149 = (__int64 *)&v46;
        v47 = v32;
        v151 = &v47;
        v48 = v33;
        v153 = &v48;
        v155 = &v49;
        v36 = v34;
        v157 = &v36;
        v87 = v66;
        v159 = &v87;
        v88 = v67;
        v130 = 4LL;
        v132 = 8LL;
        v134 = 8LL;
        v136 = 4LL;
        v138 = 8LL;
        v140 = 8LL;
        v142 = 4LL;
        v144 = 4LL;
        v146 = 8LL;
        v148 = 4LL;
        v150 = 4LL;
        v152 = 4LL;
        v154 = 4LL;
        v49 = v11;
        v156 = 4LL;
        v158 = 4LL;
        v160 = 8LL;
        v162 = 8LL;
        v161 = &v88;
        v72 = v68;
        v163 = &v72;
        v73 = v69;
        v165 = &v73;
        v74 = v70;
        v167 = &v74;
        v75 = v71;
        v169 = &v75;
        v37 = v35;
        v171 = &v37;
        LODWORD(v50) = a1[87];
        v173 = &v50;
        v20 = *((_BYTE *)a1 + 225);
        v175 = &v20;
        v164 = 8LL;
        v166 = 8LL;
        v168 = 8LL;
        v170 = 8LL;
        v172 = 4LL;
        v174 = 4LL;
        v176 = 1LL;
        LOBYTE(IsEnabledDeviceUsageNoInline) = tlgWriteTransfer_EtwWriteTransfer(
                                                 (__int64)&dword_140E07560,
                                                 (unsigned __int8 *)byte_14004BEC1,
                                                 0LL,
                                                 0LL,
                                                 0x2Bu,
                                                 v94);
      }
    }
  }
  else if ( (unsigned int)dword_140E07560 > 5 )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
    if ( (_BYTE)IsEnabledDeviceUsageNoInline )
    {
      v75 = PopWnfCsEnterScenarioId;
      v95 = &v75;
      LODWORD(v50) = v23;
      v97 = &v50;
      v74 = v57;
      v99 = &v74;
      v73 = v53;
      v101 = &v73;
      v72 = v54;
      v103 = &v72;
      v88 = v55;
      v105 = &v88;
      v87 = v56;
      v107 = &v87;
      v37 = v24;
      v109 = (__int64 *)&v37;
      v20 = v19;
      v111 = (__int64 *)&v20;
      v36 = v25;
      v113 = &v36;
      v49 = v26;
      v115 = &v49;
      v86 = v52;
      v117 = (ULONGLONG *)&v86;
      v85 = v62;
      v119 = &v85;
      v48 = v27;
      v121 = &v48;
      v76 = v63;
      v123 = &v76;
      v84 = v64;
      v125 = &v84;
      v96 = 8LL;
      v98 = 4LL;
      v100 = 8LL;
      v102 = 8LL;
      v104 = 8LL;
      v106 = 8LL;
      v108 = 8LL;
      v110 = 4LL;
      v112 = 1LL;
      v114 = 4LL;
      v116 = 4LL;
      v118 = 8LL;
      v120 = 8LL;
      v122 = 4LL;
      v124 = 8LL;
      v126 = 8LL;
      v47 = v28;
      v127 = &v47;
      v46 = v29;
      v129 = &v46;
      v83 = v65;
      v131 = &v83;
      v45 = v30;
      v133 = (__int64 *)&v45;
      v44 = v31;
      v135 = &v44;
      v43 = v32;
      v137 = &v43;
      v42 = v33;
      v139 = &v42;
      v141 = &v41;
      v40 = v34;
      v143 = &v40;
      v82 = v66;
      v145 = &v82;
      v81 = v67;
      v147 = &v81;
      v80 = v68;
      v149 = &v80;
      v79 = v69;
      v151 = (int *)&v79;
      v78 = v70;
      v153 = (int *)&v78;
      v77 = v71;
      v155 = (int *)&v77;
      v39 = v35;
      v157 = &v39;
      v38 = a1[87];
      v128 = 4LL;
      v130 = 4LL;
      v132 = 8LL;
      v134 = 4LL;
      v136 = 4LL;
      v138 = 4LL;
      v140 = 4LL;
      v41 = v11;
      v142 = 4LL;
      v144 = 4LL;
      v146 = 8LL;
      v148 = 8LL;
      v150 = 8LL;
      v152 = 8LL;
      v154 = 8LL;
      v156 = 8LL;
      v158 = 4LL;
      v159 = (__int64 *)&v38;
      v160 = 4LL;
      LOBYTE(IsEnabledDeviceUsageNoInline) = tlgWriteTransfer_EtwWriteTransfer(
                                               (__int64)&dword_140E07560,
                                               (unsigned __int8 *)byte_14004C209,
                                               0LL,
                                               0LL,
                                               0x23u,
                                               v94);
    }
  }
  return IsEnabledDeviceUsageNoInline;
}
