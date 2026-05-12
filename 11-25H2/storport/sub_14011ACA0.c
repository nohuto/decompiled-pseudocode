/*
 * XREFs of sub_14011ACA0 @ 0x14011ACA0
 * Callers:
 *     sub_140115650 @ 0x140115650 (sub_140115650.c)
 * Callees:
 *     sub_14008F0E0 @ 0x14008F0E0 (sub_14008F0E0.c)
 *     sub_140103A50 @ 0x140103A50 (sub_140103A50.c)
 *     sub_1401147F0 @ 0x1401147F0 (sub_1401147F0.c)
 *     sub_1401152F0 @ 0x1401152F0 (sub_1401152F0.c)
 *     sub_140115430 @ 0x140115430 (sub_140115430.c)
 *     sub_1401155A0 @ 0x1401155A0 (sub_1401155A0.c)
 *     sub_140118560 @ 0x140118560 (sub_140118560.c)
 *     sub_14011DA00 @ 0x14011DA00 (sub_14011DA00.c)
 *     sub_14011EBD0 @ 0x14011EBD0 (sub_14011EBD0.c)
 *     sub_14011F570 @ 0x14011F570 (sub_14011F570.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

bool __fastcall sub_14011ACA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  ULONG CurrentProcessorNumber; // eax
  __int64 v8; // rcx
  PMDL v9; // rsi
  unsigned int Process; // r13d
  int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // rdi
  unsigned int v14; // eax
  int v15; // ebx
  int v16; // ebx
  KIRQL v17; // r14
  __int64 v18; // r9
  signed __int32 v19; // r8d
  IRP *v20; // rsi
  unsigned int v21; // edx
  unsigned int v22; // r8d
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r14d
  __int64 v28; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v30; // rcx
  __int64 QuadPart; // rdx
  LARGE_INTEGER ByteOffset; // r8
  int v33; // r11d
  __int64 v34; // r15
  __int16 v35; // di
  PIO_SECURITY_CONTEXT SecurityContext; // r12
  unsigned int v37; // ebx
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // r10d
  int v42; // r12d
  char v43; // cl
  __int64 v44; // rbx
  signed __int32 v45; // eax
  int v46; // eax
  __int64 v47; // rax
  unsigned int v48; // et2
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rdx
  __int64 v54; // rdx
  char v55; // r11
  unsigned __int64 v56; // r9
  unsigned int v57; // r8d
  __int64 v58; // rax
  __int64 v59; // r14
  char v60; // al
  char v61; // cl
  __int64 v62; // rax
  struct _IO_STACK_LOCATION *v63; // rcx
  PIO_SECURITY_CONTEXT v64; // rax
  int v65; // ebx
  __int64 v66; // rdi
  KIRQL v67; // al
  struct _IO_STACK_LOCATION *v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rdi
  int v71; // eax
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // r14
  unsigned __int64 v74; // rdx
  __int16 v75; // r12
  __int64 v76; // r11
  unsigned int v77; // eax
  char v78; // r10
  unsigned __int64 v79; // r9
  unsigned __int64 v80; // rax
  unsigned int v81; // r8d
  int v82; // r10d
  PSLIST_ENTRY v83; // rax
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // r9
  bool v87; // zf
  PSLIST_ENTRY v88; // rbx
  __int64 v89; // r12
  char v90; // di
  __int64 v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rax
  volatile signed __int32 *v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rbx
  __int64 v102; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v103; // rcx
  __int64 v104; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rax
  _DWORD *v108; // r9
  unsigned int v109; // r12d
  unsigned int v110; // r9d
  _DWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // r15
  unsigned int v114; // esi
  unsigned int v115; // edx
  __int64 v116; // rbx
  unsigned int v117; // eax
  __int64 v118; // rax
  __int64 v119; // rdi
  KIRQL v120; // r14
  __int64 v121; // r9
  signed __int32 v122; // r8d
  IRP *v123; // rsi
  unsigned int v124; // edx
  unsigned int v125; // r8d
  unsigned int v126; // edx
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rcx
  int v130; // r14d
  __int64 v131; // rdi
  struct _IO_STACK_LOCATION *v132; // rax
  __int64 v133; // r15
  struct _IO_STACK_LOCATION *v134; // r13
  LARGE_INTEGER v135; // rcx
  int v136; // r10d
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // r11
  __int16 v140; // di
  PIO_SECURITY_CONTEXT v141; // r12
  unsigned int v142; // ebx
  __int64 v143; // rax
  __int64 v144; // rax
  unsigned int v145; // r9d
  char v146; // r12
  char v147; // r13
  __int64 v148; // rbx
  signed __int32 v149; // eax
  int v150; // eax
  __int64 v151; // rax
  unsigned int v152; // et2
  unsigned __int64 v153; // rdi
  unsigned __int64 v154; // rbx
  __int64 v155; // rax
  __int64 v156; // rbx
  __int64 v157; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v158; // rcx
  __int64 v159; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v160; // rcx
  __int64 v161; // rcx
  unsigned __int64 v162; // r8
  unsigned __int64 v163; // rdi
  unsigned __int64 v164; // rdx
  unsigned int v165; // r14d
  unsigned int v166; // edx
  char v167; // r8
  unsigned __int64 v168; // rax
  unsigned int v169; // r9d
  __int64 v170; // rax
  __int64 v171; // rdx
  char v172; // al
  PIO_SECURITY_CONTEXT v173; // rax
  int v174; // ebx
  __int64 v175; // rdi
  char *v176; // r14
  KIRQL v177; // r13
  PMDL v178; // rbx
  PSLIST_ENTRY v179; // rdi
  int v180; // eax
  unsigned __int64 v181; // r8
  unsigned __int64 v182; // r12
  unsigned __int64 v183; // rdx
  __int16 v184; // r13
  __int64 v185; // r14
  unsigned int v186; // eax
  char v187; // r11
  unsigned __int64 v188; // r8
  unsigned int v189; // r8d
  int v190; // r10d
  __int64 v191; // rcx
  __int64 v192; // r14
  PSLIST_ENTRY v193; // rax
  __int64 v194; // rax
  __int64 v195; // r8
  __int64 v196; // r9
  bool v197; // zf
  PSLIST_ENTRY v198; // rbx
  __int64 v199; // r12
  char v200; // di
  __int64 v201; // rbx
  KIRQL v202; // r13
  __int64 v203; // rdx
  __int64 v204; // rdi
  __int64 v205; // rcx
  __int64 v206; // rcx
  __int64 v207; // rdx
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // rbx
  __int64 v211; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v212; // rcx
  __int64 v213; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v214; // rcx
  __int64 v215; // rcx
  __int64 v216; // rax
  __int64 v217; // rbx
  __int64 v218; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v219; // rcx
  __int64 v220; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v221; // rcx
  __int64 v222; // rcx
  __int64 v223; // rax
  int v225; // [rsp+28h] [rbp-D8h]
  int v226; // [rsp+38h] [rbp-C8h]
  __int64 v227; // [rsp+40h] [rbp-C0h]
  __int64 v228; // [rsp+40h] [rbp-C0h]
  int v229; // [rsp+48h] [rbp-B8h]
  int v230; // [rsp+48h] [rbp-B8h]
  UCHAR MajorFunction; // [rsp+60h] [rbp-A0h]
  bool v232; // [rsp+60h] [rbp-A0h]
  KIRQL v233; // [rsp+60h] [rbp-A0h]
  UCHAR v234; // [rsp+60h] [rbp-A0h]
  bool v235; // [rsp+60h] [rbp-A0h]
  char v236; // [rsp+61h] [rbp-9Fh] BYREF
  bool v237; // [rsp+62h] [rbp-9Eh]
  unsigned __int8 v238; // [rsp+63h] [rbp-9Dh]
  char v239; // [rsp+64h] [rbp-9Ch] BYREF
  char v240[3]; // [rsp+65h] [rbp-9Bh] BYREF
  unsigned int v241; // [rsp+68h] [rbp-98h]
  ULONG v242; // [rsp+6Ch] [rbp-94h]
  __int64 v243; // [rsp+70h] [rbp-90h]
  unsigned __int16 v244; // [rsp+78h] [rbp-88h]
  __int64 v245; // [rsp+80h] [rbp-80h]
  __int64 v246; // [rsp+88h] [rbp-78h]
  int v247; // [rsp+90h] [rbp-70h]
  unsigned int v248; // [rsp+94h] [rbp-6Ch]
  __int64 v249; // [rsp+98h] [rbp-68h]
  PSLIST_ENTRY ListEntry; // [rsp+A0h] [rbp-60h]
  __int64 v251; // [rsp+A8h] [rbp-58h]
  __int64 MdlAddress; // [rsp+B0h] [rbp-50h]
  __int64 v253; // [rsp+B8h] [rbp-48h]
  __int16 v254[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v255; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v256; // [rsp+C8h] [rbp-38h]
  _DWORD *v257; // [rsp+D0h] [rbp-30h]
  struct _IO_STACK_LOCATION *v258; // [rsp+D8h] [rbp-28h]
  __int64 v259; // [rsp+E0h] [rbp-20h]
  PMDL v260; // [rsp+E8h] [rbp-18h]
  int v261; // [rsp+F0h] [rbp-10h] BYREF
  int v262; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v263; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v264; // [rsp+100h] [rbp+0h] BYREF
  __int64 v265; // [rsp+108h] [rbp+8h]
  __int64 v266; // [rsp+110h] [rbp+10h] BYREF
  __int64 v267; // [rsp+118h] [rbp+18h] BYREF
  __int128 v268; // [rsp+120h] [rbp+20h] BYREF
  __int128 v269; // [rsp+130h] [rbp+30h] BYREF
  __int128 v270; // [rsp+140h] [rbp+40h] BYREF
  __int128 v271; // [rsp+150h] [rbp+50h] BYREF

  v4 = a1;
  v259 = a1;
  v245 = a4;
  v241 = 0;
  v5 = a4;
  v251 = a2;
  v6 = a2;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v8 = *(_QWORD *)(v4 + 1104);
  v242 = CurrentProcessorNumber;
  v236 = 0;
  v246 = CurrentProcessorNumber;
  v9 = *(PMDL *)(v8 + 8LL * CurrentProcessorNumber);
  v260 = v9;
  Process = (unsigned int)v9[1].Process;
  v11 = *(_DWORD *)(v4 + 656);
  v257 = qword_140168E40;
  v247 = v11;
LABEL_2:
  v12 = Process;
  do
  {
    v13 = *((_QWORD *)&v9[5].MappedSystemVa + Process);
    if ( v13 )
    {
      if ( **(_DWORD **)(v13 + 16) )
        goto LABEL_369;
      if ( *(_DWORD *)v13 || *(_DWORD *)(v13 + 48) != *(_DWORD *)(v13 + 52) )
      {
        v15 = *(_DWORD *)(v4 + 136);
        v263 = 0LL;
        v16 = v15 & 2;
        v17 = KfRaiseIrql(2u);
        while ( 1 )
        {
          v18 = *(unsigned int *)(v13 + 52);
          if ( (_DWORD)v18 == *(_DWORD *)(v13 + 48) )
            break;
          v19 = 0;
          if ( (unsigned int)(v18 + 1) < *(_DWORD *)(*(_QWORD *)(v13 + 16) + 4LL) )
            v19 = v18 + 1;
          if ( (_DWORD)v18 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 52), v19, v18) )
          {
            do
              v20 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v18 + *(_QWORD *)(v13 + 56)), 0LL);
            while ( !v20 );
            if ( !*(_DWORD *)(*(_QWORD *)(v13 + 16) + 16LL)
              && (*(_DWORD *)v13 == 2
               || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v13 + 32) + 16LL * *(unsigned int *)(v13 + 8)))) )
            {
              if ( *(_DWORD *)(v13 + 48) == *(_DWORD *)(v13 + 52)
                || ((v21 = *(_DWORD *)(v13 + 48), v22 = *(_DWORD *)(v13 + 52), v21 != v22)
                  ? (v21 <= v22
                   ? ((v24 = *(_QWORD *)(v13 + 24), *(_BYTE *)(*(_QWORD *)(v13 + 16) + 20LL))
                    ? (v25 = *(_QWORD *)(v24 + 1024))
                    : (v25 = *(_QWORD *)(v24 + 256)),
                      v23 = *(_DWORD *)(v25 + 4) - v22 + v21)
                   : (v23 = v21 - v22))
                  : (v23 = 0),
                    v23 <= *(_DWORD *)(*(_QWORD *)(v13 + 16) + 8LL)) )
              {
                if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v13 + 16) + 16LL), 1, 0) )
                {
                  v26 = *(_QWORD *)(v13 + 24);
                  if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 20LL) )
                    IoQueueWorkItem(
                      *(PIO_WORKITEM *)(v26 + 1032),
                      (PIO_WORKITEM_ROUTINE)sub_1400F1060,
                      DelayedWorkQueue,
                      *(PVOID *)(v13 + 24));
                  else
                    KeSetEvent((PRKEVENT)(v26 + 472), 0, 0);
                }
              }
            }
            KeLowerIrql(v17);
            if ( v16 )
            {
              v27 = sub_140103A50(*(_QWORD *)(v13 + 24), (__int64)v20, v242);
              goto LABEL_153;
            }
            if ( (int)IoGetIoAttributionHandle(v20, &v263) >= 0 )
            {
              v28 = v263;
              v268 = 0LL;
              LODWORD(v268) = 1;
              CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
              v269 = 0LL;
              DWORD1(v268) = CurrentStackLocation->MajorFunction | 0x200;
              *((_QWORD *)&v269 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v269 + 1);
              IoRecordIoAttribution(v28, &v268);
            }
            v30 = v20->Tail.Overlay.CurrentStackLocation;
            QuadPart = 0LL;
            v239 = 0;
            v254[0] = 0;
            ByteOffset.QuadPart = 0LL;
            v266 = 0LL;
            v27 = 0;
            v261 = 0;
            v33 = v5;
            ListEntry = 0LL;
            v243 = 0LL;
            v237 = 0;
            v244 = 0;
            v253 = v5;
            v34 = *(_QWORD *)(v13 + 24);
            v35 = 0;
            v256 = v6;
            SecurityContext = v30->Parameters.Create.SecurityContext;
            v258 = v30;
            v37 = (unsigned int)SecurityContext;
            v38 = *(_QWORD *)(v34 + 16);
            MdlAddress = v38;
            v236 = 0;
            v39 = HIDWORD(*(_QWORD *)(v38 + 136));
            LOBYTE(v39) = v39 & 1;
            v249 = v39;
            if ( SecurityContext == (PIO_SECURITY_CONTEXT)0x8765432100000003LL )
            {
              QuadPart = v30->Parameters.Read.ByteOffset.QuadPart;
              v243 = QuadPart;
            }
            else if ( SecurityContext == (PIO_SECURITY_CONTEXT)0xFEDCBA9000000000LL )
            {
              ByteOffset = v30->Parameters.Read.ByteOffset;
              ListEntry = (PSLIST_ENTRY)ByteOffset.QuadPart;
            }
            if ( (unsigned int)(*(_DWORD *)(v34 + 96) - 5) <= 1 )
            {
              v239 = 1;
              v27 = -1073741810;
              if ( QuadPart )
              {
LABEL_121:
                _interlockedbittestandreset((volatile signed __int32 *)(QuadPart + 108), 0);
                goto LABEL_122;
              }
LABEL_127:
              v88 = ListEntry;
              if ( !ListEntry )
              {
                if ( QuadPart )
                {
                  if ( !v239 )
                    goto LABEL_152;
                  sub_1401152F0(*(_QWORD **)(v34 + 16), QuadPart);
                  sub_140115430(*(_QWORD *)(v34 + 16), v242, v243, (__int64)v20);
                }
                goto LABEL_139;
              }
              v89 = *((_QWORD *)&ListEntry[1].Next + 1);
              if ( v89 )
              {
                v90 = *((_BYTE *)&ListEntry[7].Next + 14);
                v91 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 128LL);
                v233 = KfRaiseIrql(2u);
                (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v91 + 1144) + 8LL) + 96LL))(
                  *(_QWORD *)(v91 + 1144),
                  v89,
                  (v90 & 1) == 0);
                if ( v233 < 2u )
                  KeLowerIrql(v233);
                v88 = ListEntry;
              }
              v92 = *((_QWORD *)&v88[5].Next + 1);
              v93 = v246;
              if ( v92 )
              {
                v94 = *(_QWORD *)(v34 + 16);
                *(_QWORD *)(v92 + 88) = 0LL;
                *(_DWORD *)(v92 + 108) = 0;
                *(_DWORD *)(v92 + 104) = 0;
                ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v94 + 888) + 8 * v93), (PSLIST_ENTRY)v92);
              }
              v95 = *(_QWORD *)(v34 + 16);
              v96 = *(_QWORD *)(*((_QWORD *)&v88[2].Next + 1) + 184LL);
              *(_QWORD *)(v96 + 8) = v88[3].Next;
              *(_QWORD *)(v96 + 24) = *((_QWORD *)&v88[3].Next + 1);
              v97 = *((unsigned int *)&v88[7].Next + 2);
              *((_QWORD *)&v88[1].Next + 1) = 0LL;
              *((_QWORD *)&v88[5].Next + 1) = 0LL;
              *((_BYTE *)&v88[7].Next + 14) = 0;
              ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v95 + 896) + 8 * v97), v88);
              v20->IoStatus.Status = v27;
              IofCompleteRequest(v20, 0);
              v98 = *(_QWORD *)(v34 + 128);
              if ( *(_BYTE *)v98 )
                goto LABEL_152;
              v99 = *(volatile signed __int32 **)(*(_QWORD *)(v98 + 24) + 8 * v93);
LABEL_141:
              if ( _InterlockedExchangeAdd(v99, 0xFFFFFFFF) == 1 )
              {
                v101 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 128LL);
                v102 = *(_QWORD *)(v34 + 128);
                if ( v102 )
                {
                  if ( *(_QWORD *)(v102 + 8) )
                  {
                    v103 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v102 + 40);
                    if ( v103 )
                    {
                      if ( ExAcquireRundownProtectionCacheAware(v103) )
                      {
                        PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v34 + 128) + 8LL), 0LL, 2LL);
                        v104 = *(_QWORD *)(v34 + 128);
                        if ( v104 )
                        {
                          if ( *(_QWORD *)(v104 + 8) )
                          {
                            v105 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v104 + 40);
                            if ( v105 )
                              ExReleaseRundownProtectionCacheAware(v105);
                          }
                        }
                      }
                    }
                  }
                }
                v106 = *(_QWORD *)(v101 + 160);
                if ( *(_BYTE *)v106 == 1 )
                  PoFxIdleComponent(**(_QWORD **)(v106 + 8), 0LL, 2LL);
              }
              goto LABEL_152;
            }
            v40 = *(_QWORD *)(v38 + 128);
            MajorFunction = v30->MajorFunction;
            v238 = v30->MajorFunction == 3;
            v41 = *(_DWORD *)(v40 + 200);
            v248 = v41;
            if ( v243 )
            {
              QuadPart = v243;
              v42 = v256;
              v43 = v249;
              while ( 2 )
              {
                v44 = QuadPart;
LABEL_47:
                v45 = _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 104), 4, 3);
                if ( v43 )
                {
                  if ( v45 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 104), 4, 1) != 1 )
                    goto LABEL_59;
                }
                else if ( v45 != 3 )
                {
                  if ( *(_DWORD *)(v44 + 104) == 1 )
                    ++v35;
LABEL_59:
                  v44 = *(_QWORD *)(v44 + 96);
                  if ( v35 )
                  {
                    if ( !v44 )
                    {
                      v35 = 0;
                      continue;
                    }
                  }
                  else if ( !v44 )
                  {
                    goto LABEL_121;
                  }
                  goto LABEL_47;
                }
                break;
              }
              v46 = sub_14011DA00(
                      v44,
                      v242,
                      v42,
                      v33,
                      (__int64)&v239,
                      (__int64)&v266,
                      (__int64)&v261,
                      (__int64)v254,
                      v237);
              v27 = v46;
              if ( v46 == 259 )
              {
                v47 = *(_QWORD *)(v34 + 16);
                v253 = 0LL;
                v33 = 0;
                ++v244;
                v42 = 0;
                v48 = v244 % (unsigned int)*(unsigned __int8 *)(v47 + 1730);
                v43 = v249;
                v236 = 1;
                QuadPart = v243;
                v237 = v48 == 0;
              }
              else
              {
                if ( v46 == -2147483631 )
                {
                  _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 104), 3, 4);
                  sub_140118560(v34, *(_QWORD *)(v44 + 24), v242);
                  goto LABEL_152;
                }
                QuadPart = v243;
                if ( !*(_WORD *)(v44 + 34) )
                {
                  v239 = 1;
                  goto LABEL_121;
                }
                if ( v239 )
                  goto LABEL_121;
                v33 = v253;
                v43 = v249;
              }
              goto LABEL_59;
            }
            if ( !(_BYTE)v249 )
            {
              if ( ByteOffset.QuadPart )
              {
                v49 = *(_QWORD *)(ByteOffset.QuadPart + 96);
                v37 = *(_DWORD *)(ByteOffset.QuadPart + 116);
                *(_QWORD *)(ByteOffset.QuadPart + 64) = v245;
                *(_QWORD *)(ByteOffset.QuadPart + 72) = v251;
                goto LABEL_95;
              }
              v50 = v30->Parameters.Read.ByteOffset.QuadPart;
              if ( (_DWORD)SecurityContext )
              {
                v51 = *(unsigned int *)(v34 + 64);
                if ( !((unsigned int)SecurityContext % (unsigned int)v51) )
                {
                  v52 = v50 / v51;
                  if ( !(v50 % v51) )
                  {
                    v53 = *(_QWORD *)(v34 + 424);
                    LODWORD(v249) = (unsigned int)SecurityContext / (unsigned int)v51;
                    if ( v52 < v53 && v53 - v52 >= (unsigned int)SecurityContext / (unsigned int)v51 )
                    {
                      if ( (unsigned int)SecurityContext <= v41 )
                      {
                        v54 = *(unsigned int *)(v34 + 420);
                        if ( !(_DWORD)v54 )
                          goto LABEL_82;
                        if ( (unsigned int)SecurityContext <= (unsigned int)v54 )
                        {
                          v55 = *(_BYTE *)(v34 + 419);
                          v56 = ((unsigned int)SecurityContext & ((_DWORD)v54 - 1))
                              + v54
                              + ((unsigned int)v50 & ((_DWORD)v54 - 1))
                              - 1LL;
                          if ( v55 )
                            v57 = (v56 >> v55) + ((unsigned __int64)(unsigned int)SecurityContext >> v55);
                          else
                            v57 = v56 / (unsigned int)v54 + (unsigned int)SecurityContext / (unsigned int)v54;
                          if ( v57 <= 1 )
                          {
                            v38 = MdlAddress;
LABEL_82:
                            v58 = sub_1401155A0(v38, v242);
                            ListEntry = (PSLIST_ENTRY)v58;
                            v59 = v58;
                            if ( !v58 )
                            {
                              v27 = -1073741670;
                              goto LABEL_139;
                            }
                            *(_QWORD *)(v58 + 40) = v20;
                            v60 = *(_BYTE *)(v58 + 126) & 0xFE;
                            *(_QWORD *)(v59 + 96) = v50;
                            v61 = v60 | (MajorFunction == 3);
                            *(_QWORD *)(v59 + 104) = v52;
                            *(_DWORD *)(v59 + 112) = v249;
                            *(_QWORD *)(v59 + 64) = v245;
                            v62 = v251;
                            *(_BYTE *)(v59 + 126) = v61;
                            v63 = v258;
                            *(_QWORD *)(v59 + 72) = v62;
                            *(_QWORD *)(v59 + 32) = v34;
                            *(_DWORD *)(v59 + 116) = (_DWORD)SecurityContext;
                            *(_QWORD *)(v59 + 56) = v63->Parameters.Read.ByteOffset.QuadPart;
                            v64 = v63->Parameters.Create.SecurityContext;
                            v63->Parameters.Read.ByteOffset.QuadPart = v59;
                            *(_QWORD *)(v59 + 48) = v64;
                            v63->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
                            v65 = *(unsigned __int16 *)(v59 + 124);
                            v66 = *(_QWORD *)(v59 + 16);
                            v258 = (struct _IO_STACK_LOCATION *)((char *)v20->MdlAddress->StartVa
                                                               + v20->MdlAddress->ByteOffset);
                            *(_QWORD *)(v59 + 80) = v258;
                            MdlAddress = (__int64)v20->MdlAddress;
                            v253 = *(_QWORD *)(v34 + 16);
                            v67 = KfRaiseIrql(2u);
                            v229 = v65;
                            v68 = v258;
                            v227 = v66;
                            v69 = *(_QWORD *)(v253 + 128);
                            v70 = MdlAddress;
                            v237 = v67;
                            v232 = MajorFunction != 3;
                            LOBYTE(v226) = v232;
                            v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _IO_STACK_LOCATION *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(v69 + 1144) + 8LL) + 112LL))(
                                    *(_QWORD *)(v69 + 1144),
                                    *(_QWORD *)(v69 + 8),
                                    MdlAddress,
                                    v258,
                                    (_DWORD)SecurityContext,
                                    sub_1401172A0,
                                    v59,
                                    v226,
                                    v227,
                                    v229);
                            if ( v27 == -1073741789 )
                            {
                              LOBYTE(v226) = v232;
                              v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _IO_STACK_LOCATION *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v253 + 128) + 1144LL) + 8LL) + 88LL))(
                                      *(_QWORD *)(*(_QWORD *)(v253 + 128) + 1144LL),
                                      *(_QWORD *)(*(_QWORD *)(v253 + 128) + 8LL),
                                      v70,
                                      v68,
                                      (_DWORD)SecurityContext,
                                      sub_1401172A0,
                                      ListEntry,
                                      v226);
                            }
                            if ( (unsigned __int8)v237 < 2u )
                              KeLowerIrql(v237);
                            if ( v27 >= 0 )
                            {
                              v27 = 259;
LABEL_152:
                              v5 = v245;
                              v6 = v251;
LABEL_153:
                              if ( v27 != 259 )
                              {
                                v9 = v260;
                                goto LABEL_160;
                              }
                              goto LABEL_186;
                            }
LABEL_123:
                            if ( v27 == -2147483631 )
                            {
                              v87 = 0;
                              goto LABEL_125;
                            }
                            goto LABEL_126;
                          }
                          v41 = v248;
                        }
                      }
                      v71 = sub_14011EBD0(
                              v34,
                              (_DWORD)v20,
                              v238,
                              (_DWORD)SecurityContext,
                              v50,
                              v41,
                              v242,
                              v251,
                              v245,
                              (__int64)&v236);
LABEL_92:
                      v27 = v71;
LABEL_122:
                      v87 = v27 == 0;
                      if ( v27 < 0 )
                        goto LABEL_123;
LABEL_125:
                      if ( !v87 )
                        goto LABEL_152;
LABEL_126:
                      QuadPart = v243;
                      goto LABEL_127;
                    }
                  }
                }
                v27 = -1073741811;
              }
LABEL_139:
              v20->IoStatus.Status = v27;
              IofCompleteRequest(v20, 0);
              v100 = *(_QWORD *)(v34 + 128);
              if ( *(_BYTE *)v100 )
                goto LABEL_152;
              v99 = *(volatile signed __int32 **)(*(_QWORD *)(v100 + 24) + 8 * v246);
              goto LABEL_141;
            }
            v49 = v30->Parameters.Read.ByteOffset.QuadPart;
LABEL_95:
            if ( !v37 )
              goto LABEL_126;
            v72 = *(unsigned int *)(v34 + 64);
            if ( v37 % (unsigned int)v72
              || (v73 = v49 / v72, v49 % v72)
              || (v74 = *(_QWORD *)(v34 + 424), v75 = v37 / (unsigned int)v72, v73 >= v74)
              || v74 - v73 < v37 / (unsigned int)v72 )
            {
              v27 = -1073741811;
              goto LABEL_126;
            }
            v76 = *(_QWORD *)(v34 + 16);
            if ( v37 <= *(_DWORD *)(*(_QWORD *)(v76 + 128) + 200LL) )
            {
              v77 = *(_DWORD *)(v34 + 420);
              if ( !v77 )
              {
LABEL_107:
                v82 = 0;
                if ( ((v37 + ((LODWORD(v20->MdlAddress->StartVa) + v20->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
                {
                  v83 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v76 + 880) + 8 * v246));
                  v82 = (int)v83;
                  if ( !v83 )
                  {
                    v84 = sub_1401147F0(*(_QWORD *)(v34 + 16), v242);
                    v82 = v84;
                    if ( !v84 )
                    {
                      sub_140118560(v34, (__int64)v20, v242);
                      v27 = -2147483631;
                      goto LABEL_152;
                    }
                  }
                }
                if ( v245 )
                {
                  LODWORD(v85) = v251;
                }
                else
                {
                  v86 = *(_QWORD *)(v34 + 16);
                  if ( (*(_BYTE *)(v86 + 136) & 2) != 0 )
                    v85 = *(_QWORD *)(v86 + 728) + 192 * v246;
                  else
                    LODWORD(v85) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v86 + 872) + 2 * v246)
                                 + *(_DWORD *)(v86 + 728)
                                 - 192;
                }
                LOBYTE(v225) = 0;
                v27 = sub_14011F570(v34, (_DWORD)v20, v85, v82, v242, v225, v37, v49, v73, v75, v238, v245);
                goto LABEL_122;
              }
              if ( v37 <= v77 )
              {
                v78 = *(_BYTE *)(v34 + 419);
                v79 = v77;
                v80 = ((unsigned int)v49 & (v77 - 1)) + v77 + ((v77 - 1) & v37) - 1LL;
                if ( v78 )
                  v81 = (v80 >> v78) + ((unsigned __int64)v37 >> v78);
                else
                  v81 = v37 / v79 + v80 / v79;
                if ( v81 <= 1 )
                  goto LABEL_107;
                v41 = v248;
              }
            }
            v71 = sub_14011EBD0(v34, (_DWORD)v20, v238, v37, v49, v41, v242, v251, v245, (__int64)&v236);
            goto LABEL_92;
          }
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v13, 0, 1) == 1 )
        {
          v107 = *(_QWORD *)(v13 + 24);
          if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 20LL) == 1 )
            _InterlockedDecrement((volatile signed __int32 *)(v107 + 956));
          else
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v107 + 16) + 952LL));
        }
        KeLowerIrql(v17);
        v27 = -2147483622;
LABEL_160:
        if ( v236 )
        {
LABEL_186:
          v118 = 0LL;
          return v118 == 0;
        }
        if ( v27 == -2147483631 )
          goto LABEL_369;
        if ( v27 == -2147483622 )
        {
          v11 = v247;
          if ( v247 == 1 )
          {
            v4 = v259;
            break;
          }
        }
        else if ( v247 == 1 )
        {
LABEL_184:
          if ( sub_14008F0E0() )
            goto LABEL_369;
          v11 = v247;
          v4 = v259;
          goto LABEL_2;
        }
        if ( ++Process >= HIDWORD(v9->Next) )
          Process = 0;
        goto LABEL_184;
      }
    }
    if ( v11 == 1 )
      break;
    v14 = Process + 1;
    Process = 0;
    if ( v14 < HIDWORD(v9->Next) )
      Process = v14;
  }
  while ( v12 != Process );
  v108 = v257;
  LODWORD(v9[1].Process) = Process;
  if ( v108[3] )
  {
    v109 = v241;
    v110 = v242;
    v111 = v257;
    while ( 1 )
    {
      if ( v109 == v110 )
        goto LABEL_179;
      v112 = *(_QWORD *)(v4 + 1104);
      v246 = v109;
      v113 = *(_QWORD *)(v112 + 8LL * v109);
      v265 = v113;
      v114 = *(_DWORD *)(v113 + 64);
      v248 = v114;
LABEL_169:
      v115 = v114;
      do
      {
        v116 = *(_QWORD *)(v113 + 8LL * v114 + 264);
        if ( v116 )
        {
          if ( **(_DWORD **)(v116 + 16) )
            goto LABEL_369;
          if ( *(_DWORD *)v116 || *(_DWORD *)(v116 + 48) != *(_DWORD *)(v116 + 52) )
          {
            v119 = *(_DWORD *)(v4 + 136) & 2;
            v264 = 0LL;
            v120 = KfRaiseIrql(2u);
            while ( 1 )
            {
              v121 = *(unsigned int *)(v116 + 52);
              if ( (_DWORD)v121 == *(_DWORD *)(v116 + 48) )
                break;
              v122 = 0;
              if ( (unsigned int)(v121 + 1) < *(_DWORD *)(*(_QWORD *)(v116 + 16) + 4LL) )
                v122 = v121 + 1;
              if ( (_DWORD)v121 == _InterlockedCompareExchange((volatile signed __int32 *)(v116 + 52), v122, v121) )
              {
                do
                  v123 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v121 + *(_QWORD *)(v116 + 56)), 0LL);
                while ( !v123 );
                if ( !*(_DWORD *)(*(_QWORD *)(v116 + 16) + 16LL)
                  && (*(_DWORD *)v116 == 2
                   || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v116 + 32) + 16LL * *(unsigned int *)(v116 + 8)))) )
                {
                  if ( *(_DWORD *)(v116 + 48) == *(_DWORD *)(v116 + 52)
                    || ((v124 = *(_DWORD *)(v116 + 48), v125 = *(_DWORD *)(v116 + 52), v124 != v125)
                      ? (v124 <= v125
                       ? ((v127 = *(_QWORD *)(v116 + 24), *(_BYTE *)(*(_QWORD *)(v116 + 16) + 20LL))
                        ? (v128 = *(_QWORD *)(v127 + 1024))
                        : (v128 = *(_QWORD *)(v127 + 256)),
                          v126 = *(_DWORD *)(v128 + 4) - v125 + v124)
                       : (v126 = v124 - v125))
                      : (v126 = 0),
                        v126 <= *(_DWORD *)(*(_QWORD *)(v116 + 16) + 8LL)) )
                  {
                    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v116 + 16) + 16LL), 1, 0) )
                    {
                      v129 = *(_QWORD *)(v116 + 24);
                      if ( *(_BYTE *)(*(_QWORD *)(v116 + 16) + 20LL) )
                        IoQueueWorkItem(
                          *(PIO_WORKITEM *)(v129 + 1032),
                          (PIO_WORKITEM_ROUTINE)sub_1400F1060,
                          DelayedWorkQueue,
                          *(PVOID *)(v116 + 24));
                      else
                        KeSetEvent((PRKEVENT)(v129 + 472), 0, 0);
                    }
                  }
                }
                KeLowerIrql(v120);
                if ( v119 )
                {
                  v130 = sub_140103A50(*(_QWORD *)(v116 + 24), (__int64)v123, v109);
                  goto LABEL_259;
                }
                if ( (int)IoGetIoAttributionHandle(v123, &v264) >= 0 )
                {
                  v131 = v264;
                  v270 = 0LL;
                  LODWORD(v270) = 1;
                  v132 = v123->Tail.Overlay.CurrentStackLocation;
                  v271 = 0LL;
                  DWORD1(v270) = v132->MajorFunction | 0x200;
                  *((_QWORD *)&v271 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v271 + 1);
                  IoRecordIoAttribution(v131, &v270);
                }
                v133 = *(_QWORD *)(v116 + 24);
                v134 = v123->Tail.Overlay.CurrentStackLocation;
                v135.QuadPart = 0LL;
                v136 = v245;
                v137 = 0LL;
                v138 = v251;
                v130 = 0;
                v139 = *(_QWORD *)(v133 + 16);
                v140 = 0;
                v240[0] = 0;
                v255 = 0;
                v267 = 0LL;
                v262 = 0;
                v141 = v134->Parameters.Create.SecurityContext;
                ListEntry = 0LL;
                v142 = (unsigned int)v141;
                v243 = 0LL;
                v244 = 0;
                v143 = HIDWORD(*(_QWORD *)(v139 + 136));
                LOBYTE(v143) = v143 & 1;
                v253 = v245;
                MdlAddress = v143;
                v256 = v251;
                v236 = 0;
                if ( v141 == (PIO_SECURITY_CONTEXT)0x8765432100000003LL )
                {
                  v137 = v134->Parameters.Read.ByteOffset.QuadPart;
                  v243 = v137;
                }
                else if ( v141 == (PIO_SECURITY_CONTEXT)0xFEDCBA9000000000LL )
                {
                  v135 = v134->Parameters.Read.ByteOffset;
                  ListEntry = (PSLIST_ENTRY)v135.QuadPart;
                }
                if ( (unsigned int)(*(_DWORD *)(v133 + 96) - 5) <= 1 )
                {
                  v240[0] = 1;
                  v130 = -1073741810;
                  if ( v137 )
                  {
LABEL_312:
                    _interlockedbittestandreset((volatile signed __int32 *)(v137 + 108), 0);
                    goto LABEL_313;
                  }
                  goto LABEL_318;
                }
                v144 = *(_QWORD *)(v139 + 128);
                v234 = v134->MajorFunction;
                v237 = v134->MajorFunction == 3;
                v145 = *(_DWORD *)(v144 + 200);
                LODWORD(v249) = v145;
                if ( v243 )
                {
                  v137 = v243;
                  v146 = 0;
                  v147 = MdlAddress;
                  while ( 2 )
                  {
                    v148 = v137;
LABEL_222:
                    v149 = _InterlockedCompareExchange((volatile signed __int32 *)(v148 + 104), 4, 3);
                    if ( v147 )
                    {
                      if ( v149 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v148 + 104), 4, 1) != 1 )
                        goto LABEL_234;
                    }
                    else if ( v149 != 3 )
                    {
                      if ( *(_DWORD *)(v148 + 104) == 1 )
                        ++v140;
LABEL_234:
                      v148 = *(_QWORD *)(v148 + 96);
                      if ( v140 )
                      {
                        if ( !v148 )
                        {
                          v140 = 0;
                          continue;
                        }
                      }
                      else if ( !v148 )
                      {
                        goto LABEL_312;
                      }
                      goto LABEL_222;
                    }
                    break;
                  }
                  v150 = sub_14011DA00(
                           v148,
                           v241,
                           v138,
                           v136,
                           (__int64)v240,
                           (__int64)&v267,
                           (__int64)&v262,
                           (__int64)&v255,
                           v146);
                  v130 = v150;
                  if ( v150 == 259 )
                  {
                    v151 = *(_QWORD *)(v133 + 16);
                    ++v244;
                    v136 = 0;
                    v253 = 0LL;
                    v256 = 0LL;
                    LODWORD(v138) = 0;
                    v152 = v244 % (unsigned int)*(unsigned __int8 *)(v151 + 1730);
                    v236 = 1;
                    v137 = v243;
                    v238 = v152 == 0;
                    v146 = v152 == 0;
                  }
                  else
                  {
                    if ( v150 == -2147483631 )
                    {
                      _InterlockedCompareExchange((volatile signed __int32 *)(v148 + 104), 3, 4);
                      v109 = v241;
                      sub_140118560(v133, *(_QWORD *)(v148 + 24), v241);
                      goto LABEL_258;
                    }
                    v137 = v243;
                    if ( !*(_WORD *)(v148 + 34) )
                    {
                      v240[0] = 1;
                      goto LABEL_312;
                    }
                    if ( v240[0] )
                      goto LABEL_312;
                    v136 = v253;
                    LODWORD(v138) = v256;
                  }
                  goto LABEL_234;
                }
                if ( !(_BYTE)MdlAddress )
                {
                  if ( v135.QuadPart )
                  {
                    v153 = *(_QWORD *)(v135.QuadPart + 96);
                    v142 = *(_DWORD *)(v135.QuadPart + 116);
                    *(_QWORD *)(v135.QuadPart + 64) = v245;
                    *(_QWORD *)(v135.QuadPart + 72) = v138;
                    goto LABEL_285;
                  }
                  v154 = v134->Parameters.Read.ByteOffset.QuadPart;
                  if ( !(_DWORD)v141 )
                  {
LABEL_245:
                    v123->IoStatus.Status = v130;
                    IofCompleteRequest(v123, 0);
                    v155 = *(_QWORD *)(v133 + 128);
                    if ( !*(_BYTE *)v155
                      && _InterlockedExchangeAdd(
                           *(volatile signed __int32 **)(*(_QWORD *)(v155 + 24) + 8 * v246),
                           0xFFFFFFFF) == 1 )
                    {
                      v156 = *(_QWORD *)(*(_QWORD *)(v133 + 16) + 128LL);
                      v157 = *(_QWORD *)(v133 + 128);
                      if ( v157 )
                      {
                        if ( *(_QWORD *)(v157 + 8) )
                        {
                          v158 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v157 + 40);
                          if ( v158 )
                          {
                            if ( ExAcquireRundownProtectionCacheAware(v158) )
                            {
                              PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v133 + 128) + 8LL), 0LL, 2LL);
                              v159 = *(_QWORD *)(v133 + 128);
                              if ( v159 )
                              {
                                if ( *(_QWORD *)(v159 + 8) )
                                {
                                  v160 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v159 + 40);
                                  if ( v160 )
                                    ExReleaseRundownProtectionCacheAware(v160);
                                }
                              }
                            }
                          }
                        }
                      }
                      v161 = *(_QWORD *)(v156 + 160);
                      if ( *(_BYTE *)v161 == 1 )
                        PoFxIdleComponent(**(_QWORD **)(v161 + 8), 0LL, 2LL);
                    }
                    goto LABEL_257;
                  }
                  v162 = *(unsigned int *)(v133 + 64);
                  if ( (unsigned int)v141 % (unsigned int)v162
                    || (v163 = v154 / v162, v154 % v162)
                    || (v164 = *(_QWORD *)(v133 + 424), v165 = (unsigned int)v141 / (unsigned int)v162, v163 >= v164)
                    || v164 - v163 < (unsigned int)v141 / (unsigned int)v162 )
                  {
                    v130 = -1073741811;
                    goto LABEL_245;
                  }
                  if ( (unsigned int)v141 > v145 )
                    goto LABEL_281;
                  v166 = *(_DWORD *)(v133 + 420);
                  if ( !v166 )
                  {
LABEL_272:
                    v170 = sub_1401155A0(v139, v241);
                    ListEntry = (PSLIST_ENTRY)v170;
                    v171 = v170;
                    if ( !v170 )
                    {
                      v130 = -1073741670;
                      goto LABEL_245;
                    }
                    *(_QWORD *)(v170 + 40) = v123;
                    v172 = *(_BYTE *)(v170 + 126);
                    *(_QWORD *)(v171 + 96) = v154;
                    *(_QWORD *)(v171 + 104) = v163;
                    *(_QWORD *)(v171 + 64) = v245;
                    *(_QWORD *)(v171 + 72) = v251;
                    *(_BYTE *)(v171 + 126) = v172 & 0xFE | (v234 == 3);
                    *(_QWORD *)(v171 + 32) = v133;
                    *(_DWORD *)(v171 + 112) = v165;
                    *(_DWORD *)(v171 + 116) = (_DWORD)v141;
                    *(_QWORD *)(v171 + 56) = v134->Parameters.Read.ByteOffset.QuadPart;
                    v173 = v134->Parameters.Create.SecurityContext;
                    v134->Parameters.Read.ByteOffset.QuadPart = v171;
                    *(_QWORD *)(v171 + 48) = v173;
                    v134->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
                    v174 = *(unsigned __int16 *)(v171 + 124);
                    v175 = *(_QWORD *)(v171 + 16);
                    v176 = (char *)v123->MdlAddress->StartVa + v123->MdlAddress->ByteOffset;
                    *(_QWORD *)(v171 + 80) = v176;
                    v260 = v123->MdlAddress;
                    MdlAddress = *(_QWORD *)(v133 + 16);
                    v258 = (struct _IO_STACK_LOCATION *)v176;
                    v177 = KfRaiseIrql(2u);
                    v230 = v174;
                    v178 = v260;
                    v228 = v175;
                    v179 = ListEntry;
                    v235 = v234 != 3;
                    LOBYTE(v226) = v235;
                    v130 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PMDL, char *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL) + 8LL) + 112LL))(
                             *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL),
                             *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 8LL),
                             v260,
                             v176,
                             (_DWORD)v141,
                             sub_1401172A0,
                             ListEntry,
                             v226,
                             v228,
                             v230);
                    if ( v130 == -1073741789 )
                    {
                      LOBYTE(v226) = v235;
                      v130 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PMDL, struct _IO_STACK_LOCATION *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL) + 8LL) + 88LL))(
                               *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL),
                               *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 8LL),
                               v178,
                               v258,
                               (_DWORD)v141,
                               sub_1401172A0,
                               v179,
                               v226);
                    }
                    if ( v177 < 2u )
                      KeLowerIrql(v177);
                    if ( v130 >= 0 )
                    {
                      v130 = 259;
                      goto LABEL_257;
                    }
                    goto LABEL_314;
                  }
                  if ( (unsigned int)v141 <= v166 )
                  {
                    v167 = *(_BYTE *)(v133 + 419);
                    v168 = ((unsigned int)v141 & (v166 - 1)) + v166 + ((unsigned int)v154 & (v166 - 1)) - 1LL;
                    if ( v167 )
                      v169 = (v168 >> v167) + ((unsigned __int64)(unsigned int)v141 >> v167);
                    else
                      v169 = (unsigned int)v141 / v166 + v168 / v166;
                    if ( v169 <= 1 )
                      goto LABEL_272;
                    v145 = v249;
                  }
LABEL_281:
                  v180 = sub_14011EBD0(
                           v133,
                           (_DWORD)v123,
                           v237,
                           (_DWORD)v141,
                           v154,
                           v145,
                           v241,
                           v251,
                           v245,
                           (__int64)&v236);
LABEL_282:
                  v130 = v180;
LABEL_313:
                  v197 = v130 == 0;
                  if ( v130 >= 0 )
                  {
LABEL_316:
                    if ( !v197 )
                      goto LABEL_257;
                  }
                  else
                  {
LABEL_314:
                    if ( v130 == -2147483631 )
                    {
                      v197 = 0;
                      goto LABEL_316;
                    }
                  }
LABEL_317:
                  v137 = v243;
LABEL_318:
                  v198 = ListEntry;
                  if ( ListEntry )
                  {
                    v199 = *((_QWORD *)&ListEntry[1].Next + 1);
                    if ( v199 )
                    {
                      v200 = *((_BYTE *)&ListEntry[7].Next + 14);
                      v201 = *(_QWORD *)(*(_QWORD *)(v133 + 16) + 128LL);
                      v202 = KfRaiseIrql(2u);
                      (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v201 + 1144) + 8LL) + 96LL))(
                        *(_QWORD *)(v201 + 1144),
                        v199,
                        (v200 & 1) == 0);
                      if ( v202 < 2u )
                        KeLowerIrql(v202);
                      v198 = ListEntry;
                    }
                    v203 = *((_QWORD *)&v198[5].Next + 1);
                    v204 = v246;
                    if ( v203 )
                    {
                      v205 = *(_QWORD *)(v133 + 16);
                      *(_QWORD *)(v203 + 88) = 0LL;
                      *(_DWORD *)(v203 + 108) = 0;
                      *(_DWORD *)(v203 + 104) = 0;
                      ExpInterlockedPushEntrySList(
                        *(PSLIST_HEADER *)(*(_QWORD *)(v205 + 888) + 8 * v204),
                        (PSLIST_ENTRY)v203);
                    }
                    v206 = *(_QWORD *)(v133 + 16);
                    v207 = *(_QWORD *)(*((_QWORD *)&v198[2].Next + 1) + 184LL);
                    *(_QWORD *)(v207 + 8) = v198[3].Next;
                    *(_QWORD *)(v207 + 24) = *((_QWORD *)&v198[3].Next + 1);
                    v208 = *((unsigned int *)&v198[7].Next + 2);
                    *((_QWORD *)&v198[1].Next + 1) = 0LL;
                    *((_QWORD *)&v198[5].Next + 1) = 0LL;
                    *((_BYTE *)&v198[7].Next + 14) = 0;
                    ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v206 + 896) + 8 * v208), v198);
                    v123->IoStatus.Status = v130;
                    IofCompleteRequest(v123, 0);
                    v209 = *(_QWORD *)(v133 + 128);
                    if ( !*(_BYTE *)v209
                      && _InterlockedExchangeAdd(
                           *(volatile signed __int32 **)(*(_QWORD *)(v209 + 24) + 8 * v204),
                           0xFFFFFFFF) == 1 )
                    {
                      v210 = *(_QWORD *)(*(_QWORD *)(v133 + 16) + 128LL);
                      v211 = *(_QWORD *)(v133 + 128);
                      if ( v211 )
                      {
                        if ( *(_QWORD *)(v211 + 8) )
                        {
                          v212 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v211 + 40);
                          if ( v212 )
                          {
                            if ( ExAcquireRundownProtectionCacheAware(v212) )
                            {
                              PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v133 + 128) + 8LL), 0LL, 2LL);
                              v213 = *(_QWORD *)(v133 + 128);
                              if ( v213 )
                              {
                                if ( *(_QWORD *)(v213 + 8) )
                                {
                                  v214 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v213 + 40);
                                  if ( v214 )
                                    ExReleaseRundownProtectionCacheAware(v214);
                                }
                              }
                            }
                          }
                        }
                      }
                      v215 = *(_QWORD *)(v210 + 160);
                      if ( *(_BYTE *)v215 == 1 )
                        PoFxIdleComponent(**(_QWORD **)(v215 + 8), 0LL, 2LL);
                    }
                    v109 = v241;
                  }
                  else
                  {
                    if ( !v137 )
                      goto LABEL_245;
                    if ( v240[0] )
                    {
                      sub_1401152F0(*(_QWORD **)(v133 + 16), v137);
                      v109 = v241;
                      sub_140115430(*(_QWORD *)(v133 + 16), v241, v243, (__int64)v123);
                      v123->IoStatus.Status = v130;
                      IofCompleteRequest(v123, 0);
                      v216 = *(_QWORD *)(v133 + 128);
                      if ( !*(_BYTE *)v216
                        && _InterlockedExchangeAdd(
                             *(volatile signed __int32 **)(*(_QWORD *)(v216 + 24) + 8 * v246),
                             0xFFFFFFFF) == 1 )
                      {
                        v217 = *(_QWORD *)(*(_QWORD *)(v133 + 16) + 128LL);
                        v218 = *(_QWORD *)(v133 + 128);
                        if ( v218 )
                        {
                          if ( *(_QWORD *)(v218 + 8) )
                          {
                            v219 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v218 + 40);
                            if ( v219 )
                            {
                              if ( ExAcquireRundownProtectionCacheAware(v219) )
                              {
                                PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v133 + 128) + 8LL), 0LL, 2LL);
                                v220 = *(_QWORD *)(v133 + 128);
                                if ( v220 )
                                {
                                  if ( *(_QWORD *)(v220 + 8) )
                                  {
                                    v221 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v220 + 40);
                                    if ( v221 )
                                      ExReleaseRundownProtectionCacheAware(v221);
                                  }
                                }
                              }
                            }
                          }
                        }
                        v222 = *(_QWORD *)(v217 + 160);
                        if ( *(_BYTE *)v222 == 1 )
                          PoFxIdleComponent(**(_QWORD **)(v222 + 8), 0LL, 2LL);
                      }
                    }
                    else
                    {
LABEL_257:
                      v109 = v241;
                    }
                  }
LABEL_258:
                  v113 = v265;
LABEL_259:
                  if ( v130 != 259 )
                  {
                    v114 = v248;
                    goto LABEL_357;
                  }
                  goto LABEL_368;
                }
                v153 = v134->Parameters.Read.ByteOffset.QuadPart;
LABEL_285:
                if ( !v142 )
                  goto LABEL_317;
                v181 = *(unsigned int *)(v133 + 64);
                if ( v142 % (unsigned int)v181
                  || (v182 = v153 / v181, v153 % v181)
                  || (v183 = *(_QWORD *)(v133 + 424), v184 = v142 / (unsigned int)v181, v182 >= v183)
                  || v183 - v182 < v142 / (unsigned int)v181 )
                {
                  v130 = -1073741811;
                  goto LABEL_317;
                }
                v185 = *(_QWORD *)(v133 + 16);
                if ( v142 <= *(_DWORD *)(*(_QWORD *)(v185 + 128) + 200LL) )
                {
                  v186 = *(_DWORD *)(v133 + 420);
                  if ( !v186 )
                    goto LABEL_297;
                  if ( v142 <= v186 )
                  {
                    v187 = *(_BYTE *)(v133 + 419);
                    v188 = ((unsigned int)v153 & (v186 - 1)) + v186 + (v142 & (v186 - 1)) - 1LL;
                    if ( v187 )
                      v189 = ((unsigned __int64)v142 >> v187) + (v188 >> v187);
                    else
                      v189 = v188 / v186 + v142 / v186;
                    if ( v189 <= 1 )
                    {
LABEL_297:
                      v190 = 0;
                      if ( ((v142
                           + ((LODWORD(v123->MdlAddress->StartVa) + v123->MdlAddress->ByteOffset) & 0xFFF)
                           + 4095LL) & 0xFFFFFFFFFFFFF000uLL) <= 0x2000 )
                      {
                        v192 = v246;
                      }
                      else
                      {
                        v191 = *(_QWORD *)(v185 + 880);
                        v192 = v246;
                        v193 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v191 + 8 * v246));
                        v190 = (int)v193;
                        if ( !v193 )
                        {
                          v194 = sub_1401147F0(*(_QWORD *)(v133 + 16), v241);
                          v190 = v194;
                          if ( !v194 )
                          {
                            v109 = v241;
                            sub_140118560(v133, (__int64)v123, v241);
                            v130 = -2147483631;
                            goto LABEL_258;
                          }
                        }
                      }
                      if ( v245 )
                      {
                        LODWORD(v195) = v251;
                      }
                      else
                      {
                        v196 = *(_QWORD *)(v133 + 16);
                        if ( (*(_BYTE *)(v196 + 136) & 2) != 0 )
                          v195 = *(_QWORD *)(v196 + 728) + 192 * v192;
                        else
                          LODWORD(v195) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v196 + 872) + 2 * v192)
                                        + *(_DWORD *)(v196 + 728)
                                        - 192;
                      }
                      LOBYTE(v225) = 0;
                      v130 = sub_14011F570(
                               v133,
                               (_DWORD)v123,
                               v195,
                               v190,
                               v241,
                               v225,
                               v142,
                               v153,
                               v182,
                               v184,
                               v237,
                               v245);
                      goto LABEL_313;
                    }
                    v145 = v249;
                  }
                }
                v180 = sub_14011EBD0(v133, (_DWORD)v123, v237, v142, v153, v145, v241, v251, v245, (__int64)&v236);
                goto LABEL_282;
              }
            }
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v116, 0, 1) == 1 )
            {
              v223 = *(_QWORD *)(v116 + 24);
              if ( *(_BYTE *)(*(_QWORD *)(v116 + 16) + 20LL) == 1 )
                _InterlockedDecrement((volatile signed __int32 *)(v223 + 956));
              else
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v223 + 16) + 952LL));
            }
            KeLowerIrql(v120);
            v130 = -2147483622;
LABEL_357:
            if ( v236 )
            {
LABEL_368:
              v118 = 0LL;
              return v118 == 0;
            }
            if ( v130 == -2147483631 )
              goto LABEL_369;
            if ( v130 == -2147483622 )
            {
              v11 = v247;
              if ( v247 == 1 )
                break;
LABEL_363:
              if ( ++v114 >= *(_DWORD *)(v113 + 4) )
                v114 = 0;
              v248 = v114;
            }
            else if ( v247 != 1 )
            {
              goto LABEL_363;
            }
            if ( sub_14008F0E0() )
              goto LABEL_369;
            v11 = v247;
            v4 = v259;
            goto LABEL_169;
          }
        }
        if ( v11 == 1 )
          break;
        v117 = v114 + 1;
        v114 = 0;
        if ( v117 != *(_DWORD *)(v113 + 4) )
          v114 = v117;
        v248 = v114;
      }
      while ( v115 != v114 );
      v110 = v242;
      v111 = v257;
LABEL_179:
      v241 = ++v109;
      if ( v109 >= v111[3] )
        break;
      v4 = v259;
    }
  }
LABEL_369:
  v118 = v245;
  return v118 == 0;
}
