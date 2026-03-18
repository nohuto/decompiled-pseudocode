/*
 * XREFs of ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x140024790
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1400245EC (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x14001C740 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14001C888 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1400244D8 (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140025C48 (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x14005FB9C (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForUser(
        CEndpointResourceStateManager **this,
        struct CFlipPresentUpdate *a2)
{
  CEndpointResourceStateManager *v2; // rdx
  signed int v3; // esi
  unsigned int v4; // r9d
  unsigned int v5; // r11d
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  CEndpointResourceStateManager *v8; // r13
  __int64 v9; // rax
  char v10; // bl
  _QWORD *v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  bool v19; // cf
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  bool v26; // cf
  __int64 v27; // rax
  char *v28; // rbx
  unsigned int v29; // r12d
  char *j; // r13
  __int64 v31; // rdi
  char *v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // cl
  __int64 v38; // rax
  char v39; // cl
  __int64 v40; // rax
  char **v41; // r14
  _DWORD *v42; // rcx
  CEndpointResourceStateManager **v43; // r14
  _DWORD *v44; // rsi
  _DWORD *v45; // r12
  CEndpointResourceStateManager *v46; // r8
  __int64 v47; // rax
  char v48; // cl
  _DWORD *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r15
  int v54; // eax
  _DWORD *v55; // r8
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r15
  int v61; // eax
  _DWORD *v62; // rdx
  __int64 v63; // r12
  __int64 v64; // rax
  __int64 v65; // rax
  char v66; // cl
  __int64 v67; // rax
  unsigned int v68; // eax
  bool v69; // cf
  __int64 v70; // rax
  unsigned int v71; // r8d
  __int64 v72; // rcx
  signed int v73; // eax
  unsigned int v74; // eax
  bool v75; // cf
  char *v76; // rbx
  unsigned int v77; // r13d
  char *v78; // r12
  __int64 v79; // rdi
  char *v80; // rbx
  __int64 v81; // rcx
  __int64 v82; // rax
  _DWORD *v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  char v86; // cl
  __int64 v87; // rax
  char v88; // cl
  __int64 v89; // rcx
  __int64 v90; // r15
  int v91; // eax
  _DWORD *v92; // rdx
  __int64 v93; // rsi
  __int64 v94; // rax
  char *v95; // rbx
  unsigned int v96; // r12d
  char *i; // r13
  __int64 v98; // rdi
  char *v99; // rbx
  __int64 v100; // rcx
  __int64 v101; // rax
  char v102; // cl
  __int64 v103; // rax
  char v104; // cl
  _DWORD *v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  char v109; // cl
  __int64 v110; // rax
  char v111; // cl
  _DWORD *v112; // [rsp+20h] [rbp-59h]
  char *v113; // [rsp+28h] [rbp-51h]
  _DWORD *v114; // [rsp+28h] [rbp-51h]
  CEndpointResourceStateManager *v115; // [rsp+30h] [rbp-49h]
  char *v116; // [rsp+30h] [rbp-49h]
  PVOID P; // [rsp+40h] [rbp-39h] BYREF
  int v118; // [rsp+48h] [rbp-31h]
  __int128 v119; // [rsp+50h] [rbp-29h]
  __int128 v120; // [rsp+60h] [rbp-19h]
  _DWORD *v121; // [rsp+70h] [rbp-9h]
  __int64 v122; // [rsp+78h] [rbp-1h]
  __int64 v123; // [rsp+80h] [rbp+7h]
  unsigned int v124; // [rsp+88h] [rbp+Fh]
  int v127; // [rsp+F0h] [rbp+77h]
  _DWORD *v128; // [rsp+F8h] [rbp+7Fh]

  v2 = *this;
  v3 = 0;
  v4 = 0;
  P = 0LL;
  v5 = 0;
  v118 = 0;
  v121 = 0LL;
  v119 = 0LL;
  v6 = 0;
  v120 = 0LL;
  v7 = 0;
  v122 = 0LL;
  v123 = 0LL;
  v124 = 0;
  v8 = (CEndpointResourceStateManager *)this;
  do
  {
    if ( v2 == v8 )
      break;
    v9 = (__int64)v2 + 24;
    if ( !v2 )
      v9 = 32LL;
    v10 = *(_BYTE *)v9;
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      v21 = (__int64)v2 + 16;
      if ( !v2 )
        v21 = 24LL;
      v22 = *(_QWORD *)(*(_QWORD *)v21 + 32LL);
      v23 = 0;
      if ( v22 )
        v23 = *(_DWORD *)(v22 + 32);
      v24 = v23 + 24;
      if ( v24 < 0x18 )
      {
        v3 = -1073741675;
      }
      else
      {
        v25 = v4 + v24;
        v26 = v25 < v4;
        v4 = -1;
        if ( !v26 )
          v4 = v25;
        v3 = v26 ? 0xC0000095 : 0;
        LODWORD(v122) = v4;
      }
    }
    if ( v3 >= 0 && (v10 & 2) != 0 )
    {
      v68 = v6 + 16;
      v69 = v6 + 16 < v6;
      v6 = -1;
      if ( !v69 )
        v6 = v68;
      v3 = v69 ? 0xC0000095 : 0;
      HIDWORD(v122) = v6;
    }
    v2 = *(CEndpointResourceStateManager **)v2;
  }
  while ( v3 >= 0 );
  v11 = (_QWORD *)*((_QWORD *)v8 + 2);
  if ( v3 >= 0 )
  {
    while ( v11 != (_QWORD *)((char *)v8 + 16) )
    {
      v12 = (__int64)(v11 + 3);
      if ( !v11 )
        v12 = 32LL;
      if ( (*(_BYTE *)v12 & 1) != 0 )
      {
        v70 = (__int64)(v11 + 2);
        if ( !v11 )
          v70 = 24LL;
        v71 = 0;
        v72 = *(_QWORD *)(*(_QWORD *)v70 + 32LL);
        if ( v72 )
          v71 = *(_DWORD *)(v72 + 32);
        v73 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x18u, v71);
        v5 = v124;
        v7 = HIDWORD(v123);
        v3 = v73;
      }
      if ( v3 >= 0 )
      {
        v13 = (__int64)(v11 + 7);
        if ( !v11 )
          v13 = 64LL;
        if ( (*(_BYTE *)v13 & 1) == 0 )
          goto LABEL_27;
        v14 = (__int64)(v11 + 4);
        if ( !v11 )
          v14 = 40LL;
        v15 = *(_QWORD *)v14;
        v16 = 0;
        if ( v15 )
          v16 = *(_DWORD *)(v15 + 32);
        v17 = v16 + 32;
        if ( v17 < 0x20 )
        {
          v3 = -1073741675;
        }
        else
        {
          v18 = v5 + v17;
          v19 = v18 < v5;
          v5 = -1;
          if ( !v19 )
            v5 = v18;
          v3 = v19 ? 0xC0000095 : 0;
          v124 = v5;
        }
        if ( v3 >= 0 )
        {
LABEL_27:
          if ( (*(_BYTE *)v12 & 2) != 0 )
          {
            v74 = v7 + 16;
            v75 = v7 + 16 < v7;
            v7 = -1;
            if ( !v75 )
              v7 = v74;
            v3 = v75 ? 0xC0000095 : 0;
            HIDWORD(v123) = v7;
          }
        }
      }
      v11 = (_QWORD *)*v11;
      if ( v3 < 0 )
        goto LABEL_31;
    }
    v127 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x75754346u);
    v3 = v127;
    if ( v127 >= 0 )
    {
      v43 = *(CEndpointResourceStateManager ***)v8;
      if ( *(CEndpointResourceStateManager **)v8 != v8 )
      {
        v44 = (_DWORD *)*((_QWORD *)&v119 + 1);
        v45 = (_DWORD *)v119;
        do
        {
          v46 = *v43;
          v47 = (__int64)(v43 + 3);
          v115 = *v43;
          if ( !v43 )
            v47 = 32LL;
          v48 = *(_BYTE *)v47;
          if ( (*(_BYTE *)v47 & 1) != 0 )
          {
            v59 = (__int64)(v43 + 2);
            if ( !v43 )
              v59 = 24LL;
            v60 = *(_QWORD *)(*(_QWORD *)v59 + 32LL);
            v61 = 0;
            if ( v60 )
              v61 = *(_DWORD *)(v60 + 32);
            *v45 = 2;
            v62 = v45;
            v63 = (unsigned int)(v61 + 24);
            v64 = *(_QWORD *)v59;
            v45 = (_DWORD *)((char *)v62 + v63);
            v114 = v45;
            *(_QWORD *)&v119 = v45;
            *((_QWORD *)v62 + 1) = *(_QWORD *)(v64 + 40);
            if ( v60 )
            {
              v76 = (char *)(v62 + 6);
              v62[4] = *(_DWORD *)(v60 + 32);
              if ( *(_DWORD *)(v60 + 12) )
              {
                v77 = 0;
                v78 = *(char **)(v60 + 24);
                do
                {
                  v79 = 32LL * v77;
                  *(_OWORD *)v76 = *(_OWORD *)(*(_QWORD *)(v60 + 16) + v79);
                  *((_DWORD *)v76 + 4) = *(_DWORD *)(*(_QWORD *)(v60 + 16) + v79 + 16);
                  v80 = v76 + 20;
                  memmove(v80, v78, *(unsigned int *)(*(_QWORD *)(v60 + 16) + v79 + 16));
                  ++v77;
                  v81 = *(unsigned int *)(*(_QWORD *)(v60 + 16) + v79 + 16);
                  v76 = &v80[v81];
                  v78 += v81;
                }
                while ( v77 < *(_DWORD *)(v60 + 12) );
                v45 = v114;
                v8 = (CEndpointResourceStateManager *)this;
              }
            }
            else
            {
              v62[4] = 0;
            }
            v46 = v115;
            v65 = (__int64)(v43 + 3);
            if ( !v43 )
              v65 = 32LL;
            v66 = *(_BYTE *)v65;
            v67 = (__int64)(v43 + 3);
            v48 = v66 | 4;
            if ( !v43 )
              v67 = 32LL;
            *(_BYTE *)v67 = v48;
          }
          if ( (v48 & 2) != 0 )
          {
            *v44 = 0;
            v82 = (__int64)(v43 + 2);
            v83 = v44;
            v44 += 4;
            if ( !v43 )
              v82 = 24LL;
            v84 = *(_QWORD *)(*(_QWORD *)v82 + 40LL);
            v85 = (__int64)(v43 + 3);
            if ( !v43 )
              v85 = 32LL;
            *((_QWORD *)v83 + 1) = v84;
            v86 = *(_BYTE *)v85;
            v87 = (__int64)(v43 + 3);
            v88 = v86 | 8;
            if ( !v43 )
              v87 = 32LL;
            *(_BYTE *)v87 = v88;
          }
          v43 = (CEndpointResourceStateManager **)v46;
        }
        while ( v46 != v8 );
        *((_QWORD *)&v119 + 1) = v44;
        v3 = v127;
      }
      v41 = (char **)*((_QWORD *)v8 + 2);
      v113 = (char *)v8 + 16;
      if ( v41 != (char **)((char *)v8 + 16) )
      {
        v42 = v121;
        v49 = (_DWORD *)v120;
        v128 = v121;
        v112 = (_DWORD *)*((_QWORD *)&v120 + 1);
        do
        {
          v116 = *v41;
          v50 = (__int64)(v41 + 3);
          if ( !v41 )
            v50 = 32LL;
          if ( (*(_BYTE *)v50 & 1) != 0 )
          {
            v89 = (__int64)(v41 + 2);
            if ( !v41 )
              v89 = 24LL;
            v90 = *(_QWORD *)(*(_QWORD *)v89 + 32LL);
            v91 = 0;
            if ( v90 )
              v91 = *(_DWORD *)(v90 + 32);
            *v49 = 3;
            v92 = v49;
            v93 = (unsigned int)(v91 + 24);
            v94 = *(_QWORD *)v89;
            v49 = (_DWORD *)((char *)v92 + v93);
            *(_QWORD *)&v120 = v49;
            *((_QWORD *)v92 + 1) = *(_QWORD *)(v94 + 40);
            if ( v90 )
            {
              v95 = (char *)(v92 + 6);
              v92[4] = *(_DWORD *)(v90 + 32);
              v96 = 0;
              for ( i = *(char **)(v90 + 24); v96 < *(_DWORD *)(v90 + 12); i += v100 )
              {
                v98 = 32LL * v96;
                *(_OWORD *)v95 = *(_OWORD *)(v98 + *(_QWORD *)(v90 + 16));
                *((_DWORD *)v95 + 4) = *(_DWORD *)(v98 + *(_QWORD *)(v90 + 16) + 16);
                v99 = v95 + 20;
                memmove(v99, i, *(unsigned int *)(v98 + *(_QWORD *)(v90 + 16) + 16));
                ++v96;
                v100 = *(unsigned int *)(v98 + *(_QWORD *)(v90 + 16) + 16);
                v95 = &v99[v100];
              }
            }
            else
            {
              v92[4] = 0;
            }
            v101 = (__int64)(v41 + 3);
            if ( !v41 )
              v101 = 32LL;
            v102 = *(_BYTE *)v101;
            v103 = (__int64)(v41 + 3);
            v104 = v102 | 4;
            if ( !v41 )
              v103 = 32LL;
            *(_BYTE *)v103 = v104;
            v42 = v128;
          }
          v51 = (__int64)(v41 + 7);
          if ( !v41 )
            v51 = 64LL;
          if ( (*(_BYTE *)v51 & 1) != 0 )
          {
            v52 = (__int64)(v41 + 4);
            if ( !v41 )
              v52 = 40LL;
            v53 = *(_QWORD *)v52;
            v54 = 0;
            if ( v53 )
              v54 = *(_DWORD *)(v53 + 32);
            *v42 = 4;
            v55 = v42;
            v128 = (_DWORD *)((char *)v42 + (unsigned int)(v54 + 32));
            v121 = v128;
            v56 = (__int64)(v41 + 2);
            if ( !v41 )
              v56 = 24LL;
            v57 = *(_QWORD *)(*(_QWORD *)v56 + 40LL);
            v58 = (__int64)(v41 + 5);
            if ( !v41 )
              v58 = 48LL;
            *((_QWORD *)v55 + 1) = v57;
            v27 = *(_QWORD *)v58;
            if ( v27 )
              v27 = *(_QWORD *)(v27 + 40);
            *((_QWORD *)v55 + 2) = v27;
            if ( v53 )
            {
              v28 = (char *)(v55 + 8);
              v55[6] = *(_DWORD *)(v53 + 32);
              v29 = 0;
              for ( j = *(char **)(v53 + 24); v29 < *(_DWORD *)(v53 + 12); j += v33 )
              {
                v31 = 32LL * v29;
                *(_OWORD *)v28 = *(_OWORD *)(*(_QWORD *)(v53 + 16) + v31);
                *((_DWORD *)v28 + 4) = *(_DWORD *)(*(_QWORD *)(v53 + 16) + v31 + 16);
                v32 = v28 + 20;
                memmove(v32, j, *(unsigned int *)(*(_QWORD *)(v53 + 16) + v31 + 16));
                ++v29;
                v33 = *(unsigned int *)(*(_QWORD *)(v53 + 16) + v31 + 16);
                v28 = &v32[v33];
              }
            }
            else
            {
              v55[6] = 0;
            }
            v34 = (__int64)(v41 + 5);
            if ( !v41 )
              v34 = 48LL;
            if ( *(_QWORD *)v34 )
            {
              CFlipResource::Release(*(CFlipResource **)v34);
              v35 = (__int64)(v41 + 5);
              if ( !v41 )
                v35 = 48LL;
              *(_QWORD *)v35 = 0LL;
            }
            v36 = (__int64)(v41 + 7);
            if ( !v41 )
              v36 = 64LL;
            v37 = *(_BYTE *)v36;
            v38 = (__int64)(v41 + 7);
            v39 = v37 | 2;
            if ( !v41 )
              v38 = 64LL;
            *(_BYTE *)v38 = v39;
          }
          v40 = (__int64)(v41 + 3);
          if ( !v41 )
            v40 = 32LL;
          if ( (*(_BYTE *)v40 & 2) != 0 )
          {
            v105 = v112;
            *v112 = 1;
            v106 = (__int64)(v41 + 2);
            v112 += 4;
            if ( !v41 )
              v106 = 24LL;
            *((_QWORD *)&v120 + 1) = v105 + 4;
            v107 = *(_QWORD *)(*(_QWORD *)v106 + 40LL);
            v108 = (__int64)(v41 + 3);
            if ( !v41 )
              v108 = 32LL;
            *((_QWORD *)v105 + 1) = v107;
            v109 = *(_BYTE *)v108;
            v110 = (__int64)(v41 + 3);
            v111 = v109 | 8;
            if ( !v41 )
              v110 = 32LL;
            *(_BYTE *)v110 = v111;
          }
          v41 = (char **)v116;
          v42 = v128;
        }
        while ( v116 != v113 );
        v3 = v127;
        v8 = (CEndpointResourceStateManager *)this;
      }
      CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, a2);
      CEndpointResourceStateManager::CommitPendingUpdates(v8);
    }
  }
LABEL_31:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v3;
}
