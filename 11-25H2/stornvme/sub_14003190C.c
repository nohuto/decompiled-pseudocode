/*
 * XREFs of sub_14003190C @ 0x14003190C
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 * Callees:
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

_BOOL8 __fastcall sub_14003190C(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // cl
  __int64 v5; // rcx
  bool v7; // [rsp+30h] [rbp-D0h] BYREF
  bool v8; // [rsp+31h] [rbp-CFh] BYREF
  char v9; // [rsp+32h] [rbp-CEh] BYREF
  const char *v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+48h] [rbp-B8h]
  __int64 v12; // [rsp+50h] [rbp-B0h]
  const char *v13; // [rsp+58h] [rbp-A8h]
  int v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  const char *v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  const char *v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  const char *v22; // [rsp+A0h] [rbp-60h]
  int v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  const char *v25; // [rsp+B8h] [rbp-48h]
  int v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  const char *v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  bool *v30; // [rsp+E0h] [rbp-20h]
  const char *v31; // [rsp+E8h] [rbp-18h]
  int v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  const char *v34; // [rsp+100h] [rbp+0h]
  int v35; // [rsp+108h] [rbp+8h]
  bool *v36; // [rsp+110h] [rbp+10h]
  const char *v37; // [rsp+118h] [rbp+18h]
  int v38; // [rsp+120h] [rbp+20h]
  char *v39; // [rsp+128h] [rbp+28h]
  const char *v40; // [rsp+130h] [rbp+30h]
  int v41; // [rsp+138h] [rbp+38h]
  __int64 v42; // [rsp+140h] [rbp+40h]
  const char *v43; // [rsp+148h] [rbp+48h]
  int v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  const char *v46; // [rsp+160h] [rbp+60h]
  int v47; // [rsp+168h] [rbp+68h]
  __int64 v48; // [rsp+170h] [rbp+70h]
  const char *v49; // [rsp+178h] [rbp+78h]
  int v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  const char *v52; // [rsp+190h] [rbp+90h]
  int v53; // [rsp+198h] [rbp+98h]
  __int64 v54; // [rsp+1A0h] [rbp+A0h]
  const char *v55; // [rsp+1A8h] [rbp+A8h]
  int v56; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  const char *v58; // [rsp+1C0h] [rbp+C0h]
  int v59; // [rsp+1C8h] [rbp+C8h]
  __int64 v60; // [rsp+1D0h] [rbp+D0h]
  const char *v61; // [rsp+1D8h] [rbp+D8h]
  int v62; // [rsp+1E0h] [rbp+E0h]
  __int64 v63; // [rsp+1E8h] [rbp+E8h]
  const char *v64; // [rsp+1F0h] [rbp+F0h]
  int v65; // [rsp+1F8h] [rbp+F8h]
  __int64 v66; // [rsp+200h] [rbp+100h]
  const char *v67; // [rsp+208h] [rbp+108h]
  int v68; // [rsp+210h] [rbp+110h]
  __int64 v69; // [rsp+218h] [rbp+118h]
  const char *v70; // [rsp+220h] [rbp+120h]
  int v71; // [rsp+228h] [rbp+128h]
  __int64 v72; // [rsp+230h] [rbp+130h]
  const char *v73; // [rsp+238h] [rbp+138h]
  int v74; // [rsp+240h] [rbp+140h]
  __int64 v75; // [rsp+248h] [rbp+148h]
  const char *v76; // [rsp+250h] [rbp+150h]
  int v77; // [rsp+258h] [rbp+158h]
  __int64 v78; // [rsp+260h] [rbp+160h]
  const char *v79; // [rsp+268h] [rbp+168h]
  int v80; // [rsp+270h] [rbp+170h]
  __int64 v81; // [rsp+278h] [rbp+178h]
  const char *v82; // [rsp+280h] [rbp+180h]
  int v83; // [rsp+288h] [rbp+188h]
  __int64 v84; // [rsp+290h] [rbp+190h]
  const char *v85; // [rsp+298h] [rbp+198h]
  int v86; // [rsp+2A0h] [rbp+1A0h]
  __int64 v87; // [rsp+2A8h] [rbp+1A8h]
  const char *v88; // [rsp+2B0h] [rbp+1B0h]
  int v89; // [rsp+2B8h] [rbp+1B8h]
  __int64 v90; // [rsp+2C0h] [rbp+1C0h]
  const char *v91; // [rsp+2C8h] [rbp+1C8h]
  int v92; // [rsp+2D0h] [rbp+1D0h]
  __int64 v93; // [rsp+2D8h] [rbp+1D8h]
  const char *v94; // [rsp+2E0h] [rbp+1E0h]
  int v95; // [rsp+2E8h] [rbp+1E8h]
  __int64 v96; // [rsp+2F0h] [rbp+1F0h]
  const char *v97; // [rsp+2F8h] [rbp+1F8h]
  int v98; // [rsp+300h] [rbp+200h]
  __int64 v99; // [rsp+308h] [rbp+208h]
  const char *v100; // [rsp+310h] [rbp+210h]
  int v101; // [rsp+318h] [rbp+218h]
  __int64 v102; // [rsp+320h] [rbp+220h]
  const char *v103; // [rsp+328h] [rbp+228h]
  int v104; // [rsp+330h] [rbp+230h]
  __int64 v105; // [rsp+338h] [rbp+238h]
  const char *v106; // [rsp+340h] [rbp+240h]
  int v107; // [rsp+348h] [rbp+248h]
  __int64 v108; // [rsp+350h] [rbp+250h]
  const char *v109; // [rsp+358h] [rbp+258h]
  int v110; // [rsp+360h] [rbp+260h]
  __int64 v111; // [rsp+368h] [rbp+268h]
  const char *v112; // [rsp+370h] [rbp+270h]
  int v113; // [rsp+378h] [rbp+278h]
  __int64 v114; // [rsp+380h] [rbp+280h]
  const char *v115; // [rsp+388h] [rbp+288h]
  int v116; // [rsp+390h] [rbp+290h]
  __int64 v117; // [rsp+398h] [rbp+298h]
  const char *v118; // [rsp+3A0h] [rbp+2A0h]
  int v119; // [rsp+3A8h] [rbp+2A8h]
  __int64 v120; // [rsp+3B0h] [rbp+2B0h]
  const char *v121; // [rsp+3B8h] [rbp+2B8h]
  int v122; // [rsp+3C0h] [rbp+2C0h]
  __int64 v123; // [rsp+3C8h] [rbp+2C8h]
  const char *v124; // [rsp+3D0h] [rbp+2D0h]
  int v125; // [rsp+3D8h] [rbp+2D8h]
  __int16 v126; // [rsp+3DCh] [rbp+2DCh]
  __int64 v127; // [rsp+3E0h] [rbp+2E0h]
  const char *v128; // [rsp+3E8h] [rbp+2E8h]
  int v129; // [rsp+3F0h] [rbp+2F0h]
  __int64 v130; // [rsp+3F8h] [rbp+2F8h]
  const char *v131; // [rsp+400h] [rbp+300h]
  int v132; // [rsp+408h] [rbp+308h]
  __int64 v133; // [rsp+410h] [rbp+310h]
  const char *v134; // [rsp+418h] [rbp+318h]
  int v135; // [rsp+420h] [rbp+320h]
  __int64 v136; // [rsp+428h] [rbp+328h]
  const char *v137; // [rsp+430h] [rbp+330h]
  int v138; // [rsp+438h] [rbp+338h]
  __int64 v139; // [rsp+440h] [rbp+340h]
  const char *v140; // [rsp+448h] [rbp+348h]
  int v141; // [rsp+450h] [rbp+350h]
  __int64 v142; // [rsp+458h] [rbp+358h]
  const char *v143; // [rsp+460h] [rbp+360h]
  int v144; // [rsp+468h] [rbp+368h]
  __int64 v145; // [rsp+470h] [rbp+370h]
  const char *v146; // [rsp+478h] [rbp+378h]
  int v147; // [rsp+480h] [rbp+380h]
  __int64 v148; // [rsp+488h] [rbp+388h]
  const char *v149; // [rsp+490h] [rbp+390h]
  int v150; // [rsp+498h] [rbp+398h]
  __int64 v151; // [rsp+4A0h] [rbp+3A0h]
  const char *v152; // [rsp+4A8h] [rbp+3A8h]
  int v153; // [rsp+4B0h] [rbp+3B0h]
  __int64 v154; // [rsp+4B8h] [rbp+3B8h]
  const char *v155; // [rsp+4C0h] [rbp+3C0h]
  int v156; // [rsp+4C8h] [rbp+3C8h]
  __int64 v157; // [rsp+4D0h] [rbp+3D0h]
  const char *v158; // [rsp+4D8h] [rbp+3D8h]
  int v159; // [rsp+4E0h] [rbp+3E0h]
  __int64 v160; // [rsp+4E8h] [rbp+3E8h]
  const char *v161; // [rsp+4F0h] [rbp+3F0h]
  int v162; // [rsp+4F8h] [rbp+3F8h]
  __int64 v163; // [rsp+500h] [rbp+400h]
  const char *v164; // [rsp+508h] [rbp+408h]
  int v165; // [rsp+510h] [rbp+410h]
  __int64 v166; // [rsp+518h] [rbp+418h]

  sub_140032C80(&v10, 0LL, 1248LL);
  v4 = *(_BYTE *)(a1 + 21);
  v29 = 1;
  v35 = 1;
  v7 = (v4 & 0x20) != 0;
  v38 = 1;
  v11 = 10;
  v8 = (v4 & 0x40) != 0;
  v10 = "ControllerNumber";
  v9 = v4 >> 7;
  v13 = "VendorID";
  v12 = a1;
  v15 = a1 + 4;
  v16 = "DeviceID";
  v18 = a1 + 6;
  v19 = "RevisionID";
  v21 = a1 + 8;
  v22 = "Information";
  v24 = a1 + 12;
  v27 = a1 + 12;
  v28 = "InterruptMasked";
  v30 = &v7;
  v31 = "CriticalWarning";
  v33 = a1 + 22;
  v34 = "EnduranceWarningLogged";
  v36 = &v8;
  v37 = "LowSpareWarningLogged";
  v39 = &v9;
  v40 = "States";
  v42 = a1 + 24;
  v43 = "ErrorState";
  v45 = a1 + 28;
  v14 = 9;
  v17 = 9;
  v20 = 8;
  v23 = 10;
  v25 = "InterruptMode";
  v26 = 10;
  v32 = 8;
  v41 = 14;
  v44 = 10;
  v46 = "ControllerMaxTransferSize";
  v47 = 10;
  v48 = a1 + 32;
  v49 = "IoQueueDepth";
  v51 = a1 + 36;
  v50 = 10;
  v54 = a1 + 40;
  v57 = a1 + 42;
  v58 = "InterruptCoalescingTime";
  v60 = a1 + 44;
  v61 = "RegistryValues.Flags";
  v63 = a1 + 56;
  v64 = "AsyncEventMask";
  v66 = a1 + 60;
  v67 = "IoQueuePercentageInPollingMode";
  v69 = a1 + 64;
  v70 = "IoPollingInterval";
  v72 = a1 + 68;
  v73 = "IoPollingSize";
  v75 = a1 + 76;
  v76 = "IdlePowerMode";
  v78 = a1 + 80;
  v79 = "AvailableSpare";
  v81 = a1 + 140;
  v82 = "AvailableSpareThreshold";
  v84 = a1 + 141;
  v85 = "NVMeBAR";
  v87 = a1 + 168;
  v88 = "NVME_VERSION";
  v90 = a1 + 184;
  v91 = "NVME_CONTROLLER_CAPABILITIES";
  v93 = a1 + 192;
  v94 = "NVME_CONTROLLER_CONFIGURATION";
  v52 = "IoSubmissionQueueCount";
  v53 = 9;
  v55 = "IoCompletionQueueCount";
  v56 = 9;
  v59 = 8;
  v62 = 14;
  v65 = 14;
  v68 = 10;
  v71 = 10;
  v74 = 10;
  v77 = 10;
  v80 = 8;
  v83 = 8;
  v86 = 11;
  v89 = 14;
  v92 = 15;
  v5 = *(_QWORD *)(a1 + 176);
  v95 = 14;
  v98 = 14;
  v101 = 14;
  v104 = 14;
  v96 = v5 + 20;
  v97 = "NVME_CONTROLLER_STATUS";
  v99 = v5 + 28;
  v100 = "NVME_CONTROLLER_MEMORY_BUFFER_LOCATION";
  v102 = v5 + 56;
  v103 = "NVME_CONTROLLER_MEMORY_BUFFER_SIZE";
  v105 = v5 + 60;
  v106 = "NVMeDoorBellSize";
  v108 = a1 + 200;
  v109 = "ControllerReadyTimeout";
  v111 = a1 + 204;
  v112 = "MaximumTransferLength";
  v114 = a1 + 208;
  v115 = "LunCount";
  v117 = a1 + 212;
  v118 = "TemperatureThreshold";
  v120 = a1 + 220;
  v121 = "LunStopUnitCount";
  v123 = a1 + 228;
  v124 = "NVME_IDENTIFY_CONTROLLER_DATA";
  v126 = 4096;
  v127 = a1 + 1560;
  v128 = "SubmissionEntrySize";
  v130 = a1 + 320;
  v131 = "CompletionEntrySize";
  v133 = a1 + 322;
  v134 = "AdminQueueDepth";
  v136 = a1 + 324;
  v139 = a1 + 326;
  v142 = a1 + 330;
  v107 = 10;
  v110 = 10;
  v113 = 10;
  v116 = 10;
  v119 = 9;
  v122 = 10;
  v125 = 16;
  v129 = 9;
  v132 = 9;
  v135 = 9;
  v137 = "IoQueueDepth";
  v138 = 9;
  v140 = "IoSubmissionQueueCount";
  v141 = 9;
  v143 = "IoCompletionQueueCount";
  v144 = 9;
  v147 = 9;
  v145 = a1 + 332;
  v150 = 9;
  v146 = "IoQueueCountInPollingMode";
  v153 = 9;
  v148 = a1 + 334;
  v156 = 9;
  v149 = "ReservedSubmissionQueueCount";
  v159 = 9;
  v151 = a1 + 952;
  v152 = "ReservedCompletionQueueCount";
  v154 = a1 + 954;
  v155 = "AdminCmdsBeingProcessedCount";
  v157 = a1 + 976;
  v158 = "MaxIoSubmissionQueueCount";
  v160 = a1 + 978;
  v161 = "MaxIoCompletionQueueCount";
  v163 = a1 + 980;
  v164 = "AllocatedReservedQueueCount";
  v166 = a1 + 982;
  v162 = 9;
  v165 = 9;
  return (unsigned int)StorPortExtendedFunction(115LL, a1, 0LL, a2) != 0;
}
