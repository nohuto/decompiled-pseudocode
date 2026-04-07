/*
 * XREFs of ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x180002EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x180008230 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800135C4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18008B5D4 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CContactStationaryVisual::UpdateTransition(CContactStationaryVisual *this)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  _BYTE *v6; // rbx
  char *v7; // r14
  char *v8; // rbp
  __int64 v9; // rax
  struct tagSIZE *v10; // r14
  float v11; // xmm0_4
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  double v19; // xmm1_8
  float v20; // xmm0_4
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rax
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  __m128i v28; // xmm0
  int v29; // ecx

  v1 = 0LL;
  if ( !*((_QWORD *)this + 36) )
  {
    v6 = (char *)this + 276;
    v7 = (char *)this + 280;
    v8 = (char *)this + 276;
    if ( (*((_BYTE *)this + 276) & 1) != 0 )
    {
      v21 = *((_DWORD *)this + 84);
      v22 = (int)(float)((float)*(double *)(*(_QWORD *)v7 + 48LL) * (float)v21);
      if ( v22 >= v21 )
      {
        v22 = v21 - 1;
        v8 = (char *)this + 276;
      }
      CImage::SetBitmapSource(*((CImage **)this + 37), *(struct CBitmapSource **)(*((_QWORD *)this + 39) + 8LL * v22));
    }
    if ( (*v6 & 2) != 0 )
    {
      v20 = *(double *)(*(_QWORD *)v7 + 48LL);
      CVisual::SetOpacity(
        this,
        fmaxf(0.0, (float)((float)(*((float *)this + 65) - *((float *)this + 64)) * v20) + *((float *)this + 64)));
      v6 = v8;
    }
    if ( (*(_DWORD *)v6 & 8) != 0 )
    {
      v23 = *(_QWORD *)v7;
      v10 = (struct tagSIZE *)((char *)this + 304);
      v24 = *((float *)this + 66);
      v25 = *((float *)this + 67);
      v26 = *(double *)(v23 + 48);
      *((_QWORD *)this + 38) = *(_QWORD *)(**((_QWORD **)this + 39) + 128LL);
      v27 = (float)((float)(v25 - v24) * v26) + v24;
      LODWORD(v23) = (int)(float)((float)*((int *)this + 76) * v27);
      v28 = _mm_cvtsi32_si128(*((_DWORD *)this + 77));
      *((_DWORD *)this + 76) = v23;
      v29 = (int)(float)(_mm_cvtepi32_ps(v28).m128_f32[0] * v27);
      *((_DWORD *)this + 77) = v29;
      if ( (int)v23 < 1 )
        v10->cx = 1;
      if ( v29 < 1 )
        *((_DWORD *)this + 77) = 1;
    }
    else
    {
      if ( (*(_DWORD *)v6 & 4) == 0 )
        goto LABEL_3;
      v9 = *(_QWORD *)v7;
      v10 = (struct tagSIZE *)((char *)this + 304);
      v11 = *(double *)(v9 + 48);
      v12 = (int)(float)((float)((float)((float)(*((float *)this + 67) - *((float *)this + 66)) * v11)
                               + *((float *)this + 66))
                       * (float)*((int *)this + 58));
      *((_DWORD *)this + 76) = v12;
      if ( v12 < 1 )
      {
        v10->cx = 1;
        v12 = 1;
      }
      *((_DWORD *)this + 77) = v12;
    }
    CVisual::SetSize(*((CVisual **)this + 37), v10);
    v13 = *((_DWORD *)this + 57) - *((_DWORD *)this + 77) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 37), *((_DWORD *)this + 56) - v10->cx / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 37), v13);
    goto LABEL_3;
  }
  CVisual::SetOpacity(this, 0.0);
LABEL_3:
  v3 = *((_QWORD *)this + 35);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 72) )
    {
      CContactStationaryVisual::Stop(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v14, &UdwmContactStationaryVisual_End, *((unsigned int *)this + 86));
    }
  }
  v4 = *((_QWORD *)this + 36);
  if ( v4 && (*(_BYTE *)(v4 + 72) || (float)*(double *)(v4 + 48) == 1.0) )
  {
    CTimelineBase::Release((CTimelineBase *)v4);
    *((_QWORD *)this + 36) = 0LL;
    v15 = CTimeline<float>::operator new();
    if ( v15 )
      v1 = CTimeline<float>::CTimeline<float>(v15, v16, v17, v18, *((_DWORD *)this + 68));
    *((_QWORD *)this + 35) = v1;
    if ( (*((_BYTE *)this + 276) & 2) != 0 )
      v19 = *((float *)this + 64);
    else
      v19 = DOUBLE_1_0;
    CVisual::SetOpacity(this, v19);
  }
  return 0LL;
}
