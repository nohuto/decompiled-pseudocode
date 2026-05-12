/*
 * XREFs of sub_140122F10 @ 0x140122F10
 * Callers:
 *     sub_140122E00 @ 0x140122E00 (sub_140122E00.c)
 * Callees:
 *     sub_14011F440 @ 0x14011F440 (sub_14011F440.c)
 *     sub_140120B60 @ 0x140120B60 (sub_140120B60.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140122F10(
        unsigned int *SystemArgument2,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 *a5)
{
  char v5; // al
  __int16 v6; // r14
  int v8; // esi
  __int64 *v10; // r12
  signed __int16 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r8
  __int64 v16; // r15
  int v17; // r14d
  unsigned int v18; // edi
  unsigned int v19; // edx
  unsigned __int16 Next_high; // r11
  USHORT DepthSList; // ax
  bool v22; // zf
  __int64 v23; // r9
  __int64 v24; // rax
  const wchar_t *v25; // rdx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  __int64 v28; // rax
  const wchar_t *v29; // r8
  __int64 v30; // rax
  int v31; // ecx
  const int *v32; // rcx
  const wchar_t *v33; // rax
  const int *v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  const int *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // edi
  union _SLIST_HEADER *v43; // rcx
  PSLIST_ENTRY v44; // r9
  int v45; // r8d
  signed __int16 v46; // dx
  char v47; // al
  __int64 v48; // rax
  PSLIST_ENTRY v49; // rdx
  __int64 v50; // rsi
  unsigned int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // r15d
  __int64 v54; // rdi
  unsigned int v55; // r12d
  PSLIST_ENTRY v56; // r8
  signed __int16 v57; // dx
  __int64 v58; // rax
  __int16 v59; // r10
  __int64 v60; // rcx
  __int64 *v61; // rdx
  unsigned __int64 v62; // r8
  __int64 v63; // rax
  unsigned int v64; // ecx
  unsigned int v65; // edx
  __int64 v66; // rax
  _DWORD *v67; // rcx
  _OWORD *v68; // rdx
  _OWORD *v69; // rcx
  __int128 v70; // xmm1
  char v71; // dl
  __int64 v72; // rax
  unsigned __int64 v73; // r10
  unsigned __int64 v74; // r9
  unsigned int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int16 v79; // r15
  __int64 v80; // rdx
  unsigned int v81; // r8d
  __int64 v82; // rcx
  unsigned int v83; // edx
  __int64 v84; // rsi
  _QWORD *v85; // rcx
  __int128 v86; // xmm1
  __int64 v87; // r9
  __int64 v88; // rax
  signed __int32 v90[8]; // [rsp+0h] [rbp-100h] BYREF
  LPCGUID ActivityId; // [rsp+20h] [rbp-E0h]
  KIRQL v92; // [rsp+40h] [rbp-C0h]
  char v93; // [rsp+41h] [rbp-BFh]
  unsigned int v94; // [rsp+44h] [rbp-BCh]
  unsigned int v95; // [rsp+48h] [rbp-B8h] BYREF
  int v96; // [rsp+4Ch] [rbp-B4h]
  int v97; // [rsp+50h] [rbp-B0h]
  __int64 *v98; // [rsp+58h] [rbp-A8h]
  __int64 v99; // [rsp+60h] [rbp-A0h]
  __int64 v100; // [rsp+68h] [rbp-98h] BYREF
  __int64 v101; // [rsp+70h] [rbp-90h] BYREF
  __int64 v102; // [rsp+78h] [rbp-88h] BYREF
  __int64 v103; // [rsp+80h] [rbp-80h] BYREF
  __int64 v104; // [rsp+88h] [rbp-78h] BYREF
  __int64 v105; // [rsp+90h] [rbp-70h] BYREF
  __int64 v106; // [rsp+98h] [rbp-68h] BYREF
  __int64 v107; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v108; // [rsp+A8h] [rbp-58h]
  __int128 v109; // [rsp+B8h] [rbp-48h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C8h] [rbp-38h] BYREF
  GUID v111; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v113; // [rsp+100h] [rbp+0h]
  __int64 v114; // [rsp+108h] [rbp+8h]
  const wchar_t *v115; // [rsp+110h] [rbp+10h]
  int v116; // [rsp+118h] [rbp+18h]
  int v117; // [rsp+11Ch] [rbp+1Ch]
  const int *v118; // [rsp+120h] [rbp+20h]
  int v119; // [rsp+128h] [rbp+28h]
  int v120; // [rsp+12Ch] [rbp+2Ch]
  char *v121; // [rsp+130h] [rbp+30h]
  __int64 v122; // [rsp+138h] [rbp+38h]
  char *v123; // [rsp+140h] [rbp+40h]
  __int64 v124; // [rsp+148h] [rbp+48h]
  const int *v125; // [rsp+150h] [rbp+50h]
  int v126; // [rsp+158h] [rbp+58h]
  int v127; // [rsp+15Ch] [rbp+5Ch]
  char *v128; // [rsp+160h] [rbp+60h]
  int v129; // [rsp+168h] [rbp+68h]
  int v130; // [rsp+16Ch] [rbp+6Ch]
  char *v131; // [rsp+170h] [rbp+70h]
  int v132; // [rsp+178h] [rbp+78h]
  int v133; // [rsp+17Ch] [rbp+7Ch]
  const wchar_t *v134; // [rsp+180h] [rbp+80h]
  __int64 v135; // [rsp+188h] [rbp+88h]
  const wchar_t *v136; // [rsp+190h] [rbp+90h]
  __int64 v137; // [rsp+198h] [rbp+98h]
  __int64 *v138; // [rsp+1A0h] [rbp+A0h]
  __int64 v139; // [rsp+1A8h] [rbp+A8h]
  const wchar_t *v140; // [rsp+1B0h] [rbp+B0h]
  __int64 v141; // [rsp+1B8h] [rbp+B8h]
  __int64 *v142; // [rsp+1C0h] [rbp+C0h]
  __int64 v143; // [rsp+1C8h] [rbp+C8h]
  const wchar_t *v144; // [rsp+1D0h] [rbp+D0h]
  __int64 v145; // [rsp+1D8h] [rbp+D8h]
  __int64 *v146; // [rsp+1E0h] [rbp+E0h]
  __int64 v147; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v148; // [rsp+1F0h] [rbp+F0h]
  __int64 v149; // [rsp+1F8h] [rbp+F8h]
  __int64 *v150; // [rsp+200h] [rbp+100h]
  __int64 v151; // [rsp+208h] [rbp+108h]
  const wchar_t *v152; // [rsp+210h] [rbp+110h]
  __int64 v153; // [rsp+218h] [rbp+118h]
  __int64 *v154; // [rsp+220h] [rbp+120h]
  __int64 v155; // [rsp+228h] [rbp+128h]
  const wchar_t *v156; // [rsp+230h] [rbp+130h]
  __int64 v157; // [rsp+238h] [rbp+138h]
  __int64 *v158; // [rsp+240h] [rbp+140h]
  __int64 v159; // [rsp+248h] [rbp+148h]
  const wchar_t *v160; // [rsp+250h] [rbp+150h]
  __int64 v161; // [rsp+258h] [rbp+158h]
  __int64 *v162; // [rsp+260h] [rbp+160h]
  __int64 v163; // [rsp+268h] [rbp+168h]
  const wchar_t *v164; // [rsp+270h] [rbp+170h]
  __int64 v165; // [rsp+278h] [rbp+178h]
  __int64 *v166; // [rsp+280h] [rbp+180h]
  __int64 v167; // [rsp+288h] [rbp+188h]

  v5 = *((_BYTE *)SystemArgument2 + 1728);
  HIBYTE(v6) = 0;
  LOWORD(v8) = 0;
  v94 = a4;
  LOBYTE(v96) = 0;
  v98 = a2;
  v10 = a2;
  v95 = 0;
  v11 = 0;
  v93 = v5;
  v92 = KfRaiseIrql(2u);
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 128));
  if ( **(_QWORD **)(*(_QWORD *)(a3 + 88) + 1272LL) == 1LL )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    v12 = *(_QWORD *)(a3 + 88);
    if ( *v10 )
    {
      v13 = *(_QWORD *)(*v10 + 4184);
      if ( v13 )
        *(_BYTE *)(*(_QWORD *)(v13 + 184) + 3LL) |= 1u;
    }
    v14 = *v10;
    v15 = v10;
LABEL_6:
    v16 = v94;
    v17 = *(_DWORD *)(v14 + 4256) & 1;
    sub_140120B60(*(_QWORD *)(v12 + 1024), v94, (signed __int64)v15);
    _InterlockedOr(v90, 0);
    if ( !_InterlockedCompareExchange(*(volatile signed __int32 **)(*(_QWORD *)(v12 + 1024) + 8 * v16 + 24), 1, 0) )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 956));
    if ( !(_BYTE)v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 960));
    v18 = -2147483631;
    KeLowerIrql(v92);
    goto LABEL_137;
  }
  if ( a5 )
  {
    v19 = *(_DWORD *)(a3 + 124);
    while ( 1 )
    {
      v8 = *(unsigned __int16 *)(a3 + 142);
      v11 = 0;
      if ( (unsigned __int16)(v8 + 1) < v19 )
        v11 = v8 + 1;
      if ( v11 == *(_WORD *)(a3 + 140) )
        break;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v11, v8) == v8 )
      {
        Next_high = *a5;
        goto LABEL_82;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    DepthSList = ExQueryDepthSList((PSLIST_HEADER)(a3 + 64));
    v22 = (SystemArgument2[34] & 2) == 0;
    v23 = *((_QWORD *)SystemArgument2 + 16);
    v107 = DepthSList;
    v106 = SystemArgument2[2];
    v105 = *((unsigned __int16 *)SystemArgument2 + 13);
    v104 = *((unsigned __int16 *)SystemArgument2 + 11);
    v103 = *a5;
    v102 = *(unsigned __int16 *)(a3 + 142);
    v101 = *(unsigned __int16 *)(a3 + 140);
    v100 = *(unsigned __int16 *)(a3 + 136);
    v111 = 0LL;
    EventDescriptor = (EVENT_DESCRIPTOR)xmmword_14014AE88;
    if ( !v22 )
      EventDescriptor.Keyword |= 0x8000uLL;
    v24 = *(_QWORD *)(v23 + 16);
    v25 = *(const wchar_t **)(v24 + 48);
    if ( v25 )
    {
      v26 = *(unsigned __int16 *)(v24 + 40);
      if ( (_WORD)v26 )
      {
        v27 = v26 >> 1;
        if ( v27 )
        {
          while ( 1 )
          {
            v28 = v27 - 1;
            v29 = &v25[v28];
            --v27;
            if ( *v29 == 92 )
              break;
            if ( !(_DWORD)v28 )
              goto LABEL_28;
          }
          if ( v29 )
            v25 = v29 + 1;
        }
      }
    }
LABEL_28:
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = v23 + 56;
    v113 = v23 + 1032;
    v114 = 16LL;
    if ( v25 )
    {
      v30 = -1LL;
      do
        v22 = v25[++v30] == 0;
      while ( !v22 );
      v31 = 2 * v30 + 2;
    }
    else
    {
      v31 = 10;
    }
    v116 = v31;
    v32 = (const int *)*((_QWORD *)SystemArgument2 + 99);
    v33 = L"NULL";
    if ( v25 )
      v33 = v25;
    v117 = 0;
    v115 = v33;
    v34 = &dword_140149108;
    if ( v32 )
    {
      v35 = -1LL;
      do
        ++v35;
      while ( *((_BYTE *)v32 + v35) );
      v36 = v35 + 1;
    }
    else
    {
      v36 = 1;
      v32 = &dword_140149108;
    }
    v119 = v36;
    v118 = v32;
    v37 = (const int *)*((_QWORD *)SystemArgument2 + 94);
    v121 = (char *)(SystemArgument2 + 1);
    v123 = (char *)(SystemArgument2 + 186);
    v120 = 0;
    v122 = 2LL;
    v124 = 1LL;
    if ( v37 )
      v34 = v37;
    else
      v37 = &dword_140149108;
    v38 = -1LL;
    do
      ++v38;
    while ( *((_BYTE *)v37 + v38) );
    v125 = v34;
    v126 = v38 + 1;
    v39 = -1LL;
    v127 = 0;
    v128 = (char *)(SystemArgument2 + 200);
    do
      ++v39;
    while ( *((_BYTE *)SystemArgument2 + v39 + 800) );
    v130 = 0;
    v129 = v39 + 1;
    v40 = -1LL;
    v131 = (char *)SystemArgument2 + 841;
    do
      ++v40;
    while ( *((_BYTE *)SystemArgument2 + v40 + 841) );
    v133 = 0;
    v132 = v40 + 1;
    v135 = 102LL;
    v134 = L"Failed to get free slot for non-read/write command";
    v137 = 12LL;
    v136 = L"SQ ID";
    v138 = &v100;
    v140 = L"SQ head";
    v142 = &v101;
    v144 = L"SQ tail";
    v146 = &v102;
    v148 = L"Command ID";
    v150 = &v103;
    v152 = L"IO SQ count";
    v154 = &v104;
    v156 = L"IO CQ count";
    v158 = &v105;
    v160 = L"Queue depth";
    v162 = &v106;
    v164 = L"Free command ID count";
    v166 = &v107;
    v139 = 8LL;
    v141 = 16LL;
    v143 = 8LL;
    v145 = 16LL;
    v147 = 8LL;
    v149 = 22LL;
    v151 = 8LL;
    v153 = 24LL;
    v155 = 8LL;
    v157 = 24LL;
    v159 = 8LL;
    v161 = 24LL;
    v163 = 8LL;
    v165 = 44LL;
    v167 = 8LL;
    EtwWriteEx(RegHandle, &EventDescriptor, 0LL, 1u, &v111, 0LL, 0x1Au, &UserData);
    v18 = -1073741595;
    v41 = *(_DWORD *)(*v10 + 4256) >> 11;
    LOBYTE(v41) = (*(_DWORD *)(*v10 + 4256) & 0x800) == 0;
    v96 = v41;
    goto LABEL_132;
  }
  v42 = *(_DWORD *)(a3 + 124);
  v43 = (union _SLIST_HEADER *)(a3 + 64);
  if ( (*(_DWORD *)(*v10 + 4256) & 1) == 0 )
  {
    v49 = ExpInterlockedPopEntrySList(v43);
    if ( v49 )
    {
      _InterlockedOr(v90, 0);
      while ( 1 )
      {
        v8 = *(unsigned __int16 *)(a3 + 142);
        v11 = 0;
        if ( (unsigned __int16)(v8 + 1) < v42 )
          v11 = v8 + 1;
        if ( v11 == *(_WORD *)(a3 + 140) )
          break;
        if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v11, v8) == v8 )
        {
          Next_high = HIWORD(v49[3].Next);
          goto LABEL_82;
        }
      }
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a3 + 64), v49);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    v50 = *(_QWORD *)(a3 + 88);
    v99 = v50;
    v51 = *(unsigned __int16 *)(v50 + 22);
    if ( v51 != 1 )
    {
      v52 = *(unsigned __int16 *)(a3 + 136);
      v97 = v52 - 1;
      v53 = v52 % v51;
      if ( v52 % v51 < v51 )
      {
        do
        {
          v54 = *(_QWORD *)(*(_QWORD *)(a3 + 88) + 728LL) + 192LL * v53;
          _InterlockedIncrement((volatile signed __int32 *)(v54 + 128));
          v55 = *(_DWORD *)(v54 + 124);
          v56 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v54 + 64));
          if ( v56 )
          {
            _InterlockedOr(v90, 0);
            while ( 1 )
            {
              v8 = *(unsigned __int16 *)(v54 + 142);
              v57 = 0;
              if ( (unsigned __int16)(v8 + 1) < v55 )
                v57 = v8 + 1;
              if ( v57 == *(_WORD *)(v54 + 140) )
                break;
              if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v54 + 142), v57, v8) == v8 )
              {
                Next_high = HIWORD(v56[3].Next);
                v11 = v57;
                v10 = v98;
                a3 = v54;
                goto LABEL_82;
              }
            }
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v54 + 64), v56);
            v50 = v99;
          }
          v64 = *(unsigned __int16 *)(v50 + 22);
          _InterlockedDecrement((volatile signed __int32 *)(v54 + 128));
          v65 = (v53 + 1) % v64;
          v53 = v65;
        }
        while ( v65 != v97 && v65 < *(unsigned __int16 *)(v50 + 22) );
      }
    }
    goto LABEL_61;
  }
  v44 = ExpInterlockedPopEntrySList(v43);
  if ( v44 )
  {
    _InterlockedOr(v90, 0);
    while ( 1 )
    {
      v45 = *(unsigned __int16 *)(a3 + 142);
      v46 = 0;
      if ( (unsigned __int16)(v45 + 1) < v42 )
        v46 = v45 + 1;
      if ( v46 == *(_WORD *)(a3 + 140) )
        break;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v46, v45) == v45 )
      {
        Next_high = HIWORD(v44[3].Next);
        LOWORD(v8) = v45;
        v11 = v46;
        v47 = 1;
        goto LABEL_60;
      }
    }
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a3 + 64), v44);
  }
  v47 = 0;
  Next_high = 0;
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
LABEL_60:
  if ( !v47 )
  {
LABEL_61:
    v15 = v98;
    v12 = *(_QWORD *)(a3 + 88);
    if ( *v98 )
    {
      v48 = *(_QWORD *)(*v98 + 4184);
      if ( v48 )
        *(_BYTE *)(*(_QWORD *)(v48 + 184) + 3LL) |= 1u;
    }
    v14 = *v15;
    goto LABEL_6;
  }
LABEL_82:
  v58 = *v10;
  v59 = v94;
  *((_DWORD *)v10 + 16) = v94;
  v60 = *(_QWORD *)(a3 + 32);
  v61 = *(__int64 **)(v58 + 4184);
  LOWORD(v58) = *((_WORD *)v10 + 26);
  v98 = v61;
  v62 = (unsigned __int64)Next_high << 7;
  *(_WORD *)(v62 + v60 + 58) = v58;
  v63 = *(_QWORD *)(*v10 + 4216);
  if ( v63 )
    *(_DWORD *)(*(_QWORD *)(a3 + 32) + v62 + 80) = *(_DWORD *)(v63 + 56);
  else
    *(_DWORD *)(*(_QWORD *)(a3 + 32) + v62 + 80) = 0;
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + v62 + 64) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 1272LL) + 40LL);
  _interlockedbittestandset((volatile signed __int32 *)(*v10 + 4256), 3u);
  *(_DWORD *)(*v10 + 4268) = 0;
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + v62 + 24) = v61;
  *(_WORD *)(*(_QWORD *)(a3 + 32) + v62 + 56) = v8;
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + v62 + 16) = 0LL;
  *(_WORD *)(*(_QWORD *)(a3 + 32) + v62 + 52) = v59;
  *(_DWORD *)(*(_QWORD *)(a3 + 32) + v62 + 48) = *(_DWORD *)(*v10 + 4248);
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + v62 + 40) = 0LL;
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + v62 + 32) = *(_QWORD *)(*v10 + 4192);
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + v62 + 40) = *(_QWORD *)(*v10 + 4200);
  *(_BYTE *)(v62 + *(_QWORD *)(a3 + 32) + 60) = 0;
  *(_BYTE *)(v62 + *(_QWORD *)(a3 + 32) + 61) = 0;
  if ( (*(_DWORD *)(*v10 + 4256) & 0x20) != 0 )
    *(_BYTE *)(v62 + *(_QWORD *)(a3 + 32) + 60) = *(_BYTE *)(*(_QWORD *)(a3 + 32) + v62 + 60) | 2;
  if ( (*(_DWORD *)(*v10 + 4256) & 0x40) != 0 )
    *(_BYTE *)(v62 + *(_QWORD *)(a3 + 32) + 60) = *(_BYTE *)(*(_QWORD *)(a3 + 32) + v62 + 60) | 0x10;
  if ( (*(_DWORD *)(*v10 + 4256) & 0x100) != 0 )
    *(_BYTE *)(*(_QWORD *)(a3 + 32) + v62 + 60) |= 0x20u;
  if ( (*(_DWORD *)(*v10 + 4256) & 0x800) == 0 )
  {
    if ( (*(_DWORD *)(*v10 + 4256) & 0x1000) != 0 )
    {
      LOBYTE(v96) = 1;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a3 + 32) + v62 + 72) = v10;
      *(_BYTE *)(*(_QWORD *)(a3 + 32) + v62 + 61) = *(_BYTE *)(((unsigned __int64)Next_high << 7)
                                                             + *(_QWORD *)(a3 + 32)
                                                             + 61) | 1;
    }
  }
  v66 = *(_QWORD *)(a3 + 32);
  if ( !*(_WORD *)(((unsigned __int64)Next_high << 7) + v66 + 58) )
    *(_BYTE *)(*(_QWORD *)(a3 + 32) + v62 + 60) = *(_BYTE *)(((unsigned __int64)Next_high << 7) + v66 + 60) | 0x40;
  if ( (*(_DWORD *)(*v10 + 4256) & 0x10000) != 0 )
    *(_BYTE *)(*(_QWORD *)(a3 + 32) + v62 + 61) = *(_BYTE *)(((unsigned __int64)Next_high << 7)
                                                           + *(_QWORD *)(a3 + 32)
                                                           + 61) | 2;
  v67 = (_DWORD *)*v10;
  *((_WORD *)v10 + 27) = *(_WORD *)(a3 + 136);
  *((_DWORD *)v10 + 17) = v67[1024];
  *((_DWORD *)v10 + 18) = v67[1034];
  *((_DWORD *)v10 + 19) = v67[1035];
  v10[10] = *(_QWORD *)(*(_QWORD *)(a3 + 32) + ((unsigned __int64)Next_high << 7) + 64);
  *(_BYTE *)(*(_QWORD *)(a3 + 32) + v62 + 60) = *(_BYTE *)(*(_QWORD *)(a3 + 32) + ((unsigned __int64)Next_high << 7) + 60) | 4;
  *(_WORD *)(*v10 + 4098) = Next_high;
  v68 = (_OWORD *)*v10;
  v69 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)v8);
  *v69 = *(_OWORD *)(*v10 + 4096);
  v69[1] = v68[257];
  v69[2] = v68[258];
  v70 = v68[259];
  v71 = v93;
  v69[3] = v70;
  *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)v8 + 8) = Next_high;
  if ( v71 == 1 )
  {
    v72 = *(_QWORD *)(a3 + 56);
    if ( v72 )
    {
      v73 = (unsigned __int64)(unsigned __int16)v8 << 6;
      *(_OWORD *)(v72 + v73) = 0LL;
      *(_OWORD *)(v72 + v73 + 16) = 0LL;
      *(_OWORD *)(v72 + v73 + 32) = 0LL;
      *(_OWORD *)(v72 + v73 + 48) = 0LL;
      *(_DWORD *)(v73 + *(_QWORD *)(a3 + 56)) = 1;
      *(_DWORD *)(v73 + *(_QWORD *)(a3 + 56) + 8) = *(unsigned __int16 *)(a3 + 136);
      *(_DWORD *)(v73 + *(_QWORD *)(a3 + 56) + 12) = (unsigned __int16)v8;
      *(_QWORD *)(v73 + *(_QWORD *)(a3 + 56) + 16) = *(_QWORD *)(*v10 + 4160);
    }
  }
  if ( v98 )
    *(_BYTE *)(v98[23] + 3) |= 1u;
  _InterlockedOr(v90, 0);
  _interlockedbittestandset((volatile signed __int32 *)(*v10 + 4256), 0xEu);
  v74 = *(_QWORD *)(a3 + 32) + ((unsigned __int64)Next_high << 7);
  *(_BYTE *)(v74 + 60) |= 1u;
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
  v75 = v95 & 0xFFFF0000 | (unsigned __int16)(v8 + 1);
  v95 = v75;
  if ( (unsigned __int16)(v8 + 1) == *(_DWORD *)(a3 + 124) )
    v95 = v75 & 0xFFFF0000;
  _InterlockedOr(v90, 0);
  if ( *(_WORD *)(a3 + 142) == v11 )
  {
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 132), 1, 0) )
    {
      if ( *(_WORD *)(a3 + 142) != v11 )
        goto LABEL_131;
    }
    while ( *(_DWORD *)(a3 + 128) )
      _InterlockedOr(v90, 0);
    if ( *(_WORD *)(a3 + 142) == v11 )
    {
      if ( v71 == 1 )
      {
        v76 = *((_QWORD *)SystemArgument2 + 16);
        v77 = *((_QWORD *)SystemArgument2 + 206);
        ActivityId = (LPCGUID)&v95;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(v76 + 528))(v77 + 64, *(unsigned int *)(a3 + 16), 4LL);
      }
      else
      {
        **(_DWORD **)(a3 + 16) = v95;
        _InterlockedOr(v90, 0);
      }
    }
    _InterlockedOr(v90, 0);
    _InterlockedExchange((volatile __int32 *)(a3 + 132), 0);
    if ( (SystemArgument2[336] & 4) != 0 )
    {
      v22 = *SystemArgument2 == 1314276178;
      v78 = *v10;
      v79 = *(_WORD *)(a3 + 136);
      WORD1(v108) = *(_WORD *)(a3 + 138);
      *((_QWORD *)&v108 + 1) = *(_QWORD *)(v78 + 4184);
      DWORD1(v108) = *(_DWORD *)(v78 + 4096);
      v109 = 0LL;
      LOWORD(v108) = v79;
      if ( v22 )
      {
        v80 = *(_QWORD *)(*((_QWORD *)SystemArgument2 + 169) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
        v81 = *(_DWORD *)(v80 + 12);
        v82 = v80 + 64;
        _InterlockedOr(v90, 0);
        if ( v81 )
        {
          if ( v80 != -64 )
          {
            v83 = _InterlockedIncrement((volatile signed __int32 *)v80) % v81;
            v84 = v82 + ((unsigned __int64)v83 << 6);
            if ( (SystemArgument2[330] & 1) != 0 )
              *(_DWORD *)(v84 + 4) = _InterlockedIncrement((volatile signed __int32 *)SystemArgument2 + 352);
            else
              *(_DWORD *)(v84 + 4) = v83;
            *(_WORD *)v84 = 0;
            v85 = (_QWORD *)(v84 + 8);
            LOBYTE(v6) = v79 != 0;
            *(_WORD *)(v84 + 2) = v6;
            if ( (SystemArgument2[330] & 2) != 0 )
              KeQuerySystemTimePrecise(v85);
            else
              *v85 = MEMORY[0xFFFFF78000000014];
            v86 = v109;
            *(_OWORD *)(v84 + 16) = v108;
            *(_OWORD *)(v84 + 32) = v86;
          }
        }
      }
    }
  }
LABEL_131:
  v18 = 259;
LABEL_132:
  KeLowerIrql(v92);
  if ( (_BYTE)v96 && (v87 = *((_QWORD *)SystemArgument2 + 16), v88 = *(_QWORD *)(v87 + 160), *(_BYTE *)v88 == 1) )
  {
    LODWORD(v16) = v94;
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v88 + 16) + 8LL * v94), 0xFFFFFFFF) == 1 )
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v87 + 160) + 8LL), 0LL, 2LL);
  }
  else
  {
    LODWORD(v16) = v94;
  }
LABEL_137:
  if ( **((_BYTE **)SystemArgument2 + 217) && *(_WORD *)(a3 + 136) )
    sub_14011F440(SystemArgument2, a3, v16);
  return v18;
}
