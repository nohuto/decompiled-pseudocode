/*
 * XREFs of ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18002BCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002D4AC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18002D51C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x1800301A0 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094340 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180094424 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180097EBC (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CContactStationaryVisual::UpdateTransition(CContactStationaryVisual *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _BYTE *v5; // rbx
  char *v6; // rsi
  char *v7; // rbp
  struct tagSIZE *v8; // rbx
  float v9; // xmm0_4
  int v10; // eax
  __int64 cx; // kr00_8
  int v12; // ebx
  __int64 v13; // rcx
  void *v14; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  double v18; // xmm1_8
  float v19; // xmm0_4
  int v20; // ecx
  unsigned int v21; // eax
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm2_4
  int v26; // eax
  __m128i v27; // xmm0
  int v28; // ecx

  if ( !*((_QWORD *)this + 40) )
  {
    v5 = (char *)this + 308;
    v6 = (char *)this + 312;
    v7 = (char *)this + 308;
    if ( (*((_BYTE *)this + 308) & 1) != 0 )
    {
      v20 = *((_DWORD *)this + 92);
      v21 = (int)(float)((float)*(double *)(*(_QWORD *)v6 + 48LL) * (float)v20);
      if ( v21 >= v20 )
      {
        v21 = v20 - 1;
        v7 = (char *)this + 308;
      }
      CImage::SetBitmapSource(*((CImage **)this + 41), *(struct CBitmapSource **)(*((_QWORD *)this + 43) + 8LL * v21));
    }
    if ( (*v5 & 2) != 0 )
    {
      v19 = *(double *)(*(_QWORD *)v6 + 48LL);
      CVisual::SetOpacity(
        this,
        fmaxf(0.0, (float)((float)(*((float *)this + 73) - *((float *)this + 72)) * v19) + *((float *)this + 72)));
      v5 = v7;
    }
    if ( (*(_DWORD *)v5 & 8) != 0 )
    {
      v8 = (struct tagSIZE *)((char *)this + 336);
      v22 = *((float *)this + 74);
      v23 = *(double *)(*(_QWORD *)v6 + 48LL);
      v24 = (float)(*((float *)this + 75) - v22) * v23;
      *((_QWORD *)this + 42) = *(_QWORD *)(**((_QWORD **)this + 43) + 24LL);
      v25 = v24 + v22;
      v26 = (int)(float)((float)*((int *)this + 84) * v25);
      v27 = _mm_cvtsi32_si128(*((_DWORD *)this + 85));
      *((_DWORD *)this + 84) = v26;
      v28 = (int)(float)(_mm_cvtepi32_ps(v27).m128_f32[0] * v25);
      *((_DWORD *)this + 85) = v28;
      if ( v26 < 1 )
        v8->cx = 1;
      if ( v28 < 1 )
        *((_DWORD *)this + 85) = 1;
    }
    else
    {
      if ( (*(_DWORD *)v5 & 4) == 0 )
        goto LABEL_3;
      v8 = (struct tagSIZE *)((char *)this + 336);
      v9 = *(double *)(*(_QWORD *)v6 + 48LL);
      v10 = (int)(float)((float)((float)((float)(*((float *)this + 75) - *((float *)this + 74)) * v9)
                               + *((float *)this + 74))
                       * (float)*((int *)this + 66));
      *((_DWORD *)this + 84) = v10;
      if ( v10 < 1 )
      {
        v8->cx = 1;
        v10 = 1;
      }
      *((_DWORD *)this + 85) = v10;
    }
    CVisual::SetSize(*((CVisual **)this + 41), v8);
    cx = v8->cx;
    v12 = *((_DWORD *)this + 65) - *((_DWORD *)this + 85) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 41), *((_DWORD *)this + 64) - cx / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 41), v12);
    goto LABEL_3;
  }
  CVisual::SetOpacity(this, 0.0);
LABEL_3:
  v2 = *((_QWORD *)this + 39);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 72) )
    {
      CContactStationaryVisual::Stop(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v13, &UdwmContactStationaryVisual_End, *((unsigned int *)this + 94));
    }
  }
  v3 = *((_QWORD *)this + 40);
  if ( v3 && (*(_BYTE *)(v3 + 72) || (float)*(double *)(v3 + 48) == 1.0) )
  {
    CTimelineBase::Release((CTimelineBase *)v3);
    *((_QWORD *)this + 40) = 0LL;
    v14 = DefaultHeap::AllocClear(0x78uLL);
    if ( v14 )
      v14 = (void *)CTimeline<float>::CTimeline<float>((_DWORD)v14, v15, v16, v17, *((_DWORD *)this + 76));
    *((_QWORD *)this + 39) = v14;
    if ( (*((_BYTE *)this + 308) & 2) != 0 )
      v18 = *((float *)this + 72);
    else
      v18 = DOUBLE_1_0;
    CVisual::SetOpacity(this, v18);
  }
  return 0LL;
}
