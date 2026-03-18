/*
 * XREFs of ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1400F308C
 * Callers:
 *     ?vSrcOpaqCopyS4D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F1600 (-vSrcOpaqCopyS4D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS4D32Unsave@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F1B14 (-vSrcOpaqCopyS4D32Unsave@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS4D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1403006CC (-vSrcOpaqCopyS4D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall pvFillOpaqTable(__int64 a1, __int64 a2, __int64 a3, struct SURFACE *a4)
{
  int v5; // r14d
  unsigned int v6; // esi
  int v7; // r13d
  __int64 v8; // r11
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r9d
  int v14; // ebp
  int v15; // r10d
  int v16; // edi
  int v17; // ebx
  int v18; // r8d
  char v19; // al
  int v20; // r12d
  int v21; // r15d
  char v22; // al
  int v23; // r8d
  char v24; // dl
  int v25; // r12d
  char v26; // al
  int v27; // edi
  int v28; // r8d
  int v29; // ebp
  unsigned int v30; // r12d
  int v31; // ecx
  int v32; // edx
  _WORD *v33; // rax
  unsigned int v34; // r15d
  unsigned int v35; // ebp
  unsigned int *v36; // rdi
  int *v37; // rdx
  _WORD *v38; // r8
  char v39; // [rsp+20h] [rbp-68h]
  char v40; // [rsp+24h] [rbp-64h]
  char v41; // [rsp+28h] [rbp-60h]
  int v42; // [rsp+2Ch] [rbp-5Ch]
  char v43; // [rsp+30h] [rbp-58h]
  char v44; // [rsp+34h] [rbp-54h]
  char v45; // [rsp+38h] [rbp-50h]
  int v46; // [rsp+3Ch] [rbp-4Ch]
  unsigned int v47; // [rsp+98h] [rbp+10h]
  int v48; // [rsp+A8h] [rbp+20h]

  v47 = a2;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  if ( *(_QWORD *)a4 != *(_QWORD *)(v8 + 13424) || v5 != *(_DWORD *)(v8 + 13436) || v6 != *(_DWORD *)(v8 + 13432) )
  {
    *(_DWORD *)(v8 + 13440) = v7;
    *(_DWORD *)(v8 + 13432) = v6;
    *(_DWORD *)(v8 + 13436) = v5;
    *(_QWORD *)(v8 + 13424) = *(_QWORD *)a4;
    v10 = *((_QWORD *)a4 + 16);
    if ( !v10 )
      v10 = *(_QWORD *)(*((_QWORD *)a4 + 6) + 1792LL);
    v11 = *(_DWORD *)(v10 + 24);
    if ( (v11 & 2) != 0 )
    {
      v37 = *(int **)(v10 + 112);
      v18 = v37[9] + v37[6] - 8;
      v16 = v37[10] + v37[7] - 8;
      v14 = v37[11] + v37[8] - 8;
      v13 = *v37;
      v15 = v37[1];
      v17 = v37[2];
    }
    else
    {
      v12 = 5;
      v13 = 31;
      if ( v7 != 2 )
      {
        v13 = 255;
        v12 = 8;
      }
      if ( (v11 & 4) != 0 )
      {
        v18 = v12 - 8;
        v15 = v13 << v12;
        v16 = v12 + v12 - 8;
        v14 = v12 + v16;
        v17 = v13 << v12 << v12;
      }
      else if ( (v11 & 8) != 0 )
      {
        v14 = v12 - 8;
        v15 = v13 << v12;
        v16 = v12 + v12 - 8;
        v17 = v13;
        v18 = v12 + v16;
        v13 = v13 << v12 << v12;
      }
      else
      {
        v13 = 0;
        v15 = 0;
        v17 = 0;
        v18 = 0;
        v16 = 0;
        v14 = 0;
      }
    }
    v19 = 0;
    if ( v18 >= 0 )
      v19 = v18;
    v20 = -v18;
    v44 = v19;
    if ( v18 >= 0 )
      LOBYTE(v20) = 0;
    v39 = v20;
    v21 = byte_140352440[(unsigned __int8)((unsigned __int64)((v5 & (unsigned int)v13) << v20) >> v19)];
    v48 = byte_140352440[(unsigned __int8)((unsigned __int64)((v6 & v13) << v20) >> v19)] - v21;
    v22 = 0;
    if ( v16 >= 0 )
      v22 = v16;
    v23 = -v16;
    v24 = v22;
    v45 = v22;
    if ( v16 >= 0 )
      LOBYTE(v23) = 0;
    v40 = v23;
    v25 = byte_140352440[(unsigned __int8)((unsigned __int64)((v5 & (unsigned int)v15) << v23) >> v22)];
    v26 = 0;
    v27 = byte_140352440[(unsigned __int8)((unsigned __int64)((v6 & v15) << v23) >> v24)] - v25;
    v42 = v27;
    if ( v14 >= 0 )
      v26 = v14;
    v28 = -v14;
    v43 = v26;
    if ( v14 >= 0 )
      LOBYTE(v28) = 0;
    v41 = v28;
    v29 = byte_140352440[(unsigned __int8)((unsigned __int64)((v5 & (unsigned int)v17) << v28) >> v26)];
    v30 = v27 + 16 * v25;
    v31 = v48;
    v32 = byte_140352440[(unsigned __int8)((unsigned __int64)((v6 & v17) << v28) >> v26)] - v29;
    v33 = *(_WORD **)(v8 + 13448);
    v34 = v48 + 16 * v21;
    v35 = v32 + 16 * v29;
    v46 = v32;
    if ( v7 == 2 )
    {
      *v33 = v5;
      v38 = v33 + 1;
      if ( v33 + 1 < v33 + 15 )
      {
        do
        {
          v30 += v27;
          v34 += v31;
          v35 += v32;
          v31 = v48;
          *v38++ = v13 & ((unsigned int)(byte_140352440[(unsigned __int8)((unsigned __int64)v34 >> 4) + 256] << v44) >> v39) | v15 & ((unsigned int)(byte_140352440[(unsigned __int8)((unsigned __int64)v30 >> 4) + 256] << v45) >> v40) | v17 & ((unsigned int)(byte_140352440[(unsigned __int8)((unsigned __int64)v35 >> 4) + 256] << v43) >> v41);
          v32 = v46;
        }
        while ( v38 < v33 + 15 );
        LOWORD(v6) = v47;
      }
      *v38 = v6;
    }
    else
    {
      *(_DWORD *)v33 = v5;
      v36 = (unsigned int *)(v33 + 2);
      if ( v33 + 2 < v33 + 30 )
      {
        do
        {
          v30 += v42;
          v34 += v31;
          v35 += v32;
          v31 = v48;
          v32 = v46;
          *v36++ = v15 & ((unsigned int)(byte_140352440[(unsigned __int8)((unsigned __int64)v30 >> 4) + 256] << v45) >> v40) | v13 & ((unsigned int)(byte_140352440[(unsigned __int8)((unsigned __int64)v34 >> 4) + 256] << v44) >> v39) | v17 & ((unsigned int)(byte_140352440[(unsigned __int8)((unsigned __int64)v35 >> 4) + 256] << v43) >> v28);
        }
        while ( v36 < (unsigned int *)v33 + 15 );
        v6 = v47;
      }
      *v36 = v6;
    }
  }
  return *(void **)(v8 + 13448);
}
