/*
 * XREFs of sub_14011C9D0 @ 0x14011C9D0
 * Callers:
 *     sub_140118830 @ 0x140118830 (sub_140118830.c)
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
 *     sub_140120CDC @ 0x140120CDC (sub_140120CDC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_14011C9D0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // r13
  union _SLIST_HEADER *v6; // r8
  unsigned int v7; // edi
  unsigned int v8; // r15d
  unsigned int v9; // edx
  __int64 v10; // rbx
  unsigned int v11; // eax
  int v12; // r14d
  KIRQL v13; // r12
  __int64 v14; // r8
  signed __int32 v15; // edx
  IRP *v16; // rsi
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r14d
  __int64 v24; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v26; // r13
  __int64 QuadPart; // rdx
  struct _IO_STACK_LOCATION *v28; // rcx
  char v29; // r11
  LARGE_INTEGER ByteOffset; // r8
  __int64 v31; // r9
  __int16 v32; // di
  PIO_SECURITY_CONTEXT SecurityContext; // r12
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // r10d
  char v38; // r12
  __int64 v39; // rbx
  signed __int32 v40; // eax
  int v41; // eax
  __int64 v42; // rax
  bool v43; // zf
  PSLIST_ENTRY v44; // rbx
  __int64 v45; // r12
  char v46; // di
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  volatile signed __int32 *v55; // rcx
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rcx
  unsigned int v61; // eax
  char v62; // r11
  unsigned __int64 v63; // r9
  unsigned int v64; // r9d
  __int64 v65; // rax
  __int64 v66; // r14
  char v67; // al
  char v68; // cl
  unsigned int v69; // eax
  struct _IO_STACK_LOCATION *v70; // rcx
  PIO_SECURITY_CONTEXT v71; // rax
  int v72; // ebx
  __int64 v73; // rdi
  KIRQL v74; // al
  struct _IO_STACK_LOCATION *v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // rdi
  int v78; // eax
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // r12
  unsigned __int64 v81; // rdx
  __int64 v82; // r14
  unsigned int v83; // eax
  char v84; // r11
  unsigned __int64 v85; // r9
  unsigned int v86; // r8d
  int v87; // r9d
  PSLIST_ENTRY v88; // rax
  unsigned int v89; // r14d
  __int64 v90; // rax
  __int64 v91; // r10
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v96; // rcx
  __int64 v97; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rax
  bool v101; // al
  char v103; // r14
  int v104; // ecx
  unsigned int v105; // edi
  __int64 v106; // rbx
  unsigned int v107; // r8d
  unsigned int v108; // r9d
  unsigned int v109; // r8d
  __int64 v110; // rcx
  unsigned int v111; // eax
  __int64 v112; // rcx
  _DWORD *v113; // rax
  int v114; // [rsp+28h] [rbp-D8h]
  int v115; // [rsp+38h] [rbp-C8h]
  __int64 v116; // [rsp+40h] [rbp-C0h]
  int v117; // [rsp+48h] [rbp-B8h]
  UCHAR MajorFunction; // [rsp+60h] [rbp-A0h]
  KIRQL v119; // [rsp+60h] [rbp-A0h]
  bool v120; // [rsp+60h] [rbp-A0h]
  char v121; // [rsp+61h] [rbp-9Fh] BYREF
  KIRQL v122; // [rsp+62h] [rbp-9Eh]
  unsigned __int8 v123; // [rsp+63h] [rbp-9Dh]
  unsigned int v124; // [rsp+64h] [rbp-9Ch]
  unsigned int v125; // [rsp+68h] [rbp-98h]
  __int64 v126; // [rsp+70h] [rbp-90h]
  int v127; // [rsp+78h] [rbp-88h]
  unsigned int v128; // [rsp+7Ch] [rbp-84h]
  __int16 v129[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v130; // [rsp+84h] [rbp-7Ch]
  int v131; // [rsp+88h] [rbp-78h]
  PSLIST_ENTRY ListEntry; // [rsp+90h] [rbp-70h]
  __int64 v133; // [rsp+98h] [rbp-68h]
  __int64 v134; // [rsp+A0h] [rbp-60h]
  struct _IO_STACK_LOCATION *v135; // [rsp+A8h] [rbp-58h]
  int v136; // [rsp+B0h] [rbp-50h] BYREF
  __int64 MdlAddress; // [rsp+B8h] [rbp-48h]
  __int64 v138; // [rsp+C0h] [rbp-40h] BYREF
  union _SLIST_HEADER *v139; // [rsp+C8h] [rbp-38h]
  __int64 v140; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v141; // [rsp+D8h] [rbp-28h]
  __int64 v142; // [rsp+E0h] [rbp-20h]
  __int128 v143; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v144; // [rsp+F8h] [rbp-8h] BYREF

  v2 = a1;
  v142 = a1;
  v124 = a2;
  v133 = a2;
  v43 = (*(_BYTE *)(a1 + 136) & 2) == 0;
  v3 = *(_QWORD *)(a1 + 1104);
  v4 = *(_DWORD *)(a1 + 656);
  v131 = v4;
  v5 = *(_QWORD *)(v3 + 8LL * a2);
  v141 = v5;
  if ( v43 )
    v6 = (union _SLIST_HEADER *)(192LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 872) + 2LL * a2)
                               + *(_QWORD *)(a1 + 728)
                               - 192LL);
  else
    v6 = (union _SLIST_HEADER *)(*(_QWORD *)(a1 + 728) + 192LL * a2);
  v7 = *(_DWORD *)(v5 + 64);
  v8 = 0;
  v130 = v7;
  v127 = v7;
  v139 = v6;
  while ( 2 )
  {
    v9 = v7;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v5 + 8LL * v7 + 264);
      if ( v10 )
      {
        if ( **(_DWORD **)(v10 + 16) )
          return 0;
        if ( *(_DWORD *)v10 || *(_DWORD *)(v10 + 48) != *(_DWORD *)(v10 + 52) )
          break;
      }
      if ( v4 != 1 )
      {
        v11 = v7 + 1;
        v7 = 0;
        if ( v11 < *(_DWORD *)(v5 + 4) )
          v7 = v11;
        v130 = v7;
        if ( v9 != v7 )
          continue;
      }
LABEL_179:
      v103 = 0;
LABEL_180:
      v104 = v127;
      v105 = v127;
      while ( 1 )
      {
        v106 = *(_QWORD *)(v5 + 8LL * v105 + 264);
        if ( v106 )
        {
          if ( *(_DWORD *)v106 == 2
            || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v106 + 32) + 16LL * *(unsigned int *)(v106 + 8))) )
          {
            if ( *(_DWORD *)(v106 + 48) == *(_DWORD *)(v106 + 52)
              || ((v107 = *(_DWORD *)(v106 + 48), v108 = *(_DWORD *)(v106 + 52), v107 != v108)
                ? (v107 <= v108
                 ? ((v110 = *(_QWORD *)(v106 + 24), *(_BYTE *)(*(_QWORD *)(v106 + 16) + 20LL))
                  ? (v109 = *(_DWORD *)(*(_QWORD *)(v110 + 1024) + 4LL) - v108 + v107)
                  : (v109 = *(_DWORD *)(*(_QWORD *)(v110 + 256) + 4LL) - v108 + v107))
                 : (v109 = v107 - v108))
                : (v109 = 0),
                  v109 <= *(_DWORD *)(*(_QWORD *)(v106 + 16) + 8LL)) )
            {
              v103 = 1;
              if ( (unsigned int)sub_140120CDC(*(_QWORD *)(v106 + 16), v105, 0LL) == 4 )
                return v103;
            }
          }
          v104 = v127;
        }
        if ( v4 == 1 )
          break;
        v111 = v105 + 1;
        v105 = 0;
        if ( v111 < *(_DWORD *)(v5 + 4) )
          v105 = v111;
        if ( v104 == v105 )
          break;
        if ( sub_14008F0E0() )
          return 1;
        v104 = v127;
      }
      if ( v103 || !*(_DWORD *)(v5 + 4) )
        return v103;
      while ( 1 )
      {
        v112 = 8LL * v8 + 264;
        if ( *(_QWORD *)(v112 + v5) )
        {
          v113 = *(_DWORD **)(v112 + v5);
          if ( *v113 || v113[12] != v113[13] )
            break;
        }
        if ( ++v8 >= *(_DWORD *)(v5 + 4) )
          return v103;
      }
      return 1;
    }
    if ( !ExQueryDepthSList(v6 + 4) )
    {
      v103 = 1;
      goto LABEL_180;
    }
    v12 = *(_DWORD *)(v2 + 136) & 2;
    v138 = 0LL;
    v13 = KfRaiseIrql(2u);
    do
    {
      v14 = *(unsigned int *)(v10 + 52);
      if ( (_DWORD)v14 == *(_DWORD *)(v10 + 48) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v10, 0, 1) == 1 )
        {
          v100 = *(_QWORD *)(v10 + 24);
          if ( *(_BYTE *)(*(_QWORD *)(v10 + 16) + 20LL) == 1 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v100 + 956));
            KeLowerIrql(v13);
            goto LABEL_170;
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v100 + 16) + 952LL));
        }
        KeLowerIrql(v13);
LABEL_170:
        if ( v4 == 1 )
          goto LABEL_179;
        goto LABEL_171;
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
      v23 = sub_140103A50(*(_QWORD *)(v10 + 24), (__int64)v16, v124);
      goto LABEL_159;
    }
    if ( (int)IoGetIoAttributionHandle(v16, &v138) >= 0 )
    {
      v24 = v138;
      v143 = 0LL;
      LODWORD(v143) = 1;
      CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
      v144 = 0LL;
      DWORD1(v143) = CurrentStackLocation->MajorFunction | 0x200;
      *((_QWORD *)&v144 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v144 + 1);
      IoRecordIoAttribution(v24, &v143);
    }
    v26 = *(_QWORD *)(v10 + 24);
    QuadPart = 0LL;
    v28 = v16->Tail.Overlay.CurrentStackLocation;
    v29 = 0;
    v121 = 0;
    ByteOffset.QuadPart = 0LL;
    v129[0] = 0;
    v23 = 0;
    v31 = *(_QWORD *)(v26 + 16);
    v32 = 0;
    v140 = 0LL;
    v136 = 0;
    SecurityContext = v28->Parameters.Create.SecurityContext;
    v34 = (unsigned int)SecurityContext;
    v35 = HIDWORD(*(_QWORD *)(v31 + 136));
    LOBYTE(v35) = v35 & 1;
    v135 = v28;
    v134 = v35;
    ListEntry = 0LL;
    v126 = 0LL;
    v122 = 0;
    LOWORD(v125) = 0;
    MdlAddress = v31;
    if ( SecurityContext == (PIO_SECURITY_CONTEXT)0x8765432100000003LL )
    {
      QuadPart = v28->Parameters.Read.ByteOffset.QuadPart;
      v126 = QuadPart;
    }
    else if ( SecurityContext == (PIO_SECURITY_CONTEXT)0xFEDCBA9000000000LL )
    {
      ByteOffset = v28->Parameters.Read.ByteOffset;
      ListEntry = (PSLIST_ENTRY)ByteOffset.QuadPart;
    }
    if ( (unsigned int)(*(_DWORD *)(v26 + 96) - 5) > 1 )
    {
      v36 = *(_QWORD *)(v31 + 128);
      MajorFunction = v28->MajorFunction;
      v123 = v28->MajorFunction == 3;
      v37 = *(_DWORD *)(v36 + 200);
      v128 = v37;
      if ( v126 )
      {
        QuadPart = v126;
        v38 = v134;
        while ( 2 )
        {
          v39 = QuadPart;
LABEL_51:
          v40 = _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 104), 4, 3);
          if ( v38 )
          {
            if ( v40 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 104), 4, 1) != 1 )
              goto LABEL_64;
          }
          else if ( v40 != 3 )
          {
            if ( *(_DWORD *)(v39 + 104) == 1 )
              ++v32;
LABEL_64:
            v39 = *(_QWORD *)(v39 + 96);
            if ( v32 )
            {
              if ( !v39 )
              {
                v32 = 0;
                continue;
              }
            }
            else if ( !v39 )
            {
              goto LABEL_71;
            }
            goto LABEL_51;
          }
          break;
        }
        v41 = sub_14011DA00(v39, v124, 0, 0, (__int64)&v121, (__int64)&v140, (__int64)&v136, (__int64)v129, v29);
        v23 = v41;
        if ( v41 == 259 )
        {
          v42 = *(_QWORD *)(v26 + 16);
          LOWORD(v125) = v125 + 1;
          v29 = (unsigned __int16)v125 % (unsigned int)*(unsigned __int8 *)(v42 + 1730) == 0;
          v122 = v29;
        }
        else
        {
          if ( v41 == -2147483631 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 104), 3, 4);
            sub_140118560(v26, *(_QWORD *)(v39 + 24), v124);
            goto LABEL_158;
          }
          if ( !*(_WORD *)(v39 + 34) )
          {
            v121 = 1;
LABEL_70:
            QuadPart = v126;
            goto LABEL_71;
          }
          if ( v121 )
            goto LABEL_70;
          v29 = v122;
        }
        QuadPart = v126;
        goto LABEL_64;
      }
      if ( !(_BYTE)v134 )
      {
        if ( ByteOffset.QuadPart )
        {
          v56 = *(_QWORD *)(ByteOffset.QuadPart + 96);
          v34 = *(_DWORD *)(ByteOffset.QuadPart + 116);
          *(_QWORD *)(ByteOffset.QuadPart + 64) = 0LL;
          *(_QWORD *)(ByteOffset.QuadPart + 72) = 0LL;
          goto LABEL_116;
        }
        v57 = v28->Parameters.Read.ByteOffset.QuadPart;
        if ( (_DWORD)SecurityContext )
        {
          v58 = *(unsigned int *)(v26 + 64);
          if ( !((unsigned int)SecurityContext % (unsigned int)v58) )
          {
            v59 = v57 / v58;
            if ( !(v57 % v58) )
            {
              v60 = *(_QWORD *)(v26 + 424);
              v125 = (unsigned int)SecurityContext / (unsigned int)v58;
              if ( v59 < v60 && v60 - v59 >= (unsigned int)SecurityContext / (unsigned int)v58 )
              {
                if ( (unsigned int)SecurityContext <= v37 )
                {
                  v61 = *(_DWORD *)(v26 + 420);
                  if ( !v61 )
                    goto LABEL_103;
                  if ( (unsigned int)SecurityContext <= v61 )
                  {
                    v62 = *(_BYTE *)(v26 + 419);
                    v63 = ((unsigned int)SecurityContext & (v61 - 1)) + v61 + ((v61 - 1) & (unsigned int)v57) - 1LL;
                    if ( v62 )
                      v64 = ((unsigned __int64)(unsigned int)SecurityContext >> v62) + (v63 >> v62);
                    else
                      v64 = v63 / v61 + (unsigned int)SecurityContext / v61;
                    if ( v64 <= 1 )
                    {
                      v31 = MdlAddress;
LABEL_103:
                      v65 = sub_1401155A0(v31, v124);
                      ListEntry = (PSLIST_ENTRY)v65;
                      v66 = v65;
                      if ( !v65 )
                      {
                        v23 = -1073741670;
                        goto LABEL_145;
                      }
                      *(_QWORD *)(v65 + 40) = v16;
                      v67 = *(_BYTE *)(v65 + 126) & 0xFE;
                      *(_QWORD *)(v66 + 96) = v57;
                      v68 = v67 | (MajorFunction == 3);
                      *(_QWORD *)(v66 + 104) = v59;
                      v69 = v125;
                      *(_BYTE *)(v66 + 126) = v68;
                      v70 = v135;
                      *(_DWORD *)(v66 + 112) = v69;
                      *(_QWORD *)(v66 + 32) = v26;
                      *(_DWORD *)(v66 + 116) = (_DWORD)SecurityContext;
                      *(_QWORD *)(v66 + 64) = 0LL;
                      *(_QWORD *)(v66 + 72) = 0LL;
                      *(_QWORD *)(v66 + 56) = v70->Parameters.Read.ByteOffset.QuadPart;
                      v71 = v70->Parameters.Create.SecurityContext;
                      v70->Parameters.Read.ByteOffset.QuadPart = v66;
                      *(_QWORD *)(v66 + 48) = v71;
                      v70->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
                      v72 = *(unsigned __int16 *)(v66 + 124);
                      v73 = *(_QWORD *)(v66 + 16);
                      v135 = (struct _IO_STACK_LOCATION *)((char *)v16->MdlAddress->StartVa + v16->MdlAddress->ByteOffset);
                      *(_QWORD *)(v66 + 80) = v135;
                      MdlAddress = (__int64)v16->MdlAddress;
                      v134 = *(_QWORD *)(v26 + 16);
                      v74 = KfRaiseIrql(2u);
                      v117 = v72;
                      v75 = v135;
                      v116 = v73;
                      v76 = *(_QWORD *)(v134 + 128);
                      v77 = MdlAddress;
                      v122 = v74;
                      v120 = MajorFunction != 3;
                      LOBYTE(v115) = v120;
                      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _IO_STACK_LOCATION *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(v76 + 1144) + 8LL) + 112LL))(
                              *(_QWORD *)(v76 + 1144),
                              *(_QWORD *)(v76 + 8),
                              MdlAddress,
                              v135,
                              (_DWORD)SecurityContext,
                              sub_1401172A0,
                              v66,
                              v115,
                              v116,
                              v117);
                      if ( v23 == -1073741789 )
                      {
                        LOBYTE(v115) = v120;
                        v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _IO_STACK_LOCATION *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v134 + 128) + 1144LL) + 8LL) + 88LL))(
                                *(_QWORD *)(*(_QWORD *)(v134 + 128) + 1144LL),
                                *(_QWORD *)(*(_QWORD *)(v134 + 128) + 8LL),
                                v77,
                                v75,
                                (_DWORD)SecurityContext,
                                sub_1401172A0,
                                ListEntry,
                                v115);
                      }
                      if ( v122 < 2u )
                        KeLowerIrql(v122);
                      if ( v23 >= 0 )
                      {
                        v23 = 259;
                        goto LABEL_158;
                      }
LABEL_73:
                      if ( v23 == -2147483631 )
                      {
                        v43 = 0;
                        goto LABEL_75;
                      }
                      goto LABEL_76;
                    }
                    v37 = v128;
                  }
                }
                v78 = sub_14011EBD0(v26, (_DWORD)v16, v123, (_DWORD)SecurityContext, v57, v37, v124, 0LL, 0LL, 0LL);
LABEL_113:
                v23 = v78;
LABEL_72:
                v43 = v23 == 0;
                if ( v23 < 0 )
                  goto LABEL_73;
LABEL_75:
                if ( !v43 )
                  goto LABEL_158;
LABEL_76:
                QuadPart = v126;
                goto LABEL_77;
              }
            }
          }
          v23 = -1073741811;
        }
LABEL_145:
        v16->IoStatus.Status = v23;
        IofCompleteRequest(v16, 0);
        v93 = *(_QWORD *)(v26 + 128);
        if ( !*(_BYTE *)v93 )
        {
          v55 = *(volatile signed __int32 **)(*(_QWORD *)(v93 + 24) + 8 * v133);
          goto LABEL_147;
        }
        goto LABEL_158;
      }
      v56 = v28->Parameters.Read.ByteOffset.QuadPart;
LABEL_116:
      if ( !v34 )
        goto LABEL_76;
      v79 = *(unsigned int *)(v26 + 64);
      if ( v34 % (unsigned int)v79
        || (v80 = v56 / v79, v56 % v79)
        || (v81 = *(_QWORD *)(v26 + 424), v125 = v34 / (unsigned int)v79, v80 >= v81)
        || v81 - v80 < v34 / (unsigned int)v79 )
      {
        v23 = -1073741811;
        goto LABEL_76;
      }
      v82 = *(_QWORD *)(v26 + 16);
      if ( v34 <= *(_DWORD *)(*(_QWORD *)(v82 + 128) + 200LL) )
      {
        v83 = *(_DWORD *)(v26 + 420);
        if ( !v83 )
          goto LABEL_128;
        if ( v34 <= v83 )
        {
          v84 = *(_BYTE *)(v26 + 419);
          v85 = (v34 & (v83 - 1)) + v83 + ((v83 - 1) & (unsigned int)v56) - 1LL;
          if ( v84 )
            v86 = (v85 >> v84) + ((unsigned __int64)v34 >> v84);
          else
            v86 = v85 / v83 + v34 / v83;
          if ( v86 <= 1 )
          {
LABEL_128:
            v87 = 0;
            if ( ((v34 + ((LODWORD(v16->MdlAddress->StartVa) + v16->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) <= 0x2000 )
            {
              v89 = v124;
            }
            else
            {
              v88 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v82 + 880) + 8 * v133));
              v89 = v124;
              v87 = (int)v88;
              if ( !v88 )
              {
                v90 = sub_1401147F0(*(_QWORD *)(v26 + 16), v124);
                v87 = v90;
                if ( !v90 )
                {
                  sub_140118560(v26, (__int64)v16, v89);
                  v23 = -2147483631;
                  goto LABEL_158;
                }
              }
            }
            v91 = *(_QWORD *)(v26 + 16);
            if ( (*(_BYTE *)(v91 + 136) & 2) != 0 )
              v92 = *(_QWORD *)(v91 + 728) + 192LL * v89;
            else
              LODWORD(v92) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v91 + 872) + 2LL * v89)
                           + *(_DWORD *)(v91 + 728)
                           - 192;
            LOBYTE(v114) = 0;
            v23 = sub_14011F570(v26, (_DWORD)v16, v92, v87, v89, v114, v34, v56, v80, v125, v123, 0LL);
            goto LABEL_72;
          }
          v37 = v128;
        }
      }
      v78 = sub_14011EBD0(v26, (_DWORD)v16, v123, v34, v56, v37, v124, 0LL, 0LL, 0LL);
      goto LABEL_113;
    }
    v121 = 1;
    v23 = -1073741810;
    if ( QuadPart )
    {
LABEL_71:
      _interlockedbittestandreset((volatile signed __int32 *)(QuadPart + 108), 0);
      goto LABEL_72;
    }
LABEL_77:
    v44 = ListEntry;
    if ( ListEntry )
    {
      v45 = *((_QWORD *)&ListEntry[1].Next + 1);
      if ( v45 )
      {
        v46 = *((_BYTE *)&ListEntry[7].Next + 14);
        v47 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 128LL);
        v119 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v47 + 1144) + 8LL) + 96LL))(
          *(_QWORD *)(v47 + 1144),
          v45,
          (v46 & 1) == 0);
        if ( v119 < 2u )
          KeLowerIrql(v119);
        v44 = ListEntry;
      }
      v48 = *((_QWORD *)&v44[5].Next + 1);
      v49 = v133;
      if ( v48 )
      {
        v50 = *(_QWORD *)(v26 + 16);
        *(_QWORD *)(v48 + 88) = 0LL;
        *(_DWORD *)(v48 + 108) = 0;
        *(_DWORD *)(v48 + 104) = 0;
        ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v50 + 888) + 8 * v49), (PSLIST_ENTRY)v48);
      }
      v51 = *(_QWORD *)(v26 + 16);
      v52 = *(_QWORD *)(*((_QWORD *)&v44[2].Next + 1) + 184LL);
      *(_QWORD *)(v52 + 8) = v44[3].Next;
      *(_QWORD *)(v52 + 24) = *((_QWORD *)&v44[3].Next + 1);
      v53 = *((unsigned int *)&v44[7].Next + 2);
      *((_QWORD *)&v44[1].Next + 1) = 0LL;
      *((_QWORD *)&v44[5].Next + 1) = 0LL;
      *((_BYTE *)&v44[7].Next + 14) = 0;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v51 + 896) + 8 * v53), v44);
      v16->IoStatus.Status = v23;
      IofCompleteRequest(v16, 0);
      v54 = *(_QWORD *)(v26 + 128);
      if ( !*(_BYTE *)v54 )
      {
        v55 = *(volatile signed __int32 **)(*(_QWORD *)(v54 + 24) + 8 * v49);
LABEL_147:
        if ( _InterlockedExchangeAdd(v55, 0xFFFFFFFF) == 1 )
        {
          v94 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 128LL);
          v95 = *(_QWORD *)(v26 + 128);
          if ( v95 )
          {
            if ( *(_QWORD *)(v95 + 8) )
            {
              v96 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v95 + 40);
              if ( v96 )
              {
                if ( ExAcquireRundownProtectionCacheAware(v96) )
                {
                  PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v26 + 128) + 8LL), 0LL, 2LL);
                  v97 = *(_QWORD *)(v26 + 128);
                  if ( v97 )
                  {
                    if ( *(_QWORD *)(v97 + 8) )
                    {
                      v98 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v97 + 40);
                      if ( v98 )
                        ExReleaseRundownProtectionCacheAware(v98);
                    }
                  }
                }
              }
            }
          }
          v99 = *(_QWORD *)(v94 + 160);
          if ( *(_BYTE *)v99 == 1 )
            PoFxIdleComponent(**(_QWORD **)(v99 + 8), 0LL, 2LL);
        }
      }
    }
    else
    {
      if ( !QuadPart )
        goto LABEL_145;
      if ( v121 )
      {
        sub_1401152F0(*(_QWORD **)(v26 + 16), QuadPart);
        sub_140115430(*(_QWORD *)(v26 + 16), v124, v126, (__int64)v16);
        goto LABEL_145;
      }
    }
LABEL_158:
    v7 = v130;
    v5 = v141;
LABEL_159:
    if ( v23 != 259 )
    {
      if ( v23 == -2147483631 )
      {
        v4 = v131;
        goto LABEL_179;
      }
      if ( v23 == -2147483622 )
      {
        v4 = v131;
        goto LABEL_170;
      }
    }
    v4 = v131;
    if ( v131 == 1 )
      goto LABEL_174;
LABEL_171:
    if ( ++v7 >= *(_DWORD *)(v5 + 4) )
      v7 = 0;
    v130 = v7;
LABEL_174:
    v101 = sub_14008F0E0();
    v2 = v142;
    v6 = v139;
    if ( !v101 )
      continue;
    return 1;
  }
}
