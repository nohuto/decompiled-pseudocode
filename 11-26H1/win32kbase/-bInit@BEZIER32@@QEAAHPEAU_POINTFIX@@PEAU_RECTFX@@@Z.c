/*
 * XREFs of ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x14011A830
 * Callers:
 *     pprFlattenRec @ 0x14011A500 (pprFlattenRec.c)
 * Callees:
 *     ?lError@HFDBASIS32@@QEBAJXZ @ 0x14011AC84 (-lError@HFDBASIS32@@QEBAJXZ.c)
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x14011ACCC (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1401F18A4 (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 */

__int64 __fastcall BEZIER32::bInit(BEZIER32 *this, struct _POINTFIX *a2, struct _RECTFX *a3)
{
  struct _RECTFX *v4; // r12
  int v7; // ebp
  int v8; // r11d
  int v9; // r8d
  int v10; // r14d
  int v11; // r9d
  int v12; // eax
  int v13; // edx
  int v14; // r10d
  int v15; // esi
  int v16; // ecx
  HFDBASIS32 *v17; // r11
  _DWORD *v18; // r11
  _DWORD *v19; // rsi
  _DWORD *v20; // r14
  int v21; // r10d
  int v22; // r8d
  char v23; // r9
  int v24; // edx
  int v25; // eax
  int v26; // r8d
  int v27; // edx
  int v28; // r8d
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // r8d
  int v33; // edx
  int v34; // eax
  __int64 result; // rax
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // edx

  *(_DWORD *)this = 1;
  v4 = (struct _RECTFX *)((char *)this + 36);
  v7 = 0;
  vBoundBox(a2, (struct _RECTFX *)((char *)this + 36));
  v8 = *(_QWORD *)a2 - v4->xLeft;
  v9 = *(_QWORD *)&a2[3] - v4->xLeft;
  v10 = *(_QWORD *)&a2[1] - v4->xLeft;
  v11 = *(_QWORD *)&a2[2] - v4->xLeft;
  v12 = *((_DWORD *)this + 10);
  v13 = HIDWORD(*(_QWORD *)&a2[3]) - v12;
  v14 = HIDWORD(*(unsigned __int64 *)a2) - v12;
  v15 = HIDWORD(*(_QWORD *)&a2[1]) - v12;
  v16 = HIDWORD(*(_QWORD *)&a2[2]) - v12;
  if ( ((v8 | v10 | v11 | v9 | v14 | v15 | v16 | v13) & 0xFFFFC000) != 0 )
    return 0LL;
  *((_DWORD *)this + 1) = v8 << 10;
  *((_DWORD *)this + 2) = (v9 - v8) << 10;
  *((_DWORD *)this + 3) = 6144 * (v10 + v9 - 2 * v11);
  *((_DWORD *)this + 4) = 6144 * (v8 + v11 - 2 * v10);
  *((_DWORD *)this + 5) = v14 << 10;
  *((_DWORD *)this + 6) = (v13 - v14) << 10;
  *((_DWORD *)this + 7) = 6144 * (v15 + v13 - 2 * v16);
  *((_DWORD *)this + 8) = 6144 * (v14 + v16 - 2 * v15);
  if ( !a3 || (v19 = (_DWORD *)((char *)this + 4), v20 = (_DWORD *)((char *)this + 20), bIntersect(v4, a3)) )
  {
    while ( (int)HFDBASIS32::lError((BEZIER32 *)((char *)this + 4)) > 65472 << v7
         || (int)HFDBASIS32::lError(v17) > 65472 << v7 )
    {
      v38 = *((_DWORD *)this + 2);
      v7 += 2;
      v39 = (*((_DWORD *)this + 3) + *((_DWORD *)this + 4)) >> 1;
      *((_DWORD *)this + 3) = v39;
      *((_DWORD *)this + 2) = (v38 - (v39 >> v7)) >> 1;
      v40 = *((_DWORD *)this + 6);
      v41 = (*((_DWORD *)this + 7) + *((_DWORD *)this + 8)) >> 1;
      *((_DWORD *)this + 7) = v41;
      *((_DWORD *)this + 6) = (v40 - (v41 >> v7)) >> 1;
      *(_DWORD *)this *= 2;
    }
    v19 = (_DWORD *)((char *)this + 4);
    v20 = (_DWORD *)((char *)this + 20);
  }
  *((_DWORD *)this + 1) *= 8;
  v21 = v7 - 3;
  *((_DWORD *)this + 2) *= 8;
  v22 = *((_DWORD *)this + 4);
  v23 = 3 - v7;
  v24 = *((_DWORD *)this + 3) << (3 - v7);
  if ( v7 - 3 >= 0 )
    v24 = *((int *)this + 3) >> (v7 - 3);
  v25 = v22 >> (v7 - 3);
  *((_DWORD *)this + 3) = v24;
  v26 = v22 << v23;
  if ( v21 >= 0 )
    v26 = v25;
  *((_DWORD *)this + 4) = v26;
  *v18 *= 8;
  v27 = v18[2];
  v28 = v18[3];
  v18[1] *= 8;
  v29 = v27 >> v21;
  v30 = v27 << v23;
  if ( v21 >= 0 )
    v30 = v29;
  v18[2] = v30;
  v31 = v28 >> v21;
  v32 = v28 << v23;
  if ( v21 >= 0 )
    v32 = v31;
  v18[3] = v32;
  v33 = v19[2];
  v34 = v19[1];
  *v19 += v34;
  v19[1] = v33 + v34;
  result = 1LL;
  v19[2] = 2 * v33 - v19[3];
  v19[3] = v33;
  v36 = v20[2];
  v37 = v20[1];
  *v20 += v37;
  v20[1] = v36 + v37;
  v20[2] = 2 * v36 - v20[3];
  v20[3] = v36;
  --*(_DWORD *)this;
  return result;
}
