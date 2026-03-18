/*
 * XREFs of PopDiagTraceDirtyTransition @ 0x140CD1D84
 * Callers:
 *     PopCheckShutdownMarker @ 0x140CD0064 (PopCheckShutdownMarker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SshSessionManagerTraceDirtyTransition @ 0x1407E3E48 (SshSessionManagerTraceDirtyTransition.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140CD6D14 (PopPotsLogDirtyPowerTransition.c)
 */

char PopDiagTraceDirtyTransition()
{
  __int64 v0; // rcx
  char result; // al
  __int64 *p_WriteOperationCount; // rcx
  char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // r10
  __int64 v8; // r10
  unsigned __int8 v9; // al
  char v10; // al
  bool v11; // al
  char v12; // al
  bool v13; // al
  bool v14; // al
  bool v15; // al
  bool v16; // al
  bool v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char v22; // al
  bool v23; // al
  char v24; // al
  bool v25; // al
  char v26; // [rsp+48h] [rbp-C0h] BYREF
  char v27; // [rsp+49h] [rbp-BFh] BYREF
  char v28; // [rsp+4Ah] [rbp-BEh] BYREF
  char Flink; // [rsp+4Bh] [rbp-BDh] BYREF
  char v30; // [rsp+4Ch] [rbp-BCh] BYREF
  char v31; // [rsp+4Dh] [rbp-BBh] BYREF
  char v32; // [rsp+4Eh] [rbp-BAh] BYREF
  char v33; // [rsp+4Fh] [rbp-B9h] BYREF
  char v34; // [rsp+50h] [rbp-B8h] BYREF
  char v35; // [rsp+51h] [rbp-B7h] BYREF
  bool v36; // [rsp+52h] [rbp-B6h] BYREF
  char v37; // [rsp+53h] [rbp-B5h] BYREF
  bool v38; // [rsp+54h] [rbp-B4h] BYREF
  bool v39; // [rsp+55h] [rbp-B3h] BYREF
  char v40; // [rsp+56h] [rbp-B2h] BYREF
  char v41; // [rsp+57h] [rbp-B1h] BYREF
  bool v42; // [rsp+58h] [rbp-B0h] BYREF
  bool v43; // [rsp+59h] [rbp-AFh] BYREF
  char v44; // [rsp+5Ah] [rbp-AEh] BYREF
  bool v45; // [rsp+5Bh] [rbp-ADh] BYREF
  char v46; // [rsp+5Ch] [rbp-ACh] BYREF
  char v47; // [rsp+5Dh] [rbp-ABh] BYREF
  char v48; // [rsp+5Eh] [rbp-AAh] BYREF
  char v49; // [rsp+5Fh] [rbp-A9h] BYREF
  char v50; // [rsp+60h] [rbp-A8h] BYREF
  char v51; // [rsp+61h] [rbp-A7h] BYREF
  char v52; // [rsp+62h] [rbp-A6h] BYREF
  bool v53; // [rsp+63h] [rbp-A5h] BYREF
  char v54; // [rsp+64h] [rbp-A4h] BYREF
  char v55; // [rsp+65h] [rbp-A3h] BYREF
  char v56; // [rsp+66h] [rbp-A2h] BYREF
  bool v57; // [rsp+67h] [rbp-A1h] BYREF
  char UserWaitTime; // [rsp+68h] [rbp-A0h] BYREF
  bool v59; // [rsp+69h] [rbp-9Fh] BYREF
  bool v60; // [rsp+6Ah] [rbp-9Eh] BYREF
  char v61; // [rsp+6Bh] [rbp-9Dh] BYREF
  char v62; // [rsp+6Ch] [rbp-9Ch] BYREF
  char v63; // [rsp+6Dh] [rbp-9Bh] BYREF
  __int16 v64; // [rsp+70h] [rbp-98h] BYREF
  __int16 v65; // [rsp+74h] [rbp-94h] BYREF
  int v66; // [rsp+78h] [rbp-90h] BYREF
  int v67; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v68; // [rsp+80h] [rbp-88h] BYREF
  int v69; // [rsp+84h] [rbp-84h] BYREF
  int v70; // [rsp+88h] [rbp-80h] BYREF
  int v71; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v72; // [rsp+90h] [rbp-78h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+94h] [rbp-74h] BYREF
  int OtherTransferCount; // [rsp+9Ch] [rbp-6Ch] BYREF
  int RankCycleTarget_high; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v76; // [rsp+A4h] [rbp-64h] BYREF
  int RankCycleTarget; // [rsp+A8h] [rbp-60h] BYREF
  int v78; // [rsp+ACh] [rbp-5Ch] BYREF
  int v79; // [rsp+B0h] [rbp-58h] BYREF
  int v80; // [rsp+B4h] [rbp-54h] BYREF
  int v81; // [rsp+B8h] [rbp-50h] BYREF
  int v82; // [rsp+BCh] [rbp-4Ch] BYREF
  int AbWaitObject_high; // [rsp+C0h] [rbp-48h] BYREF
  int AbWaitObject; // [rsp+C4h] [rbp-44h] BYREF
  struct _LIST_ENTRY *v85; // [rsp+C8h] [rbp-40h] BYREF
  int SchedulerAssistPriorityFloor; // [rsp+D0h] [rbp-38h] BYREF
  int KernelShadowStack_high; // [rsp+D4h] [rbp-34h] BYREF
  int RealtimePriorityFloor; // [rsp+D8h] [rbp-30h] BYREF
  int KernelShadowStack; // [rsp+DCh] [rbp-2Ch] BYREF
  _KERNEL_SHADOW_STACK_LIMIT v90; // [rsp+E0h] [rbp-28h] BYREF
  int ExtendedFeatureDisableMask; // [rsp+E8h] [rbp-20h] BYREF
  int KernelShadowStackBase; // [rsp+ECh] [rbp-1Ch] BYREF
  int v93; // [rsp+F0h] [rbp-18h] BYREF
  int v94; // [rsp+F4h] [rbp-14h] BYREF
  int v95; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int Spare36; // [rsp+FCh] [rbp-Ch] BYREF
  __int64 ReadOperationCount_low; // [rsp+100h] [rbp-8h] BYREF
  __int64 WriteOperationCount; // [rsp+108h] [rbp+0h] BYREF
  __int64 OtherOperationCount; // [rsp+110h] [rbp+8h] BYREF
  __int64 ReadTransferCount; // [rsp+118h] [rbp+10h] BYREF
  __int64 WriteTransferCount; // [rsp+120h] [rbp+18h] BYREF
  __int64 v102; // [rsp+128h] [rbp+20h] BYREF
  void *KernelShadowStackInitial; // [rsp+130h] [rbp+28h] BYREF
  __int64 v104; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v105; // [rsp+148h] [rbp+40h] BYREF
  char *p_Flink; // [rsp+168h] [rbp+60h]
  __int64 v107; // [rsp+170h] [rbp+68h]
  struct _LIST_ENTRY **p_Blink; // [rsp+178h] [rbp+70h]
  __int64 v109; // [rsp+180h] [rbp+78h]
  char *v110; // [rsp+188h] [rbp+80h]
  __int64 v111; // [rsp+190h] [rbp+88h]
  __int64 *p_ReadOperationCount_low; // [rsp+198h] [rbp+90h]
  __int64 v113; // [rsp+1A0h] [rbp+98h]
  __int64 *v114; // [rsp+1A8h] [rbp+A0h]
  __int64 v115; // [rsp+1B0h] [rbp+A8h]
  __int64 *p_OtherOperationCount; // [rsp+1B8h] [rbp+B0h]
  __int64 v117; // [rsp+1C0h] [rbp+B8h]
  __int64 *p_ReadTransferCount; // [rsp+1C8h] [rbp+C0h]
  __int64 v119; // [rsp+1D0h] [rbp+C8h]
  __int64 *p_WriteTransferCount; // [rsp+1D8h] [rbp+D0h]
  __int64 v121; // [rsp+1E0h] [rbp+D8h]
  int *v122; // [rsp+1E8h] [rbp+E0h]
  __int64 v123; // [rsp+1F0h] [rbp+E8h]
  char *v124; // [rsp+1F8h] [rbp+F0h]
  __int64 v125; // [rsp+200h] [rbp+F8h]
  char *v126; // [rsp+208h] [rbp+100h]
  __int64 v127; // [rsp+210h] [rbp+108h]
  char *v128; // [rsp+218h] [rbp+110h]
  __int64 v129; // [rsp+220h] [rbp+118h]
  char *v130; // [rsp+228h] [rbp+120h]
  __int64 v131; // [rsp+230h] [rbp+128h]
  char *v132; // [rsp+238h] [rbp+130h]
  __int64 v133; // [rsp+240h] [rbp+138h]
  char *v134; // [rsp+248h] [rbp+140h]
  __int64 v135; // [rsp+250h] [rbp+148h]
  bool *v136; // [rsp+258h] [rbp+150h]
  __int64 v137; // [rsp+260h] [rbp+158h]
  char *v138; // [rsp+268h] [rbp+160h]
  __int64 v139; // [rsp+270h] [rbp+168h]
  bool *v140; // [rsp+278h] [rbp+170h]
  __int64 v141; // [rsp+280h] [rbp+178h]
  bool *v142; // [rsp+288h] [rbp+180h]
  __int64 v143; // [rsp+290h] [rbp+188h]
  char *v144; // [rsp+298h] [rbp+190h]
  __int64 v145; // [rsp+2A0h] [rbp+198h]
  char *v146; // [rsp+2A8h] [rbp+1A0h]
  __int64 v147; // [rsp+2B0h] [rbp+1A8h]
  int *p_RankCycleTarget_high; // [rsp+2B8h] [rbp+1B0h]
  __int64 v149; // [rsp+2C0h] [rbp+1B8h]
  unsigned int *v150; // [rsp+2C8h] [rbp+1C0h]
  __int64 v151; // [rsp+2D0h] [rbp+1C8h]
  __int16 *v152; // [rsp+2D8h] [rbp+1D0h]
  __int64 v153; // [rsp+2E0h] [rbp+1D8h]
  bool *v154; // [rsp+2E8h] [rbp+1E0h]
  __int64 v155; // [rsp+2F0h] [rbp+1E8h]
  bool *v156; // [rsp+2F8h] [rbp+1F0h]
  __int64 v157; // [rsp+300h] [rbp+1F8h]
  char *v158; // [rsp+308h] [rbp+200h]
  __int64 v159; // [rsp+310h] [rbp+208h]
  bool *v160; // [rsp+318h] [rbp+210h]
  __int64 v161; // [rsp+320h] [rbp+218h]
  __int64 *v162; // [rsp+328h] [rbp+220h]
  __int64 v163; // [rsp+330h] [rbp+228h]
  char *v164; // [rsp+338h] [rbp+230h]
  __int64 v165; // [rsp+340h] [rbp+238h]
  char *v166; // [rsp+348h] [rbp+240h]
  __int64 v167; // [rsp+350h] [rbp+248h]
  char *v168; // [rsp+358h] [rbp+250h]
  __int64 v169; // [rsp+360h] [rbp+258h]
  char *v170; // [rsp+368h] [rbp+260h]
  __int64 v171; // [rsp+370h] [rbp+268h]
  _KSCB *v172; // [rsp+378h] [rbp+270h]
  __int64 v173; // [rsp+380h] [rbp+278h]
  unsigned __int64 *p_MaxQuotaCycleTarget; // [rsp+388h] [rbp+280h]
  __int64 v175; // [rsp+390h] [rbp+288h]
  int *p_RankCycleTarget; // [rsp+398h] [rbp+290h]
  __int64 v177; // [rsp+3A0h] [rbp+298h]
  char *v178; // [rsp+3A8h] [rbp+2A0h]
  __int64 v179; // [rsp+3B0h] [rbp+2A8h]
  char *v180; // [rsp+3B8h] [rbp+2B0h]
  __int64 v181; // [rsp+3C0h] [rbp+2B8h]
  char *v182; // [rsp+3C8h] [rbp+2C0h]
  __int64 v183; // [rsp+3D0h] [rbp+2C8h]
  __int16 *v184; // [rsp+3D8h] [rbp+2D0h]
  __int64 v185; // [rsp+3E0h] [rbp+2D8h]
  void *SchedulerAssist; // [rsp+3E8h] [rbp+2E0h]
  __int64 v187; // [rsp+3F0h] [rbp+2E8h]
  int *v188; // [rsp+3F8h] [rbp+2F0h]
  __int64 v189; // [rsp+400h] [rbp+2F8h]
  char *v190; // [rsp+408h] [rbp+300h]
  __int64 v191; // [rsp+410h] [rbp+308h]
  int *v192; // [rsp+418h] [rbp+310h]
  __int64 v193; // [rsp+420h] [rbp+318h]
  int *v194; // [rsp+428h] [rbp+320h]
  __int64 v195; // [rsp+430h] [rbp+328h]
  int *v196; // [rsp+438h] [rbp+330h]
  __int64 v197; // [rsp+440h] [rbp+338h]
  bool *v198; // [rsp+448h] [rbp+340h]
  __int64 v199; // [rsp+450h] [rbp+348h]
  char *v200; // [rsp+458h] [rbp+350h]
  __int64 v201; // [rsp+460h] [rbp+358h]
  char *v202; // [rsp+468h] [rbp+360h]
  __int64 v203; // [rsp+470h] [rbp+368h]
  char *v204; // [rsp+478h] [rbp+370h]
  __int64 v205; // [rsp+480h] [rbp+378h]
  int *v206; // [rsp+488h] [rbp+380h]
  __int64 v207; // [rsp+490h] [rbp+388h]
  int *v208; // [rsp+498h] [rbp+390h]
  __int64 v209; // [rsp+4A0h] [rbp+398h]
  int *v210; // [rsp+4A8h] [rbp+3A0h]
  __int64 v211; // [rsp+4B0h] [rbp+3A8h]
  bool *v212; // [rsp+4B8h] [rbp+3B0h]
  __int64 v213; // [rsp+4C0h] [rbp+3B8h]
  char *v214; // [rsp+4C8h] [rbp+3C0h]
  __int64 v215; // [rsp+4D0h] [rbp+3C8h]
  int *p_AbWaitObject_high; // [rsp+4D8h] [rbp+3D0h]
  __int64 v217; // [rsp+4E0h] [rbp+3D8h]
  int *p_AbWaitObject; // [rsp+4E8h] [rbp+3E0h]
  __int64 v219; // [rsp+4F0h] [rbp+3E8h]
  char *p_UserWaitTime; // [rsp+4F8h] [rbp+3F0h]
  __int64 v221; // [rsp+500h] [rbp+3F8h]
  struct _LIST_ENTRY **v222; // [rsp+508h] [rbp+400h]
  __int64 v223; // [rsp+510h] [rbp+408h]
  char *v224; // [rsp+518h] [rbp+410h]
  __int64 v225; // [rsp+520h] [rbp+418h]
  int *p_SchedulerAssistPriorityFloor; // [rsp+528h] [rbp+420h]
  __int64 v227; // [rsp+530h] [rbp+428h]
  int *p_KernelShadowStack_high; // [rsp+538h] [rbp+430h]
  __int64 v229; // [rsp+540h] [rbp+438h]
  int *p_RealtimePriorityFloor; // [rsp+548h] [rbp+440h]
  __int64 v231; // [rsp+550h] [rbp+448h]
  int *p_KernelShadowStack; // [rsp+558h] [rbp+450h]
  __int64 v233; // [rsp+560h] [rbp+458h]
  void **p_KernelShadowStackInitial; // [rsp+568h] [rbp+460h]
  __int64 v235; // [rsp+570h] [rbp+468h]
  _KERNEL_SHADOW_STACK_LIMIT *v236; // [rsp+578h] [rbp+470h]
  __int64 v237; // [rsp+580h] [rbp+478h]
  char *v238; // [rsp+588h] [rbp+480h]
  __int64 v239; // [rsp+590h] [rbp+488h]
  int *p_ExtendedFeatureDisableMask; // [rsp+598h] [rbp+490h]
  __int64 v241; // [rsp+5A0h] [rbp+498h]
  int *p_KernelShadowStackBase; // [rsp+5A8h] [rbp+4A0h]
  __int64 v243; // [rsp+5B0h] [rbp+4A8h]
  bool *v244; // [rsp+5B8h] [rbp+4B0h]
  __int64 v245; // [rsp+5C0h] [rbp+4B8h]
  bool *v246; // [rsp+5C8h] [rbp+4C0h]
  __int64 v247; // [rsp+5D0h] [rbp+4C8h]
  int *v248; // [rsp+5D8h] [rbp+4D0h]
  __int64 v249; // [rsp+5E0h] [rbp+4D8h]
  char *v250; // [rsp+5E8h] [rbp+4E0h]
  __int64 v251; // [rsp+5F0h] [rbp+4E8h]
  char *v252; // [rsp+5F8h] [rbp+4F0h]
  __int64 v253; // [rsp+600h] [rbp+4F8h]
  int *v254; // [rsp+608h] [rbp+500h]
  __int64 v255; // [rsp+610h] [rbp+508h]
  char *v256; // [rsp+618h] [rbp+510h]
  __int64 v257; // [rsp+620h] [rbp+518h]
  int *v258; // [rsp+628h] [rbp+520h]
  __int64 v259; // [rsp+630h] [rbp+528h]
  unsigned int *v260; // [rsp+638h] [rbp+530h]
  __int64 v261; // [rsp+640h] [rbp+538h]
  __int64 *v262; // [rsp+648h] [rbp+540h]
  __int64 v263; // [rsp+650h] [rbp+548h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+658h] [rbp+550h] BYREF
  char v265; // [rsp+670h] [rbp+568h] BYREF
  unsigned int *v266; // [rsp+6A8h] [rbp+5A0h]
  __int64 v267; // [rsp+6B0h] [rbp+5A8h]
  _KSCB *QueuedScb; // [rsp+6B8h] [rbp+5B0h]
  __int64 v269; // [rsp+6C0h] [rbp+5B8h]
  char *v270; // [rsp+6C8h] [rbp+5C0h]
  __int64 v271; // [rsp+6D0h] [rbp+5C8h]
  unsigned __int64 *TracingPrivate; // [rsp+6D8h] [rbp+5D0h]
  __int64 v273; // [rsp+6E0h] [rbp+5D8h]
  int *v274; // [rsp+6E8h] [rbp+5E0h]
  __int64 v275; // [rsp+6F0h] [rbp+5E8h]
  int *v276; // [rsp+6F8h] [rbp+5F0h]
  __int64 v277; // [rsp+700h] [rbp+5F8h]
  char *v278; // [rsp+708h] [rbp+600h]
  __int64 v279; // [rsp+710h] [rbp+608h]
  __int64 *p_OtherTransferCount; // [rsp+718h] [rbp+610h]
  __int64 v281; // [rsp+720h] [rbp+618h]
  char *v282; // [rsp+728h] [rbp+620h]
  __int64 v283; // [rsp+730h] [rbp+628h]
  __int64 v284; // [rsp+738h] [rbp+630h]
  __int64 v285; // [rsp+740h] [rbp+638h]
  int *v286; // [rsp+748h] [rbp+640h]
  __int64 v287; // [rsp+750h] [rbp+648h]
  int *v288; // [rsp+758h] [rbp+650h]
  __int64 v289; // [rsp+760h] [rbp+658h]
  __int64 v290; // [rsp+768h] [rbp+660h]
  __int64 v291; // [rsp+770h] [rbp+668h]
  __int64 v292; // [rsp+778h] [rbp+670h]
  __int64 v293; // [rsp+780h] [rbp+678h]
  char *v294; // [rsp+788h] [rbp+680h]
  __int64 v295; // [rsp+790h] [rbp+688h]
  unsigned int *p_Spare36; // [rsp+798h] [rbp+690h]
  __int64 v297; // [rsp+7A0h] [rbp+698h]

  v72 = (*(unsigned __int8 *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 1LL) >> 4) & 1;
  v69 = (LOBYTE(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) >> 1) & 1;
  v28 = BYTE3(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) >> 6;
  v71 = (BYTE6(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) >> 5) & 1;
  v27 = BYTE6(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) & 0xF;
  v68 = LOBYTE(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) >> 4;
  v26 = *(_BYTE *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 24LL);
  v70 = WORD2(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget);
  PopPotsLogDirtyPowerTransition(v68, HIDWORD(stru_140E66FF0.AbWaitObject), LODWORD(stru_140E66FF0.ReadOperationCount));
  result = SshSessionManagerTraceDirtyTransition(v0);
  if ( byte_140E67628 )
  {
    result = EtwEventEnabled(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_DIRTY_TRANSITION);
    if ( result )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&stru_140E66FF0.ReadOperationCount;
      p_WriteOperationCount = &stru_140E66FF0.WriteOperationCount;
      v3 = &v265;
      v4 = 4LL;
      do
      {
        *((_QWORD *)v3 - 1) = p_WriteOperationCount++;
        *(_QWORD *)v3 = 8LL;
        v3 += 16;
        --v4;
      }
      while ( v4 );
      v266 = &v68;
      QueuedScb = stru_140E66FF0.QueuedScb;
      v267 = 4LL;
      v270 = (char *)&stru_140E66FF0.AbWaitObject + 4;
      TracingPrivate = stru_140E66FF0.TracingPrivate;
      v274 = &v69;
      v276 = &v70;
      v278 = &v26;
      p_OtherTransferCount = &stru_140E66FF0.OtherTransferCount;
      v282 = &v27;
      v284 = *(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 24LL;
      v286 = &v71;
      v288 = &v72;
      v290 = *(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 3LL;
      v292 = *(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 4LL;
      v294 = &v28;
      p_Spare36 = &stru_140E66FF0.Spare36;
      v269 = 8LL;
      v271 = 4LL;
      v273 = 1LL;
      v275 = 4LL;
      v277 = 4LL;
      v279 = 1LL;
      v281 = 4LL;
      v283 = 1LL;
      v285 = 8LL;
      v287 = 4LL;
      v289 = 4LL;
      v291 = 1LL;
      v293 = 1LL;
      v295 = 1LL;
      v297 = 4LL;
      result = EtwWriteEx(
                 *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                 &POP_ETW_EVENT_DIRTY_TRANSITION,
                 0LL,
                 0,
                 0LL,
                 0LL,
                 0x15u,
                 &UserData);
    }
  }
  if ( dword_140E07560 )
  {
    result = tlgKeywordOn((__int64)&dword_140E07560, 0x800000000000LL);
    if ( result )
    {
      if ( v6 > 5 )
      {
        result = tlgKeywordOn(v7, v5);
        if ( result )
        {
          Flink = (char)stru_140E66FF0.GlobalForegroundListEntry.Flink;
          p_Flink = &Flink;
          Blink = stru_140E66FF0.GlobalForegroundListEntry.Blink;
          p_Blink = &Blink;
          v110 = (char *)&Blink + 4;
          ReadOperationCount_low = LODWORD(stru_140E66FF0.ReadOperationCount);
          p_ReadOperationCount_low = &ReadOperationCount_low;
          WriteOperationCount = stru_140E66FF0.WriteOperationCount;
          v114 = &WriteOperationCount;
          OtherOperationCount = stru_140E66FF0.OtherOperationCount;
          p_OtherOperationCount = &OtherOperationCount;
          ReadTransferCount = stru_140E66FF0.ReadTransferCount;
          p_ReadTransferCount = &ReadTransferCount;
          WriteTransferCount = stru_140E66FF0.WriteTransferCount;
          p_WriteTransferCount = &WriteTransferCount;
          OtherTransferCount = stru_140E66FF0.OtherTransferCount;
          v122 = &OtherTransferCount;
          v107 = 1LL;
          v109 = 4LL;
          v111 = 4LL;
          v113 = 8LL;
          v115 = 8LL;
          v117 = 8LL;
          v119 = 8LL;
          v121 = 8LL;
          v123 = 4LL;
          v9 = ~HIBYTE(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget);
          v125 = 1LL;
          v30 = v9 >> 7;
          v124 = &v30;
          v31 = BYTE3(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) >> 6;
          v126 = &v31;
          v127 = 1LL;
          v32 = BYTE6(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) >> 6;
          v128 = &v32;
          v129 = 1LL;
          v10 = HIBYTE(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) & 0x7F;
          v131 = 1LL;
          v33 = v10;
          v130 = &v33;
          v34 = BYTE2(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) >> 6;
          v132 = &v34;
          v133 = 1LL;
          v35 = stru_140E66FF0.QueuedScb->MinQuotaCycleTarget & 1;
          v134 = &v35;
          v135 = 1LL;
          v11 = (stru_140E66FF0.QueuedScb->MinQuotaCycleTarget & 0x10000000000000LL) != 0;
          v137 = 1LL;
          v36 = v11;
          v136 = &v36;
          v12 = *(_BYTE *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 1LL) & 1;
          v139 = 1LL;
          v37 = v12;
          v138 = &v37;
          v13 = (*(_BYTE *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 1LL) & 2) != 0;
          v141 = 1LL;
          v38 = v13;
          v140 = &v38;
          v14 = (*(_BYTE *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 1LL) & 0x10) != 0;
          v143 = 1LL;
          v39 = v14;
          v142 = &v39;
          v40 = *(_BYTE *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 3LL);
          v144 = &v40;
          v145 = 1LL;
          v41 = *(_BYTE *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 4LL);
          v146 = &v41;
          v147 = 1LL;
          RankCycleTarget_high = HIDWORD(stru_140E66FF0.QueuedScb->RankCycleTarget);
          p_RankCycleTarget_high = &RankCycleTarget_high;
          v76 = v68;
          v150 = &v76;
          v149 = 4LL;
          v151 = 4LL;
          v64 = WORD2(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget);
          v152 = &v64;
          v153 = 2LL;
          v15 = (stru_140E66FF0.QueuedScb->MinQuotaCycleTarget & 4) != 0;
          v155 = 1LL;
          v42 = v15;
          v154 = &v42;
          v16 = (stru_140E66FF0.QueuedScb->MinQuotaCycleTarget & 8) != 0;
          v157 = 1LL;
          v43 = v16;
          v156 = &v43;
          v44 = **(_BYTE **)&stru_140E66FF0.ThreadTimerDelay;
          v158 = &v44;
          v159 = 1LL;
          v17 = (stru_140E66FF0.QueuedScb->MinQuotaCycleTarget & 2) != 0;
          v161 = 1LL;
          v45 = v17;
          v160 = &v45;
          v102 = *(_QWORD *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 24LL);
          v162 = &v102;
          v163 = 8LL;
          v18 = *(_BYTE *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 23LL) & 0xF;
          v165 = 1LL;
          v46 = v18;
          v164 = &v46;
          v19 = BYTE2(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) & 0x3F;
          v167 = 1LL;
          v47 = v19;
          v166 = &v47;
          v48 = *(_BYTE *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 23LL) >> 4;
          v168 = &v48;
          v169 = 1LL;
          v20 = BYTE3(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) & 0x3F;
          v171 = 1LL;
          v49 = v20;
          v170 = &v49;
          p_MaxQuotaCycleTarget = &stru_140E66FF0.QueuedScb->MaxQuotaCycleTarget;
          v172 = stru_140E66FF0.QueuedScb;
          v173 = 8LL;
          v175 = 8LL;
          RankCycleTarget = stru_140E66FF0.QueuedScb->RankCycleTarget;
          p_RankCycleTarget = &RankCycleTarget;
          v177 = 4LL;
          v50 = *(_BYTE *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 2LL);
          v178 = &v50;
          v179 = 1LL;
          v21 = BYTE6(stru_140E66FF0.QueuedScb->MinQuotaCycleTarget) & 0xF;
          v181 = 1LL;
          v51 = v21;
          v180 = &v51;
          v22 = (*(_BYTE *)(*(_QWORD *)&stru_140E66FF0.ThreadTimerDelay + 1LL) >> 2) & 3;
          v183 = 1LL;
          v52 = v22;
          v182 = &v52;
          v65 = *((_WORD *)stru_140E66FF0.SchedulerAssist + 6);
          v184 = &v65;
          v185 = 2LL;
          SchedulerAssist = stru_140E66FF0.SchedulerAssist;
          v187 = 8LL;
          LOWORD(v66) = *((_WORD *)stru_140E66FF0.SchedulerAssist + 22);
          v188 = &v66;
          v190 = (char *)stru_140E66FF0.SchedulerAssist + 32;
          v189 = 2LL;
          v191 = 8LL;
          v78 = *((_DWORD *)stru_140E66FF0.SchedulerAssist + 2);
          v192 = &v78;
          v193 = 4LL;
          v79 = *((_DWORD *)stru_140E66FF0.SchedulerAssist + 10);
          v194 = &v79;
          v195 = 4LL;
          LOWORD(v67) = *((_WORD *)stru_140E66FF0.SchedulerAssist + 23);
          v196 = &v67;
          v197 = 2LL;
          v23 = (*((_BYTE *)stru_140E66FF0.SchedulerAssist + 15) & 2) != 0;
          v199 = 1LL;
          v53 = v23;
          v198 = &v53;
          v24 = *((_BYTE *)stru_140E66FF0.SchedulerAssist + 15) & 1;
          v201 = 1LL;
          v54 = v24;
          v200 = &v54;
          v55 = *((_BYTE *)stru_140E66FF0.SchedulerAssist + 14);
          v202 = &v55;
          v203 = 1LL;
          v56 = *((_BYTE *)stru_140E66FF0.SchedulerAssist + 48);
          v204 = &v56;
          v205 = 1LL;
          v80 = *((_DWORD *)stru_140E66FF0.SchedulerAssist + 13);
          v206 = &v80;
          v207 = 4LL;
          v81 = *((_DWORD *)stru_140E66FF0.SchedulerAssist + 14);
          v208 = &v81;
          v209 = 4LL;
          v82 = *((_DWORD *)stru_140E66FF0.SchedulerAssist + 15);
          v210 = &v82;
          v211 = 4LL;
          v25 = (*((_BYTE *)stru_140E66FF0.SchedulerAssist + 15) & 4) != 0;
          v213 = 1LL;
          v57 = v25;
          v212 = &v57;
          v214 = (char *)stru_140E66FF0.SchedulerAssist + 16;
          AbWaitObject_high = HIDWORD(stru_140E66FF0.AbWaitObject);
          p_AbWaitObject_high = &AbWaitObject_high;
          AbWaitObject = (int)stru_140E66FF0.AbWaitObject;
          p_AbWaitObject = &AbWaitObject;
          UserWaitTime = stru_140E66FF0.UserWaitTime;
          p_UserWaitTime = &UserWaitTime;
          v85 = stru_140E66FF0.GlobalUpdateVpThreadPriorityListEntry.Blink;
          v222 = &v85;
          v224 = (char *)&v85 + 4;
          v215 = 16LL;
          v217 = 4LL;
          v219 = 4LL;
          v221 = 1LL;
          v223 = 4LL;
          v225 = 4LL;
          SchedulerAssistPriorityFloor = stru_140E66FF0.SchedulerAssistPriorityFloor;
          p_SchedulerAssistPriorityFloor = &SchedulerAssistPriorityFloor;
          v59 = LODWORD(stru_140E66FF0.WpsFeedback) != 0;
          KernelShadowStack_high = HIDWORD(stru_140E66FF0.KernelShadowStack);
          p_KernelShadowStack_high = &KernelShadowStack_high;
          v60 = HIDWORD(stru_140E66FF0.WpsFeedback) != 0;
          RealtimePriorityFloor = stru_140E66FF0.RealtimePriorityFloor;
          p_RealtimePriorityFloor = &RealtimePriorityFloor;
          KernelShadowStack = (int)stru_140E66FF0.KernelShadowStack;
          p_KernelShadowStack = &KernelShadowStack;
          KernelShadowStackInitial = stru_140E66FF0.KernelShadowStackInitial;
          p_KernelShadowStackInitial = &KernelShadowStackInitial;
          v90.AllFields = (unsigned __int64)stru_140E66FF0.KernelShadowStackLimit;
          v236 = &v90;
          v238 = (char *)&v90.1 + 4;
          ExtendedFeatureDisableMask = stru_140E66FF0.ExtendedFeatureDisableMask;
          p_ExtendedFeatureDisableMask = &ExtendedFeatureDisableMask;
          KernelShadowStackBase = (int)stru_140E66FF0.KernelShadowStackBase;
          p_KernelShadowStackBase = &KernelShadowStackBase;
          v244 = &v59;
          v246 = &v60;
          v93 = stru_140E66FF0.Spare35[0];
          v248 = &v93;
          v227 = 4LL;
          v229 = 4LL;
          v231 = 4LL;
          v233 = 4LL;
          v235 = 8LL;
          v237 = 4LL;
          v239 = 4LL;
          v241 = 4LL;
          v243 = 4LL;
          v245 = 1LL;
          v247 = 1LL;
          v249 = 4LL;
          v61 = *(_BYTE *)stru_140E66FF0.Spare35[1];
          v250 = &v61;
          v251 = 1LL;
          v62 = *(_BYTE *)(stru_140E66FF0.Spare35[1] + 8);
          v252 = &v62;
          v253 = 1LL;
          v94 = *(_DWORD *)(stru_140E66FF0.Spare35[1] + 16);
          v254 = &v94;
          v255 = 4LL;
          v63 = *(_BYTE *)(stru_140E66FF0.Spare35[1] + 9);
          v256 = &v63;
          v257 = 1LL;
          v95 = *(_DWORD *)(stru_140E66FF0.Spare35[1] + 20);
          v259 = 4LL;
          v258 = &v95;
          Spare36 = stru_140E66FF0.Spare36;
          v261 = 4LL;
          v260 = &Spare36;
          v262 = &v104;
          v104 = 0x1000000LL;
          v263 = 8LL;
          return tlgWriteTransfer_EtwWriteTransfer(v8, (unsigned __int8 *)&dword_14004C2F4, 0LL, 0LL, 0x51u, &v105);
        }
      }
    }
  }
  return result;
}
