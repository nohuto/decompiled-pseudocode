/*
 * XREFs of sub_1401190B0 @ 0x1401190B0
 * Callers:
 *     sub_1400DCCE0 @ 0x1400DCCE0 (sub_1400DCCE0.c)
 *     sub_140120CDC @ 0x140120CDC (sub_140120CDC.c)
 *     sub_140121184 @ 0x140121184 (sub_140121184.c)
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

char __fastcall sub_1401190B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r12
  __int64 v5; // rax
  PMDL v6; // r15
  unsigned int Process; // r13d
  int v8; // esi
  unsigned int v9; // edx
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rbx
  KIRQL v13; // r14
  __int64 v14; // r9
  signed __int32 v15; // r8d
  IRP *v16; // rsi
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r14d
  __int64 v24; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v26; // r15
  struct _IO_STACK_LOCATION *v27; // rcx
  __int64 QuadPart; // rdx
  int v29; // r11d
  LARGE_INTEGER ByteOffset; // r8
  __int64 v31; // r9
  __int16 v32; // di
  PIO_SECURITY_CONTEXT SecurityContext; // r12
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // r10d
  char v38; // r12
  char v39; // cl
  __int64 v40; // rbx
  signed __int32 v41; // eax
  int v42; // eax
  __int64 v43; // rax
  unsigned int v44; // et2
  __int64 v45; // rax
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rdx
  __int64 v51; // rdx
  char v52; // r11
  unsigned __int64 v53; // r9
  unsigned int v54; // r8d
  __int64 v55; // rax
  __int64 v56; // r14
  char v57; // al
  char v58; // cl
  __int64 v59; // rax
  struct _IO_STACK_LOCATION *v60; // rcx
  PIO_SECURITY_CONTEXT v61; // rax
  int v62; // ebx
  __int64 v63; // rdi
  KIRQL v64; // al
  struct _IO_STACK_LOCATION *v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rdi
  int v68; // eax
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // r12
  unsigned __int64 v71; // rdx
  __int64 v72; // r14
  unsigned int v73; // eax
  char v74; // r11
  unsigned __int64 v75; // r8
  unsigned int v76; // r9d
  int v77; // r9d
  PSLIST_ENTRY v78; // rax
  unsigned int v79; // r14d
  __int64 v80; // rax
  __int64 v81; // r10
  __int64 v82; // r8
  bool v83; // zf
  PSLIST_ENTRY v84; // rbx
  __int64 v85; // r12
  char v86; // di
  __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rdi
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rax
  volatile signed __int32 *v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v99; // rcx
  __int64 v100; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rax
  _DWORD *v104; // r8
  unsigned int v105; // r12d
  unsigned int v106; // r8d
  _DWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // r13
  unsigned int v110; // edi
  unsigned int v111; // edx
  __int64 v112; // rbx
  unsigned int v113; // eax
  __int64 v114; // r14
  KIRQL v115; // r15
  __int64 v116; // r9
  signed __int32 v117; // r8d
  IRP *v118; // rsi
  unsigned int v119; // edx
  unsigned int v120; // r8d
  unsigned int v121; // edx
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  int v125; // r14d
  __int64 v126; // rdi
  struct _IO_STACK_LOCATION *v127; // rax
  __int64 v128; // r15
  struct _IO_STACK_LOCATION *v129; // r13
  LARGE_INTEGER v130; // rcx
  __int64 v131; // r10
  char v132; // r8
  __int64 v133; // rdx
  __int64 v134; // r11
  __int16 v135; // di
  PIO_SECURITY_CONTEXT v136; // r12
  unsigned int v137; // ebx
  __int64 v138; // rax
  __int64 v139; // rax
  unsigned int v140; // r9d
  char v141; // r12
  unsigned int v142; // r13d
  __int64 v143; // rbx
  signed __int32 v144; // eax
  int v145; // eax
  __int64 v146; // rax
  unsigned int v147; // et2
  unsigned __int64 v148; // rdi
  unsigned __int64 v149; // rbx
  __int64 v150; // rax
  volatile signed __int32 *v151; // rcx
  __int64 v152; // rbx
  __int64 v153; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v154; // rcx
  __int64 v155; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v156; // rcx
  __int64 v157; // rcx
  unsigned __int64 v158; // r8
  unsigned __int64 v159; // rdi
  unsigned __int64 v160; // rdx
  unsigned int v161; // r14d
  unsigned int v162; // edx
  char v163; // r8
  unsigned __int64 v164; // rax
  unsigned int v165; // r9d
  __int64 v166; // rax
  __int64 v167; // rdx
  char v168; // al
  PIO_SECURITY_CONTEXT v169; // rax
  int v170; // ebx
  __int64 v171; // rdi
  char *v172; // r14
  KIRQL v173; // r13
  PMDL v174; // rbx
  PSLIST_ENTRY v175; // rdi
  int v176; // eax
  unsigned __int64 v177; // r8
  unsigned __int64 v178; // r12
  unsigned __int64 v179; // rdx
  __int16 v180; // r13
  __int64 v181; // r14
  unsigned int v182; // eax
  char v183; // r11
  unsigned __int64 v184; // r8
  unsigned int v185; // r8d
  int v186; // r9d
  PSLIST_ENTRY v187; // rax
  __int64 v188; // rax
  __int64 v189; // r10
  __int64 v190; // r8
  bool v191; // zf
  PSLIST_ENTRY v192; // rbx
  __int64 v193; // r12
  char v194; // di
  __int64 v195; // rbx
  KIRQL v196; // r13
  __int64 v197; // rdx
  __int64 v198; // rdi
  __int64 v199; // rcx
  __int64 v200; // rcx
  __int64 v201; // rdx
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rbx
  __int64 v206; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v207; // rcx
  __int64 v208; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v209; // rcx
  __int64 v210; // rcx
  __int64 v211; // rax
  int v213; // [rsp+28h] [rbp-D8h]
  int v214; // [rsp+38h] [rbp-C8h]
  __int64 v215; // [rsp+40h] [rbp-C0h]
  __int64 v216; // [rsp+40h] [rbp-C0h]
  int v217; // [rsp+48h] [rbp-B8h]
  int v218; // [rsp+48h] [rbp-B8h]
  UCHAR MajorFunction; // [rsp+60h] [rbp-A0h]
  bool v220; // [rsp+60h] [rbp-A0h]
  KIRQL v221; // [rsp+60h] [rbp-A0h]
  bool v222; // [rsp+60h] [rbp-A0h]
  bool v223; // [rsp+60h] [rbp-A0h]
  char v224; // [rsp+61h] [rbp-9Fh] BYREF
  bool v225; // [rsp+62h] [rbp-9Eh]
  char v226; // [rsp+63h] [rbp-9Dh]
  char v227; // [rsp+64h] [rbp-9Ch] BYREF
  char v228[3]; // [rsp+65h] [rbp-9Bh] BYREF
  unsigned int v229; // [rsp+68h] [rbp-98h]
  __int64 v230; // [rsp+70h] [rbp-90h]
  unsigned int v231; // [rsp+78h] [rbp-88h]
  unsigned __int16 v232; // [rsp+7Ch] [rbp-84h]
  __int64 v233; // [rsp+80h] [rbp-80h]
  unsigned int v234; // [rsp+88h] [rbp-78h]
  PSLIST_ENTRY ListEntry; // [rsp+90h] [rbp-70h]
  __int64 v236; // [rsp+98h] [rbp-68h]
  __int64 v237; // [rsp+A0h] [rbp-60h]
  int v238; // [rsp+A8h] [rbp-58h]
  __int64 MdlAddress; // [rsp+B0h] [rbp-50h]
  __int64 v240; // [rsp+B8h] [rbp-48h]
  __int16 v241[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v242; // [rsp+C4h] [rbp-3Ch] BYREF
  _DWORD *v243; // [rsp+C8h] [rbp-38h]
  struct _IO_STACK_LOCATION *v244; // [rsp+D0h] [rbp-30h]
  __int64 v245; // [rsp+D8h] [rbp-28h]
  PMDL v246; // [rsp+E0h] [rbp-20h]
  int v247; // [rsp+E8h] [rbp-18h] BYREF
  int v248; // [rsp+ECh] [rbp-14h] BYREF
  __int64 v249; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v250; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v251; // [rsp+100h] [rbp+0h]
  __int64 v252; // [rsp+108h] [rbp+8h] BYREF
  __int64 v253; // [rsp+110h] [rbp+10h] BYREF
  __int128 v254; // [rsp+118h] [rbp+18h] BYREF
  __int128 v255; // [rsp+128h] [rbp+28h] BYREF
  __int128 v256; // [rsp+138h] [rbp+38h] BYREF
  __int128 v257; // [rsp+148h] [rbp+48h] BYREF

  v3 = a1;
  v245 = a1;
  v231 = a3;
  v4 = a2;
  v237 = a2;
  v229 = 0;
  v5 = *(_QWORD *)(a1 + 1104);
  v224 = 0;
  v236 = 8LL * a3;
  v6 = *(PMDL *)(v236 + v5);
  v246 = v6;
  Process = (unsigned int)v6[1].Process;
  v8 = *(_DWORD *)(a1 + 656);
  v243 = qword_140168E40;
  v238 = v8;
LABEL_2:
  v9 = Process;
  do
  {
    v10 = *((_QWORD *)&v6[5].MappedSystemVa + Process);
    if ( *(_DWORD *)v10 || *(_DWORD *)(v10 + 48) != *(_DWORD *)(v10 + 52) )
    {
      v12 = *(_DWORD *)(v3 + 136) & 2;
      v249 = 0LL;
      v13 = KfRaiseIrql(2u);
      do
      {
        v14 = *(unsigned int *)(v10 + 52);
        if ( (_DWORD)v14 == *(_DWORD *)(v10 + 48) )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v10, 0, 1) == 1 )
          {
            v103 = *(_QWORD *)(v10 + 24);
            if ( *(_BYTE *)(*(_QWORD *)(v10 + 16) + 20LL) == 1 )
              _InterlockedDecrement((volatile signed __int32 *)(v103 + 956));
            else
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v103 + 16) + 952LL));
          }
          KeLowerIrql(v13);
          v23 = -2147483622;
          goto LABEL_161;
        }
        v15 = 0;
        if ( (unsigned int)(v14 + 1) < *(_DWORD *)(*(_QWORD *)(v10 + 16) + 4LL) )
          v15 = v14 + 1;
      }
      while ( (_DWORD)v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 52), v15, v14) );
      do
        v16 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v14 + *(_QWORD *)(v10 + 56)), 0LL);
      while ( !v16 );
      if ( !*(_DWORD *)(*(_QWORD *)(v10 + 16) + 16LL)
        && (*(_DWORD *)v10 == 2
         || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v10 + 32) + 16LL * *(unsigned int *)(v10 + 8)))) )
      {
        if ( *(_DWORD *)(v10 + 48) == *(_DWORD *)(v10 + 52)
          || ((v17 = *(_DWORD *)(v10 + 48), v18 = *(_DWORD *)(v10 + 52), v17 != v18)
            ? (v17 <= v18
             ? ((v20 = *(_QWORD *)(v10 + 24), *(_BYTE *)(*(_QWORD *)(v10 + 16) + 20LL))
              ? (v21 = *(_QWORD *)(v20 + 1024))
              : (v21 = *(_QWORD *)(v20 + 256)),
                v19 = *(_DWORD *)(v21 + 4) - v18 + v17)
             : (v19 = v17 - v18))
            : (v19 = 0),
              v19 <= *(_DWORD *)(*(_QWORD *)(v10 + 16) + 8LL)) )
        {
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v10 + 16) + 16LL), 1, 0) )
          {
            v22 = *(_QWORD *)(v10 + 24);
            if ( *(_BYTE *)(*(_QWORD *)(v10 + 16) + 20LL) )
              IoQueueWorkItem(
                *(PIO_WORKITEM *)(v22 + 1032),
                (PIO_WORKITEM_ROUTINE)sub_1400F1060,
                DelayedWorkQueue,
                *(PVOID *)(v10 + 24));
            else
              KeSetEvent((PRKEVENT)(v22 + 472), 0, 0);
          }
        }
      }
      KeLowerIrql(v13);
      if ( v12 )
      {
        v23 = sub_140103A50(*(_QWORD *)(v10 + 24), (__int64)v16, v231);
        goto LABEL_150;
      }
      if ( (int)IoGetIoAttributionHandle(v16, &v249) >= 0 )
      {
        v24 = v249;
        v254 = 0LL;
        LODWORD(v254) = 1;
        CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
        v255 = 0LL;
        DWORD1(v254) = CurrentStackLocation->MajorFunction | 0x200;
        *((_QWORD *)&v255 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v255 + 1);
        IoRecordIoAttribution(v24, &v254);
      }
      v26 = *(_QWORD *)(v10 + 24);
      v27 = v16->Tail.Overlay.CurrentStackLocation;
      QuadPart = 0LL;
      v227 = 0;
      v29 = v4;
      v241[0] = 0;
      ByteOffset.QuadPart = 0LL;
      v31 = *(_QWORD *)(v26 + 16);
      v23 = 0;
      v252 = 0LL;
      v32 = 0;
      v247 = 0;
      v240 = v4;
      SecurityContext = v27->Parameters.Create.SecurityContext;
      v34 = (unsigned int)SecurityContext;
      v35 = HIDWORD(*(_QWORD *)(v31 + 136));
      LOBYTE(v35) = v35 & 1;
      v244 = v27;
      v233 = v35;
      ListEntry = 0LL;
      v230 = 0LL;
      v232 = 0;
      MdlAddress = v31;
      v224 = 0;
      if ( SecurityContext == (PIO_SECURITY_CONTEXT)0x8765432100000003LL )
      {
        QuadPart = v27->Parameters.Read.ByteOffset.QuadPart;
        v230 = QuadPart;
      }
      else if ( SecurityContext == (PIO_SECURITY_CONTEXT)0xFEDCBA9000000000LL )
      {
        ByteOffset = v27->Parameters.Read.ByteOffset;
        ListEntry = (PSLIST_ENTRY)ByteOffset.QuadPart;
      }
      if ( (unsigned int)(*(_DWORD *)(v26 + 96) - 5) <= 1 )
      {
        v227 = 1;
        v23 = -1073741810;
        if ( !QuadPart )
        {
LABEL_124:
          v84 = ListEntry;
          if ( ListEntry )
          {
            v85 = *((_QWORD *)&ListEntry[1].Next + 1);
            if ( v85 )
            {
              v86 = *((_BYTE *)&ListEntry[7].Next + 14);
              v87 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 128LL);
              v221 = KfRaiseIrql(2u);
              (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v87 + 1144) + 8LL) + 96LL))(
                *(_QWORD *)(v87 + 1144),
                v85,
                (v86 & 1) == 0);
              if ( v221 < 2u )
                KeLowerIrql(v221);
              v84 = ListEntry;
            }
            v88 = *((_QWORD *)&v84[5].Next + 1);
            v89 = v236;
            if ( v88 )
            {
              v90 = *(_QWORD *)(v26 + 16);
              *(_QWORD *)(v88 + 88) = 0LL;
              *(_DWORD *)(v88 + 108) = 0;
              *(_DWORD *)(v88 + 104) = 0;
              ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v90 + 888) + v89), (PSLIST_ENTRY)v88);
            }
            v91 = *(_QWORD *)(v26 + 16);
            v92 = *(_QWORD *)(*((_QWORD *)&v84[2].Next + 1) + 184LL);
            *(_QWORD *)(v92 + 8) = v84[3].Next;
            *(_QWORD *)(v92 + 24) = *((_QWORD *)&v84[3].Next + 1);
            v93 = *((unsigned int *)&v84[7].Next + 2);
            *((_QWORD *)&v84[1].Next + 1) = 0LL;
            *((_QWORD *)&v84[5].Next + 1) = 0LL;
            *((_BYTE *)&v84[7].Next + 14) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v91 + 896) + 8 * v93), v84);
            v16->IoStatus.Status = v23;
            IofCompleteRequest(v16, 0);
            v94 = *(_QWORD *)(v26 + 128);
            if ( *(_BYTE *)v94 )
            {
LABEL_149:
              v6 = v246;
              v4 = v237;
LABEL_150:
              v8 = v238;
              if ( v23 == 259 )
                goto LABEL_151;
LABEL_161:
              if ( !v224 )
              {
                if ( v23 == -2147483631 )
                  return 1;
                if ( v23 == -2147483622 )
                {
                  if ( v8 == 1 )
                  {
                    v3 = v245;
                    break;
                  }
                  goto LABEL_152;
                }
              }
LABEL_151:
              if ( v8 == 1 )
                goto LABEL_154;
LABEL_152:
              if ( ++Process >= HIDWORD(v6->Next) )
                Process = 0;
LABEL_154:
              if ( sub_14008F0E0() )
                return 1;
              v3 = v245;
              goto LABEL_2;
            }
            v95 = *(volatile signed __int32 **)(*(_QWORD *)(v94 + 24) + v89);
LABEL_138:
            if ( _InterlockedExchangeAdd(v95, 0xFFFFFFFF) == 1 )
            {
              v97 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 128LL);
              v98 = *(_QWORD *)(v26 + 128);
              if ( v98 )
              {
                if ( *(_QWORD *)(v98 + 8) )
                {
                  v99 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v98 + 40);
                  if ( v99 )
                  {
                    if ( ExAcquireRundownProtectionCacheAware(v99) )
                    {
                      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v26 + 128) + 8LL), 0LL, 2LL);
                      v100 = *(_QWORD *)(v26 + 128);
                      if ( v100 )
                      {
                        if ( *(_QWORD *)(v100 + 8) )
                        {
                          v101 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v100 + 40);
                          if ( v101 )
                            ExReleaseRundownProtectionCacheAware(v101);
                        }
                      }
                    }
                  }
                }
              }
              v102 = *(_QWORD *)(v97 + 160);
              if ( *(_BYTE *)v102 == 1 )
                PoFxIdleComponent(**(_QWORD **)(v102 + 8), 0LL, 2LL);
            }
            goto LABEL_149;
          }
          if ( QuadPart )
          {
            if ( !v227 )
              goto LABEL_149;
            sub_1401152F0(*(_QWORD **)(v26 + 16), QuadPart);
            sub_140115430(*(_QWORD *)(v26 + 16), v231, v230, (__int64)v16);
          }
LABEL_136:
          v16->IoStatus.Status = v23;
          IofCompleteRequest(v16, 0);
          v96 = *(_QWORD *)(v26 + 128);
          if ( *(_BYTE *)v96 )
            goto LABEL_149;
          v95 = *(volatile signed __int32 **)(*(_QWORD *)(v96 + 24) + v236);
          goto LABEL_138;
        }
LABEL_118:
        _interlockedbittestandreset((volatile signed __int32 *)(QuadPart + 108), 0);
LABEL_119:
        v83 = v23 == 0;
        if ( v23 >= 0 )
          goto LABEL_122;
        goto LABEL_120;
      }
      v36 = *(_QWORD *)(v31 + 128);
      MajorFunction = v27->MajorFunction;
      v225 = v27->MajorFunction == 3;
      v37 = *(_DWORD *)(v36 + 200);
      v234 = v37;
      if ( v230 )
      {
        QuadPart = v230;
        v38 = 0;
        v39 = v233;
        while ( 2 )
        {
          v40 = QuadPart;
LABEL_45:
          v41 = _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 4, 3);
          if ( v39 )
          {
            if ( v41 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 4, 1) != 1 )
              goto LABEL_57;
          }
          else if ( v41 != 3 )
          {
            if ( *(_DWORD *)(v40 + 104) == 1 )
              ++v32;
LABEL_57:
            v40 = *(_QWORD *)(v40 + 96);
            if ( v32 )
            {
              if ( !v40 )
              {
                v32 = 0;
                continue;
              }
            }
            else if ( !v40 )
            {
              goto LABEL_118;
            }
            goto LABEL_45;
          }
          break;
        }
        v42 = sub_14011DA00(v40, v231, v29, 0, (__int64)&v227, (__int64)&v252, (__int64)&v247, (__int64)v241, v38);
        v23 = v42;
        if ( v42 == 259 )
        {
          v43 = *(_QWORD *)(v26 + 16);
          v240 = 0LL;
          v29 = 0;
          v44 = ++v232 % (unsigned int)*(unsigned __int8 *)(v43 + 1730);
          v39 = v233;
          v224 = 1;
          QuadPart = v230;
          v226 = v44 == 0;
          v38 = v44 == 0;
        }
        else
        {
          if ( v42 == -2147483631 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 3, 4);
            sub_140118560(v26, *(_QWORD *)(v40 + 24), v231);
            goto LABEL_149;
          }
          QuadPart = v230;
          if ( !*(_WORD *)(v40 + 34) )
          {
            v227 = 1;
            goto LABEL_118;
          }
          if ( v227 )
            goto LABEL_118;
          v29 = v240;
          v39 = v233;
        }
        goto LABEL_57;
      }
      if ( (_BYTE)v233 )
      {
        v46 = v27->Parameters.Read.ByteOffset.QuadPart;
        goto LABEL_93;
      }
      if ( ByteOffset.QuadPart )
      {
        v45 = v237;
        v46 = *(_QWORD *)(ByteOffset.QuadPart + 96);
        v34 = *(_DWORD *)(ByteOffset.QuadPart + 116);
        *(_QWORD *)(ByteOffset.QuadPart + 64) = 0LL;
        *(_QWORD *)(ByteOffset.QuadPart + 72) = v45;
LABEL_93:
        if ( !v34 )
        {
          v23 = 0;
LABEL_123:
          QuadPart = v230;
          goto LABEL_124;
        }
        v69 = *(unsigned int *)(v26 + 64);
        if ( v34 % (unsigned int)v69
          || (v70 = v46 / v69, v46 % v69)
          || (v71 = *(_QWORD *)(v26 + 424), LODWORD(v233) = v34 / (unsigned int)v69, v70 >= v71)
          || v71 - v70 < v34 / (unsigned int)v69 )
        {
          v23 = -1073741811;
          goto LABEL_123;
        }
        v72 = *(_QWORD *)(v26 + 16);
        if ( v34 <= *(_DWORD *)(*(_QWORD *)(v72 + 128) + 200LL) )
        {
          v73 = *(_DWORD *)(v26 + 420);
          if ( !v73 )
          {
LABEL_106:
            v77 = 0;
            if ( ((v34 + ((LODWORD(v16->MdlAddress->StartVa) + v16->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
            {
              v78 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v72 + 880) + v236));
              v77 = (int)v78;
              if ( !v78 )
              {
                v79 = v231;
                v80 = sub_1401147F0(*(_QWORD *)(v26 + 16), v231);
                v77 = v80;
                if ( !v80 )
                {
                  sub_140118560(v26, (__int64)v16, v79);
                  v23 = -2147483631;
                  goto LABEL_149;
                }
              }
            }
            v81 = *(_QWORD *)(v26 + 16);
            if ( (*(_BYTE *)(v81 + 136) & 2) != 0 )
              v82 = *(_QWORD *)(v81 + 728) + 192LL * v231;
            else
              LODWORD(v82) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v81 + 872) + 2LL * v231)
                           + *(_DWORD *)(v81 + 728)
                           - 192;
            LOBYTE(v213) = 0;
            v23 = sub_14011F570(v26, (_DWORD)v16, v82, v77, v231, v213, v34, v46, v70, v233, v225, 0LL);
            goto LABEL_119;
          }
          if ( v34 <= v73 )
          {
            v74 = *(_BYTE *)(v26 + 419);
            v75 = ((v73 - 1) & v34) + v73 + ((v73 - 1) & (unsigned int)v46) - 1LL;
            if ( v74 )
              v76 = (v75 >> v74) + ((unsigned __int64)v34 >> v74);
            else
              v76 = v75 / v73 + v34 / v73;
            if ( v76 <= 1 )
              goto LABEL_106;
            v37 = v234;
          }
        }
        v68 = sub_14011EBD0(v26, (_DWORD)v16, v225, v34, v46, v37, v231, v237, 0LL, (__int64)&v224);
LABEL_90:
        v23 = v68;
        goto LABEL_119;
      }
      v47 = v27->Parameters.Read.ByteOffset.QuadPart;
      if ( !(_DWORD)SecurityContext )
        goto LABEL_136;
      v48 = *(unsigned int *)(v26 + 64);
      if ( (unsigned int)SecurityContext % (unsigned int)v48
        || (v49 = v47 / v48, v47 % v48)
        || (v50 = *(_QWORD *)(v26 + 424), LODWORD(v233) = (unsigned int)SecurityContext / (unsigned int)v48, v49 >= v50)
        || v50 - v49 < (unsigned int)SecurityContext / (unsigned int)v48 )
      {
        v23 = -1073741811;
        goto LABEL_136;
      }
      if ( (unsigned int)SecurityContext <= v37 )
      {
        v51 = *(unsigned int *)(v26 + 420);
        if ( !(_DWORD)v51 )
        {
LABEL_80:
          v55 = sub_1401155A0(v31, v231);
          ListEntry = (PSLIST_ENTRY)v55;
          v56 = v55;
          if ( !v55 )
          {
            v23 = -1073741670;
            goto LABEL_136;
          }
          *(_QWORD *)(v55 + 40) = v16;
          v57 = *(_BYTE *)(v55 + 126) & 0xFE;
          *(_QWORD *)(v56 + 96) = v47;
          v58 = v57 | (MajorFunction == 3);
          *(_QWORD *)(v56 + 104) = v49;
          *(_DWORD *)(v56 + 112) = v233;
          v59 = v237;
          *(_BYTE *)(v56 + 126) = v58;
          v60 = v244;
          *(_QWORD *)(v56 + 72) = v59;
          *(_QWORD *)(v56 + 32) = v26;
          *(_DWORD *)(v56 + 116) = (_DWORD)SecurityContext;
          *(_QWORD *)(v56 + 64) = 0LL;
          *(_QWORD *)(v56 + 56) = v60->Parameters.Read.ByteOffset.QuadPart;
          v61 = v60->Parameters.Create.SecurityContext;
          v60->Parameters.Read.ByteOffset.QuadPart = v56;
          *(_QWORD *)(v56 + 48) = v61;
          v60->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
          v62 = *(unsigned __int16 *)(v56 + 124);
          v63 = *(_QWORD *)(v56 + 16);
          v244 = (struct _IO_STACK_LOCATION *)((char *)v16->MdlAddress->StartVa + v16->MdlAddress->ByteOffset);
          *(_QWORD *)(v56 + 80) = v244;
          MdlAddress = (__int64)v16->MdlAddress;
          v240 = *(_QWORD *)(v26 + 16);
          v64 = KfRaiseIrql(2u);
          v217 = v62;
          v65 = v244;
          v215 = v63;
          v66 = *(_QWORD *)(v240 + 128);
          v67 = MdlAddress;
          v225 = v64;
          v220 = MajorFunction != 3;
          LOBYTE(v214) = v220;
          v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _IO_STACK_LOCATION *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(v66 + 1144) + 8LL) + 112LL))(
                  *(_QWORD *)(v66 + 1144),
                  *(_QWORD *)(v66 + 8),
                  MdlAddress,
                  v244,
                  (_DWORD)SecurityContext,
                  sub_1401172A0,
                  v56,
                  v214,
                  v215,
                  v217);
          if ( v23 == -1073741789 )
          {
            LOBYTE(v214) = v220;
            v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _IO_STACK_LOCATION *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v240 + 128) + 1144LL) + 8LL) + 88LL))(
                    *(_QWORD *)(*(_QWORD *)(v240 + 128) + 1144LL),
                    *(_QWORD *)(*(_QWORD *)(v240 + 128) + 8LL),
                    v67,
                    v65,
                    (_DWORD)SecurityContext,
                    sub_1401172A0,
                    ListEntry,
                    v214);
          }
          if ( (unsigned __int8)v225 < 2u )
            KeLowerIrql(v225);
          if ( v23 >= 0 )
          {
            v23 = 259;
            goto LABEL_149;
          }
LABEL_120:
          if ( v23 != -2147483631 )
            goto LABEL_123;
          v83 = 0;
LABEL_122:
          if ( !v83 )
            goto LABEL_149;
          goto LABEL_123;
        }
        if ( (unsigned int)SecurityContext <= (unsigned int)v51 )
        {
          v52 = *(_BYTE *)(v26 + 419);
          v53 = ((unsigned int)v47 & ((_DWORD)v51 - 1))
              + v51
              + (((_DWORD)v51 - 1) & (unsigned int)SecurityContext)
              - 1LL;
          if ( v52 )
            v54 = (v53 >> v52) + ((unsigned __int64)(unsigned int)SecurityContext >> v52);
          else
            v54 = v53 / (unsigned int)v51 + (unsigned int)SecurityContext / (unsigned int)v51;
          if ( v54 <= 1 )
          {
            v31 = MdlAddress;
            goto LABEL_80;
          }
          v37 = v234;
        }
      }
      v68 = sub_14011EBD0(v26, (_DWORD)v16, v225, (_DWORD)SecurityContext, v47, v37, v231, v237, 0LL, (__int64)&v224);
      goto LABEL_90;
    }
    if ( v8 == 1 )
      break;
    v11 = Process + 1;
    Process = 0;
    if ( v11 < HIDWORD(v6->Next) )
      Process = v11;
  }
  while ( v9 != Process );
  v104 = v243;
  LODWORD(v6[1].Process) = Process;
  if ( v104[3] )
  {
    v105 = v229;
    v106 = v231;
    v107 = v243;
    while ( 1 )
    {
      if ( v105 == v106 )
        goto LABEL_178;
      v108 = *(_QWORD *)(v3 + 1104);
      v236 = 8LL * v105;
      v109 = *(_QWORD *)(v236 + v108);
      v251 = v109;
      v110 = *(_DWORD *)(v109 + 64);
      v234 = v110;
LABEL_170:
      v111 = v110;
      do
      {
        v112 = *(_QWORD *)(v109 + 8LL * v110 + 264);
        if ( *(_DWORD *)v112 || *(_DWORD *)(v112 + 48) != *(_DWORD *)(v112 + 52) )
        {
          v114 = *(_DWORD *)(v3 + 136) & 2;
          v250 = 0LL;
          v115 = KfRaiseIrql(2u);
          do
          {
            v116 = *(unsigned int *)(v112 + 52);
            if ( (_DWORD)v116 == *(_DWORD *)(v112 + 48) )
            {
              if ( _InterlockedCompareExchange((volatile signed __int32 *)v112, 0, 1) == 1 )
              {
                v211 = *(_QWORD *)(v112 + 24);
                if ( *(_BYTE *)(*(_QWORD *)(v112 + 16) + 20LL) == 1 )
                  _InterlockedDecrement((volatile signed __int32 *)(v211 + 956));
                else
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v211 + 16) + 952LL));
              }
              KeLowerIrql(v115);
              v125 = -2147483622;
              goto LABEL_343;
            }
            v117 = 0;
            if ( (unsigned int)(v116 + 1) < *(_DWORD *)(*(_QWORD *)(v112 + 16) + 4LL) )
              v117 = v116 + 1;
          }
          while ( (_DWORD)v116 != _InterlockedCompareExchange((volatile signed __int32 *)(v112 + 52), v117, v116) );
          do
            v118 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v116 + *(_QWORD *)(v112 + 56)), 0LL);
          while ( !v118 );
          if ( !*(_DWORD *)(*(_QWORD *)(v112 + 16) + 16LL)
            && (*(_DWORD *)v112 == 2
             || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v112 + 32) + 16LL * *(unsigned int *)(v112 + 8)))) )
          {
            if ( *(_DWORD *)(v112 + 48) == *(_DWORD *)(v112 + 52)
              || ((v119 = *(_DWORD *)(v112 + 48), v120 = *(_DWORD *)(v112 + 52), v119 != v120)
                ? (v119 <= v120
                 ? ((v122 = *(_QWORD *)(v112 + 24), *(_BYTE *)(*(_QWORD *)(v112 + 16) + 20LL))
                  ? (v123 = *(_QWORD *)(v122 + 1024))
                  : (v123 = *(_QWORD *)(v122 + 256)),
                    v121 = *(_DWORD *)(v123 + 4) - v120 + v119)
                 : (v121 = v119 - v120))
                : (v121 = 0),
                  v121 <= *(_DWORD *)(*(_QWORD *)(v112 + 16) + 8LL)) )
            {
              if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v112 + 16) + 16LL), 1, 0) )
              {
                v124 = *(_QWORD *)(v112 + 24);
                if ( *(_BYTE *)(*(_QWORD *)(v112 + 16) + 20LL) )
                  IoQueueWorkItem(
                    *(PIO_WORKITEM *)(v124 + 1032),
                    (PIO_WORKITEM_ROUTINE)sub_1400F1060,
                    DelayedWorkQueue,
                    *(PVOID *)(v112 + 24));
                else
                  KeSetEvent((PRKEVENT)(v124 + 472), 0, 0);
              }
            }
          }
          KeLowerIrql(v115);
          if ( v114 )
          {
            v125 = sub_140103A50(*(_QWORD *)(v112 + 24), (__int64)v118, v105);
            goto LABEL_253;
          }
          if ( (int)IoGetIoAttributionHandle(v118, &v250) >= 0 )
          {
            v126 = v250;
            v256 = 0LL;
            LODWORD(v256) = 1;
            v127 = v118->Tail.Overlay.CurrentStackLocation;
            v257 = 0LL;
            DWORD1(v256) = v127->MajorFunction | 0x200;
            *((_QWORD *)&v257 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v257 + 1);
            IoRecordIoAttribution(v126, &v256);
          }
          v128 = *(_QWORD *)(v112 + 24);
          v129 = v118->Tail.Overlay.CurrentStackLocation;
          v130.QuadPart = 0LL;
          v131 = v237;
          v132 = 0;
          v228[0] = 0;
          v133 = 0LL;
          v134 = *(_QWORD *)(v128 + 16);
          v125 = 0;
          v242 = 0;
          v135 = 0;
          v253 = 0LL;
          v248 = 0;
          v136 = v129->Parameters.Create.SecurityContext;
          v137 = (unsigned int)v136;
          v138 = HIDWORD(*(_QWORD *)(v134 + 136));
          LOBYTE(v138) = v138 & 1;
          v240 = v237;
          MdlAddress = v138;
          ListEntry = 0LL;
          v230 = 0LL;
          v222 = 0;
          v232 = 0;
          v224 = 0;
          if ( v136 == (PIO_SECURITY_CONTEXT)0x8765432100000003LL )
          {
            v133 = v129->Parameters.Read.ByteOffset.QuadPart;
            v230 = v133;
          }
          else if ( v136 == (PIO_SECURITY_CONTEXT)0xFEDCBA9000000000LL )
          {
            v130 = v129->Parameters.Read.ByteOffset;
            ListEntry = (PSLIST_ENTRY)v130.QuadPart;
          }
          if ( (unsigned int)(*(_DWORD *)(v128 + 96) - 5) <= 1 )
          {
            v228[0] = 1;
            v125 = -1073741810;
            if ( v133 )
            {
LABEL_309:
              _interlockedbittestandreset((volatile signed __int32 *)(v133 + 108), 0);
              goto LABEL_310;
            }
            goto LABEL_315;
          }
          v139 = *(_QWORD *)(v134 + 128);
          v226 = v129->MajorFunction;
          v225 = v226 == 3;
          v140 = *(_DWORD *)(v139 + 200);
          LODWORD(v233) = v140;
          if ( v230 )
          {
            v133 = v230;
            v141 = MdlAddress;
            v142 = v229;
            while ( 2 )
            {
              v143 = v133;
LABEL_215:
              v144 = _InterlockedCompareExchange((volatile signed __int32 *)(v143 + 104), 4, 3);
              if ( v141 )
              {
                if ( v144 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v143 + 104), 4, 1) != 1 )
                  goto LABEL_227;
              }
              else if ( v144 != 3 )
              {
                if ( *(_DWORD *)(v143 + 104) == 1 )
                  ++v135;
LABEL_227:
                v143 = *(_QWORD *)(v143 + 96);
                if ( v135 )
                {
                  if ( !v143 )
                  {
                    v135 = 0;
                    continue;
                  }
                }
                else if ( !v143 )
                {
                  goto LABEL_309;
                }
                goto LABEL_215;
              }
              break;
            }
            v145 = sub_14011DA00(
                     v143,
                     v142,
                     v131,
                     0,
                     (__int64)v228,
                     (__int64)&v253,
                     (__int64)&v248,
                     (__int64)&v242,
                     v132);
            v125 = v145;
            if ( v145 == 259 )
            {
              v146 = *(_QWORD *)(v128 + 16);
              v240 = 0LL;
              ++v232;
              LODWORD(v131) = 0;
              v147 = v232 % (unsigned int)*(unsigned __int8 *)(v146 + 1730);
              v224 = 1;
              v133 = v230;
              v132 = v147 == 0;
              v222 = v147 == 0;
            }
            else
            {
              if ( v145 == -2147483631 )
              {
                _InterlockedCompareExchange((volatile signed __int32 *)(v143 + 104), 3, 4);
                v105 = v142;
                sub_140118560(v128, *(_QWORD *)(v143 + 24), v142);
                goto LABEL_252;
              }
              v133 = v230;
              if ( !*(_WORD *)(v143 + 34) )
              {
                v228[0] = 1;
                goto LABEL_309;
              }
              if ( v228[0] )
                goto LABEL_309;
              LODWORD(v131) = v240;
              v132 = v222;
            }
            goto LABEL_227;
          }
          if ( !(_BYTE)MdlAddress )
          {
            if ( v130.QuadPart )
            {
              v148 = *(_QWORD *)(v130.QuadPart + 96);
              v137 = *(_DWORD *)(v130.QuadPart + 116);
              *(_QWORD *)(v130.QuadPart + 64) = 0LL;
              *(_QWORD *)(v130.QuadPart + 72) = v131;
              goto LABEL_284;
            }
            v149 = v129->Parameters.Read.ByteOffset.QuadPart;
            if ( !(_DWORD)v136 )
            {
LABEL_238:
              v118->IoStatus.Status = v125;
              IofCompleteRequest(v118, 0);
              v150 = *(_QWORD *)(v128 + 128);
              if ( !*(_BYTE *)v150 )
              {
                v151 = *(volatile signed __int32 **)(*(_QWORD *)(v150 + 24) + v236);
LABEL_240:
                if ( _InterlockedExchangeAdd(v151, 0xFFFFFFFF) == 1 )
                {
                  v152 = *(_QWORD *)(*(_QWORD *)(v128 + 16) + 128LL);
                  v153 = *(_QWORD *)(v128 + 128);
                  if ( v153 )
                  {
                    if ( *(_QWORD *)(v153 + 8) )
                    {
                      v154 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v153 + 40);
                      if ( v154 )
                      {
                        if ( ExAcquireRundownProtectionCacheAware(v154) )
                        {
                          PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v128 + 128) + 8LL), 0LL, 2LL);
                          v155 = *(_QWORD *)(v128 + 128);
                          if ( v155 )
                          {
                            if ( *(_QWORD *)(v155 + 8) )
                            {
                              v156 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v155 + 40);
                              if ( v156 )
                                ExReleaseRundownProtectionCacheAware(v156);
                            }
                          }
                        }
                      }
                    }
                  }
                  v157 = *(_QWORD *)(v152 + 160);
                  if ( *(_BYTE *)v157 == 1 )
                    PoFxIdleComponent(**(_QWORD **)(v157 + 8), 0LL, 2LL);
                }
              }
              goto LABEL_251;
            }
            v158 = *(unsigned int *)(v128 + 64);
            if ( (unsigned int)v136 % (unsigned int)v158
              || (v159 = v149 / v158, v149 % v158)
              || (v160 = *(_QWORD *)(v128 + 424), v161 = (unsigned int)v136 / (unsigned int)v158, v159 >= v160)
              || v160 - v159 < (unsigned int)v136 / (unsigned int)v158 )
            {
              v125 = -1073741811;
              goto LABEL_238;
            }
            if ( (unsigned int)v136 > v140 )
              goto LABEL_280;
            v162 = *(_DWORD *)(v128 + 420);
            if ( !v162 )
            {
LABEL_271:
              v166 = sub_1401155A0(v134, v229);
              ListEntry = (PSLIST_ENTRY)v166;
              v167 = v166;
              if ( !v166 )
              {
                v125 = -1073741670;
                goto LABEL_238;
              }
              v83 = v226 == 3;
              *(_QWORD *)(v166 + 40) = v118;
              v168 = *(_BYTE *)(v166 + 126);
              *(_QWORD *)(v167 + 96) = v149;
              *(_QWORD *)(v167 + 104) = v159;
              *(_BYTE *)(v167 + 126) = v168 & 0xFE | v83;
              *(_QWORD *)(v167 + 64) = 0LL;
              *(_QWORD *)(v167 + 72) = v237;
              *(_QWORD *)(v167 + 32) = v128;
              *(_DWORD *)(v167 + 112) = v161;
              *(_DWORD *)(v167 + 116) = (_DWORD)v136;
              *(_QWORD *)(v167 + 56) = v129->Parameters.Read.ByteOffset.QuadPart;
              v169 = v129->Parameters.Create.SecurityContext;
              v129->Parameters.Read.ByteOffset.QuadPart = v167;
              *(_QWORD *)(v167 + 48) = v169;
              v129->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
              v170 = *(unsigned __int16 *)(v167 + 124);
              v171 = *(_QWORD *)(v167 + 16);
              v172 = (char *)v118->MdlAddress->StartVa + v118->MdlAddress->ByteOffset;
              *(_QWORD *)(v167 + 80) = v172;
              v246 = v118->MdlAddress;
              MdlAddress = *(_QWORD *)(v128 + 16);
              v244 = (struct _IO_STACK_LOCATION *)v172;
              v173 = KfRaiseIrql(2u);
              v218 = v170;
              v174 = v246;
              v216 = v171;
              v175 = ListEntry;
              LOBYTE(v214) = v226 != 3;
              v223 = v226 != 3;
              v125 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PMDL, char *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL) + 8LL) + 112LL))(
                       *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL),
                       *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 8LL),
                       v246,
                       v172,
                       (_DWORD)v136,
                       sub_1401172A0,
                       ListEntry,
                       v214,
                       v216,
                       v218);
              if ( v125 == -1073741789 )
              {
                LOBYTE(v214) = v223;
                v125 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PMDL, struct _IO_STACK_LOCATION *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL) + 8LL) + 88LL))(
                         *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL),
                         *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 8LL),
                         v174,
                         v244,
                         (_DWORD)v136,
                         sub_1401172A0,
                         v175,
                         v214);
              }
              if ( v173 < 2u )
                KeLowerIrql(v173);
              if ( v125 >= 0 )
              {
                v125 = 259;
                goto LABEL_251;
              }
              goto LABEL_311;
            }
            if ( (unsigned int)v136 <= v162 )
            {
              v163 = *(_BYTE *)(v128 + 419);
              v164 = ((unsigned int)v136 & (v162 - 1)) + v162 + ((unsigned int)v149 & (v162 - 1)) - 1LL;
              if ( v163 )
                v165 = (v164 >> v163) + ((unsigned __int64)(unsigned int)v136 >> v163);
              else
                v165 = (unsigned int)v136 / v162 + v164 / v162;
              if ( v165 <= 1 )
                goto LABEL_271;
              v140 = v233;
            }
LABEL_280:
            v176 = sub_14011EBD0(v128, (_DWORD)v118, v225, (_DWORD)v136, v149, v140, v229, v237, 0LL, (__int64)&v224);
LABEL_281:
            v125 = v176;
LABEL_310:
            v191 = v125 == 0;
            if ( v125 >= 0 )
            {
LABEL_313:
              if ( !v191 )
                goto LABEL_251;
            }
            else
            {
LABEL_311:
              if ( v125 == -2147483631 )
              {
                v191 = 0;
                goto LABEL_313;
              }
            }
LABEL_314:
            v133 = v230;
LABEL_315:
            v192 = ListEntry;
            if ( ListEntry )
            {
              v193 = *((_QWORD *)&ListEntry[1].Next + 1);
              if ( v193 )
              {
                v194 = *((_BYTE *)&ListEntry[7].Next + 14);
                v195 = *(_QWORD *)(*(_QWORD *)(v128 + 16) + 128LL);
                v196 = KfRaiseIrql(2u);
                (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v195 + 1144) + 8LL) + 96LL))(
                  *(_QWORD *)(v195 + 1144),
                  v193,
                  (v194 & 1) == 0);
                if ( v196 < 2u )
                  KeLowerIrql(v196);
                v192 = ListEntry;
              }
              v197 = *((_QWORD *)&v192[5].Next + 1);
              v198 = v236;
              if ( v197 )
              {
                v199 = *(_QWORD *)(v128 + 16);
                *(_QWORD *)(v197 + 88) = 0LL;
                *(_DWORD *)(v197 + 108) = 0;
                *(_DWORD *)(v197 + 104) = 0;
                ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v199 + 888) + v198), (PSLIST_ENTRY)v197);
              }
              v200 = *(_QWORD *)(v128 + 16);
              v201 = *(_QWORD *)(*((_QWORD *)&v192[2].Next + 1) + 184LL);
              *(_QWORD *)(v201 + 8) = v192[3].Next;
              *(_QWORD *)(v201 + 24) = *((_QWORD *)&v192[3].Next + 1);
              v202 = *((unsigned int *)&v192[7].Next + 2);
              *((_QWORD *)&v192[1].Next + 1) = 0LL;
              *((_QWORD *)&v192[5].Next + 1) = 0LL;
              *((_BYTE *)&v192[7].Next + 14) = 0;
              ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v200 + 896) + 8 * v202), v192);
              v118->IoStatus.Status = v125;
              IofCompleteRequest(v118, 0);
              v203 = *(_QWORD *)(v128 + 128);
              if ( !*(_BYTE *)v203 )
              {
                v151 = *(volatile signed __int32 **)(*(_QWORD *)(v203 + 24) + v198);
                goto LABEL_240;
              }
LABEL_251:
              v105 = v229;
            }
            else
            {
              if ( !v133 )
                goto LABEL_238;
              if ( !v228[0] )
                goto LABEL_251;
              sub_1401152F0(*(_QWORD **)(v128 + 16), v133);
              v105 = v229;
              sub_140115430(*(_QWORD *)(v128 + 16), v229, v230, (__int64)v118);
              v118->IoStatus.Status = v125;
              IofCompleteRequest(v118, 0);
              v204 = *(_QWORD *)(v128 + 128);
              if ( !*(_BYTE *)v204
                && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v204 + 24) + v236), 0xFFFFFFFF) == 1 )
              {
                v205 = *(_QWORD *)(*(_QWORD *)(v128 + 16) + 128LL);
                v206 = *(_QWORD *)(v128 + 128);
                if ( v206 )
                {
                  if ( *(_QWORD *)(v206 + 8) )
                  {
                    v207 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v206 + 40);
                    if ( v207 )
                    {
                      if ( ExAcquireRundownProtectionCacheAware(v207) )
                      {
                        PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v128 + 128) + 8LL), 0LL, 2LL);
                        v208 = *(_QWORD *)(v128 + 128);
                        if ( v208 )
                        {
                          if ( *(_QWORD *)(v208 + 8) )
                          {
                            v209 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v208 + 40);
                            if ( v209 )
                              ExReleaseRundownProtectionCacheAware(v209);
                          }
                        }
                      }
                    }
                  }
                }
                v210 = *(_QWORD *)(v205 + 160);
                if ( *(_BYTE *)v210 == 1 )
                  PoFxIdleComponent(**(_QWORD **)(v210 + 8), 0LL, 2LL);
              }
            }
LABEL_252:
            v110 = v234;
            v109 = v251;
LABEL_253:
            v8 = v238;
            if ( v125 == 259 )
              goto LABEL_254;
LABEL_343:
            if ( !v224 )
            {
              if ( v125 == -2147483631 )
                return 1;
              if ( v125 == -2147483622 )
              {
                if ( v8 == 1 )
                  break;
                goto LABEL_255;
              }
            }
LABEL_254:
            if ( v8 == 1 )
              goto LABEL_258;
LABEL_255:
            if ( ++v110 >= *(_DWORD *)(v109 + 4) )
              v110 = 0;
            v234 = v110;
LABEL_258:
            if ( sub_14008F0E0() )
              return 1;
            v3 = v245;
            goto LABEL_170;
          }
          v148 = v129->Parameters.Read.ByteOffset.QuadPart;
LABEL_284:
          if ( !v137 )
          {
            v125 = 0;
            goto LABEL_314;
          }
          v177 = *(unsigned int *)(v128 + 64);
          if ( v137 % (unsigned int)v177
            || (v178 = v148 / v177, v148 % v177)
            || (v179 = *(_QWORD *)(v128 + 424), v180 = v137 / (unsigned int)v177, v178 >= v179)
            || v179 - v178 < v137 / (unsigned int)v177 )
          {
            v125 = -1073741811;
            goto LABEL_314;
          }
          v181 = *(_QWORD *)(v128 + 16);
          if ( v137 <= *(_DWORD *)(*(_QWORD *)(v181 + 128) + 200LL) )
          {
            v182 = *(_DWORD *)(v128 + 420);
            if ( !v182 )
            {
LABEL_297:
              v186 = 0;
              if ( ((v137 + ((LODWORD(v118->MdlAddress->StartVa) + v118->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) <= 0x2000
                || (v187 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v181 + 880) + v236)),
                    v186 = (int)v187,
                    v187)
                || (v188 = sub_1401147F0(*(_QWORD *)(v128 + 16), v229), v186 = v188, v188) )
              {
                v189 = *(_QWORD *)(v128 + 16);
                if ( (*(_BYTE *)(v189 + 136) & 2) != 0 )
                  v190 = *(_QWORD *)(v189 + 728) + 192LL * v229;
                else
                  LODWORD(v190) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v189 + 872) + 2LL * v229)
                                + *(_DWORD *)(v189 + 728)
                                - 192;
                LOBYTE(v213) = 0;
                v125 = sub_14011F570(v128, (_DWORD)v118, v190, v186, v229, v213, v137, v148, v178, v180, v225, 0LL);
                goto LABEL_310;
              }
              v105 = v229;
              sub_140118560(v128, (__int64)v118, v229);
              v125 = -2147483631;
              goto LABEL_252;
            }
            if ( v137 <= v182 )
            {
              v183 = *(_BYTE *)(v128 + 419);
              v184 = ((unsigned int)v148 & (v182 - 1)) + v182 + ((v182 - 1) & v137) - 1LL;
              if ( v183 )
                v185 = ((unsigned __int64)v137 >> v183) + (v184 >> v183);
              else
                v185 = v137 / v182 + v184 / v182;
              if ( v185 <= 1 )
                goto LABEL_297;
              v140 = v233;
            }
          }
          v176 = sub_14011EBD0(v128, (_DWORD)v118, v225, v137, v148, v140, v229, v237, 0LL, (__int64)&v224);
          goto LABEL_281;
        }
        if ( v8 == 1 )
          break;
        v113 = v110 + 1;
        v110 = 0;
        if ( v113 != *(_DWORD *)(v109 + 4) )
          v110 = v113;
        v234 = v110;
      }
      while ( v111 != v110 );
      v106 = v231;
      v107 = v243;
LABEL_178:
      v229 = ++v105;
      if ( v105 >= v107[3] )
        return 1;
      v3 = v245;
    }
  }
  return 1;
}
