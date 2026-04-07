/*
 * XREFs of ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x1800A3788
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18002445C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017004 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021B3C (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18006BF40 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?GetProgress@CAnimatedTransitionVisual@@UEAAJPEAM@Z @ 0x18008C380 (-GetProgress@CAnimatedTransitionVisual@@UEAAJPEAM@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::CopyVisual(
        CAnimatedTransitionVisual *this,
        struct CAnimatedTransitionVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  float *v16; // rcx
  float v17; // xmm1_4
  int Progress; // eax

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x27Au, 0LL);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 204) - *((_DWORD *)a2 + 202);
    v7 = *((_DWORD *)a2 + 205) - *((_DWORD *)a2 + 203);
    v8 = RoundToNearestInt((float)*((int *)a2 + 202) + *((float *)a2 + 176));
    *((_DWORD *)this + 202) = v8;
    v9 = v8;
    v10 = RoundToNearestInt((float)*((int *)a2 + 203) + *((float *)a2 + 177));
    v11 = 0;
    *((_DWORD *)this + 203) = v10;
    v12 = v10;
    if ( v6 >= 0 )
      v11 = v6;
    *((_DWORD *)this + 204) = RoundToNearestInt((float)((float)v11 * *((float *)this + 179)) + (float)v9);
    v13 = 0;
    if ( v7 >= 0 )
      v13 = v7;
    v14 = RoundToNearestInt((float)((float)v13 * *((float *)this + 180)) + (float)v12);
    v15 = *((_BYTE *)this + 921) == 0;
    v16 = (float *)((char *)this + 880);
    *((_DWORD *)this + 205) = v14;
    *((float *)this + 218) = *((float *)a2 + 218) + *((float *)a2 + 178);
    if ( v15 )
      *v16 = *((float *)a2 + 174);
    v15 = *((_BYTE *)this + 928) == 0;
    v17 = *v16;
    *((float *)this + 174) = *v16;
    *(_OWORD *)((char *)this + 776) = *(_OWORD *)((char *)a2 + 776);
    *((_BYTE *)this + 938) = *((_BYTE *)a2 + 938);
    *((_BYTE *)this + 939) = *((_BYTE *)a2 + 939);
    *(_OWORD *)((char *)this + 840) = *(_OWORD *)((char *)a2 + 776);
    if ( v15 )
    {
      CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), v17);
      CVisual::UpdateOpacity((CAnimatedTransitionVisual *)((char *)this + 8));
    }
    *((_BYTE *)this + 920) = 1;
    Progress = CAnimatedTransitionVisual::GetProgress(a2, (float *)this + 233);
    v5 = Progress;
    if ( Progress < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Progress, 0x29Bu, 0LL);
    else
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x2000);
  }
  return v5;
}
