/*
 * XREFs of VidSchCollectDbgInfo @ 0x14011DE00
 * Callers:
 *     <none>
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x14001DDF0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiCaptureProcessName @ 0x140031D50 (VidSchiCaptureProcessName.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x140036240 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004C094 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004C5F4 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004C6D4 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004CB94 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x14009ABC4 (VidSchiGetNumFlipAllocAttribs.c)
 *     VidSchQueryDmaHeader @ 0x1400C449C (VidSchQueryDmaHeader.c)
 */

__int64 __fastcall VidSchCollectDbgInfo(__int64 a1, _DWORD *a2, size_t a3)
{
  size_t v3; // r15
  _DWORD *v4; // rsi
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // r13
  _DWORD *v10; // rsi
  __int64 v11; // rdi
  int v12; // ebx
  int NumHistoryLayersUsed; // eax
  int v14; // edi
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  __int64 v18; // r11
  size_t v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned int v23; // ecx
  __int64 v24; // r8
  char *v25; // r11
  char *v26; // r8
  char *v27; // rax
  int v28; // edi
  __int64 v29; // rax
  char *v30; // r15
  __int64 v31; // rdx
  _DWORD *v32; // rdx
  _DWORD *v33; // r10
  __int64 v34; // rcx
  __int64 v35; // r12
  char *v36; // r13
  unsigned int v37; // edi
  unsigned int v38; // r11d
  unsigned int v39; // eax
  int v40; // ecx
  unsigned int v41; // eax
  int v42; // ecx
  bool v43; // zf
  unsigned int v44; // ecx
  __int64 v45; // r9
  int v46; // edx
  unsigned int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // edx
  char v50; // cl
  int v51; // esi
  unsigned int v52; // r8d
  char v53; // cl
  int v54; // eax
  unsigned int v55; // edx
  unsigned int v56; // r8d
  __int64 v57; // r9
  int v58; // r11d
  unsigned int v59; // r11d
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // edx
  int v64; // ecx
  int v65; // eax
  int v66; // ecx
  int v67; // edx
  unsigned int v68; // r8d
  __int64 v69; // rdx
  _DWORD *v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  unsigned int i; // r9d
  __int64 v74; // r8
  __int64 v75; // r10
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  int v81; // [rsp+30h] [rbp-59h]
  int v82; // [rsp+30h] [rbp-59h]
  int v83; // [rsp+34h] [rbp-55h]
  int v84; // [rsp+38h] [rbp-51h]
  int NumFlipQueueEntriesUsed; // [rsp+3Ch] [rbp-4Dh]
  char *v86; // [rsp+40h] [rbp-49h]
  __int64 v87; // [rsp+40h] [rbp-49h]
  unsigned int v88; // [rsp+48h] [rbp-41h]
  unsigned int v89; // [rsp+4Ch] [rbp-3Dh]
  int NumOverlayPlanesUsed; // [rsp+50h] [rbp-39h]
  __int64 v91; // [rsp+58h] [rbp-31h] BYREF
  unsigned int *v92; // [rsp+60h] [rbp-29h]
  unsigned int v93; // [rsp+68h] [rbp-21h]
  unsigned int v94; // [rsp+6Ch] [rbp-1Dh]
  int v95; // [rsp+70h] [rbp-19h]
  unsigned int v96; // [rsp+74h] [rbp-15h]
  unsigned int v97; // [rsp+78h] [rbp-11h]
  __int64 v98; // [rsp+80h] [rbp-9h]
  char *v99; // [rsp+88h] [rbp-1h]
  char *v100; // [rsp+90h] [rbp+7h]
  size_t v101; // [rsp+98h] [rbp+Fh]
  __int64 v102; // [rsp+F0h] [rbp+67h]
  int v103; // [rsp+F0h] [rbp+67h]
  unsigned int v104; // [rsp+F0h] [rbp+67h]
  int v107; // [rsp+108h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 3168LL);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v6 + 744);
  if ( v7 == 2 )
  {
    v9 = 16LL;
    v102 = *(_QWORD *)(v8 + 3272);
    v10 = (_DWORD *)(v102 + 560);
    v11 = v102 + 544;
    do
    {
      VidSchQueryDmaHeader(v8, *(_QWORD *)(v8 + 3272), *(_QWORD *)(v11 + 32), *v10 == 3, v11);
      v11 += 56LL;
      v10 += 14;
      --v9;
    }
    while ( v9 );
    if ( v3 >= 0x390 )
      v3 = 912LL;
    memmove(a2, (const void *)(v102 + 512), v3);
  }
  else if ( v7 == 3 )
  {
    v12 = *(_DWORD *)(a1 + 80);
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 744), v12);
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed((struct _VIDSCH_GLOBAL *)v8, v12);
    v14 = *(_DWORD *)(a1 + 80);
    v84 = NumHistoryLayersUsed;
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, v14);
    v15 = (((_DWORD)v4 + 163) & 0xFFFFFFF8) + 280 * VidSchiGetNumFlipAllocAttribs(v8, v14);
    v16 = v15 + 48 * v84;
    v17 = v15 - (_DWORD)v4;
    v81 = v16 - (_DWORD)v4;
    v18 = 4LL;
    v19 = (unsigned int)(v16 + 56 * NumFlipQueueEntriesUsed - (_DWORD)v4);
    v103 = v16 + 56 * NumFlipQueueEntriesUsed - (_DWORD)v4;
    v101 = v19;
    if ( v3 >= v19 )
    {
      memset(v4, 0, (unsigned int)v19);
      *v4 = v103;
      v4[1] = 3;
      v4[3] = VidSchiGetVSyncState(v8, *(_DWORD *)(a1 + 80));
      v4[2] = *(_DWORD *)(a1 + 80);
      v4[37] = *(_DWORD *)(a1 + 88);
      *(_QWORD *)(v4 + 35) = *(_QWORD *)(a1 + 96);
      v4[32] = (((_DWORD)v4 + 163) & 0xFFFFFFF8) - (_DWORD)v4;
      v4[33] = v17;
      v4[34] = v81;
      v20 = (unsigned int)v4[2];
      if ( (_DWORD)v20 != -1 && (unsigned int)v20 < *(_DWORD *)(v8 + 48) )
      {
        v21 = *(_QWORD *)(v8 + 8 * v20 + 3448);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 16);
          if ( v22 )
          {
            VidSchiCaptureProcessName(v22, (char *)v4 + 16);
            v23 = 0;
            v24 = (unsigned int)v4[34];
            v25 = (char *)v4 + (unsigned int)v4[32];
            v4[8] = *(_DWORD *)(v21 + 4);
            v26 = (char *)v4 + v24;
            v27 = (char *)v4 + (unsigned int)v4[33];
            v100 = v25;
            v86 = v27;
            v28 = -1;
            v29 = (unsigned int)v4[2];
            v30 = v86;
            v89 = v4[2];
            v99 = v26;
            v83 = 0;
            v104 = 0;
            v107 = 0;
            while ( 1 )
            {
              v82 = v28;
              if ( v28 == *(_DWORD *)(v8 + 160) )
                break;
              v31 = *(_QWORD *)(v8 + 8 * v29 + 3448);
              if ( v28 == -1 )
                v32 = *(_DWORD **)(v31 + 32);
              else
                v32 = *(_DWORD **)(v31 + 8LL * v28 + 40);
              if ( v32 )
              {
                v33 = v32 + 328;
                v34 = 280LL * v23;
                v35 = 64LL;
                v87 = 64LL;
                *(_DWORD *)&v25[v34] = v28;
                v36 = &v25[v34 + 24];
                v37 = v104;
                *(_DWORD *)&v25[v34 + 4] = v32[14];
                *(_DWORD *)&v25[v34 + 8] = v32[15];
                *(_DWORD *)&v25[v34 + 12] = v32[16];
                *(_DWORD *)&v25[v34 + 16] = v32[17];
                *(_DWORD *)&v25[v34 + 20] = v32[19];
                v38 = v107;
                do
                {
                  v39 = *(v33 - 35);
                  if ( !v39 || v39 <= 0xC && (v40 = 4672, _bittest(&v40, v39)) )
                  {
                    *(_DWORD *)v36 = -1;
                  }
                  else
                  {
                    *(_DWORD *)v36 = v38;
                    v41 = 0;
                    v42 = *(v33 - 28);
                    if ( (v42 & 1) == 0 )
                    {
                      do
                      {
                        if ( v41 >= *(_DWORD *)(v8 + 84) )
                          break;
                        ++v41;
                      }
                      while ( !_bittest(&v42, v41) );
                    }
                    v43 = v41 == *(_DWORD *)(v8 + 84);
                    v44 = 0;
                    v91 = v8;
                    if ( !v43 )
                      v44 = v41;
                    v45 = 56LL * v38;
                    v88 = v44;
                    v98 = v45;
                    v46 = *(_DWORD *)&v26[v45 + 52];
                    *(_DWORD *)&v26[v45] = v37;
                    *(_DWORD *)&v26[v45 + 52] = v46 ^ (**(_DWORD **)v33 ^ v46) & 0x3FF;
                    v92 = *(unsigned int **)v33;
                    v47 = *v92;
                    v48 = *v92 & 0x3FF;
                    v93 = v48;
                    if ( *(_BYTE *)(v8 + 164) )
                    {
                      v49 = (v47 >> 10) & 0x3FF;
                      v94 = v49;
                    }
                    else
                    {
                      v49 = 0;
                      v94 = 0;
                    }
                    v43 = !_BitScanForward(&v48, v48);
                    v50 = -1;
                    v95 = 0;
                    v51 = 0;
                    if ( !v43 )
                      v50 = v48;
                    v52 = v50;
                    v53 = -1;
                    v43 = !_BitScanForward((unsigned int *)&v54, v49);
                    v96 = v52;
                    if ( !v43 )
                      v53 = v54;
                    v97 = v53;
                    if ( !VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v91) )
                    {
                      v59 = v104;
                      while ( 1 )
                      {
                        if ( v56 < v55 )
                        {
                          v60 = 6LL * v59;
                          *(_QWORD *)&v30[8 * v60] = *(_QWORD *)(((unsigned __int64)(v51
                                                                                   + v88
                                                                                   * *(_DWORD *)(*(_QWORD *)v33 + 4LL)) << 6)
                                                               + *(_QWORD *)v33
                                                               + *(_DWORD *)(*(_QWORD *)v33 + 4LL)
                                                               * ((8 * *(_DWORD *)(*(_QWORD *)v33 + 8LL) + 231) & 0xFFFFFFF8)
                                                               + 48);
                          v61 = *(_QWORD *)v33;
                          v62 = (unsigned int)(8 * v51 * (*(_DWORD *)(*(_QWORD *)v33 + 8LL) + 28));
                          *(_OWORD *)&v30[8 * v60 + 8] = *(_OWORD *)(v62 + *(_QWORD *)v33 + 168);
                          *(_OWORD *)&v30[8 * v60 + 24] = *(_OWORD *)(v62 + v61 + 184);
                          *(_DWORD *)&v30[8 * v60 + 40] = *(_DWORD *)(v62 + v61 + 200);
                        }
                        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v91);
                        if ( VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v91) )
                          break;
                        v55 = v97;
                        v56 = v96;
                        v51 = v95;
                      }
                      v57 = v98;
                      v35 = v87;
                      v104 = v59;
                      v37 = v59;
                      v58 = v107;
                    }
                    v26 = v99;
                    *(_DWORD *)&v99[v57 + 4] = *(v33 - 35);
                    *(_DWORD *)&v26[v57 + 8] = *(v33 - 34);
                    v63 = *(_DWORD *)&v26[v57 + 52] ^ ((unsigned __int16)*(_DWORD *)&v26[v57 + 52] ^ (unsigned __int16)((unsigned __int16)*(v33 - 30) << 10)) & 0x3C00;
                    *(_DWORD *)&v26[v57 + 52] = v63;
                    *(_DWORD *)&v26[v57 + 12] = *(v33 - 28);
                    *(_QWORD *)&v26[v57 + 16] = *((_QWORD *)v33 - 11);
                    *(_QWORD *)&v26[v57 + 24] = *((_QWORD *)v33 - 10);
                    *(_QWORD *)&v26[v57 + 40] = *((_QWORD *)v33 - 8);
                    v64 = v63 ^ (v63 ^ (*((unsigned __int8 *)v33 - 116) << 18)) & 0x40000;
                    *(_DWORD *)&v26[v57 + 52] = v64;
                    v26[v57 + 48] = *((_BYTE *)v33 - 104);
                    v26[v57 + 49] = *((_BYTE *)v33 - 100);
                    v65 = v64 ^ ((unsigned __int16)v64 ^ (unsigned __int16)((unsigned __int16)*(v33 - 10) << 10)) & 0x4000;
                    *(_DWORD *)&v26[v57 + 52] = v65;
                    v66 = v65 ^ ((unsigned __int16)v65 ^ (unsigned __int16)((unsigned __int16)*(v33 - 10) << 10)) & 0x8000;
                    *(_DWORD *)&v26[v57 + 52] = v66;
                    v67 = v66 ^ (v66 ^ (*(v33 - 10) << 9)) & 0x10000;
                    *(_DWORD *)&v26[v57 + 52] = v67;
                    v38 = v58 + 1;
                    *(_DWORD *)&v26[v57 + 52] = v67 ^ (v67 ^ (*(v33 - 10) << 9)) & 0x20000;
                    v107 = v38;
                  }
                  v36 += 4;
                  v33 += 350;
                  v87 = --v35;
                }
                while ( v35 );
                v25 = v100;
                v23 = v83 + 1;
                v28 = v82;
                ++v83;
              }
              v29 = v89;
              ++v28;
            }
            v4 = a2;
            v3 = a3;
          }
        }
      }
      v68 = 0;
      v4[14] = *(_DWORD *)(v8 + 2496);
      v4[15] = *(_DWORD *)(v8 + 48);
      v4[10] = *(_DWORD *)(v8 + 160);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = v84;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 84);
            v68 < *(_DWORD *)(v8 + 48);
            v4[v69 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 3160LL) + 128LL)
                                     + 4024 * v69
                                     + 1072) )
      {
        v69 = v68++;
      }
      v3 -= v101;
      v18 = 4LL;
      v4 = (_DWORD *)((char *)v4 + v101);
    }
    if ( v3 >= 0x40 )
    {
      v70 = v4;
      v71 = 4LL;
      v72 = (*(_DWORD *)(v8 + 6664) - 1) & 3;
      do
      {
        *(_QWORD *)v70 = *(_QWORD *)(v8 + 8 * v72 + 6672);
        v70[2] = *(_DWORD *)(v8 + 4 * v72 + 6704);
        v72 = ((_DWORD)v72 - 1) & 3;
        v70 += 4;
        --v71;
      }
      while ( v71 );
      v3 -= 64LL;
      v4 += 16;
    }
    for ( i = 0; i < *(_DWORD *)(v8 + 48); ++i )
    {
      v74 = *(_QWORD *)(v8 + 8LL * i + 3448);
      if ( v3 >= 0x160 && v74 )
      {
        v75 = 4LL;
        v76 = (*(_DWORD *)(v74 + 44492) - 1) & 3;
        do
        {
          *(_QWORD *)v4 = *(_QWORD *)(v74 + 8 * v76 + 44496);
          v77 = 10 * v76;
          v76 = ((_DWORD)v76 - 1) & 3;
          *(_OWORD *)(v4 + 2) = *(_OWORD *)(v74 + 8 * v77 + 44528);
          *(_OWORD *)(v4 + 6) = *(_OWORD *)(v74 + 8 * v77 + 44544);
          *(_OWORD *)(v4 + 10) = *(_OWORD *)(v74 + 8 * v77 + 44560);
          *(_OWORD *)(v4 + 14) = *(_OWORD *)(v74 + 8 * v77 + 44576);
          *(_OWORD *)(v4 + 18) = *(_OWORD *)(v74 + 8 * v77 + 44592);
          v4 += 22;
          --v75;
        }
        while ( v75 );
        v3 -= 352LL;
      }
    }
    if ( v3 >= 0x160 )
    {
      v78 = (*(_DWORD *)(v8 + 6304) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v8 + 8 * v78 + 6312);
        v79 = 10 * v78;
        v4 += 22;
        v78 = ((_DWORD)v78 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v8 + 8 * v79 + 6344);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v8 + 8 * v79 + 6360);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v8 + 8 * v79 + 6376);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v8 + 8 * v79 + 6392);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v8 + 8 * v79 + 6408);
        --v18;
      }
      while ( v18 );
    }
  }
  return 0LL;
}
