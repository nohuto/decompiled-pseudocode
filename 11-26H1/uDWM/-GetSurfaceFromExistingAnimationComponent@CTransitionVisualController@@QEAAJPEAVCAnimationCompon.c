/*
 * XREFs of ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAVCVisualBrush@@PEA_NPEAUD2D_POINT_3F@@@Z @ 0x1800CF7D8
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?IsSnapshot@CAnimationComponent@@QEAA_NXZ @ 0x18003ABD4 (-IsSnapshot@CAnimationComponent@@QEAA_NXZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 *     ??0CVisualBrush@@QEAA@AEBV0@@Z @ 0x180083D50 (--0CVisualBrush@@QEAA@AEBV0@@Z.c)
 *     ?SetStagingVisual@CAnimationComponent@@QEAAXPEAVCVisual@@@Z @ 0x180098EA8 (-SetStagingVisual@CAnimationComponent@@QEAAXPEAVCVisual@@@Z.c)
 *     ??4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800AD5DC (--4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromExistingAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2,
        const struct tagRECT *a3,
        char a4,
        struct CVisualBrush *a5,
        bool *a6,
        struct D2D_POINT_3F *a7)
{
  CTransitionVisualController *v9; // r11
  unsigned int v10; // esi
  __int64 i; // r10
  __int64 v12; // rdi
  __int64 v13; // rax
  _DWORD *v14; // r8
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // xmm6_8
  int v19; // ebx
  bool IsSnapshot; // al
  struct CVisual *v21; // rdx
  bool v22; // r14
  __int128 v24; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25[2]; // [rsp+30h] [rbp-28h] BYREF

  v24 = 0LL;
  v9 = this;
  v10 = -2147467259;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v9 + 34); i = (unsigned int)(i + 1) )
  {
    v12 = *(_QWORD *)(*((_QWORD *)v9 + 14) + 8 * i);
    v13 = *(_QWORD *)(v12 + 16);
    if ( v13
      && v13 != -1
      && v13 == *((_QWORD *)a2 + 2)
      && CAnimationComponent::IsSnapshot(*(CAnimationComponent **)(*((_QWORD *)v9 + 14) + 8 * i)) == a4
      && (((*(_DWORD *)(v12 + 24) >> 26) ^ (*((_DWORD *)a2 + 6) >> 26)) & 1) == 0
      && (((*((_DWORD *)a2 + 6) >> 28) ^ (*(_DWORD *)(v12 + 24) >> 28)) & 1) == 0 )
    {
      v15 = *(_QWORD *)(v12 + 40);
      if ( v15 && !*(_BYTE *)(v15 + 911) && !*(_BYTE *)(v12 + 74) )
      {
        v16 = 0;
        if ( v14[2] - *v14 >= 0 )
          v16 = v14[2] - *v14;
        if ( v16 == *(_DWORD *)(v15 + 888) )
        {
          v17 = 0;
          if ( v14[3] - v14[1] >= 0 )
            v17 = v14[3] - v14[1];
          if ( v17 == *(_DWORD *)(v15 + 892) )
          {
            CVisualBrush::CVisualBrush((CVisualBrush *)v25, (const struct CVisualBrush *)(v15 + 520));
            CVisualBrush::operator=((__int64 *)&v24, v25);
            CVisualBrush::~CVisualBrush((CVisualBrush *)v25);
            v18 = *(_QWORD *)(v15 + 748);
            v19 = *(_DWORD *)(v15 + 756);
            IsSnapshot = CAnimationComponent::IsSnapshot((CAnimationComponent *)v12);
            v21 = *(struct CVisual **)(v12 + 32);
            v22 = IsSnapshot;
            if ( v21 )
              CAnimationComponent::SetStagingVisual(a2, v21);
            v10 = 0;
            CVisualBrush::operator=((__int64 *)a5, (__int64 *)&v24);
            *a6 = v22;
            *(_QWORD *)a7 = v18;
            *((_DWORD *)a7 + 2) = v19;
          }
        }
      }
      break;
    }
  }
  CVisualBrush::~CVisualBrush((CVisualBrush *)&v24);
  return v10;
}
