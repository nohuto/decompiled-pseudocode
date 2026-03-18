/*
 * XREFs of ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEBAXIPEA_K00000@Z @ 0x140111CAC
 * Callers:
 *     VidMmGetTotalSegmentSize @ 0x14003F980 (VidMmGetTotalSegmentSize.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_GLOBAL::GetTotalSegmentSize(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 v10; // r8
  __int64 v11; // r15
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned int v14; // r10d
  __int64 v15; // r13
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rbx
  __int64 v33; // r9
  __int64 v34; // rbx

  v8 = 0LL;
  v10 = 0LL;
  v11 = a2;
  v12 = 0LL;
  *a6 = 0LL;
  v13 = 0LL;
  *a7 = 0LL;
  v14 = 0;
  *a8 = 0LL;
  v15 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v11);
  if ( *(_DWORD *)(v15 + 136) )
  {
    do
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v15 + 1752) + 8LL * v14);
      v17 = v16 + 40;
      if ( !v16 )
        v17 = 32LL;
      v18 = *(_QWORD *)v17;
      v19 = v16 + 80;
      if ( !v16 )
        v19 = 72LL;
      v20 = *(_QWORD *)v19;
      v21 = v16 + 64;
      if ( v20 >= v18 )
        v20 = v18;
      if ( !v16 )
        v21 = 56LL;
      v22 = *(_DWORD *)v21;
      v23 = *(_DWORD *)(v15 + 96);
      if ( _bittest(&v23, v14) )
      {
        v24 = v13;
        v13 += v20;
        if ( (v22 & 1) == 0 )
        {
          v13 = v24;
          v10 += v20;
        }
      }
      else if ( (v22 & 0x40) != 0 )
      {
        *a7 += v20;
      }
      else
      {
        *a6 += v20;
      }
      v25 = v16 + 104;
      if ( !v16 )
        v25 = 96LL;
      if ( *(_DWORD *)v25 == 2 )
        v12 += v20;
      ++v14;
    }
    while ( v14 < *(_DWORD *)(v15 + 136) );
  }
  if ( v13 <= v10 )
    v13 = v10;
  *a8 = v13;
  v26 = qword_14008A640;
  if ( DXGPROCESS::GetCurrent()
    && ((v27 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) == 0 ? (v28 = 0LL) : (v28 = *(_QWORD *)(v27 + 8)), v28) )
  {
    v29 = *(_QWORD *)(v28 + 336);
    if ( v29 )
      v26 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + *(_QWORD *)(v29 + 40) + 16);
  }
  else
  {
    v29 = 0LL;
  }
  v30 = *a8;
  if ( *a8 > v26 )
  {
    *a8 = v26;
    v30 = v26;
  }
  v31 = *((_DWORD *)this + 10264);
  if ( v30 > 1LL << v31 && (*((_BYTE *)this + 41064) & 0x10) != 0 )
    *a8 = 1LL << v31;
  if ( v29 )
  {
    v32 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v11);
    if ( (*(_BYTE *)(v32 + 632) & 1) != 0 )
      v33 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + *(_QWORD *)(v29 + 40) + 24)
          + 344 * v11;
    else
      v33 = v32 + 664;
    if ( (*(_BYTE *)(v32 + 656) & 1) != 0 )
      v34 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + *(_QWORD *)(v29 + 40) + 24)
          + 344 * v11;
    else
      v34 = v32 + 1008;
    *a3 = *(_QWORD *)(v33 + 8);
    v8 = *(_QWORD *)(v34 + 8);
  }
  else
  {
    v12 = 0LL;
    *a3 = 0LL;
  }
  *a4 = v8;
  *a5 = v12;
}
