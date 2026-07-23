/*
 * XREFs of PopPepPromoteActivities @ 0x1403BACA0
 * Callers:
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x1403BB494 (PopPepComponentSetLatency.c)
 *     PopPepUpdateConstraints @ 0x1403BD4FC (PopPepUpdateConstraints.c)
 *     PopPepSurprisePowerOn @ 0x1403C145C (PopPepSurprisePowerOn.c)
 *     PopPepIdleTimeoutRoutine @ 0x14047D3E0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetWakeHint @ 0x1404EE82C (PopPepComponentSetWakeHint.c)
 *     PopPepComponentSetResidency @ 0x140614364 (PopPepComponentSetResidency.c)
 * Callees:
 *     <none>
 */

void __fastcall PopPepPromoteActivities(__int64 a1, __int64 a2, int a3)
{
  unsigned int *v5; // r14
  unsigned int v6; // r15d
  int v7; // r13d
  __int64 v8; // r12
  unsigned int v9; // edi
  _DWORD **v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r9
  __int64 *v13; // rsi
  int i; // edx
  int v15; // r11d
  int j; // edx
  int v17; // r9d
  __int64 v18; // r11
  int v19; // ebx
  int v20; // edx
  _DWORD **v21; // r11
  __int64 v22; // r9
  int v23; // ebx
  unsigned int v24; // ebx
  __int64 *v25; // r13
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int *v29; // rsi
  unsigned int v30; // edi
  int v31; // r11d
  _DWORD **v32; // r10
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // r9
  __int64 *v36; // rax
  int v37; // r8d
  unsigned int v38; // r11d
  unsigned int v39; // r10d
  int v40; // edx
  __int64 v41; // r8
  int v42; // r9d
  int v43; // edx
  _DWORD **v44; // r10
  __int64 v45; // r9
  int v46; // r8d
  unsigned int v47; // eax
  unsigned int *v48; // rcx
  __int64 v49; // r8
  char v50; // r14
  _DWORD **v51; // rdi
  __int64 v52; // r9
  int v53; // r11d
  __int64 *v54; // r9
  __int64 v55; // rbx
  int v56; // esi
  __int64 v57; // rsi
  __int64 *v58; // rsi
  int v59; // r11d
  __int64 v60; // r9
  int v61; // edi
  _DWORD **v62; // r9
  __int64 *v63; // r12
  int v64; // r11d
  unsigned int v65; // r14d
  __int64 *v66; // [rsp+0h] [rbp-68h]
  __int64 v67; // [rsp+8h] [rbp-60h]
  __int64 v68; // [rsp+10h] [rbp-58h]
  __int64 v69; // [rsp+18h] [rbp-50h]
  __int64 v70; // [rsp+20h] [rbp-48h]
  unsigned int v71; // [rsp+80h] [rbp+18h]
  unsigned int v72; // [rsp+88h] [rbp+20h]

  if ( !a3 )
    return;
  if ( !a2 && a3 == 2 )
    a3 = 1;
  v5 = *(unsigned int **)(a1 + 72);
  v6 = 0;
  v7 = 4;
  v70 = 16LL;
  v8 = 11LL;
  v9 = *v5;
  if ( (*v5 & 1) != 0 )
  {
    v10 = (_DWORD **)(a1 + 72);
    v11 = 11LL;
    if ( !*((_BYTE *)v5 + 16) )
      v11 = 8LL;
    v12 = 0LL;
    v13 = &ActivityAttributes[v11];
    for ( i = 0; i <= 0; ++i )
    {
      v15 = *(_DWORD *)((char *)v13 + v12);
      if ( v15 && (v15 & **v10) != 0 )
        goto LABEL_24;
      ++v10;
      v12 += 4LL;
    }
    for ( j = *(_DWORD *)(a1 + 180); !j; j = 1 )
    {
      v17 = 1;
      v18 = 1LL;
      while ( v17 <= 3 )
      {
        v19 = *((_DWORD *)v13 + v18);
        if ( v19 && (v19 & **(_DWORD **)(a1 + 8 * v18 + 248)) != 0 )
          goto LABEL_24;
        ++v17;
        ++v18;
      }
    }
    v20 = 4;
    v21 = (_DWORD **)(a1 + 104);
    v22 = 16LL;
    while ( v20 <= 5 )
    {
      v23 = *(_DWORD *)((char *)v13 + v22);
      if ( v23 && (v23 & **v21) != 0 )
        goto LABEL_24;
      ++v20;
      ++v21;
      v22 += 4LL;
    }
    v5[2] = v5[1];
    *v5 = v9 & 0xFFFFFFFC | 2;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
  }
LABEL_24:
  if ( a3 == 2 )
  {
    v24 = *(_DWORD *)(a2 + 8);
    v71 = v24;
    v72 = v24;
    goto LABEL_26;
  }
  v24 = 0;
  if ( a3 != 3 )
    v24 = *(_DWORD *)(a1 + 180);
  v71 = v24;
  v65 = *(_DWORD *)(a1 + 180) - 1;
  if ( a3 != 3 )
    v65 = 0;
  v72 = v65;
  if ( v24 <= v65 )
  {
    do
    {
LABEL_26:
      v25 = &qword_140001AD8;
      v26 = 64LL;
      v27 = 3LL;
      v68 = 64LL;
      v28 = a1 + 208LL * v24 + 192;
      v69 = 3LL;
      v67 = v28;
      do
      {
        v29 = *(unsigned int **)(v26 + v28);
        v30 = *v29;
        if ( (*v29 & 1) != 0 )
        {
          v31 = *((_DWORD *)v25 + 2);
          if ( v31 )
          {
            v32 = (_DWORD **)(a1 + 72);
            v33 = 11LL;
            v34 = 0;
            if ( !*((_BYTE *)v29 + 16) )
              v33 = 8LL;
            v35 = 0LL;
            v36 = &v25[v33];
            v66 = v36;
            while ( v34 <= 0 )
            {
              v37 = *(_DWORD *)((char *)v36 + v35);
              if ( v37 )
              {
                if ( (v37 & **v32) != 0 )
                {
LABEL_88:
                  v28 = a1 + 208LL * v24 + 192;
                  goto LABEL_54;
                }
                v36 = v66;
              }
              ++v34;
              ++v32;
              v35 += 4LL;
            }
            if ( v31 == 2 )
            {
              v38 = *(_DWORD *)(v67 + 8);
              v39 = v38;
            }
            else
            {
              if ( v31 == 3 )
              {
                v38 = *(_DWORD *)(a1 + 180) - 1;
                v39 = 0;
              }
              else
              {
                v39 = *(_DWORD *)(a1 + 180);
                v38 = 0;
              }
              v36 = v66;
            }
            while ( v39 <= v38 )
            {
              v40 = 1;
              v41 = 1LL;
              while ( v40 <= 3 )
              {
                v42 = *((_DWORD *)v36 + v41);
                if ( v42 )
                {
                  if ( (v42 & **(_DWORD **)(a1 + 8 * (v41 + 26LL * v39) + 248)) != 0 )
                    goto LABEL_88;
                  v36 = v66;
                }
                ++v40;
                ++v41;
              }
              ++v39;
            }
            v43 = 4;
            v44 = (_DWORD **)(a1 + 104);
            v45 = 16LL;
            while ( v43 <= 5 )
            {
              v46 = *(_DWORD *)((char *)v36 + v45);
              if ( v46 )
              {
                if ( (v46 & **v44) != 0 )
                  goto LABEL_88;
                v36 = v66;
              }
              ++v43;
              ++v44;
              v45 += 4LL;
            }
            v47 = v29[1];
            v28 = a1 + 208LL * v24 + 192;
            *v29 = v30 & 0xFFFFFFFC | 2;
            v29[2] = v47;
            _InterlockedIncrement((volatile signed __int32 *)(v67 + 104));
LABEL_54:
            v27 = v69;
            v26 = v68;
          }
          else
          {
            v29[2] = v29[1];
            *v29 = v30 & 0xFFFFFFFC | 2;
            _InterlockedIncrement((volatile signed __int32 *)(v28 + 104));
          }
        }
        v26 += 8LL;
        v25 += 17;
        --v27;
        v68 = v26;
        v69 = v27;
      }
      while ( v27 );
      v24 = v71 + 1;
      v71 = v24;
    }
    while ( v24 <= v72 );
    v7 = 4;
  }
  _mm_lfence();
  v48 = *(unsigned int **)(a1 + 104);
  if ( (*v48 & 1) != 0 )
  {
    *v48 = *v48 & 0xFFFFFFFC | 2;
    v48[2] = v48[1];
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
  }
  v49 = *(_QWORD *)(a1 + 112);
  if ( (*(_DWORD *)v49 & 1) != 0 )
  {
    v50 = *(_BYTE *)(v49 + 16);
    v51 = (_DWORD **)(a1 + 72);
    v52 = 11LL;
    if ( !v50 )
      v52 = 8LL;
    v53 = 0;
    v54 = &qword_140001CF8[v52];
    v55 = 0LL;
    while ( v53 <= 0 )
    {
      v56 = *(_DWORD *)((char *)v54 + v55);
      if ( v56 && (v56 & **v51) != 0 )
        return;
      ++v53;
      ++v51;
      v55 += 4LL;
    }
    v57 = 11LL;
    if ( !v50 )
      v57 = 8LL;
    v58 = &ActivityAttributes[v57];
    while ( v6 <= *(_DWORD *)(a1 + 180) - 1 )
    {
      v59 = 1;
      v60 = 1LL;
      while ( v59 <= 3 )
      {
        v61 = *((_DWORD *)v58 + v60 + 170);
        if ( v61 && (v61 & **(_DWORD **)(a1 + 8 * (v60 + 26LL * v6) + 248)) != 0 )
          return;
        ++v59;
        ++v60;
      }
      ++v6;
    }
    v62 = (_DWORD **)(a1 + 104);
    if ( !v50 )
      v8 = 8LL;
    v63 = &qword_140001CF8[v8];
    while ( v7 <= 5 )
    {
      v64 = *(_DWORD *)((char *)v63 + v70);
      if ( v64 && (v64 & **v62) != 0 )
        return;
      ++v7;
      ++v62;
      v70 += 4LL;
    }
    *(_DWORD *)v49 = *(_DWORD *)v49 & 0xFFFFFFFC | 2;
    *(_DWORD *)(v49 + 8) = *(_DWORD *)(v49 + 4);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
  }
}
