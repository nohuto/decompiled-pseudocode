/*
 * XREFs of ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180095EB0
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18003C990 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180005470 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800528DC (-RoundToNearestInt@@YAHM@Z.c)
 *     ?GetProgress@CAnimatedTransitionVisual@@UEAAJPEAM@Z @ 0x18007A490 (-GetProgress@CAnimatedTransitionVisual@@UEAAJPEAM@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180082594 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
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
  __int64 v15; // r8
  bool v16; // zf
  float *v17; // rcx
  float v18; // xmm1_4
  int Progress; // eax
  int *v20; // rax
  int v22; // [rsp+60h] [rbp+18h] BYREF

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x266u, 0LL);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 200) - *((_DWORD *)a2 + 198);
    v7 = *((_DWORD *)a2 + 201) - *((_DWORD *)a2 + 199);
    v8 = RoundToNearestInt((float)*((int *)a2 + 198) + *((float *)a2 + 172));
    *((_DWORD *)this + 198) = v8;
    v9 = v8;
    v10 = RoundToNearestInt((float)*((int *)a2 + 199) + *((float *)a2 + 173));
    v11 = 0;
    *((_DWORD *)this + 199) = v10;
    v12 = v10;
    if ( v6 >= 0 )
      v11 = v6;
    *((_DWORD *)this + 200) = RoundToNearestInt((float)((float)v11 * *((float *)this + 175)) + (float)v9);
    v13 = 0;
    if ( v7 >= 0 )
      v13 = v7;
    v14 = RoundToNearestInt((float)((float)v13 * *((float *)this + 176)) + (float)v12);
    v16 = *((_BYTE *)this + 905) == 0;
    v17 = (float *)((char *)this + 864);
    *((_DWORD *)this + 201) = v14;
    *((float *)this + 214) = *((float *)a2 + 214) + *((float *)a2 + 174);
    if ( v16 )
      *v17 = *((float *)a2 + 170);
    v16 = *((_BYTE *)this + 912) == 0;
    v18 = *v17;
    *((float *)this + 170) = *v17;
    *(_OWORD *)((char *)this + 760) = *(_OWORD *)((char *)a2 + 760);
    *((_BYTE *)this + 922) = *((_BYTE *)a2 + 922);
    *((_BYTE *)this + 923) = *((_BYTE *)a2 + 923);
    *(_OWORD *)((char *)this + 824) = *(_OWORD *)((char *)a2 + 760);
    if ( v16 )
    {
      CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), v18, v15);
      CVisual::UpdateOpacity((CAnimatedTransitionVisual *)((char *)this + 8));
    }
    *((_BYTE *)this + 904) = 1;
    Progress = CAnimatedTransitionVisual::GetProgress(a2, (float *)this + 229);
    v5 = Progress;
    if ( Progress < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Progress, 0x287u, 0LL);
    }
    else
    {
      v20 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v22);
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), *v20);
    }
  }
  return v5;
}
