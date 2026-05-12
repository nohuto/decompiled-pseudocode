/*
 * XREFs of sub_140115650 @ 0x140115650
 * Callers:
 *     sub_140071C10 @ 0x140071C10 (sub_140071C10.c)
 *     sub_1400EE760 @ 0x1400EE760 (sub_1400EE760.c)
 *     sub_140117870 @ 0x140117870 (sub_140117870.c)
 *     sub_140123D54 @ 0x140123D54 (sub_140123D54.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400B174C @ 0x1400B174C (sub_1400B174C.c)
 *     sub_1400B19A0 @ 0x1400B19A0 (sub_1400B19A0.c)
 *     sub_14011ACA0 @ 0x14011ACA0 (sub_14011ACA0.c)
 *     sub_1401228F0 @ 0x1401228F0 (sub_1401228F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_140115650(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        volatile signed __int32 *SystemArgument1,
        char *SystemArgument2)
{
  char *v4; // r14
  volatile signed __int32 *v5; // rdi
  PVOID v6; // rbx
  char v7; // al
  unsigned int *v8; // r13
  ULONG CurrentProcessorNumber; // eax
  __int16 v10; // cx
  __int16 v11; // dx
  __int64 v12; // r11
  __int64 v13; // rsi
  __int16 v14; // r15
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // eax
  signed __int32 v23; // eax
  _DWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  PIRP v27; // r15
  int GenericIrpExtension; // eax
  __int64 v29; // r9
  __int64 v30; // r10
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rax
  bool v34; // zf
  __int64 v35; // r9
  __int64 v36; // rdx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rax
  _WORD *v40; // r8
  const wchar_t *v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  const int *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  const int *v47; // rdx
  const int *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int16 v52; // r8
  int *v53; // r13
  unsigned int v54; // edx
  unsigned int v55; // ecx
  __int64 v56; // rdx
  unsigned int v57; // r8d
  __int64 v58; // rcx
  unsigned int v59; // edx
  _DWORD *v60; // r8
  __int64 v61; // rdi
  _QWORD *v62; // rcx
  __int128 v63; // xmm1
  int v64; // ecx
  unsigned int v65; // eax
  int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 (__fastcall *v69)(_QWORD *); // r15
  __int64 v70; // r14
  __int64 (__fastcall *v71)(__int64, __int64); // r12
  _QWORD **v72; // rsi
  _QWORD *v73; // rdi
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rsi
  __int64 v77; // rdi
  unsigned __int16 v78; // r14
  __int64 v79; // rdi
  unsigned __int16 v80; // r13
  _QWORD *v81; // r13
  LARGE_INTEGER ByteOffset; // r14
  __int64 v83; // rbx
  char v84; // si
  __int64 v85; // rdi
  KIRQL v86; // r15
  __int64 v87; // rcx
  __int64 v88; // rax
  PIRP v89; // rsi
  unsigned __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // rbx
  unsigned int v94; // edx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG64 v96; // rax
  bool v97; // sf
  __int64 v98; // r14
  __int64 v99; // r8
  signed __int32 v100; // ebx
  _QWORD *v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rbx
  __int64 v104; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v105; // rcx
  __int64 v106; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v107; // rcx
  __int64 v108; // rcx
  int v109; // ecx
  unsigned __int64 v110; // rdx
  __int64 v111; // rcx
  unsigned int *Information; // rax
  __int64 v113; // rcx
  const EVENT_DESCRIPTOR *v114; // rdx
  __int64 v115; // r11
  _BYTE *v116; // r10
  char v117; // r14
  unsigned __int8 v118; // di
  char v119; // r15
  char v120; // r13
  char v121; // r12
  unsigned __int8 *v122; // rsi
  unsigned int v123; // ebx
  unsigned int v124; // r9d
  __int64 v125; // rcx
  unsigned __int64 v126; // r8
  int v127; // ecx
  int v128; // ecx
  unsigned __int64 v129; // rcx
  unsigned __int64 v130; // rcx
  _BYTE *v131; // rax
  unsigned int v132; // eax
  char v133; // al
  __int64 v134; // rbx
  unsigned int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rcx
  union _SLIST_HEADER *v138; // rsi
  unsigned __int16 v139; // r15
  __int64 v140; // rdx
  unsigned __int16 *v141; // r9
  unsigned __int64 v142; // rax
  __int64 v143; // rax
  unsigned __int64 v144; // rcx
  __int64 v145; // rdx
  unsigned __int16 v146; // r9
  IRP *v147; // r12
  PIRP v148; // r13
  LARGE_INTEGER v149; // rsi
  __int64 v150; // r14
  __int64 v151; // r12
  char v152; // di
  __int64 v153; // rbx
  KIRQL v154; // r13
  __int64 v155; // rcx
  __int64 v156; // rax
  int v157; // r15d
  ULONG_PTR v158; // rax
  struct _IO_STACK_LOCATION *v159; // r8
  __int64 v160; // rdi
  LARGE_INTEGER *QuadPart; // rcx
  __int64 v162; // r14
  LARGE_INTEGER v163; // rbx
  PIRP v164; // r13
  struct _LIST_ENTRY *Blink; // rax
  __int64 v166; // rbx
  struct _LIST_ENTRY *v167; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v168; // rcx
  struct _LIST_ENTRY *v169; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v170; // rcx
  __int64 v171; // rcx
  char v172; // al
  __int16 v173; // r15
  void *v174; // rax
  __int64 v175; // r10
  volatile signed __int32 *v176; // rax
  __int64 v177; // r8
  __int64 v178; // r9
  unsigned int v179; // eax
  unsigned int v180; // ecx
  __int64 v181; // rax
  _WORD *v182; // rdx
  const wchar_t *v183; // rcx
  __int16 v184; // ax
  __int64 v185; // rax
  int v186; // eax
  const int *v187; // rcx
  __int64 v188; // rax
  int v189; // eax
  const int *v190; // rdx
  const int *v191; // rcx
  __int64 v192; // rax
  __int64 v193; // rax
  unsigned int v194; // eax
  __int64 v195; // rax
  __int64 v196; // rcx
  signed __int32 v197[8]; // [rsp+0h] [rbp-100h] BYREF
  LPCGUID ActivityId; // [rsp+20h] [rbp-E0h]
  LPCGUID RelatedActivityId; // [rsp+28h] [rbp-D8h]
  __int64 UserDataCount; // [rsp+30h] [rbp-D0h]
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-C8h]
  __int64 v202; // [rsp+40h] [rbp-C0h]
  __int64 v203; // [rsp+48h] [rbp-B8h]
  PIRP v204; // [rsp+50h] [rbp-B0h]
  signed int v205; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v206; // [rsp+64h] [rbp-9Ch]
  char v207; // [rsp+66h] [rbp-9Ah]
  __int16 v208; // [rsp+68h] [rbp-98h]
  PVOID Context; // [rsp+70h] [rbp-90h] BYREF
  __int64 v210; // [rsp+78h] [rbp-88h]
  char v211; // [rsp+80h] [rbp-80h]
  PIRP Irp; // [rsp+88h] [rbp-78h]
  unsigned int v213; // [rsp+90h] [rbp-70h] BYREF
  int v214; // [rsp+94h] [rbp-6Ch] BYREF
  _QWORD *v215; // [rsp+98h] [rbp-68h]
  IRP *v216; // [rsp+A0h] [rbp-60h]
  unsigned int v217; // [rsp+A8h] [rbp-58h]
  signed __int32 v218; // [rsp+ACh] [rbp-54h]
  volatile signed __int32 *v219; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 *v220; // [rsp+B8h] [rbp-48h]
  unsigned int *v221; // [rsp+C0h] [rbp-40h]
  __int64 v222; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v223; // [rsp+D0h] [rbp-30h]
  __int128 v224; // [rsp+D8h] [rbp-28h]
  __int128 v225; // [rsp+E8h] [rbp-18h]
  __int64 v226; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v227; // [rsp+100h] [rbp+0h] BYREF
  __int64 v228; // [rsp+108h] [rbp+8h] BYREF
  __int64 v229; // [rsp+110h] [rbp+10h] BYREF
  __int64 v230; // [rsp+118h] [rbp+18h] BYREF
  PIRP v231; // [rsp+120h] [rbp+20h] BYREF
  __int64 v232; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+130h] [rbp+30h] BYREF
  __int64 v234; // [rsp+138h] [rbp+38h] BYREF
  __int64 v235; // [rsp+140h] [rbp+40h] BYREF
  __int64 v236; // [rsp+148h] [rbp+48h] BYREF
  __int64 v237; // [rsp+150h] [rbp+50h] BYREF
  __int64 v238; // [rsp+158h] [rbp+58h] BYREF
  __int64 v239; // [rsp+160h] [rbp+60h] BYREF
  __int16 v240; // [rsp+168h] [rbp+68h]
  __int16 v241; // [rsp+16Ah] [rbp+6Ah]
  int v242; // [rsp+16Ch] [rbp+6Ch]
  const wchar_t *v243; // [rsp+170h] [rbp+70h]
  __int16 v244; // [rsp+178h] [rbp+78h]
  __int16 v245; // [rsp+17Ah] [rbp+7Ah]
  int v246; // [rsp+17Ch] [rbp+7Ch]
  const wchar_t *v247; // [rsp+180h] [rbp+80h]
  __int64 v248; // [rsp+188h] [rbp+88h] BYREF
  GUID v249; // [rsp+190h] [rbp+90h] BYREF
  __int128 v250; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v251; // [rsp+1B0h] [rbp+B0h]
  EVENT_DESCRIPTOR v252; // [rsp+1C0h] [rbp+C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+1D0h] [rbp+D0h] BYREF
  GUID v254; // [rsp+1E0h] [rbp+E0h] BYREF
  GUID v255; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v256; // [rsp+200h] [rbp+100h] BYREF
  __int64 v257; // [rsp+210h] [rbp+110h]
  __int64 v258; // [rsp+218h] [rbp+118h]
  const wchar_t *v259; // [rsp+220h] [rbp+120h]
  int v260; // [rsp+228h] [rbp+128h]
  int v261; // [rsp+22Ch] [rbp+12Ch]
  const int *v262; // [rsp+230h] [rbp+130h]
  int v263; // [rsp+238h] [rbp+138h]
  int v264; // [rsp+23Ch] [rbp+13Ch]
  _DWORD *v265; // [rsp+240h] [rbp+140h]
  __int64 v266; // [rsp+248h] [rbp+148h]
  _DWORD *v267; // [rsp+250h] [rbp+150h]
  __int64 v268; // [rsp+258h] [rbp+158h]
  const int *v269; // [rsp+260h] [rbp+160h]
  int v270; // [rsp+268h] [rbp+168h]
  int v271; // [rsp+26Ch] [rbp+16Ch]
  _DWORD *v272; // [rsp+270h] [rbp+170h]
  int v273; // [rsp+278h] [rbp+178h]
  int v274; // [rsp+27Ch] [rbp+17Ch]
  char *v275; // [rsp+280h] [rbp+180h]
  int v276; // [rsp+288h] [rbp+188h]
  int v277; // [rsp+28Ch] [rbp+18Ch]
  const wchar_t *v278; // [rsp+290h] [rbp+190h]
  __int64 v279; // [rsp+298h] [rbp+198h]
  const wchar_t *v280; // [rsp+2A0h] [rbp+1A0h]
  __int64 v281; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v282; // [rsp+2B0h] [rbp+1B0h]
  __int64 v283; // [rsp+2B8h] [rbp+1B8h]
  const wchar_t *v284; // [rsp+2C0h] [rbp+1C0h]
  __int64 v285; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v286; // [rsp+2D0h] [rbp+1D0h]
  __int64 v287; // [rsp+2D8h] [rbp+1D8h]
  const wchar_t *v288; // [rsp+2E0h] [rbp+1E0h]
  __int64 v289; // [rsp+2E8h] [rbp+1E8h]
  __int64 *v290; // [rsp+2F0h] [rbp+1F0h]
  __int64 v291; // [rsp+2F8h] [rbp+1F8h]
  const wchar_t *v292; // [rsp+300h] [rbp+200h]
  __int64 v293; // [rsp+308h] [rbp+208h]
  __int64 *v294; // [rsp+310h] [rbp+210h]
  __int64 v295; // [rsp+318h] [rbp+218h]
  const wchar_t *v296; // [rsp+320h] [rbp+220h]
  __int64 v297; // [rsp+328h] [rbp+228h]
  __int64 *v298; // [rsp+330h] [rbp+230h]
  __int64 v299; // [rsp+338h] [rbp+238h]
  const wchar_t *v300; // [rsp+340h] [rbp+240h]
  __int64 v301; // [rsp+348h] [rbp+248h]
  __int64 *v302; // [rsp+350h] [rbp+250h]
  __int64 v303; // [rsp+358h] [rbp+258h]
  const wchar_t *v304; // [rsp+360h] [rbp+260h]
  __int64 v305; // [rsp+368h] [rbp+268h]
  PIRP *v306; // [rsp+370h] [rbp+270h]
  __int64 v307; // [rsp+378h] [rbp+278h]
  const wchar_t *v308; // [rsp+380h] [rbp+280h]
  __int64 v309; // [rsp+388h] [rbp+288h]
  __int64 *v310; // [rsp+390h] [rbp+290h]
  __int64 v311; // [rsp+398h] [rbp+298h]
  struct _EVENT_DATA_DESCRIPTOR v312; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v313; // [rsp+400h] [rbp+300h]
  __int64 v314; // [rsp+408h] [rbp+308h]
  const wchar_t *v315; // [rsp+410h] [rbp+310h]
  int v316; // [rsp+418h] [rbp+318h]
  int v317; // [rsp+41Ch] [rbp+31Ch]
  const int *v318; // [rsp+420h] [rbp+320h]
  int v319; // [rsp+428h] [rbp+328h]
  int v320; // [rsp+42Ch] [rbp+32Ch]
  char *v321; // [rsp+430h] [rbp+330h]
  __int64 v322; // [rsp+438h] [rbp+338h]
  char *v323; // [rsp+440h] [rbp+340h]
  __int64 v324; // [rsp+448h] [rbp+348h]
  const int *v325; // [rsp+450h] [rbp+350h]
  int v326; // [rsp+458h] [rbp+358h]
  int v327; // [rsp+45Ch] [rbp+35Ch]
  char *v328; // [rsp+460h] [rbp+360h]
  int v329; // [rsp+468h] [rbp+368h]
  int v330; // [rsp+46Ch] [rbp+36Ch]
  char *v331; // [rsp+470h] [rbp+370h]
  int v332; // [rsp+478h] [rbp+378h]
  int v333; // [rsp+47Ch] [rbp+37Ch]
  const wchar_t *v334; // [rsp+480h] [rbp+380h]
  __int64 v335; // [rsp+488h] [rbp+388h]
  const wchar_t *v336; // [rsp+490h] [rbp+390h]
  __int64 v337; // [rsp+498h] [rbp+398h]
  volatile signed __int32 **v338; // [rsp+4A0h] [rbp+3A0h]
  __int64 v339; // [rsp+4A8h] [rbp+3A8h]
  const wchar_t *v340; // [rsp+4B0h] [rbp+3B0h]
  __int64 v341; // [rsp+4B8h] [rbp+3B8h]
  PVOID *p_Context; // [rsp+4C0h] [rbp+3C0h]
  __int64 v343; // [rsp+4C8h] [rbp+3C8h]
  const wchar_t *v344; // [rsp+4D0h] [rbp+3D0h]
  __int64 v345; // [rsp+4D8h] [rbp+3D8h]
  __int64 *v346; // [rsp+4E0h] [rbp+3E0h]
  __int64 v347; // [rsp+4E8h] [rbp+3E8h]
  const wchar_t *v348; // [rsp+4F0h] [rbp+3F0h]
  __int64 v349; // [rsp+4F8h] [rbp+3F8h]
  __int64 *v350; // [rsp+500h] [rbp+400h]
  __int64 v351; // [rsp+508h] [rbp+408h]
  const wchar_t *v352; // [rsp+510h] [rbp+410h]
  __int64 v353; // [rsp+518h] [rbp+418h]
  __int64 *v354; // [rsp+520h] [rbp+420h]
  __int64 v355; // [rsp+528h] [rbp+428h]
  const wchar_t *v356; // [rsp+530h] [rbp+430h]
  __int64 v357; // [rsp+538h] [rbp+438h]
  __int64 *v358; // [rsp+540h] [rbp+440h]
  __int64 v359; // [rsp+548h] [rbp+448h]
  const wchar_t *v360; // [rsp+550h] [rbp+450h]
  __int64 v361; // [rsp+558h] [rbp+458h]
  __int64 *v362; // [rsp+560h] [rbp+460h]
  __int64 v363; // [rsp+568h] [rbp+468h]
  const wchar_t *v364; // [rsp+570h] [rbp+470h]
  __int64 v365; // [rsp+578h] [rbp+478h]
  __int64 *v366; // [rsp+580h] [rbp+480h]
  __int64 v367; // [rsp+588h] [rbp+488h]

  Context = SystemArgument2;
  v219 = SystemArgument1;
  v4 = SystemArgument2;
  v213 = 0;
  v5 = SystemArgument1;
  v208 = 0;
  LOBYTE(v6) = 0;
  v218 = 0;
  v222 = 0LL;
  v215 = 0LL;
  if ( !SystemArgument2 || !SystemArgument1 )
    return;
  while ( _InterlockedCompareExchange(SystemArgument1 + 10, 1, 0) )
    ;
  if ( _InterlockedCompareExchange(SystemArgument1 + 11, 1, 0) )
  {
    _InterlockedExchange(SystemArgument1 + 10, 0);
    goto LABEL_277;
  }
  _InterlockedOr(v197, 0);
  _InterlockedExchange(SystemArgument1 + 10, 0);
  _InterlockedOr(v197, 0);
  if ( **((_QWORD **)SystemArgument2 + 159) == 1LL )
    goto LABEL_275;
  v6 = DeferredContext;
  v7 = SystemArgument2[1728];
  v8 = (unsigned int *)(*(_QWORD *)SystemArgument1 + 16LL * *((unsigned __int16 *)SystemArgument1 + 17));
  v221 = v8;
  v207 = v7;
  if ( !DeferredContext )
    v6 = 0LL;
  v223 = v6;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v10 = *((_WORD *)v5 + 18);
  v11 = *((_WORD *)v8 + 7) & 1;
  v217 = CurrentProcessorNumber;
  if ( v11 == v10 )
    goto LABEL_275;
  v12 = -1LL;
  while ( 1 )
  {
    v13 = *((unsigned __int16 *)v8 + 5);
    v14 = *((_WORD *)v8 + 4);
    v15 = *((unsigned __int16 *)v8 + 6);
    v16 = *((unsigned __int16 *)v8 + 7);
    v206 = *((_WORD *)v8 + 6);
    LOWORD(v205) = v13;
    v17 = (_WORD)v13 ? 192 * v13 + *((_QWORD *)v4 + 91) - 192LL : *((_QWORD *)v4 + 89);
    v18 = *(unsigned int *)(v17 + 124);
    v210 = v17;
    LODWORD(v220) = v18 - 1;
    if ( (unsigned int)v15 >= (int)v18 - 1 )
      break;
    v19 = v15 << 7;
    *(_BYTE *)(*(_QWORD *)(v17 + 32) + (v15 << 7) + 60) &= ~1u;
    if ( (*(_BYTE *)(*(_QWORD *)(v17 + 32) + (v15 << 7) + 60) & 8) != 0
      || (*(_BYTE *)(*(_QWORD *)(v17 + 32) + v19 + 60) & 2) != 0 )
    {
      Irp = 0LL;
    }
    else
    {
      Irp = *(PIRP *)(*(_QWORD *)(v17 + 32) + v19 + 24);
    }
    v20 = *(_QWORD *)(v17 + 32);
    v21 = *(_QWORD *)(v20 + v19 + 16);
    if ( v21 )
    {
      *(_QWORD *)(v20 + v19 + 16) = 0LL;
      v13 = *(unsigned __int16 *)(*(_QWORD *)(v17 + 32) + v19 + 52);
      v22 = *(_DWORD *)(v21 + 32);
      if ( v22 )
      {
        memset_0(*(void **)(v21 + 16), 0, 8LL * v22);
        *(_DWORD *)(v21 + 32) = 0;
      }
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*((_QWORD *)Context + 110) + 8 * v13), (PSLIST_ENTRY)v21);
      v17 = v210;
      LOWORD(v13) = v205;
    }
    *(_WORD *)(v17 + 140) = v14;
    if ( (((unsigned int)v16 >> 9) & 7) != 0 )
    {
      if ( (((unsigned int)v16 >> 9) & 7) == 1 )
      {
        switch ( (unsigned __int8)((unsigned int)v16 >> 1) )
        {
          case 0u:
          case 1u:
          case 2u:
          case 3u:
          case 5u:
          case 6u:
          case 7u:
          case 8u:
          case 9u:
          case 0xAu:
          case 0xCu:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x1Cu:
          case 0x1Fu:
          case 0x20u:
          case 0x21u:
          case 0x22u:
          case 0x80u:
          case 0x81u:
          case 0x83u:
            goto LABEL_30;
          case 0xBu:
          case 0x10u:
          case 0x11u:
            v205 = -2147483210;
            break;
          case 0x12u:
          case 0x13u:
          case 0x16u:
          case 0x18u:
          case 0x19u:
          case 0x1Au:
            goto LABEL_36;
          case 0x14u:
            v205 = -1073741800;
            break;
          case 0x1Bu:
            v205 = -1073741637;
            break;
          case 0x1Eu:
          case 0x82u:
            goto LABEL_28;
          default:
            goto LABEL_41;
        }
      }
      else
      {
        if ( (((unsigned int)v16 >> 9) & 7) == 2 && (unsigned __int8)((unsigned int)v16 >> 1) == 134 )
          JUMPOUT(0x1401158DELL);
LABEL_41:
        v205 = -1073741435;
      }
    }
    else
    {
      switch ( (unsigned __int8)((unsigned int)v16 >> 1) )
      {
        case 0u:
          v205 = 0;
          break;
        case 1u:
        case 2u:
        case 0xBu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x16u:
        case 0x18u:
        case 0x1Eu:
        case 0x80u:
        case 0x81u:
        case 0x83u:
LABEL_30:
          v205 = -1073741808;
          break;
        case 5u:
        case 6u:
        case 0x14u:
LABEL_36:
          v205 = -1073741436;
          break;
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0x1Bu:
          v205 = -1073741248;
          break;
        case 0xCu:
          v205 = -1073740758;
          break;
        case 0x15u:
LABEL_28:
          v205 = -1073741790;
          break;
        case 0x19u:
        case 0x1Au:
          v205 = -1073741643;
          break;
        case 0x82u:
          v205 = -1073741661;
          break;
        default:
          goto LABEL_41;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v17 + 32) + v19 + 61) & 1) != 0 )
    {
      v23 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)_InterlockedExchange64(
                                                       (volatile __int64 *)(*(_QWORD *)(v17 + 32) + v19 + 72),
                                                       0LL)
                                        + 4268LL),
              1,
              0);
      v24 = Context;
      if ( !v23 )
      {
        v15 = *((_QWORD *)Context + 16);
        v25 = *(_QWORD *)(v15 + 160);
        if ( *(_BYTE *)v25 == 1
          && _InterlockedExchangeAdd(
               *(volatile signed __int32 **)(*(_QWORD *)(v25 + 16)
                                           + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v17 + 32) + v19 + 52)),
               0xFFFFFFFF) == 1 )
        {
          PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v15 + 160) + 8LL), 0LL, 2LL);
          v17 = v210;
        }
      }
    }
    else
    {
      v24 = Context;
    }
    v26 = *(_QWORD *)(v17 + 32);
    if ( *(_QWORD *)(v26 + v19 + 32) )
    {
      (*(void (__fastcall **)(_DWORD *, _QWORD, unsigned int *))(v26 + v19 + 32))(v24, *(_QWORD *)(v26 + v19 + 40), v8);
      v17 = v210;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v17 + 32) + v19 + 60) & 0x20) != 0 && !_interlockedbittestandset(v24 + 268, 6u) )
    {
      IoQueueWorkItem(*((PIO_WORKITEM *)v24 + 130), (PIO_WORKITEM_ROUTINE)sub_1400F2360, DelayedWorkQueue, v24);
      v17 = v210;
    }
    v27 = Irp;
    if ( !Irp )
      goto LABEL_148;
    if ( v205 < 0 )
    {
      Irp->IoStatus.Information = 0LL;
      v214 = 0;
      GenericIrpExtension = IoGetGenericIrpExtension(v27, &v214, 4LL);
      if ( (int)(GenericIrpExtension + 0x80000000) < 0 || GenericIrpExtension == -1073741275 )
      {
        BYTE1(v214) |= 4u;
        HIWORD(v214) = v16;
        LOBYTE(v29) = 1;
        IoSetGenericIrpExtension(v27, &v214, 4LL, v29);
      }
      v30 = *((_QWORD *)v24 + 16);
      v232 = v16;
      v231 = v27;
      v31 = *(_QWORD *)(v210 + 24);
      v32 = v19 + *(_QWORD *)(v210 + 32);
      v230 = (unsigned __int16)v13;
      v254 = 0LL;
      v242 = 0;
      v33 = 2LL * *(unsigned __int16 *)(v32 + 56);
      EventDescriptor = (EVENT_DESCRIPTOR)xmmword_14014AE88;
      v229 = *(_QWORD *)(*(_QWORD *)(v31 + 8 * v33) + 56LL);
      v228 = *(_QWORD *)(*(_QWORD *)(v31 + 16LL * *(unsigned __int16 *)(v32 + 56)) + 48LL);
      v227 = *(_QWORD *)(*(_QWORD *)(v31 + 16LL * *(unsigned __int16 *)(v32 + 56)) + 40LL);
      v226 = *(unsigned int *)(*(_QWORD *)(v31 + 16LL * *(unsigned __int16 *)(v32 + 56)) + 4LL);
      v34 = (v24[34] & 2) == 0;
      v248 = **(unsigned int **)(v31 + 16LL * *(unsigned __int16 *)(v32 + 56));
      if ( !v34 )
        EventDescriptor.Keyword |= 0x8000uLL;
      v35 = *(_QWORD *)(v30 + 16);
      v36 = *(_QWORD *)(v35 + 48);
      if ( !v36 )
        goto LABEL_68;
      v37 = *(unsigned __int16 *)(v35 + 40);
      if ( !(_WORD)v37 )
        goto LABEL_68;
      v38 = v37 >> 1;
      if ( !(v37 >> 1) )
        goto LABEL_68;
      while ( 1 )
      {
        v39 = v38 - 1;
        v40 = (_WORD *)(v36 + 2 * v39);
        --v38;
        if ( *v40 == 92 )
          break;
        if ( !(_DWORD)v39 )
          goto LABEL_68;
      }
      v41 = v40 + 1;
      if ( !v40 )
LABEL_68:
        v41 = *(const wchar_t **)(v35 + 48);
      v243 = v41;
      v240 = *(_WORD *)(v35 + 40) + v36 - (_WORD)v41;
      v256.Ptr = v30 + 56;
      v241 = v240 + 2;
      *(_QWORD *)&v256.Size = 4LL;
      v257 = v30 + 1032;
      v258 = 16LL;
      if ( v41 )
      {
        v42 = -1LL;
        do
          v34 = v41[++v42] == 0;
        while ( !v34 );
        v43 = 2 * v42 + 2;
      }
      else
      {
        v43 = 10;
        v41 = L"NULL";
      }
      v259 = v41;
      v44 = (const int *)*((_QWORD *)v24 + 99);
      v260 = v43;
      v261 = 0;
      if ( v44 )
      {
        v45 = -1LL;
        do
          ++v45;
        while ( *((_BYTE *)v44 + v45) );
        v46 = v45 + 1;
        v47 = &dword_140149108;
      }
      else
      {
        v47 = &dword_140149108;
        v46 = 1;
        v44 = &dword_140149108;
      }
      v263 = v46;
      v262 = v44;
      v48 = (const int *)*((_QWORD *)v24 + 94);
      v265 = v24 + 1;
      v267 = v24 + 186;
      v264 = 0;
      v266 = 2LL;
      v268 = 1LL;
      if ( v48 )
        v47 = v48;
      else
        v48 = &dword_140149108;
      v49 = -1LL;
      do
        ++v49;
      while ( *((_BYTE *)v48 + v49) );
      v269 = v47;
      v270 = v49 + 1;
      v50 = -1LL;
      v271 = 0;
      v272 = v24 + 200;
      do
        ++v50;
      while ( *((_BYTE *)v24 + v50 + 800) );
      v274 = 0;
      v273 = v50 + 1;
      v51 = -1LL;
      v275 = (char *)v24 + 841;
      do
        ++v51;
      while ( *((_BYTE *)v24 + v51 + 841) );
      v277 = 0;
      v276 = v51 + 1;
      v279 = 40LL;
      v278 = L"NVMe command failed";
      v281 = 10LL;
      v280 = L"CDW0";
      v282 = &v248;
      v284 = L"NSID";
      v286 = &v226;
      v288 = L"CDW10|CDW11";
      v290 = &v227;
      v292 = L"CDW12|CDW13";
      v294 = &v228;
      v296 = L"CDW14|CDW15";
      v298 = &v229;
      v300 = L"SQ ID";
      v302 = &v230;
      v304 = L"Irp";
      v306 = &v231;
      v308 = L"Command status";
      v310 = &v232;
      v283 = 8LL;
      v285 = 10LL;
      v287 = 8LL;
      v289 = 24LL;
      v291 = 8LL;
      v293 = 24LL;
      v295 = 8LL;
      v297 = 24LL;
      v299 = 8LL;
      v301 = 12LL;
      v303 = 8LL;
      v305 = 8LL;
      v307 = 8LL;
      v309 = 30LL;
      v311 = 8LL;
      EtwWriteEx(RegHandle, &EventDescriptor, 0LL, 1u, &v254, 0LL, 0x1Au, &v256);
      v17 = v210;
    }
    else
    {
      Irp->IoStatus.Information = *(unsigned int *)(*(_QWORD *)(v17 + 32) + v19 + 48);
    }
    v52 = v206;
    v53 = *(int **)(*(_QWORD *)(v17 + 24)
                  + 16LL * *(unsigned __int16 *)(((unsigned __int64)v206 << 7) + *(_QWORD *)(v17 + 32) + 56));
    if ( (v24[336] & 2) != 0 )
    {
      v54 = v221[1];
      v55 = *v221;
      v34 = *v24 == 1314276178;
      *(_DWORD *)((char *)&v225 + 10) = 0;
      HIWORD(v225) = 0;
      LOWORD(v224) = v13;
      WORD1(v224) = *((_WORD *)v219 + 16);
      DWORD1(v224) = *v53;
      *((_QWORD *)&v224 + 1) = v27;
      *(_QWORD *)&v225 = __PAIR64__(v54, v55);
      WORD4(v225) = v16;
      if ( v34 )
      {
        v56 = *(_QWORD *)(*((_QWORD *)v24 + 169) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
        v57 = *(_DWORD *)(v56 + 12);
        v58 = v56 + 64;
        _InterlockedOr(v197, 0);
        if ( v57 && v56 != -64 )
        {
          v59 = _InterlockedIncrement((volatile signed __int32 *)v56) % v57;
          v60 = Context;
          v61 = v58 + ((unsigned __int64)v59 << 6);
          if ( (*((_DWORD *)Context + 330) & 1) != 0 )
            *(_DWORD *)(v61 + 4) = _InterlockedIncrement((volatile signed __int32 *)Context + 352);
          else
            *(_DWORD *)(v61 + 4) = v59;
          *(_WORD *)v61 = 1;
          v62 = (_QWORD *)(v61 + 8);
          *(_WORD *)(v61 + 2) = (_WORD)v13 != 0;
          if ( (v60[330] & 2) != 0 )
            KeQuerySystemTimePrecise(v62);
          else
            *v62 = MEMORY[0xFFFFF78000000014];
          v63 = v225;
          *(_OWORD *)(v61 + 16) = v224;
          *(_OWORD *)(v61 + 32) = v63;
          v24 = Context;
        }
        v17 = v210;
        v52 = v206;
      }
    }
    v64 = *v53;
    v65 = (unsigned __int8)*v53;
    if ( v65 <= 8 && (v66 = 310, _bittest(&v66, v65)) || v65 == 25 )
    {
      LODWORD(v216) = 1;
LABEL_110:
      v67 = *(_QWORD *)(v17 + 32);
      v215 = 0LL;
      v68 = *(unsigned int *)(((unsigned __int64)v52 << 7) + v67 + 80);
      if ( (_DWORD)v68 )
      {
        v69 = (__int64 (__fastcall *)(_QWORD *))*((_QWORD *)v24 + 86);
        v70 = *(unsigned int *)(((unsigned __int64)v52 << 7) + v67 + 80);
        v71 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)v24 + 87);
        v72 = (_QWORD **)(*((_QWORD *)v24 + 85)
                        + 16LL * ((*((unsigned int (__fastcall **)(__int64))v24 + 88))(v68) % v24[167]));
        v73 = *v72;
        if ( *v72 == v72 )
        {
          v76 = (__int64)v215;
        }
        else
        {
          while ( 1 )
          {
            v74 = v69(v73);
            v75 = v71(v74, v70);
            if ( !v75 )
              break;
            if ( v75 >= 0 )
            {
              v73 = (_QWORD *)*v73;
              if ( v73 != v72 )
                continue;
            }
            v215 = 0LL;
            goto LABEL_125;
          }
          v76 = (__int64)(v73 - 5);
          v215 = v73 - 5;
        }
        if ( v76 )
        {
          v77 = v210;
          v78 = v206;
          if ( (*(_DWORD *)(*(_QWORD *)(v76 + 608) + 4LL) & 1) != 0 )
            sub_1400B19A0(*(_QWORD *)(v210 + 32) + ((unsigned __int64)v206 << 7), v53, v76, v205, v217);
          if ( (*(_DWORD *)(*(_QWORD *)(v76 + 608) + 4LL) & 2) != 0 && (v16 & 0x1FE) != 0 )
            sub_1400B174C(*(_DWORD *)(v77 + 32) + (v78 << 7), v76, v53, (int)v221);
        }
LABEL_125:
        v27 = Irp;
      }
      else
      {
        v215 = 0LL;
      }
      goto LABEL_126;
    }
    LODWORD(v216) = 0;
    if ( (_BYTE)v64 == 9 )
    {
      if ( (v53[11] & 4) != 0 )
        goto LABEL_110;
    }
    else if ( !(_BYTE)v64 )
    {
      goto LABEL_110;
    }
LABEL_126:
    v79 = v210;
    v80 = v206;
    if ( *(char *)(((unsigned __int64)v206 << 7) + *(_QWORD *)(v210 + 32) + 60) < 0 )
    {
      v81 = Context;
      ByteOffset = v27->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset;
      v83 = *((_QWORD *)Context + 16);
      v84 = *(_BYTE *)(ByteOffset.QuadPart + 126);
      v85 = *(_QWORD *)(ByteOffset.QuadPart + 24);
      v86 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v83 + 1144) + 8LL) + 96LL))(
        *(_QWORD *)(v83 + 1144),
        v85,
        (v84 & 1) == 0);
      if ( v86 < 2u )
        KeLowerIrql(v86);
      v87 = *(_QWORD *)(*(_QWORD *)(ByteOffset.QuadPart + 40) + 184LL);
      *(_QWORD *)(v87 + 8) = *(_QWORD *)(ByteOffset.QuadPart + 48);
      *(_QWORD *)(v87 + 24) = *(_QWORD *)(ByteOffset.QuadPart + 56);
      v88 = *(unsigned int *)(ByteOffset.QuadPart + 120);
      *(_QWORD *)(ByteOffset.QuadPart + 24) = 0LL;
      *(_QWORD *)(ByteOffset.QuadPart + 88) = 0LL;
      *(_BYTE *)(ByteOffset.QuadPart + 126) = 0;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(v81[112] + 8 * v88), (PSLIST_ENTRY)ByteOffset.QuadPart);
      v79 = v210;
      v80 = v206;
    }
    v89 = Irp;
    if ( (int)IoGetIoAttributionHandle(Irp, &v222) >= 0 )
    {
      v90 = (unsigned __int64)v80 << 7;
      v91 = *(_QWORD *)(*(_QWORD *)(v79 + 32) + v90 + 64);
      v92 = *(_QWORD *)(v79 + 32);
      v93 = v222;
      v250 = 0LL;
      QpcTimeStamp = 0LL;
      v94 = *(_DWORD *)(v92 + v90 + 48);
      CurrentStackLocation = v89->Tail.Overlay.CurrentStackLocation;
      v251 = 0LL;
      LODWORD(v250) = 1;
      LODWORD(v90) = CurrentStackLocation->MajorFunction;
      *(_QWORD *)&v251 = v91;
      *(_QWORD *)((char *)&v250 + 4) = __PAIR64__(v94, v90);
      v96 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      v97 = v89->IoStatus.Status < 0;
      *((_QWORD *)&v251 + 1) = v96;
      if ( v97 )
        DWORD1(v250) |= 0x400u;
      IoRecordIoAttribution(v93, &v250);
    }
    v98 = v217;
    v99 = *(unsigned __int16 *)(((unsigned __int64)v80 << 7) + *(_QWORD *)(v79 + 32) + 52);
    if ( (_DWORD)v99 != v217 )
    {
      v34 = (_DWORD)v216 == 0;
      v4 = (char *)Context;
      v134 = *(_QWORD *)(*((_QWORD *)Context + 138) + 8 * v99);
      v89->IoStatus.Status = v205;
      if ( !v34 )
        v89->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v215;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(v134 + 192),
        (PSLIST_ENTRY)(((unsigned __int64)&v89->Tail.Overlay.DriverContext[1] + 7) & 0xFFFFFFFFFFFFFFF0uLL));
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v134 + 256), 1, 0) )
        KeInsertQueueDpc(*(PRKDPC *)(v134 + 24), (PVOID)v134, 0LL);
      goto LABEL_149;
    }
    if ( (_DWORD)v216 )
    {
      v100 = v205;
      v89->IoStatus.Status = v205;
      IofCompleteRequest(v89, 0);
      v101 = v215;
      v102 = v215[16];
      if ( *(_BYTE *)v102
        || _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v102 + 24) + 8 * v98), 0xFFFFFFFF) != 1 )
      {
        v4 = (char *)Context;
        goto LABEL_150;
      }
      v103 = *(_QWORD *)(v101[2] + 128LL);
      v104 = v101[16];
      if ( v104 )
      {
        if ( *(_QWORD *)(v104 + 8) )
        {
          v105 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v104 + 40);
          if ( v105 )
          {
            if ( ExAcquireRundownProtectionCacheAware(v105) )
            {
              PoFxIdleComponent(**(_QWORD **)(v101[16] + 8LL), 0LL, 2LL);
              v106 = v101[16];
              if ( v106 )
              {
                if ( *(_QWORD *)(v106 + 8) )
                {
                  v107 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v106 + 40);
                  if ( v107 )
                    ExReleaseRundownProtectionCacheAware(v107);
                }
              }
            }
          }
        }
      }
      v108 = *(_QWORD *)(v103 + 160);
      if ( *(_BYTE *)v108 == 1 )
        PoFxIdleComponent(**(_QWORD **)(v108 + 8), 0LL, 2LL);
    }
    else
    {
      v34 = byte_140168DAA == 0;
      v89->IoStatus.Status = v205;
      *((_BYTE *)&v89->Tail.CompletionKey + 21) = -84;
      if ( v34 )
        goto LABEL_213;
      v249 = 0LL;
      IoGetActivityIdIrp(v89, &v249);
      v111 = (__int64)v89->Tail.Overlay.CurrentStackLocation;
      if ( *(_BYTE *)v111 == 14 )
      {
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_213;
        v114 = &stru_140148B18;
        goto LABEL_212;
      }
      if ( *(_BYTE *)v111 != 15 )
      {
        if ( *(_BYTE *)v111 != 27 )
          goto LABEL_213;
        if ( *(_BYTE *)(v111 + 1) == 7 && !*(_DWORD *)(v111 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            Information = (unsigned int *)v89->IoStatus.Information;
            if ( Information )
              v113 = *Information;
            else
              v113 = 0LL;
            LODWORD(RelatedActivityId) = v89->IoStatus.Status;
            LODWORD(ActivityId) = v113;
            sub_140056AB0(v113, v110, &v249, v89, ActivityId, RelatedActivityId);
          }
          goto LABEL_213;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_213;
        v114 = &stru_140149FE8;
LABEL_212:
        LODWORD(ActivityId) = v89->IoStatus.Status;
        sub_140052F3C(v111, v114, &v249, v89, ActivityId);
        goto LABEL_213;
      }
      if ( byte_1401694F1 >= 0 )
        goto LABEL_213;
      v115 = *(_QWORD *)(v111 + 8);
      v116 = 0LL;
      v117 = 0;
      v118 = 0;
      v119 = 0;
      v120 = 0;
      v121 = 0;
      if ( *(_BYTE *)(v115 + 2) == 40 )
      {
        v122 = 0LL;
        if ( *(_DWORD *)(v115 + 20) )
          goto LABEL_213;
        v123 = *(_DWORD *)(v115 + 56);
        v124 = 0;
        if ( !v123 )
          goto LABEL_189;
        while ( 2 )
        {
          v125 = *(unsigned int *)(v115 + 4LL * v124 + 120);
          if ( (unsigned int)v125 >= 0x80 )
          {
            v126 = *(unsigned int *)(v115 + 16);
            if ( (unsigned int)v125 < (unsigned int)v126 )
            {
              v110 = (unsigned int)v125;
              v127 = *(_DWORD *)(v125 + v115) - 64;
              if ( v127 )
              {
                v128 = v127 - 1;
                if ( v128 )
                {
                  if ( v128 == 1 && v110 + 40 <= v126 )
                  {
                    if ( *(_DWORD *)(v110 + v115 + 12) )
                      v122 = (unsigned __int8 *)(v110 + v115 + 32);
                    v116 = *(_BYTE **)(v110 + v115 + 24);
                    goto LABEL_188;
                  }
                  goto LABEL_183;
                }
                v129 = v110 + 56;
              }
              else
              {
                v129 = v110 + 40;
              }
              if ( v129 <= v126 )
              {
                if ( *(_BYTE *)(v110 + v115 + 10) )
                  v122 = (unsigned __int8 *)(v110 + v115 + 24);
                v116 = *(_BYTE **)(v110 + v115 + 16);
LABEL_188:
                v117 = *(_BYTE *)(v110 + v115 + 8);
                v118 = *(_BYTE *)(v110 + v115 + 9);
LABEL_189:
                if ( v122 )
                {
                  v130 = *v122;
                  v89 = Irp;
                  goto LABEL_192;
                }
                goto LABEL_213;
              }
            }
          }
LABEL_183:
          if ( ++v124 >= v123 )
            goto LABEL_189;
          continue;
        }
      }
      v130 = *(unsigned __int8 *)(v115 + 72);
      v116 = *(_BYTE **)(v115 + 32);
      v118 = *(_BYTE *)(v115 + 11);
      v117 = *(_BYTE *)(v115 + 4);
      if ( *(_BYTE *)(v115 + 2) )
        goto LABEL_213;
LABEL_192:
      LOBYTE(v130) = v130 - 8;
      if ( (v130 & 0x5D) == 0 )
      {
        if ( *(_BYTE *)(v115 + 3) == 1 || !v116 || !v118 )
          goto LABEL_208;
        LOBYTE(v110) = 0;
        v130 = (unsigned __int64)&v116[v118];
        v131 = v116 + 8;
        if ( (unsigned __int8)((*v116 & 0x7F) - 114) <= 1u )
        {
          if ( (unsigned __int64)v131 <= v130 )
          {
            v120 = v116[2];
            v119 = v116[1] & 0xF;
            v121 = v116[3];
            goto LABEL_206;
          }
        }
        else if ( (unsigned __int64)v131 <= v130 )
        {
          v110 = (unsigned __int64)(v116 + 13);
          v119 = v116[2] & 0xF;
          v132 = v118;
          if ( (unsigned int)(unsigned __int8)v116[7] + 8 <= v118 )
            v132 = (unsigned __int8)v116[7] + 8;
          v130 = (unsigned __int64)&v116[v132];
          if ( v110 <= v130 )
            v120 = v116[12];
          if ( (unsigned __int64)(v116 + 14) <= v130 )
            v121 = *(_BYTE *)v110;
LABEL_206:
          LOBYTE(v110) = 1;
        }
        if ( !(_BYTE)v110 )
        {
LABEL_208:
          v121 = 0;
          v120 = 0;
          v119 = 0;
        }
        v133 = *(_BYTE *)(v115 + 3);
        v204 = v89;
        LOBYTE(v203) = v121;
        LOBYTE(v202) = v120;
        LOBYTE(UserData) = v119;
        LOBYTE(UserDataCount) = v117;
        LOBYTE(RelatedActivityId) = v133;
        LODWORD(ActivityId) = v89->IoStatus.Status;
        sub_140052E64(v130, v110, &v249, v89, ActivityId, RelatedActivityId, UserDataCount, UserData, v202, v203, v89);
      }
LABEL_213:
      IofCompleteRequest(Irp, 0);
    }
LABEL_148:
    v4 = (char *)Context;
LABEL_149:
    v100 = v205;
LABEL_150:
    _InterlockedOr(v197, 0);
    v5 = v219;
    while ( _InterlockedCompareExchange(v5 + 10, 1, 0) )
      ;
    v109 = *((unsigned __int16 *)v5 + 17);
    if ( v109 == (_DWORD)v220 )
    {
      *((_WORD *)v5 + 18) = *((_WORD *)v5 + 18) != 1;
      *((_WORD *)v5 + 17) = 0;
    }
    else
    {
      *((_WORD *)v5 + 17) = v109 + 1;
    }
    v8 = (unsigned int *)(*(_QWORD *)v5 + 16LL * *((unsigned __int16 *)v5 + 17));
    v221 = v8;
    if ( (*((_WORD *)v8 + 7) & 1) == *((_WORD *)v5 + 18) )
    {
      v135 = *((unsigned __int16 *)v5 + 17) | v213 & 0xFFFF0000;
      v213 = v135;
      if ( v207 == 1 )
      {
        v136 = *((_QWORD *)v4 + 16);
        v137 = *((_QWORD *)v4 + 206);
        ActivityId = (LPCGUID)&v213;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(v136 + 528))(v137 + 64, *((unsigned int *)v5 + 4), 4LL);
      }
      else
      {
        **((_DWORD **)v5 + 2) = v135;
        _InterlockedOr(v197, 0);
      }
      v218 = _InterlockedCompareExchange(v5 + 11, 0, 1);
    }
    _InterlockedCompareExchange(v5 + 10, 0, 1);
    _InterlockedOr(v197, 0);
    v138 = (union _SLIST_HEADER *)v210;
    v139 = v206;
    ++v208;
    v140 = *(_QWORD *)(v210 + 32);
    v141 = (unsigned __int16 *)(((unsigned __int64)v206 << 7) + v140 + 54);
    v34 = *((_DWORD *)v4 + 237) == 0;
    v220 = v141;
    if ( v34 )
    {
      if ( *(_WORD *)(v210 + 136) )
      {
        v142 = (unsigned __int64)*v141 << 7;
        v211 = 0;
        if ( (*(_BYTE *)(v142 + v140 + 60) & 8) != 0 )
        {
          v143 = *(_QWORD *)(v210 + 32);
          v144 = (unsigned __int64)*v141 << 7;
          v145 = *(_QWORD *)(v144 + v143 + 40);
          v146 = *(_WORD *)(v144 + v143 + 52);
          LOWORD(v205) = v146;
          v147 = *(IRP **)(v145 + 24);
          v148 = *(PIRP *)(v145 + 16);
          Irp = v148;
          v216 = v147;
          v149 = v147->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset;
          _InterlockedExchange((volatile __int32 *)(v145 + 104), 5);
          *(_DWORD *)(v145 + 112) = v100;
          if ( v100 < 0 )
            _InterlockedCompareExchange((volatile signed __int32 *)(v149.QuadPart + 112), v100, 0);
          v150 = _InterlockedExchange64((volatile __int64 *)(v145 + 88), 0LL);
          if ( v150 )
          {
            v151 = *(_QWORD *)(v150 + 24);
            if ( v151 )
            {
              v152 = *(_BYTE *)(v150 + 126);
              v153 = *(_QWORD *)(*(_QWORD *)&v148->Flags + 128LL);
              v154 = KfRaiseIrql(2u);
              (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v153 + 1144) + 8LL) + 96LL))(
                *(_QWORD *)(v153 + 1144),
                v151,
                (v152 & 1) == 0);
              if ( v154 < 2u )
                KeLowerIrql(v154);
              v148 = Irp;
            }
            v155 = *(_QWORD *)&v148->Flags;
            v156 = *(unsigned int *)(v150 + 120);
            *(_QWORD *)(v150 + 24) = 0LL;
            *(_QWORD *)(v150 + 88) = 0LL;
            *(_BYTE *)(v150 + 126) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v155 + 896) + 8 * v156), (PSLIST_ENTRY)v150);
            v146 = v205;
            v147 = v216;
          }
          if ( _InterlockedIncrement((volatile signed __int32 *)(v149.QuadPart + 116)) < *(unsigned __int16 *)(v149.QuadPart + 32) )
          {
            v4 = (char *)Context;
          }
          else
          {
            v157 = *(_DWORD *)(v149.QuadPart + 112);
            if ( v157 < 0 )
              v158 = 0LL;
            else
              v158 = *(unsigned int *)(v149.QuadPart + 48);
            v147->IoStatus.Information = v158;
            v159 = v147->Tail.Overlay.CurrentStackLocation;
            v160 = *(_QWORD *)&v148->Flags;
            QuadPart = (LARGE_INTEGER *)v159->Parameters.Read.ByteOffset.QuadPart;
            v159->Parameters.Create.SecurityContext = (PIO_SECURITY_CONTEXT)QuadPart[8].QuadPart;
            v159->Parameters.Read.ByteOffset = QuadPart[9];
            v162 = 8LL * v146;
            do
            {
              v163 = *(LARGE_INTEGER *)(v149.QuadPart + 96);
              *(_QWORD *)(v149.QuadPart + 88) = 0LL;
              *(_DWORD *)(v149.QuadPart + 108) = 0;
              *(_DWORD *)(v149.QuadPart + 104) = 0;
              ExpInterlockedPushEntrySList(
                *(PSLIST_HEADER *)(*(_QWORD *)(v160 + 888) + v162),
                (PSLIST_ENTRY)v149.QuadPart);
              v149 = v163;
            }
            while ( v163.QuadPart );
            v164 = Irp;
            v147->IoStatus.Status = v157;
            IofCompleteRequest(v147, 0);
            Blink = v164->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
            if ( !LOBYTE(Blink->Flink)
              && _InterlockedExchangeAdd(
                   *((volatile signed __int32 **)&Blink[1].Blink->Flink + (unsigned __int16)v205),
                   0xFFFFFFFF) == 1 )
            {
              v166 = *(_QWORD *)(*(_QWORD *)&v164->Flags + 128LL);
              v167 = v164->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
              if ( v167 )
              {
                if ( v167->Blink )
                {
                  v168 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v167[2].Blink;
                  if ( v168 )
                  {
                    if ( ExAcquireRundownProtectionCacheAware(v168) )
                    {
                      PoFxIdleComponent(
                        v164->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink->Blink->Flink,
                        0LL,
                        2LL);
                      v169 = v164->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
                      if ( v169 )
                      {
                        if ( v169->Blink )
                        {
                          v170 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v169[2].Blink;
                          if ( v170 )
                            ExReleaseRundownProtectionCacheAware(v170);
                        }
                      }
                    }
                  }
                }
              }
              v171 = *(_QWORD *)(v166 + 160);
              if ( *(_BYTE *)v171 == 1 )
                PoFxIdleComponent(**(_QWORD **)(v171 + 8), 0LL, 2LL);
            }
            v4 = (char *)Context;
            if ( v157 == 259 )
            {
              v172 = 1;
LABEL_266:
              v8 = v221;
              v5 = v219;
              v138 = (union _SLIST_HEADER *)v210;
              v139 = v206;
              goto LABEL_269;
            }
          }
          v138 = (union _SLIST_HEADER *)v210;
          v141 = v220;
        }
        if ( *((_DWORD *)v4 + 238) )
        {
          v172 = sub_14011ACA0(v4, v138, v15, v141);
        }
        else if ( *((_DWORD *)v4 + 240) )
        {
          v172 = sub_1401228F0(
                   (_DWORD)v4,
                   *(unsigned __int16 *)(((unsigned __int64)*v141 << 7) + v138[2].Alignment + 52),
                   (_DWORD)v138,
                   (_DWORD)v141,
                   0);
        }
        else
        {
          v172 = v211;
        }
        goto LABEL_266;
      }
      if ( *((_DWORD *)v4 + 239) )
      {
        v172 = sub_1401228F0(
                 (_DWORD)v4,
                 *(unsigned __int16 *)(((unsigned __int64)*v141 << 7) + *(_QWORD *)(v210 + 32) + 52),
                 v210,
                 (_DWORD)v141,
                 1);
LABEL_269:
        if ( v172 )
          goto LABEL_271;
      }
    }
    else if ( **((_DWORD **)v4 + 159) == 1 && !*(_DWORD *)(*((_QWORD *)v4 + 159) + 4LL) )
    {
      goto LABEL_271;
    }
    ExpInterlockedPushEntrySList(v138 + 4, (PSLIST_ENTRY)(v138[2].Alignment + ((unsigned __int64)v139 << 7)));
LABEL_271:
    LOBYTE(v6) = (_BYTE)v223;
    if ( !v218 )
    {
      v12 = -1LL;
      if ( (*((_WORD *)v8 + 7) & 1) != *((_WORD *)v5 + 18) )
        continue;
    }
    v173 = v208;
    goto LABEL_274;
  }
  v239 = *((_QWORD *)v4 + 121);
  v238 = *(unsigned __int16 *)(v17 + 142);
  v237 = *(unsigned __int16 *)(v17 + 140);
  v235 = v8[3];
  v234 = v8[2];
  v174 = (void *)*((unsigned __int16 *)v5 + 17);
  v34 = (v4[136] & 2) == 0;
  v175 = *((_QWORD *)v4 + 16);
  v255 = 0LL;
  Context = v174;
  v176 = (volatile signed __int32 *)*((unsigned __int16 *)v5 + 16);
  v236 = v18;
  v252 = (EVENT_DESCRIPTOR)xmmword_14014AE88;
  v219 = v176;
  v246 = 0;
  if ( !v34 )
    v252.Keyword |= 0x8000uLL;
  v177 = *(_QWORD *)(v175 + 16);
  v178 = *(_QWORD *)(v177 + 48);
  if ( !v178 )
    goto LABEL_289;
  v179 = *(unsigned __int16 *)(v177 + 40);
  if ( !(_WORD)v179 )
    goto LABEL_289;
  v180 = v179 >> 1;
  if ( !(v179 >> 1) )
    goto LABEL_289;
  while ( 1 )
  {
    v181 = v180 - 1;
    v182 = (_WORD *)(v178 + 2 * v181);
    --v180;
    if ( *v182 == 92 )
      break;
    if ( !(_DWORD)v181 )
      goto LABEL_289;
  }
  v183 = v182 + 1;
  if ( !v182 )
LABEL_289:
    v183 = *(const wchar_t **)(v177 + 48);
  v184 = *(_WORD *)(v177 + 48) - (_WORD)v183;
  v247 = v183;
  v244 = *(_WORD *)(v177 + 40) + v184;
  v245 = v244 + 2;
  v312.Ptr = v175 + 56;
  v313 = v175 + 1032;
  *(_QWORD *)&v312.Size = 4LL;
  v314 = 16LL;
  if ( v183 )
  {
    v185 = -1LL;
    do
      v34 = v183[++v185] == 0;
    while ( !v34 );
    v186 = 2 * v185 + 2;
  }
  else
  {
    v183 = L"NULL";
    v186 = 10;
  }
  v315 = v183;
  v187 = (const int *)*((_QWORD *)v4 + 99);
  v316 = v186;
  v317 = 0;
  if ( v187 )
  {
    v188 = -1LL;
    do
      ++v188;
    while ( *((_BYTE *)v187 + v188) );
    v189 = v188 + 1;
    v190 = &dword_140149108;
  }
  else
  {
    v190 = &dword_140149108;
    v189 = 1;
    v187 = &dword_140149108;
  }
  v319 = v189;
  v318 = v187;
  v191 = (const int *)*((_QWORD *)v4 + 94);
  v321 = v4 + 4;
  v323 = v4 + 744;
  v320 = 0;
  v322 = 2LL;
  v324 = 1LL;
  if ( v191 )
    v190 = v191;
  else
    v191 = &dword_140149108;
  v192 = -1LL;
  do
    ++v192;
  while ( *((_BYTE *)v191 + v192) );
  v325 = v190;
  v326 = v192 + 1;
  v193 = -1LL;
  v327 = 0;
  v328 = v4 + 800;
  do
    ++v193;
  while ( v4[v193 + 800] );
  v330 = 0;
  v329 = v193 + 1;
  v331 = v4 + 841;
  do
    ++v12;
  while ( v4[v12 + 841] );
  v334 = L"Invalid command ID in CQ entry";
  v333 = 0;
  v336 = L"CQ ID";
  v332 = v12 + 1;
  v338 = &v219;
  v335 = 62LL;
  v340 = L"CQ Head";
  v337 = 12LL;
  p_Context = &Context;
  v344 = L"CQ entry DW2";
  v346 = &v234;
  v348 = L"CQ entry DW3";
  v350 = &v235;
  v352 = L"Queue Depth";
  v354 = &v236;
  v356 = L"SQ Head";
  v358 = &v237;
  v360 = L"SQ Tail";
  v362 = &v238;
  v364 = L"Controller state";
  v366 = &v239;
  v339 = 8LL;
  v341 = 16LL;
  v343 = 8LL;
  v345 = 26LL;
  v347 = 8LL;
  v349 = 26LL;
  v351 = 8LL;
  v353 = 24LL;
  v355 = 8LL;
  v357 = 16LL;
  v359 = 8LL;
  v361 = 16LL;
  v363 = 8LL;
  v365 = 34LL;
  v367 = 8LL;
  EtwWriteEx(RegHandle, &v252, 0LL, 1u, &v255, 0LL, 0x1Au, &v312);
  v173 = v208;
  if ( v208 )
  {
    while ( _InterlockedCompareExchange(v5 + 10, 1, 0) )
      ;
    v194 = *((unsigned __int16 *)v5 + 17) | v213 & 0xFFFF0000;
    v213 = v194;
    if ( v207 == 1 )
    {
      v195 = *((_QWORD *)v4 + 16);
      v196 = *((_QWORD *)v4 + 206);
      ActivityId = (LPCGUID)&v213;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v195 + 528))(v196 + 64, *((unsigned int *)v5 + 4), 4LL);
    }
    else
    {
      **((_DWORD **)v5 + 2) = v194;
      _InterlockedOr(v197, 0);
    }
    _InterlockedCompareExchange(v5 + 11, 0, 1);
    _InterlockedCompareExchange(v5 + 10, 0, 1);
  }
  LOBYTE(v6) = (_BYTE)v223;
LABEL_274:
  if ( !v173 )
LABEL_275:
    _InterlockedCompareExchange(v5 + 11, 0, 1);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
LABEL_277:
    if ( *((_DWORD *)v4 + 226) != 3 )
    {
      *(_DWORD *)(*((_QWORD *)v4 + 115) + 16LL) = 1 << *((_BYTE *)v5 + 24);
      _InterlockedOr(v197, 0);
    }
  }
}
