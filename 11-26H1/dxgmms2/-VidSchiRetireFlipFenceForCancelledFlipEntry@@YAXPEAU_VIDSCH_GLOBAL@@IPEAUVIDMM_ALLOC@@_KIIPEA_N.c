/*
 * XREFs of ?VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N@Z @ 0x14003A0E8
 * Callers:
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3PEAI@Z @ 0x140039DCC (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x14001DDF0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x140036240 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 */

void __fastcall VidSchiRetireFlipFenceForCancelledFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct VIDMM_ALLOC *a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        bool *a7)
{
  unsigned __int64 v7; // r10
  __int64 v8; // r9
  int v9; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 *v15; // rbx
  __int64 v16; // rbx
  unsigned int i; // r11d
  __int64 v18; // r12
  int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // edx
  bool v23; // zf
  char v24; // cl
  int v25; // r8d
  char v26; // cl
  int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // r8d
  char v30; // r11
  unsigned int v31; // eax
  unsigned int j; // edx
  __int64 v33; // rsi
  int v34; // r14d
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  int v38; // [rsp+20h] [rbp-30h]
  struct _VIDSCH_GLOBAL *v39; // [rsp+28h] [rbp-28h] BYREF
  unsigned int *v40; // [rsp+30h] [rbp-20h]
  unsigned int v41; // [rsp+38h] [rbp-18h]
  unsigned int v42; // [rsp+3Ch] [rbp-14h]
  int v43; // [rsp+40h] [rbp-10h]
  int v44; // [rsp+44h] [rbp-Ch]
  int v45; // [rsp+48h] [rbp-8h]
  struct _VIDSCH_GLOBAL *v46; // [rsp+90h] [rbp+40h]
  struct VIDMM_ALLOC *v47; // [rsp+A0h] [rbp+50h]

  v47 = a3;
  v46 = a1;
  v7 = a4;
  if ( *a7 )
  {
    if ( a4 )
    {
      if ( a2 != -1 )
      {
        v8 = *((_QWORD *)a1 + a2 + 431);
        if ( v8 )
        {
          v9 = *(_DWORD *)(v8 + 3248);
          if ( _bittest(&v9, a5) )
          {
            v14 = 0;
            while ( v14 < 2 )
            {
              if ( v14 )
                v15 = (__int64 *)(v8 + 8 * (a5 + 5LL));
              else
                v15 = (__int64 *)(v8 + 32);
              v16 = *v15;
              ++v14;
              for ( i = *(_DWORD *)(v16 + 72);
                    i != (((unsigned __int8)*(_DWORD *)(v16 + 68) - 1) & 0x3F);
                    i = (v30 - 1) & 0x3F )
              {
                v18 = 1400LL * i;
                v19 = *(_DWORD *)(v18 + v16 + 1172);
                if ( v19 != 5 && v19 != 15 )
                  break;
                v40 = *(unsigned int **)(v18 + v16 + 1312);
                v39 = a1;
                v20 = *v40;
                v21 = *v40 & 0x3FF;
                v41 = v21;
                if ( *((_BYTE *)a1 + 164) )
                  v22 = (v20 >> 10) & 0x3FF;
                else
                  v22 = 0;
                v23 = !_BitScanForward(&v21, v21);
                v24 = -1;
                v42 = v22;
                if ( !v23 )
                  v24 = v21;
                v43 = 0;
                v25 = v24;
                v26 = -1;
                v23 = !_BitScanForward((unsigned int *)&v27, v22);
                v44 = v25;
                if ( !v23 )
                  v26 = v27;
                v45 = v26;
                while ( !VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v39) )
                {
                  if ( v29 < v28 )
                  {
                    v31 = *(_DWORD *)(v18 + v16 + 1216);
                    for ( j = 0; j < v31; ++j )
                    {
                      v33 = *(_QWORD *)(v18 + v16 + 1312);
                      v34 = *(_DWORD *)(v33 + 4);
                      v38 = *(_DWORD *)(v33 + 8);
                      v35 = (unsigned __int64)(v43 + j * v34) << 6;
                      if ( *((_QWORD *)v47 + 12) == *(_QWORD *)(*(_QWORD *)(v35
                                                                          + v34 * ((8 * v38 + 231) & 0xFFFFFFF8)
                                                                          + v33
                                                                          + 56)
                                                              + 96LL) )
                      {
                        v36 = v33 + (unsigned int)(8 * v34 * (v38 + 28));
                        v37 = *(_QWORD *)(v36 + v35 + 80);
                        *a7 = 0;
                        if ( v7 < v37 )
                          return;
                        *(_QWORD *)(v36 + v35 + 80) = v7;
                        v12 = *(_QWORD *)(*((_QWORD *)v47 + 12) + 32LL);
                        v13 = 2 * (*(unsigned int *)(v12 + 40) + 3LL);
                        *(_OWORD *)(v12 + 8 * v13) = 0LL;
                        *(_DWORD *)(v12 + 40) = ((unsigned __int8)*(_DWORD *)(v12 + 40) + 1) & 7;
                        *(_DWORD *)(v12 + 8 * v13) = 4;
                        goto LABEL_10;
                      }
                      v31 = *(_DWORD *)(v18 + v16 + 1216);
                    }
                  }
                  VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v39);
                }
                a1 = v46;
              }
            }
            a3 = v47;
          }
          v10 = (a6 + ((unsigned __int64)a5 << 6)) << 6;
          if ( *(_QWORD *)(v10 + v8 + 3344) == *((_QWORD *)a3 + 12) )
          {
            v11 = *(_QWORD *)(v10 + v8 + 3376);
            *a7 = 0;
            if ( v7 >= v11 )
            {
              *(_QWORD *)(v10 + v8 + 3376) = v7;
              v12 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 32LL);
              v13 = 2 * (*(unsigned int *)(v12 + 40) + 3LL);
              *(_OWORD *)(v12 + 8 * v13) = 0LL;
              *(_DWORD *)(v12 + 40) = ((unsigned __int8)*(_DWORD *)(v12 + 40) + 1) & 7;
              *(_DWORD *)(v12 + 8 * v13) = 3;
LABEL_10:
              *(_QWORD *)(v12 + 8 * v13 + 8) = v7;
            }
          }
        }
      }
    }
  }
}
