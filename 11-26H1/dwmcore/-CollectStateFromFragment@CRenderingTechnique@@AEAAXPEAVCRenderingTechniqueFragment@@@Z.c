/*
 * XREFs of ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FD2D0
 * Callers:
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800FD53C (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800FD444 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromFragment(
        CRenderingTechnique *this,
        struct CRenderingTechniqueFragment *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  bool v9; // zf
  unsigned int v10; // eax
  unsigned int i; // ebp
  __int64 v12; // r10
  int v13; // r9d
  const struct CBrushRenderingGraph *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  int v18; // eax
  __int64 v19; // xmm0_8
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // [rsp+20h] [rbp-18h] BYREF
  int v26; // [rsp+28h] [rbp-10h]

  v3 = *((_QWORD *)a2 + 4);
  v4 = 0;
  v6 = (*((_QWORD *)a2 + 5) - v3) >> 4;
  if ( (_DWORD)v6 )
  {
    v7 = (_QWORD *)(v3 + 8);
    v8 = (unsigned int)v6;
    do
    {
      v9 = *v7 == 0LL;
      v10 = v4 + 1;
      v7 += 2;
      if ( !v9 )
        v10 = v4;
      v4 = v10;
      --v8;
    }
    while ( v8 );
  }
  for ( i = 0; i < v4; ++i )
  {
    v12 = *((_QWORD *)a2 + 4);
    v13 = 0;
    LODWORD(v14) = i;
    v15 = *((_QWORD *)a2 + 5) - v12;
    v25 = 0LL;
    v16 = v15 >> 4;
    v17 = 0;
    v26 = 0;
    while ( v17 < (unsigned int)v16 )
    {
      if ( !*(_QWORD *)(v12 + 16LL * v17 + 8) )
      {
        v18 = (int)v14;
        v14 = (const struct CBrushRenderingGraph *)(unsigned int)((_DWORD)v14 - 1);
        if ( !v18 )
        {
          CRenderingTechniqueFragment::GetSurfaceDescription(
            a2,
            v14,
            v17,
            (struct CRenderingTechniqueFragment::SurfaceDescription *)&v25);
          v13 = v26;
          break;
        }
      }
      ++v17;
    }
    if ( BYTE4(v25) || (v22 = *((_DWORD *)this + 65), v23 = 0, !v22) )
    {
LABEL_13:
      v19 = v25;
      v20 = 44LL * (unsigned int)(*((_DWORD *)this + 65))++;
      *(_QWORD *)((char *)this + v20 + 80) = v19;
      *(_DWORD *)((char *)this + v20 + 88) = v13;
    }
    else
    {
      while ( 1 )
      {
        v24 = 44LL * v23;
        if ( (_DWORD)v25 == *(_DWORD *)((char *)this + v24 + 80)
          && !*((_BYTE *)this + v24 + 84)
          && (_BYTE)v13 == *((_BYTE *)this + v24 + 88)
          && BYTE1(v26) == *((_BYTE *)this + v24 + 89) )
        {
          break;
        }
        if ( ++v23 >= v22 )
          goto LABEL_13;
      }
      *((_WORD *)this + 22 * v23 + 45) |= HIWORD(v26);
    }
  }
  *((_DWORD *)this + 66) |= *((_DWORD *)a2 + 7);
  v21 = *((_DWORD *)a2 + 5);
  if ( (v21 & 0xF) != 0 )
    v21 = v21 - (*((_DWORD *)a2 + 5) & 0xF) + 16;
  *((_DWORD *)this + 64) += v21;
}
