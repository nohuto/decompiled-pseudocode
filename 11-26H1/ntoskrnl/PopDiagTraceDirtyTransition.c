/*
 * XREFs of PopDiagTraceDirtyTransition @ 0x140CD7F2C
 * Callers:
 *     PopCheckShutdownMarker @ 0x140CD620C (PopCheckShutdownMarker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SshSessionManagerTraceDirtyTransition @ 0x1407E9278 (SshSessionManagerTraceDirtyTransition.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140CDD068 (PopPotsLogDirtyPowerTransition.c)
 */

char PopDiagTraceDirtyTransition()
{
  __int64 v0; // rcx
  char result; // al
  PVOID *p_SparePtr; // rcx
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
  UCHAR WaitType; // [rsp+4Bh] [rbp-BDh] BYREF
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
  char Size_high; // [rsp+56h] [rbp-B2h] BYREF
  char Reserved; // [rsp+57h] [rbp-B1h] BYREF
  bool v42; // [rsp+58h] [rbp-B0h] BYREF
  bool v43; // [rsp+59h] [rbp-AFh] BYREF
  char Count; // [rsp+5Ah] [rbp-AEh] BYREF
  bool v45; // [rsp+5Bh] [rbp-ADh] BYREF
  char v46; // [rsp+5Ch] [rbp-ACh] BYREF
  char v47; // [rsp+5Dh] [rbp-ABh] BYREF
  char v48; // [rsp+5Eh] [rbp-AAh] BYREF
  char v49; // [rsp+5Fh] [rbp-A9h] BYREF
  char Size; // [rsp+60h] [rbp-A8h] BYREF
  char v51; // [rsp+61h] [rbp-A7h] BYREF
  char v52; // [rsp+62h] [rbp-A6h] BYREF
  bool v53; // [rsp+63h] [rbp-A5h] BYREF
  char v54; // [rsp+64h] [rbp-A4h] BYREF
  char v55; // [rsp+65h] [rbp-A3h] BYREF
  char v56; // [rsp+66h] [rbp-A2h] BYREF
  bool v57; // [rsp+67h] [rbp-A1h] BYREF
  unsigned __int8 v58; // [rsp+68h] [rbp-A0h] BYREF
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
  struct _KTHREAD *Thread; // [rsp+94h] [rbp-74h] BYREF
  volatile unsigned int NextProcessor; // [rsp+9Ch] [rbp-6Ch] BYREF
  int Flink_high; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v76; // [rsp+A4h] [rbp-64h] BYREF
  int Flink; // [rsp+A8h] [rbp-60h] BYREF
  int v78; // [rsp+ACh] [rbp-5Ch] BYREF
  int v79; // [rsp+B0h] [rbp-58h] BYREF
  int v80; // [rsp+B4h] [rbp-54h] BYREF
  int v81; // [rsp+B8h] [rbp-50h] BYREF
  int v82; // [rsp+BCh] [rbp-4Ch] BYREF
  int Affinity_high; // [rsp+C0h] [rbp-48h] BYREF
  int Affinity; // [rsp+C4h] [rbp-44h] BYREF
  struct _LIST_ENTRY *v85; // [rsp+C8h] [rbp-40h] BYREF
  int v86; // [rsp+D0h] [rbp-38h] BYREF
  int v87; // [rsp+D4h] [rbp-34h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-30h] BYREF
  struct _KTHREAD *v89; // [rsp+E0h] [rbp-28h] BYREF
  int v90; // [rsp+E8h] [rbp-20h] BYREF
  int v91; // [rsp+ECh] [rbp-1Ch] BYREF
  int v92; // [rsp+F0h] [rbp-18h] BYREF
  int v93; // [rsp+F4h] [rbp-14h] BYREF
  int v94; // [rsp+F8h] [rbp-10h] BYREF
  int v95; // [rsp+FCh] [rbp-Ch] BYREF
  __int64 Spare18_low; // [rsp+100h] [rbp-8h] BYREF
  PVOID SparePtr; // [rsp+108h] [rbp+0h] BYREF
  __int64 v98; // [rsp+110h] [rbp+8h] BYREF
  _LIST_ENTRY QueueListEntry; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v100; // [rsp+128h] [rbp+20h] BYREF
  __int64 v101; // [rsp+130h] [rbp+28h] BYREF
  __int64 v102; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+148h] [rbp+40h] BYREF
  UCHAR *p_WaitType; // [rsp+168h] [rbp+60h]
  __int64 v105; // [rsp+170h] [rbp+68h]
  struct _KTHREAD **p_Thread; // [rsp+178h] [rbp+70h]
  __int64 v107; // [rsp+180h] [rbp+78h]
  char *v108; // [rsp+188h] [rbp+80h]
  __int64 v109; // [rsp+190h] [rbp+88h]
  __int64 *p_Spare18_low; // [rsp+198h] [rbp+90h]
  __int64 v111; // [rsp+1A0h] [rbp+98h]
  PVOID *v112; // [rsp+1A8h] [rbp+A0h]
  __int64 v113; // [rsp+1B0h] [rbp+A8h]
  __int64 *v114; // [rsp+1B8h] [rbp+B0h]
  __int64 v115; // [rsp+1C0h] [rbp+B8h]
  _LIST_ENTRY *p_QueueListEntry; // [rsp+1C8h] [rbp+C0h]
  __int64 v117; // [rsp+1D0h] [rbp+C8h]
  struct _LIST_ENTRY **p_Blink; // [rsp+1D8h] [rbp+D0h]
  __int64 v119; // [rsp+1E0h] [rbp+D8h]
  volatile unsigned int *p_NextProcessor; // [rsp+1E8h] [rbp+E0h]
  __int64 v121; // [rsp+1F0h] [rbp+E8h]
  char *v122; // [rsp+1F8h] [rbp+F0h]
  __int64 v123; // [rsp+200h] [rbp+F8h]
  char *v124; // [rsp+208h] [rbp+100h]
  __int64 v125; // [rsp+210h] [rbp+108h]
  char *v126; // [rsp+218h] [rbp+110h]
  __int64 v127; // [rsp+220h] [rbp+118h]
  char *v128; // [rsp+228h] [rbp+120h]
  __int64 v129; // [rsp+230h] [rbp+128h]
  char *v130; // [rsp+238h] [rbp+130h]
  __int64 v131; // [rsp+240h] [rbp+138h]
  char *v132; // [rsp+248h] [rbp+140h]
  __int64 v133; // [rsp+250h] [rbp+148h]
  bool *v134; // [rsp+258h] [rbp+150h]
  __int64 v135; // [rsp+260h] [rbp+158h]
  char *v136; // [rsp+268h] [rbp+160h]
  __int64 v137; // [rsp+270h] [rbp+168h]
  bool *v138; // [rsp+278h] [rbp+170h]
  __int64 v139; // [rsp+280h] [rbp+178h]
  bool *v140; // [rsp+288h] [rbp+180h]
  __int64 v141; // [rsp+290h] [rbp+188h]
  char *p_Size_high; // [rsp+298h] [rbp+190h]
  __int64 v143; // [rsp+2A0h] [rbp+198h]
  char *v144; // [rsp+2A8h] [rbp+1A0h]
  __int64 v145; // [rsp+2B0h] [rbp+1A8h]
  int *p_Flink_high; // [rsp+2B8h] [rbp+1B0h]
  __int64 v147; // [rsp+2C0h] [rbp+1B8h]
  unsigned int *v148; // [rsp+2C8h] [rbp+1C0h]
  __int64 v149; // [rsp+2D0h] [rbp+1C8h]
  __int16 *v150; // [rsp+2D8h] [rbp+1D0h]
  __int64 v151; // [rsp+2E0h] [rbp+1D8h]
  bool *v152; // [rsp+2E8h] [rbp+1E0h]
  __int64 v153; // [rsp+2F0h] [rbp+1E8h]
  bool *v154; // [rsp+2F8h] [rbp+1F0h]
  __int64 v155; // [rsp+300h] [rbp+1F8h]
  char *p_Count; // [rsp+308h] [rbp+200h]
  __int64 v157; // [rsp+310h] [rbp+208h]
  bool *v158; // [rsp+318h] [rbp+210h]
  __int64 v159; // [rsp+320h] [rbp+218h]
  unsigned __int64 *v160; // [rsp+328h] [rbp+220h]
  __int64 v161; // [rsp+330h] [rbp+228h]
  char *v162; // [rsp+338h] [rbp+230h]
  __int64 v163; // [rsp+340h] [rbp+238h]
  char *v164; // [rsp+348h] [rbp+240h]
  __int64 v165; // [rsp+350h] [rbp+248h]
  char *v166; // [rsp+358h] [rbp+250h]
  __int64 v167; // [rsp+360h] [rbp+258h]
  char *v168; // [rsp+368h] [rbp+260h]
  __int64 v169; // [rsp+370h] [rbp+268h]
  _KPROCESS *v170; // [rsp+378h] [rbp+270h]
  __int64 v171; // [rsp+380h] [rbp+278h]
  struct _LIST_ENTRY **v172; // [rsp+388h] [rbp+280h]
  __int64 v173; // [rsp+390h] [rbp+288h]
  int *p_Flink; // [rsp+398h] [rbp+290h]
  __int64 v175; // [rsp+3A0h] [rbp+298h]
  char *p_Size; // [rsp+3A8h] [rbp+2A0h]
  __int64 v177; // [rsp+3B0h] [rbp+2A8h]
  char *v178; // [rsp+3B8h] [rbp+2B0h]
  __int64 v179; // [rsp+3C0h] [rbp+2B8h]
  char *v180; // [rsp+3C8h] [rbp+2C0h]
  __int64 v181; // [rsp+3D0h] [rbp+2C8h]
  __int16 *v182; // [rsp+3D8h] [rbp+2D0h]
  __int64 v183; // [rsp+3E0h] [rbp+2D8h]
  unsigned __int64 AffinityVersion; // [rsp+3E8h] [rbp+2E0h]
  __int64 v185; // [rsp+3F0h] [rbp+2E8h]
  int *v186; // [rsp+3F8h] [rbp+2F0h]
  __int64 v187; // [rsp+400h] [rbp+2F8h]
  unsigned __int64 v188; // [rsp+408h] [rbp+300h]
  __int64 v189; // [rsp+410h] [rbp+308h]
  int *v190; // [rsp+418h] [rbp+310h]
  __int64 v191; // [rsp+420h] [rbp+318h]
  int *v192; // [rsp+428h] [rbp+320h]
  __int64 v193; // [rsp+430h] [rbp+328h]
  int *v194; // [rsp+438h] [rbp+330h]
  __int64 v195; // [rsp+440h] [rbp+338h]
  bool *v196; // [rsp+448h] [rbp+340h]
  __int64 v197; // [rsp+450h] [rbp+348h]
  char *v198; // [rsp+458h] [rbp+350h]
  __int64 v199; // [rsp+460h] [rbp+358h]
  char *v200; // [rsp+468h] [rbp+360h]
  __int64 v201; // [rsp+470h] [rbp+368h]
  char *v202; // [rsp+478h] [rbp+370h]
  __int64 v203; // [rsp+480h] [rbp+378h]
  int *v204; // [rsp+488h] [rbp+380h]
  __int64 v205; // [rsp+490h] [rbp+388h]
  int *v206; // [rsp+498h] [rbp+390h]
  __int64 v207; // [rsp+4A0h] [rbp+398h]
  int *v208; // [rsp+4A8h] [rbp+3A0h]
  __int64 v209; // [rsp+4B0h] [rbp+3A8h]
  bool *v210; // [rsp+4B8h] [rbp+3B0h]
  __int64 v211; // [rsp+4C0h] [rbp+3B8h]
  unsigned __int64 v212; // [rsp+4C8h] [rbp+3C0h]
  __int64 v213; // [rsp+4D0h] [rbp+3C8h]
  int *p_Affinity_high; // [rsp+4D8h] [rbp+3D0h]
  __int64 v215; // [rsp+4E0h] [rbp+3D8h]
  int *p_Affinity; // [rsp+4E8h] [rbp+3E0h]
  __int64 v217; // [rsp+4F0h] [rbp+3E8h]
  unsigned __int8 *v218; // [rsp+4F8h] [rbp+3F0h]
  __int64 v219; // [rsp+500h] [rbp+3F8h]
  struct _LIST_ENTRY **v220; // [rsp+508h] [rbp+400h]
  __int64 v221; // [rsp+510h] [rbp+408h]
  char *v222; // [rsp+518h] [rbp+410h]
  __int64 v223; // [rsp+520h] [rbp+418h]
  int *v224; // [rsp+528h] [rbp+420h]
  __int64 v225; // [rsp+530h] [rbp+428h]
  int *v226; // [rsp+538h] [rbp+430h]
  __int64 v227; // [rsp+540h] [rbp+438h]
  __int64 *v228; // [rsp+548h] [rbp+440h]
  __int64 v229; // [rsp+550h] [rbp+448h]
  char *v230; // [rsp+558h] [rbp+450h]
  __int64 v231; // [rsp+560h] [rbp+458h]
  __int64 *v232; // [rsp+568h] [rbp+460h]
  __int64 v233; // [rsp+570h] [rbp+468h]
  struct _KTHREAD **v234; // [rsp+578h] [rbp+470h]
  __int64 v235; // [rsp+580h] [rbp+478h]
  char *v236; // [rsp+588h] [rbp+480h]
  __int64 v237; // [rsp+590h] [rbp+488h]
  int *v238; // [rsp+598h] [rbp+490h]
  __int64 v239; // [rsp+5A0h] [rbp+498h]
  int *v240; // [rsp+5A8h] [rbp+4A0h]
  __int64 v241; // [rsp+5B0h] [rbp+4A8h]
  bool *v242; // [rsp+5B8h] [rbp+4B0h]
  __int64 v243; // [rsp+5C0h] [rbp+4B8h]
  bool *v244; // [rsp+5C8h] [rbp+4C0h]
  __int64 v245; // [rsp+5D0h] [rbp+4C8h]
  int *v246; // [rsp+5D8h] [rbp+4D0h]
  __int64 v247; // [rsp+5E0h] [rbp+4D8h]
  char *v248; // [rsp+5E8h] [rbp+4E0h]
  __int64 v249; // [rsp+5F0h] [rbp+4E8h]
  char *v250; // [rsp+5F8h] [rbp+4F0h]
  __int64 v251; // [rsp+600h] [rbp+4F8h]
  int *v252; // [rsp+608h] [rbp+500h]
  __int64 v253; // [rsp+610h] [rbp+508h]
  char *v254; // [rsp+618h] [rbp+510h]
  __int64 v255; // [rsp+620h] [rbp+518h]
  int *v256; // [rsp+628h] [rbp+520h]
  __int64 v257; // [rsp+630h] [rbp+528h]
  int *v258; // [rsp+638h] [rbp+530h]
  __int64 v259; // [rsp+640h] [rbp+538h]
  __int64 *v260; // [rsp+648h] [rbp+540h]
  __int64 v261; // [rsp+650h] [rbp+548h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+658h] [rbp+550h] BYREF
  char v263; // [rsp+670h] [rbp+568h] BYREF
  unsigned int *v264; // [rsp+6A8h] [rbp+5A0h]
  __int64 v265; // [rsp+6B0h] [rbp+5A8h]
  _KPROCESS *Process; // [rsp+6B8h] [rbp+5B0h]
  __int64 v267; // [rsp+6C0h] [rbp+5B8h]
  char *v268; // [rsp+6C8h] [rbp+5C0h]
  __int64 v269; // [rsp+6D0h] [rbp+5C8h]
  unsigned __int16 *p_UserAffinityPrimaryGroup; // [rsp+6D8h] [rbp+5D0h]
  __int64 v271; // [rsp+6E0h] [rbp+5D8h]
  int *v272; // [rsp+6E8h] [rbp+5E0h]
  __int64 v273; // [rsp+6F0h] [rbp+5E8h]
  int *v274; // [rsp+6F8h] [rbp+5F0h]
  __int64 v275; // [rsp+700h] [rbp+5F8h]
  char *v276; // [rsp+708h] [rbp+600h]
  __int64 v277; // [rsp+710h] [rbp+608h]
  $E654FE797DBA10FBE019DD8416CA464E *v278; // [rsp+718h] [rbp+610h]
  __int64 v279; // [rsp+720h] [rbp+618h]
  char *v280; // [rsp+728h] [rbp+620h]
  __int64 v281; // [rsp+730h] [rbp+628h]
  unsigned __int64 *v282; // [rsp+738h] [rbp+630h]
  __int64 v283; // [rsp+740h] [rbp+638h]
  int *v284; // [rsp+748h] [rbp+640h]
  __int64 v285; // [rsp+750h] [rbp+648h]
  int *v286; // [rsp+758h] [rbp+650h]
  __int64 v287; // [rsp+760h] [rbp+658h]
  char *v288; // [rsp+768h] [rbp+660h]
  __int64 v289; // [rsp+770h] [rbp+668h]
  unsigned int *p_Reserved; // [rsp+778h] [rbp+670h]
  __int64 v291; // [rsp+780h] [rbp+678h]
  char *v292; // [rsp+788h] [rbp+680h]
  __int64 v293; // [rsp+790h] [rbp+688h]
  PVOID *v294; // [rsp+798h] [rbp+690h]
  __int64 v295; // [rsp+7A0h] [rbp+698h]

  v72 = (HIBYTE(stru_140E67200.UserAffinity->Count) >> 4) & 1;
  v69 = (LOBYTE(stru_140E67200.Process->Header.WaitListHead.Flink) >> 1) & 1;
  v28 = BYTE3(stru_140E67200.Process->Header.WaitListHead.Flink) >> 6;
  v71 = (BYTE6(stru_140E67200.Process->Header.WaitListHead.Flink) >> 5) & 1;
  v27 = BYTE6(stru_140E67200.Process->Header.WaitListHead.Flink) & 0xF;
  v68 = LOBYTE(stru_140E67200.Process->Header.WaitListHead.Flink) >> 4;
  v26 = stru_140E67200.UserAffinity->StaticBitmap[2];
  v70 = WORD2(stru_140E67200.Process->Header.WaitListHead.Flink);
  PopPotsLogDirtyPowerTransition(v68, HIDWORD(stru_140E67200.Affinity), LODWORD(stru_140E67200.Spare18));
  result = SshSessionManagerTraceDirtyTransition(v0);
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION);
    if ( result )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&stru_140E67200.Spare18;
      p_SparePtr = &stru_140E67200.WaitBlock[3].SparePtr;
      v3 = &v263;
      v4 = 4LL;
      do
      {
        *((_QWORD *)v3 - 1) = p_SparePtr++;
        *(_QWORD *)v3 = 8LL;
        v3 += 16;
        --v4;
      }
      while ( v4 );
      v264 = &v68;
      Process = stru_140E67200.Process;
      v265 = 4LL;
      v268 = (char *)&stru_140E67200.Affinity + 4;
      p_UserAffinityPrimaryGroup = &stru_140E67200.UserAffinityPrimaryGroup;
      v272 = &v69;
      v274 = &v70;
      v276 = &v26;
      v278 = &stru_140E67200.536;
      v280 = &v27;
      v282 = &stru_140E67200.UserAffinity->StaticBitmap[2];
      v284 = &v71;
      v286 = &v72;
      v288 = (char *)&stru_140E67200.UserAffinity->Size + 1;
      p_Reserved = &stru_140E67200.UserAffinity->Reserved;
      v292 = &v28;
      v294 = &stru_140E67200.SchedulerApc.Reserved[2];
      v267 = 8LL;
      v269 = 4LL;
      v271 = 1LL;
      v273 = 4LL;
      v275 = 4LL;
      v277 = 1LL;
      v279 = 4LL;
      v281 = 1LL;
      v283 = 8LL;
      v285 = 4LL;
      v287 = 4LL;
      v289 = 1LL;
      v291 = 1LL;
      v293 = 1LL;
      v295 = 4LL;
      result = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION, 0LL, 0, 0LL, 0LL, 0x15u, &UserData);
    }
  }
  if ( dword_140E07598 )
  {
    result = tlgKeywordOn((__int64)&dword_140E07598, 0x800000000000LL);
    if ( result )
    {
      if ( v6 > 5 )
      {
        result = tlgKeywordOn(v7, v5);
        if ( result )
        {
          WaitType = stru_140E67200.WaitBlock[3].WaitType;
          p_WaitType = &WaitType;
          Thread = stru_140E67200.WaitBlock[3].Thread;
          p_Thread = &Thread;
          v108 = (char *)&Thread + 4;
          Spare18_low = LODWORD(stru_140E67200.Spare18);
          p_Spare18_low = &Spare18_low;
          SparePtr = stru_140E67200.WaitBlock[3].SparePtr;
          v112 = &SparePtr;
          v98 = *(_QWORD *)&stru_140E67200.ThreadFlags2;
          v114 = &v98;
          QueueListEntry = stru_140E67200.QueueListEntry;
          p_QueueListEntry = &QueueListEntry;
          p_Blink = &QueueListEntry.Blink;
          NextProcessor = stru_140E67200.NextProcessor;
          p_NextProcessor = &NextProcessor;
          v105 = 1LL;
          v107 = 4LL;
          v109 = 4LL;
          v111 = 8LL;
          v113 = 8LL;
          v115 = 8LL;
          v117 = 8LL;
          v119 = 8LL;
          v121 = 4LL;
          v9 = ~HIBYTE(stru_140E67200.Process->Header.WaitListHead.Flink);
          v123 = 1LL;
          v30 = v9 >> 7;
          v122 = &v30;
          v31 = BYTE3(stru_140E67200.Process->Header.WaitListHead.Flink) >> 6;
          v124 = &v31;
          v125 = 1LL;
          v32 = BYTE6(stru_140E67200.Process->Header.WaitListHead.Flink) >> 6;
          v126 = &v32;
          v127 = 1LL;
          v10 = HIBYTE(stru_140E67200.Process->Header.WaitListHead.Flink) & 0x7F;
          v129 = 1LL;
          v33 = v10;
          v128 = &v33;
          v34 = BYTE2(stru_140E67200.Process->Header.WaitListHead.Flink) >> 6;
          v130 = &v34;
          v131 = 1LL;
          v35 = (__int64)stru_140E67200.Process->Header.WaitListHead.Flink & 1;
          v132 = &v35;
          v133 = 1LL;
          v11 = (BYTE6(stru_140E67200.Process->Header.WaitListHead.Flink) & 0x10) != 0;
          v135 = 1LL;
          v36 = v11;
          v134 = &v36;
          v12 = HIBYTE(stru_140E67200.UserAffinity->Count) & 1;
          v137 = 1LL;
          v37 = v12;
          v136 = &v37;
          v13 = (stru_140E67200.UserAffinity->Count & 0x200) != 0;
          v139 = 1LL;
          v38 = v13;
          v138 = &v38;
          v14 = (stru_140E67200.UserAffinity->Count & 0x1000) != 0;
          v141 = 1LL;
          v39 = v14;
          v140 = &v39;
          Size_high = HIBYTE(stru_140E67200.UserAffinity->Size);
          p_Size_high = &Size_high;
          v143 = 1LL;
          Reserved = stru_140E67200.UserAffinity->Reserved;
          v144 = &Reserved;
          v145 = 1LL;
          Flink_high = HIDWORD(stru_140E67200.Process->ProfileListHead.Flink);
          p_Flink_high = &Flink_high;
          v76 = v68;
          v148 = &v76;
          v147 = 4LL;
          v149 = 4LL;
          v64 = WORD2(stru_140E67200.Process->Header.WaitListHead.Flink);
          v150 = &v64;
          v151 = 2LL;
          v15 = ((__int64)stru_140E67200.Process->Header.WaitListHead.Flink & 4) != 0;
          v153 = 1LL;
          v42 = v15;
          v152 = &v42;
          v16 = ((__int64)stru_140E67200.Process->Header.WaitListHead.Flink & 8) != 0;
          v155 = 1LL;
          v43 = v16;
          v154 = &v43;
          Count = stru_140E67200.UserAffinity->Count;
          p_Count = &Count;
          v157 = 1LL;
          v17 = ((__int64)stru_140E67200.Process->Header.WaitListHead.Flink & 2) != 0;
          v159 = 1LL;
          v45 = v17;
          v158 = &v45;
          v100 = stru_140E67200.UserAffinity->StaticBitmap[2];
          v160 = &v100;
          v161 = 8LL;
          v18 = HIBYTE(stru_140E67200.UserAffinity->StaticBitmap[1]) & 0xF;
          v163 = 1LL;
          v46 = v18;
          v162 = &v46;
          v19 = BYTE2(stru_140E67200.Process->Header.WaitListHead.Flink) & 0x3F;
          v165 = 1LL;
          v47 = v19;
          v164 = &v47;
          v48 = HIBYTE(stru_140E67200.UserAffinity->StaticBitmap[1]) >> 4;
          v166 = &v48;
          v167 = 1LL;
          v20 = BYTE3(stru_140E67200.Process->Header.WaitListHead.Flink) & 0x3F;
          v169 = 1LL;
          v49 = v20;
          v168 = &v49;
          v172 = &stru_140E67200.Process->Header.WaitListHead.Blink;
          v170 = stru_140E67200.Process;
          v171 = 8LL;
          v173 = 8LL;
          Flink = (int)stru_140E67200.Process->ProfileListHead.Flink;
          p_Flink = &Flink;
          v175 = 4LL;
          Size = stru_140E67200.UserAffinity->Size;
          p_Size = &Size;
          v177 = 1LL;
          v21 = BYTE6(stru_140E67200.Process->Header.WaitListHead.Flink) & 0xF;
          v179 = 1LL;
          v51 = v21;
          v178 = &v51;
          v22 = (HIBYTE(stru_140E67200.UserAffinity->Count) >> 2) & 3;
          v181 = 1LL;
          v52 = v22;
          v180 = &v52;
          v65 = *(_WORD *)(stru_140E67200.AffinityVersion + 12);
          v182 = &v65;
          v183 = 2LL;
          AffinityVersion = stru_140E67200.AffinityVersion;
          v185 = 8LL;
          LOWORD(v66) = *(_WORD *)(stru_140E67200.AffinityVersion + 44);
          v186 = &v66;
          v188 = stru_140E67200.AffinityVersion + 32;
          v187 = 2LL;
          v189 = 8LL;
          v78 = *(_DWORD *)(stru_140E67200.AffinityVersion + 8);
          v190 = &v78;
          v191 = 4LL;
          v79 = *(_DWORD *)(stru_140E67200.AffinityVersion + 40);
          v192 = &v79;
          v193 = 4LL;
          LOWORD(v67) = *(_WORD *)(stru_140E67200.AffinityVersion + 46);
          v194 = &v67;
          v195 = 2LL;
          v23 = (*(_BYTE *)(stru_140E67200.AffinityVersion + 15) & 2) != 0;
          v197 = 1LL;
          v53 = v23;
          v196 = &v53;
          v24 = *(_BYTE *)(stru_140E67200.AffinityVersion + 15) & 1;
          v199 = 1LL;
          v54 = v24;
          v198 = &v54;
          v55 = *(_BYTE *)(stru_140E67200.AffinityVersion + 14);
          v200 = &v55;
          v201 = 1LL;
          v56 = *(_BYTE *)(stru_140E67200.AffinityVersion + 48);
          v202 = &v56;
          v203 = 1LL;
          v80 = *(_DWORD *)(stru_140E67200.AffinityVersion + 52);
          v204 = &v80;
          v205 = 4LL;
          v81 = *(_DWORD *)(stru_140E67200.AffinityVersion + 56);
          v206 = &v81;
          v207 = 4LL;
          v82 = *(_DWORD *)(stru_140E67200.AffinityVersion + 60);
          v208 = &v82;
          v209 = 4LL;
          v25 = (*(_BYTE *)(stru_140E67200.AffinityVersion + 15) & 4) != 0;
          v211 = 1LL;
          v57 = v25;
          v210 = &v57;
          v212 = stru_140E67200.AffinityVersion + 16;
          Affinity_high = HIDWORD(stru_140E67200.Affinity);
          p_Affinity_high = &Affinity_high;
          Affinity = (int)stru_140E67200.Affinity;
          p_Affinity = &Affinity;
          v58 = stru_140E67200.SavedApcStateFill[0];
          v218 = &v58;
          v85 = stru_140E67200.SavedApcState.ApcListHead[1].Flink;
          v220 = &v85;
          v222 = (char *)&v85 + 4;
          v213 = 16LL;
          v215 = 4LL;
          v217 = 4LL;
          v219 = 1LL;
          v221 = 4LL;
          v223 = 4LL;
          v86 = *(_DWORD *)&stru_140E67200.SavedApcStateFill[24];
          v224 = &v86;
          v59 = *(_DWORD *)&stru_140E67200.SchedulerApcFill5[24] != 0;
          v87 = *(_DWORD *)&stru_140E67200.SavedApcStateFill[36];
          v226 = &v87;
          v60 = *(_DWORD *)&stru_140E67200.SchedulerApcFill5[28] != 0;
          v88 = *(_QWORD *)&stru_140E67200.SavedApcStateFill[28];
          v228 = &v88;
          v230 = (char *)&v88 + 4;
          v101 = *(_QWORD *)&stru_140E67200.SavedApcStateFill[40];
          v232 = &v101;
          v89 = stru_140E67200.SchedulerApc.Thread;
          v234 = &v89;
          v236 = (char *)&v89 + 4;
          v90 = *(_DWORD *)&stru_140E67200.SchedulerApcFill5[16];
          v238 = &v90;
          v91 = *(_DWORD *)&stru_140E67200.SchedulerApc.Type;
          v240 = &v91;
          v242 = &v59;
          v244 = &v60;
          v92 = *(_DWORD *)&stru_140E67200.SchedulerApcFill5[32];
          v246 = &v92;
          v225 = 4LL;
          v227 = 4LL;
          v229 = 4LL;
          v231 = 4LL;
          v233 = 8LL;
          v235 = 4LL;
          v237 = 4LL;
          v239 = 4LL;
          v241 = 4LL;
          v243 = 1LL;
          v245 = 1LL;
          v247 = 4LL;
          v61 = *(_BYTE *)stru_140E67200.SchedulerApc.Reserved[1];
          v248 = &v61;
          v249 = 1LL;
          v62 = *((_BYTE *)stru_140E67200.SchedulerApc.Reserved[1] + 8);
          v250 = &v62;
          v251 = 1LL;
          v93 = *((_DWORD *)stru_140E67200.SchedulerApc.Reserved[1] + 4);
          v252 = &v93;
          v253 = 4LL;
          v63 = *((_BYTE *)stru_140E67200.SchedulerApc.Reserved[1] + 9);
          v254 = &v63;
          v255 = 1LL;
          v94 = *((_DWORD *)stru_140E67200.SchedulerApc.Reserved[1] + 5);
          v257 = 4LL;
          v256 = &v94;
          v95 = *(_DWORD *)&stru_140E67200.SchedulerApcFill5[48];
          v259 = 4LL;
          v258 = &v95;
          v260 = &v102;
          v102 = 0x1000000LL;
          v261 = 8LL;
          return tlgWriteTransfer_EtwWriteTransfer(v8, (unsigned __int8 *)byte_14004C80B, 0LL, 0LL, 0x51u, &v103);
        }
      }
    }
  }
  return result;
}
