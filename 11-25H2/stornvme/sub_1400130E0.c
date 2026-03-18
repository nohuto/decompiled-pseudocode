/*
 * XREFs of sub_1400130E0 @ 0x1400130E0
 * Callers:
 *     sub_140006730 @ 0x140006730 (sub_140006730.c)
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_140008F00 @ 0x140008F00 (sub_140008F00.c)
 *     sub_14002A9E0 @ 0x14002A9E0 (sub_14002A9E0.c)
 * Callees:
 *     sub_1400095E0 @ 0x1400095E0 (sub_1400095E0.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14000B930 @ 0x14000B930 (sub_14000B930.c)
 *     sub_14000D060 @ 0x14000D060 (sub_14000D060.c)
 *     sub_140014D70 @ 0x140014D70 (sub_140014D70.c)
 *     sub_140018090 @ 0x140018090 (sub_140018090.c)
 *     sub_1400185C0 @ 0x1400185C0 (sub_1400185C0.c)
 *     sub_14002510C @ 0x14002510C (sub_14002510C.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400327C0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_1400130E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // dl
  __int64 v6; // rsi
  __int16 v7; // bx
  unsigned __int16 *v8; // r15
  unsigned int *v9; // r12
  int v10; // ecx
  _DWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int16 v14; // r10
  __int64 v15; // r13
  unsigned __int16 v16; // ax
  __int64 v17; // r13
  signed __int32 v18; // ebx
  __int64 v19; // r14
  __int64 v20; // r8
  unsigned __int16 v21; // ax
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int8 v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int8 v30; // al
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r9
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // edx
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  __int64 v40; // r11
  unsigned __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  signed __int64 v45; // rax
  signed __int64 v46; // rdx
  __int64 v47; // rsi
  signed __int16 v48; // ax
  __int64 v49; // rdx
  int v50; // r9d
  unsigned int v51; // r8d
  unsigned int v52; // ecx
  __int64 v53; // r11
  __int64 v54; // rsi
  const wchar_t *v55; // r15
  unsigned __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  void (__fastcall *v60)(__int64, __int64, unsigned int *); // rax
  unsigned __int64 v61; // r12
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // r8
  __int64 v64; // rcx
  int v65; // edx
  int *v66; // rax
  signed __int32 v67; // eax
  char v68; // al
  int v69; // edx
  int v70; // r8d
  int v71; // eax
  __int64 v72; // r8
  int v73; // ecx
  __int16 v74; // cx
  _WORD *v75; // rax
  bool v76; // zf
  unsigned __int64 v77; // rdx
  __int64 v78; // rax
  signed __int32 v80[8]; // [rsp+8h] [rbp-150h] BYREF
  const wchar_t *v81; // [rsp+28h] [rbp-130h]
  const wchar_t *v82; // [rsp+30h] [rbp-128h]
  __int64 v83; // [rsp+38h] [rbp-120h]
  __int64 v84; // [rsp+40h] [rbp-118h]
  int v85; // [rsp+48h] [rbp-110h]
  __int64 v86; // [rsp+50h] [rbp-108h]
  const wchar_t *v87; // [rsp+58h] [rbp-100h]
  __int64 v88; // [rsp+60h] [rbp-F8h]
  const wchar_t *v89; // [rsp+68h] [rbp-F0h]
  __int64 v90; // [rsp+70h] [rbp-E8h]
  const wchar_t *v91; // [rsp+78h] [rbp-E0h]
  __int64 v92; // [rsp+80h] [rbp-D8h]
  const wchar_t *v93; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v94; // [rsp+90h] [rbp-C8h]
  const wchar_t *v95; // [rsp+98h] [rbp-C0h]
  __int64 v96; // [rsp+A0h] [rbp-B8h]
  const wchar_t *v97; // [rsp+A8h] [rbp-B0h]
  __int64 v98; // [rsp+B0h] [rbp-A8h]
  __int64 v99; // [rsp+B8h] [rbp-A0h]
  __int64 v100; // [rsp+C0h] [rbp-98h]
  __int64 v101; // [rsp+C8h] [rbp-90h]
  __int64 v102; // [rsp+D0h] [rbp-88h]
  char v103; // [rsp+D8h] [rbp-80h]
  char v104; // [rsp+D9h] [rbp-7Fh] BYREF
  char v105; // [rsp+DAh] [rbp-7Eh]
  char v106; // [rsp+DBh] [rbp-7Dh]
  char v107; // [rsp+DCh] [rbp-7Ch]
  unsigned __int16 v108; // [rsp+E0h] [rbp-78h]
  unsigned __int16 v109; // [rsp+E4h] [rbp-74h]
  signed __int32 v110; // [rsp+E8h] [rbp-70h]
  signed __int32 v111; // [rsp+ECh] [rbp-6Ch] BYREF
  signed __int32 i; // [rsp+F0h] [rbp-68h]
  int v113; // [rsp+F4h] [rbp-64h] BYREF
  __int64 v114; // [rsp+F8h] [rbp-60h]
  unsigned __int64 v115; // [rsp+100h] [rbp-58h] BYREF
  unsigned __int64 v116; // [rsp+108h] [rbp-50h] BYREF
  __int64 v117; // [rsp+110h] [rbp-48h] BYREF
  unsigned __int64 v118; // [rsp+118h] [rbp-40h]
  __int64 v119; // [rsp+120h] [rbp-38h] BYREF
  __int64 v120; // [rsp+128h] [rbp-30h]
  __int64 v121; // [rsp+130h] [rbp-28h]
  __int64 v122; // [rsp+140h] [rbp-18h]
  unsigned __int16 *v123; // [rsp+148h] [rbp-10h]
  _OWORD v124[2]; // [rsp+150h] [rbp-8h] BYREF
  __int128 *v125; // [rsp+178h] [rbp+20h]
  __int64 v126; // [rsp+180h] [rbp+28h]
  __int128 v127; // [rsp+188h] [rbp+30h]
  __int128 v128; // [rsp+198h] [rbp+40h]
  __int128 v129; // [rsp+1A8h] [rbp+50h]
  __int128 *v130; // [rsp+1B8h] [rbp+60h]
  __int64 v131; // [rsp+1C0h] [rbp+68h]
  __int128 v132; // [rsp+1C8h] [rbp+70h]
  __int128 v133; // [rsp+1D8h] [rbp+80h]
  __int128 v134; // [rsp+1E8h] [rbp+90h]
  __int128 v135; // [rsp+1F8h] [rbp+A0h] BYREF
  __int128 v136; // [rsp+208h] [rbp+B0h] BYREF

  v5 = 1;
  v6 = a3;
  v7 = 0;
  v8 = (unsigned __int16 *)(a3 + 170);
  v122 = a3;
  v9 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 170));
  v108 = 0;
  v116 = 0LL;
  v115 = 0LL;
  v119 = 0LL;
  v123 = (unsigned __int16 *)(a3 + 170);
  v103 = 1;
  v106 = 0;
  v107 = 0;
  if ( a4 )
  {
    v106 = a4 & 1;
    v107 = (a4 & 2) != 0;
  }
  if ( (*(_DWORD *)(a2 + 108) & 2) != 0 )
  {
    StorPortExtendedFunction(47LL, a2, &v115, &v119);
    v5 = 1;
  }
  if ( (*((_WORD *)v9 + 7) & 1) == *(_WORD *)(v6 + 172) )
    goto LABEL_6;
  while ( 2 )
  {
    if ( !v5 )
    {
LABEL_6:
      v10 = *(unsigned __int16 *)(v6 + 170);
      *(_WORD *)(v6 + 356) = v10;
      *(_DWORD *)(v6 + 376) = *v9;
      *(_DWORD *)(v6 + 380) = v9[1];
      *(_DWORD *)(v6 + 384) = v9[2];
      LODWORD(v11) = v9[3];
      *(_DWORD *)(v6 + 388) = (_DWORD)v11;
      *(_WORD *)(v6 + 352) = v7;
      if ( v7 )
      {
        v11 = *(_DWORD **)(v6 + 16);
        *v11 = v10;
        _InterlockedOr(v80, 0);
      }
      goto LABEL_8;
    }
    v12 = *((unsigned __int16 *)v9 + 5);
    v13 = *((unsigned __int16 *)v9 + 6);
    v14 = *((_WORD *)v9 + 4);
    if ( *(_WORD *)(v6 + 168) )
    {
      LODWORD(v11) = *(_DWORD *)(a2 + 24);
      if ( ((unsigned __int8)v11 & 1) == 0 )
        goto LABEL_8;
    }
    if ( (_WORD)v12 )
    {
      LODWORD(v11) = *(_DWORD *)(a2 + 24);
      if ( ((unsigned __int8)v11 & 1) == 0 )
        goto LABEL_8;
      v17 = *(_QWORD *)(a2 + 936) - 208LL;
      v109 = *(_WORD *)(a2 + 326);
      v15 = 208 * v12 + v17;
      v16 = *(_WORD *)(a2 + 328);
    }
    else
    {
      v15 = a2 + 336;
      v109 = *(_WORD *)(a2 + 324);
      v16 = v109;
    }
    if ( (unsigned __int16)v13 < v16 )
    {
      v18 = *(_DWORD *)(32 * v13 + *(_QWORD *)(v15 + 32));
      LOBYTE(v11) = v18;
      for ( i = v18; ; i = (int)v11 )
      {
        v111 = 0;
        if ( ((unsigned __int8)v11 & 8) == 0 )
          goto LABEL_8;
        v111 = i;
        _interlockedbittestandreset(&v111, 3u);
        LODWORD(v11) = _InterlockedCompareExchange(
                         (volatile signed __int32 *)(32 * v13 + *(_QWORD *)(v15 + 32)),
                         v111,
                         v18);
        if ( v18 == (_DWORD)v11 )
          break;
        v18 = (int)v11;
      }
      _mm_lfence();
      v11 = *(_DWORD **)(v15 + 32);
      v19 = *(_QWORD *)&v11[8 * v13 + 4];
      if ( !v19 )
        goto LABEL_8;
      *(_WORD *)(v15 + 54) = v14;
      if ( (v18 & 0x40) != 0 )
      {
        v20 = 0LL;
        v114 = 0LL;
      }
      else
      {
        if ( *(_BYTE *)(v19 + 2) == 40 )
          v20 = *(_QWORD *)(v19 + 104);
        else
          v20 = *(_QWORD *)(v19 + 56);
        v114 = v20;
        if ( (v20 & 0xFFF) != 0 )
        {
          v20 = v20 - (v20 & 0xFFF) + 4096;
          v114 = v20;
        }
      }
      if ( (v18 & 1) != 0 )
      {
        *(_DWORD *)(32 * v13 + *(_QWORD *)(v15 + 32)) = 0;
        *(_QWORD *)(32 * v13 + *(_QWORD *)(v15 + 32) + 16) = 0LL;
LABEL_159:
        ++*(_DWORD *)(v15 + 140);
        _InterlockedDecrement16((volatile signed __int16 *)(v15 + 136));
LABEL_160:
        if ( *(_QWORD *)(v15 + 144) )
          sub_140014D70(a2, v15, 0LL, 0LL, v81);
        v73 = *v8;
        if ( v73 >= v109 - 1 )
        {
          v74 = 0;
          *(_WORD *)(v6 + 172) = *(_WORD *)(v6 + 172) != 1;
          v75 = (_WORD *)(v6 + 170);
        }
        else
        {
          v74 = v73 + 1;
          v75 = v8;
        }
        *v75 = v74;
        v9 = (unsigned int *)(*(_QWORD *)v6 + 16LL * *v8);
        v76 = *(_BYTE *)(v6 + 248) == 0;
        v7 = ++v108;
        if ( v76 || (unsigned int)v108 < *(_DWORD *)(a2 + 72) )
        {
          if ( sub_14000B930(a2, v107, v20, v13) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 4000));
            v5 = 0;
            v103 = 0;
          }
          else
          {
            v5 = v103;
          }
        }
        else
        {
          v5 = 0;
          v103 = 0;
        }
        if ( (*((_WORD *)v9 + 7) & 1) != *(_WORD *)(v6 + 172) )
          continue;
        goto LABEL_6;
      }
      if ( (v18 & 0x40) == 0 && !v20 )
      {
        *(_QWORD *)(32 * v13 + *(_QWORD *)(v15 + 32) + 16) = 0LL;
        goto LABEL_160;
      }
      v21 = *((_WORD *)v9 + 7);
      v22 = v19;
      v118 = 0LL;
      v121 = 0LL;
      v120 = 0LL;
      v110 = 1;
      v105 = 0;
      if ( (v18 & 0x20) != 0 )
      {
        v23 = *(_QWORD *)(v15 + 40);
        v118 = *(_QWORD *)(32 * v13 + *(_QWORD *)(v15 + 32) + 8);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 16 * v13 + 8);
          v121 = *(_QWORD *)(v23 + 16 * v13);
          v120 = v24;
        }
      }
      *(_QWORD *)(32 * v13 + *(_QWORD *)(v15 + 32) + 16) = 0LL;
      if ( (v18 & 0x40) != 0 )
      {
        v25 = *(_BYTE *)(v19 + 3);
      }
      else
      {
        if ( *(_BYTE *)(v19 + 2) != 40 )
          goto LABEL_48;
        if ( *(_DWORD *)(v19 + 20) == 10 )
        {
          v26 = v19 + *(unsigned int *)(v19 + 120);
          if ( v26 )
          {
            *(_DWORD *)(v26 + 96) = *v9;
            *(_WORD *)(v26 + 86) = v21;
          }
        }
        if ( *(_BYTE *)(v19 + 2) == 40 )
          v25 = *(_BYTE *)(*(unsigned int *)(v19 + 52) + v19 + 10);
        else
LABEL_48:
          v25 = *(_BYTE *)(v19 + 7);
        *(_WORD *)(v20 + 4218) = v21;
      }
      v27 = v25;
      if ( (v21 & 0xE00) != 0 || (v21 & 0x1FE) != 0 )
      {
        if ( (v18 & 0x40) != 0 )
        {
          v104 = 0;
          if ( (v18 & 0x80u) == 0 )
            v29 = v19;
          else
            v29 = *(_QWORD *)(v19 + 16);
          v30 = sub_1400095E0(a2, 0LL, v29, 0, 0, v21, &v104);
          v20 = v30;
          v110 = v30;
          if ( v104 )
          {
            LODWORD(v20) = v30 | 0x10000;
            v110 = v20;
          }
          if ( (*(_DWORD *)(a2 + 4056) & 0x100) != 0 )
            v110 = 56;
        }
        else
        {
          sub_1400095E0(a2, v19, 0LL, 0, 0, v21, 0LL);
        }
        if ( *(_DWORD *)(a2 + 224) > (unsigned int)v27 )
        {
          v31 = *(_QWORD *)(a2 + 8 * v27 + 1672);
          if ( v31 )
            ++*(_QWORD *)(v31 + 32);
        }
        v32 = *(_QWORD *)(a2 + 176);
        v113 = 0;
        v113 = *(_DWORD *)(v32 + 28);
        if ( (v113 & 2) != 0 )
        {
          v83 = (__int64)&v113;
          LODWORD(v82) = 4;
          v81 = L"Controller Fatal Status is set";
          StorPortExtendedFunction(98LL, a2, 0LL, 7LL);
          if ( *(_QWORD *)(a2 + 3928) )
          {
            v117 = 0LL;
            if ( !(unsigned int)StorPortExtendedFunction(29LL, a2, &v117, v33) )
            {
              v81 = 0LL;
              StorPortExtendedFunction(30LL, a2, sub_140028860, v117);
            }
          }
          else
          {
            sub_140018090(a2, 0LL, 0LL, 0LL);
          }
        }
      }
      else
      {
        if ( (v18 & 0x40) == 0 )
          *(_BYTE *)(v19 + 3) = 1;
        if ( *(_DWORD *)(a2 + 224) > (unsigned int)v25 )
        {
          v28 = *(_QWORD *)(a2 + 8LL * v25 + 1672);
          if ( v28 )
            ++*(_QWORD *)(v28 + 24);
        }
      }
      v34 = *(_BYTE *)(a2 + 21) & 8;
      if ( (v18 & 0x40) == 0 )
      {
        if ( v34 )
        {
          if ( *(_BYTE *)(v19 + 2) == 40 )
            v49 = *(_QWORD *)(v19 + 104);
          else
            v49 = *(_QWORD *)(v19 + 56);
          if ( (v49 & 0xFFF) != 0 )
            v49 = v49 - (v49 & 0xFFF) + 4096;
          v50 = *(_DWORD *)(v49 + 4100);
          if ( v50 == -1 || (v51 = *(_DWORD *)(a2 + 224), v52 = 0, !v51) )
          {
LABEL_114:
            v53 = 0LL;
          }
          else
          {
            while ( 1 )
            {
              v53 = *(_QWORD *)(a2 + 8LL * v52 + 1672);
              if ( v53 )
              {
                if ( *(_DWORD *)(v53 + 16) == v50 )
                  break;
              }
              if ( ++v52 >= v51 )
                goto LABEL_114;
            }
          }
          if ( (*(_BYTE *)(v49 + 4225) & 1) != 0 )
          {
            v54 = 272LL;
            v55 = L"Admin Command Completion";
          }
          else
          {
            v54 = 144LL;
            v55 = L"NVM Command Completion";
          }
          v56 = *((unsigned __int16 *)v9 + 7);
          v57 = v9[2];
          v58 = *v9;
          v102 = 0LL;
          v101 = 0LL;
          v100 = 0LL;
          v99 = 0LL;
          v98 = v57;
          v97 = L"DW2";
          v96 = v58;
          v95 = L"DW0";
          v94 = v56;
          v93 = L"Complete Status";
          v59 = *((unsigned __int16 *)v9 + 6);
          v92 = (v56 >> 9) & 7;
          v91 = L"Status.SCT";
          v90 = (unsigned __int8)(v56 >> 1);
          v89 = L"Status.SC";
          v88 = v59;
          v87 = L"CID";
          v86 = v19;
          v85 = 0;
          LODWORD(v84) = 4;
          v83 = v54;
          v82 = v55;
          LODWORD(v81) = 4;
          StorPortExtendedFunction(87LL, a2, v53, 0LL);
          v22 = v19;
        }
        v60 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(v114 + 4192);
        if ( v60 )
          v60(a2, v19, v9);
        else
          *(_BYTE *)(v114 + 4225) |= 8u;
        goto LABEL_122;
      }
      if ( !v34 )
      {
LABEL_87:
        if ( *(_QWORD *)(v19 + 8) )
        {
          v45 = *(_QWORD *)(v15 + 200);
          do
          {
            v46 = v45;
            *(_QWORD *)(*(_QWORD *)(v19 + 8) + 24LL) = v45;
            v45 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 200), *(_QWORD *)(v19 + 8), v45);
          }
          while ( v45 != v46 );
          *(_QWORD *)(v19 + 8) = 0LL;
        }
        if ( (v18 & 0x80u) == 0 )
        {
          if ( *(_WORD *)v19 == 1 || _InterlockedExchangeAdd16((volatile signed __int16 *)v19, 0xFFFFu) == 1 )
          {
            LOBYTE(v48) = 1;
            goto LABEL_101;
          }
        }
        else
        {
          v47 = *(_QWORD *)(v19 + 16);
          if ( v110 != 1 && *(_DWORD *)(v47 + 16) == 1 )
            _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 16), v110, 1);
          StorPortExtendedFunction(1LL, a2, v19, v13);
          v48 = _InterlockedExchangeAdd16((volatile signed __int16 *)v47, 0xFFFFu);
          if ( v48 == 1 )
          {
            v22 = v47;
            goto LABEL_101;
          }
        }
        LOBYTE(v48) = v105;
LABEL_101:
        if ( !(_BYTE)v48 )
        {
LABEL_158:
          v6 = v122;
          v8 = v123;
          goto LABEL_159;
        }
LABEL_122:
        v61 = v118;
        if ( v118 )
        {
          v62 = 0LL;
          StorPortExtendedFunction(47LL, a2, &v115, &v116);
          if ( (*(_BYTE *)(a2 + 21) & 0x10) != 0 )
          {
            if ( v116 >= v61 && v115 )
              v62 = 10000 * (1000 * ((v116 - v61) % v115) % v115) / v115
                  + 10000 * (1000 * ((v116 - v61) / v115) + 1000 * ((v116 - v61) % v115) / v115);
            if ( (v18 & 0x40) != 0 )
            {
              v63 = v22;
              v64 = 8194LL;
            }
            else
            {
              v63 = v62;
              v64 = 4102LL;
            }
            StorPortNotification(v64, a2, v63);
          }
          if ( (*(_DWORD *)(a2 + 108) & 2) != 0 )
          {
            if ( (v18 & 0x40) != 0 )
            {
              v131 = 0LL;
              v135 = 0LL;
              v133 = 0LL;
              LOWORD(v135) = 1;
              BYTE10(v135) = *(_BYTE *)(v22 + 3);
              v132 = 0LL;
              v130 = &v135;
              v134 = 0LL;
              DWORD1(v135) = 4;
              StorPortNotification(8193LL, a2, v22);
              v65 = v132;
            }
            else
            {
              v66 = (int *)(v19 + 60);
              if ( *(_BYTE *)(v19 + 2) != 40 )
                v66 = (int *)(v19 + 16);
              v65 = *v66;
            }
            sub_1400185C0(a2, v65, v61, v121, v120, v119, v116, v115);
          }
        }
        if ( (v18 & 0x40) == 0 )
        {
          if ( (*(_BYTE *)(v114 + 4225) & 8) != 0 )
            sub_14000A8A0(a2, v19, v106);
          goto LABEL_158;
        }
        v67 = v110;
        if ( v110 == 1 && (v67 = *(_DWORD *)(v22 + 16), v67 == 1) )
        {
          if ( *(_DWORD *)(v22 + 4) )
          {
            *(_WORD *)v22 = 1;
            *(_BYTE *)(v22 + 2) = 0;
            sub_140014D70(a2, v15, v22, 0LL, v81);
            goto LABEL_158;
          }
        }
        else if ( (v67 & 0x10000) != 0 && *(_BYTE *)(v22 + 2) < 4u )
        {
          v68 = *(_BYTE *)(v22 + 3);
          v136 = 0LL;
          BYTE10(v136) = v68;
          v126 = 0LL;
          v125 = &v136;
          v127 = 0LL;
          v128 = 0LL;
          v129 = 0LL;
          memset(v124, 0, sizeof(v124));
          LOWORD(v136) = 1;
          DWORD1(v136) = 4;
          StorPortNotification(8193LL, a2, v22);
          ++*(_BYTE *)(v22 + 2);
          v69 = v127;
          *(_DWORD *)(v22 + 4) = v127;
          *(_WORD *)v22 = 1;
          *(_DWORD *)(v22 + 16) = 1;
          v70 = *(_DWORD *)(a2 + 120);
          if ( v70 && v126 )
          {
            v71 = *(_DWORD *)(*(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(v22 + 3) + 1672) + 52LL);
            *(_DWORD *)(v22 + 4) = v69 - (-v71 & (v71 + v70 - 1));
          }
          v81 = (const wchar_t *)v124;
          StorPortExtendedFunction(93LL, a2, 1LL, v15 + 64);
          *(_DWORD *)(v22 + 16) = *(_DWORD *)(a2 + 4276);
          if ( *(_QWORD *)(v15 + 160) )
            *(_QWORD *)(*(_QWORD *)(v15 + 168) + 8LL) = v22;
          else
            *(_QWORD *)(v15 + 160) = v22;
          *(_QWORD *)(v15 + 168) = v22;
          StorPortNotification(4100LL, a2, v124);
          if ( *(_QWORD *)(a2 + 4264)
            && !*(_DWORD *)(a2 + 4272)
            && !_InterlockedExchange((volatile __int32 *)(a2 + 4272), 1) )
          {
            v72 = *(_QWORD *)(a2 + 4264);
            v83 = 250000LL;
            v82 = (const wchar_t *)1000000;
            v81 = 0LL;
            StorPortExtendedFunction(33LL, a2, v72, sub_140011F70);
          }
          goto LABEL_158;
        }
        StorPortNotification(0x2000LL, a2, v22);
        goto LABEL_158;
      }
      v35 = *(unsigned __int8 *)(v19 + 3);
      if ( (unsigned int)v35 < *(_DWORD *)(a2 + 224) && (_mm_lfence(), (v36 = *(_QWORD *)(a2 + 8 * v35 + 1672)) != 0) )
      {
        v37 = *(_DWORD *)(v36 + 16);
        if ( v37 == -1 )
          goto LABEL_85;
      }
      else
      {
        v37 = 0;
      }
      v38 = *(_DWORD *)(a2 + 224);
      v39 = 0;
      if ( v38 )
      {
        do
        {
          v40 = *(_QWORD *)(a2 + 8LL * v39 + 1672);
          if ( v40 )
          {
            if ( *(_DWORD *)(v40 + 16) == v37 )
              goto LABEL_86;
          }
        }
        while ( ++v39 < v38 );
      }
LABEL_85:
      v40 = 0LL;
LABEL_86:
      v41 = *((unsigned __int16 *)v9 + 7);
      v42 = v9[2];
      v43 = *v9;
      v102 = 0LL;
      v101 = 0LL;
      v100 = 0LL;
      v99 = 0LL;
      v98 = v42;
      v97 = L"DW2";
      v96 = v43;
      v95 = L"DW0";
      v94 = v41;
      v93 = L"Complete Status";
      v44 = *((unsigned __int16 *)v9 + 6);
      v92 = (v41 >> 9) & 7;
      v91 = L"Status.SCT";
      v90 = (unsigned __int8)(v41 >> 1);
      v89 = L"Status.SC";
      v88 = v44;
      v87 = L"CID";
      v86 = 0LL;
      v85 = 0;
      LODWORD(v84) = 4;
      v83 = 144LL;
      v82 = L"NVM Command Completion";
      LODWORD(v81) = 4;
      StorPortExtendedFunction(87LL, a2, v40, 0LL);
      goto LABEL_87;
    }
    break;
  }
  if ( (*(_BYTE *)(a2 + 21) & 2) != 0 )
  {
    v77 = *((unsigned __int16 *)v9 + 7);
    v102 = 0LL;
    v101 = 0LL;
    v100 = 0LL;
    v99 = 0LL;
    v98 = 0LL;
    v97 = 0LL;
    v78 = *(unsigned __int16 *)(v6 + 168);
    v96 = (v77 >> 9) & 7;
    v95 = L"Status.SCT";
    v94 = (unsigned __int8)(v77 >> 1);
    v93 = L"Status.SC";
    v92 = v78;
    v91 = L"CQId";
    v90 = v12;
    v89 = L"SQId";
    v88 = v13;
    v87 = L"CID";
    v86 = 0LL;
    v85 = 0;
    LODWORD(v84) = 2;
    v83 = 1LL;
    v82 = L"NVMe Invalid Command Id";
    LODWORD(v81) = 6;
    StorPortExtendedFunction(87LL, a2, 0LL, 1LL);
  }
  LOBYTE(v11) = sub_14000D060(a2);
  if ( (_BYTE)v11 )
  {
    if ( *(_QWORD *)(a2 + 3928) )
      LOBYTE(v11) = sub_14002510C(a2, sub_140028860, 0LL);
    else
      LOBYTE(v11) = sub_140018090(a2, 0LL, 0LL, 0LL);
  }
LABEL_8:
  if ( (*(_BYTE *)(a2 + 21) & 0x20) != 0 )
  {
    LODWORD(v11) = *(_DWORD *)(a2 + 16) - 1;
    if ( (unsigned int)v11 <= 1 )
    {
      v11 = *(_DWORD **)(a2 + 176);
      v11[4] = 1 << *(_WORD *)(v6 + 176);
      _InterlockedOr(v80, 0);
      *(_BYTE *)(a2 + 21) &= ~0x20u;
    }
  }
  return (char)v11;
}
