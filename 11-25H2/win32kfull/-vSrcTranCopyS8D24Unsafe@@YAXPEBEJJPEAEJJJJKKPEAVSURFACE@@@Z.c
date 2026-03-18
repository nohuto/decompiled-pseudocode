/*
 * XREFs of ?vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F1DB4
 * Callers:
 *     ?vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F1CE0 (-vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1400F25B4 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall vSrcTranCopyS8D24Unsafe(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // rbx
  unsigned int v14; // edx
  unsigned int v15; // esi
  const unsigned __int8 *v16; // r15
  unsigned __int8 *v17; // rdi
  unsigned int v18; // r14d
  char *v19; // r8
  const unsigned __int8 *v21; // r12
  unsigned __int8 *v22; // rbx
  unsigned __int8 *v23; // rax
  __int64 v24; // rcx
  unsigned __int8 *v25; // rdx
  int v26; // esi
  unsigned int *v27; // rcx
  __int64 SessionState; // rax
  __int64 v29; // r10
  __int64 v30; // r9
  int v31; // edx
  unsigned int v32; // r8d
  int v33; // edx
  int v34; // ecx
  unsigned int v35; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-ACh]
  int v37; // [rsp+40h] [rbp-A8h] BYREF
  int v38; // [rsp+44h] [rbp-A4h]
  int v39; // [rsp+48h] [rbp-A0h]
  int v40; // [rsp+4Ch] [rbp-9Ch]
  int v41; // [rsp+50h] [rbp-98h]
  int v42; // [rsp+54h] [rbp-94h]
  unsigned int v43; // [rsp+58h] [rbp-90h]
  unsigned int v44; // [rsp+5Ch] [rbp-8Ch]
  unsigned int v45; // [rsp+60h] [rbp-88h]
  int v46; // [rsp+64h] [rbp-84h]
  int v47; // [rsp+68h] [rbp-80h]
  int v48; // [rsp+6Ch] [rbp-7Ch]
  __int64 v49; // [rsp+70h] [rbp-78h]
  __int64 v50; // [rsp+78h] [rbp-70h]
  unsigned int v51; // [rsp+80h] [rbp-68h]
  unsigned __int8 *v52; // [rsp+88h] [rbp-60h]
  char *v53; // [rsp+90h] [rbp-58h]
  unsigned __int8 *v54; // [rsp+98h] [rbp-50h]
  const unsigned __int8 *v55; // [rsp+A0h] [rbp-48h]

  v12 = a2;
  memset_0(&v37, 0, 0x40uLL);
  v14 = a9;
  v35 = a9 & 0xFFFFFF;
  a9 = 0;
  v15 = 3 * (a6 - a5);
  v36 = v15;
  v16 = &a1[v12];
  v17 = &a4[3 * a5];
  v18 = *v17 | (*(unsigned __int16 *)(v17 + 1) << 8);
  v51 = v18;
  v19 = (char *)pvFillOpaqTableCT(4u, v14, v18, a11, (struct BLENDINFO *)&v37, 1);
  v53 = v19;
  while ( a8 )
  {
    v21 = v16;
    v55 = v16;
    v22 = v17;
    v23 = &v17[v15];
    v54 = v23;
    while ( v22 < v23 )
    {
      v24 = *v21;
      if ( (_BYTE)v24 )
      {
        v25 = v22 + 1;
        if ( (_BYTE)v24 == 114 )
        {
          v27 = &v35;
        }
        else
        {
          v52 = v22 + 1;
          v26 = *v22 | ((*v25 | (v22[2] << 8)) << 8);
          a10 = v26;
          if ( v26 == v18 )
          {
            v27 = (unsigned int *)&v19[4 * v24];
          }
          else
          {
            SessionState = W32GetSessionState(v24, v25, v19);
            v29 = *v21;
            v30 = *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 13464LL);
            v31 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v26 & v43) << v37) >> v38) + v49);
            v32 = v43 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v31
                                                                          + ((dword_140351920[*(unsigned __int8 *)(v30 + 4 * v29)]
                                                                            * (v46 - v31)
                                                                            + 0x80000) >> 20))
                                                           + v50) << v38) >> v37);
            v33 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v26 & v44) << v39) >> v40) + v49);
            v34 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v26 & v45) << v41) >> v42) + v49);
            a9 = v45 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v34
                                                                         + ((dword_140351920[*(unsigned __int8 *)(v30 + 4 * v29 + 2)]
                                                                           * (v48 - v34)
                                                                           + 0x80000) >> 20))
                                                          + v50) << v42) >> v41) | v44 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v33 + ((dword_140351920[*(unsigned __int8 *)(v30 + 4 * v29 + 1)] * (v47 - v33) + 0x80000) >> 20)) + v50) << v40) >> v39) | v32;
            v27 = &a9;
            v25 = v52;
            v19 = v53;
          }
        }
        *v22 = *(_BYTE *)v27;
        *v25 = *((_BYTE *)v27 + 1);
        v25[1] = *((_BYTE *)v27 + 2);
        v22 = v25 + 2;
        v23 = v54;
      }
      else
      {
        v22 += 3;
      }
      v55 = ++v21;
    }
    --a8;
    v16 += a3;
    v17 += a7;
    v15 = v36;
  }
}
