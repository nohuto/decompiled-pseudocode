/*
 * XREFs of ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180045A40
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 * Callees:
 *     ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180045E3C (-SortKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x180045EB0 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180046058 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180219270 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 */

void __fastcall CKeyframeAnimation::Play(CKeyframeAnimation *this, struct CExpressionValueStack *a2)
{
  unsigned __int8 v2; // r8
  char v5; // al
  __int64 v6; // rbx
  char v7; // r8
  int v8; // eax
  float v9; // xmm1_4
  char v10; // r8
  __int64 v11; // rdx
  bool v12; // cl
  __int64 v13; // rbp
  char v14; // al
  char v15; // cl
  unsigned int v16; // edi
  unsigned int v17; // eax
  float v18; // xmm1_4
  bool v19; // r8
  int v20; // ecx
  int v21; // edx
  float v22; // xmm1_4
  int v23; // eax
  unsigned int v24; // r8d
  char v25; // dl
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int i; // r10d
  int v29; // ecx
  int v30; // eax
  int v31; // esi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_BYTE *)this + 465);
  if ( (v2 & 1) == 0 )
  {
    v8 = *((_DWORD *)this + 114);
    v9 = FLOAT_1_0;
    *((_DWORD *)this + 106) = 0;
    if ( !v8 || v8 == 2 )
      v10 = v2 >> 3;
    else
      v10 = 0;
    if ( !*((_DWORD *)this + 107) && *((float *)this + 109) != 1.0 )
      v9 = *((float *)this + 109);
    *(_BYTE *)(*((_QWORD *)this + 38) + 132LL) ^= (*(_BYTE *)(*((_QWORD *)this + 38) + 132LL) ^ (8 * v10)) & 8;
    v11 = *((_QWORD *)this + 38);
    v12 = *((float *)this + 102) < 0.0;
    *(_BYTE *)(v11 + 132) &= ~0x10u;
    *(_BYTE *)(v11 + 88) = v12;
    *(_BYTE *)(v11 + 132) |= 16 * v12;
    *(_DWORD *)(*((_QWORD *)this + 38) + 124LL) = 0;
    *(float *)(*((_QWORD *)this + 38) + 128LL) = v9;
    v13 = *((_QWORD *)this + 38);
    v14 = *(_BYTE *)(v13 + 132);
    if ( (v14 & 1) == 0 )
    {
      KeyframeSequence::SortKeyFrames(*((KeyframeSequence **)this + 38));
      KeyframeSequence::ConfigureTimer((KeyframeSequence *)v13);
      v27 = *(_DWORD *)(v13 + 104);
      for ( i = 0; i < v27; ++i )
      {
        v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 96) + 24LL * i + 8) + 20LL);
        if ( v29 != 1 && (unsigned int)(v29 - 2) >= 2 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v14 = *(_BYTE *)(v13 + 132) | 1;
    }
    *(_BYTE *)(v13 + 132) = v14 | 2;
    v15 = *((_BYTE *)this + 464) | 0x80;
    *((_BYTE *)this + 465) = *((_BYTE *)this + 465) & 0xFC | 1;
    *((_DWORD *)this + 108) = *((_DWORD *)this + 107);
    *((_BYTE *)this + 464) = v15;
    if ( (v15 & 0x20) == 0 )
    {
      if ( *((_DWORD *)this + 56) != 4 )
        *((_DWORD *)this + 56) = 4;
      if ( *((_DWORD *)this + 93) >= *((_DWORD *)this + 92) && (v15 & 8) == 0 )
      {
        CKeyframeAnimation::ProcessExpressionKeyFrames(this, a2);
        if ( (*((_BYTE *)this + 465) & 0x10) != 0 )
        {
          v30 = CKeyframeAnimation::SampleStartingValue(this);
          v31 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x8D6u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x76Eu, 0LL);
            *((_BYTE *)this + 465) |= 4u;
            return;
          }
        }
        *((_BYTE *)this + 464) |= 8u;
      }
    }
    *((_BYTE *)this + 465) |= 4u;
    return;
  }
  v5 = *((_BYTE *)this + 464);
  if ( v5 >= 0 && (v2 & 2) == 0 )
  {
    v6 = *((_QWORD *)this + 38);
    *((_BYTE *)this + 464) = v5 | 0x80;
    v7 = *(_BYTE *)(v6 + 132);
    if ( (v7 & 1) != 0 )
    {
      *(_BYTE *)(v6 + 132) = v7 | 2;
    }
    else
    {
      v16 = 0;
      if ( (v7 & 4) != 0 )
      {
        qsort(*(void **)(v6 + 96), *(unsigned int *)(v6 + 104), 0x18uLL, KeyframeSequence::CompareKeyframes);
        v17 = *(_DWORD *)(v6 + 104);
        v7 = *(_BYTE *)(v6 + 132) & 0xFB;
        *(_BYTE *)(v6 + 132) = v7;
        *(_DWORD *)(v6 + 112) = 0;
        if ( v17 >= 2 )
          *(_DWORD *)(v6 + 112) = *(_DWORD *)(*(_QWORD *)(v6 + 96) + 24LL * (v17 - 1)) - **(_DWORD **)(v6 + 96);
      }
      v18 = *(float *)(v6 + 128);
      v19 = (v7 & 0x10) != 0;
      if ( v18 == 1.0 )
      {
        v20 = *(_DWORD *)(v6 + 112);
        v21 = v20;
      }
      else
      {
        v21 = *(_DWORD *)(v6 + 112);
        v20 = (int)(float)((float)v21 * v18);
      }
      v22 = *(float *)(v6 + 124);
      if ( v22 == 0.0 )
        v23 = 0;
      else
        v23 = (int)(float)((float)v21 * v22);
      *(_DWORD *)(v6 + 80) = v21;
      *(_DWORD *)(v6 + 72) = v23;
      *(_DWORD *)(v6 + 76) = v20;
      *(_BYTE *)(v6 + 88) = v19;
      *(_DWORD *)(v6 + 84) = v23;
      v24 = *(_DWORD *)(v6 + 104);
      v25 = *(_BYTE *)(v6 + 132) | 0x20;
      *(_BYTE *)(v6 + 132) = v25;
      if ( v24 )
      {
        do
        {
          v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 96) + 24LL * v16 + 8) + 20LL);
          if ( v26 != 1 && (unsigned int)(v26 - 2) >= 2 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
          ++v16;
        }
        while ( v16 < v24 );
      }
      *(_BYTE *)(v6 + 132) = v25 | 3;
    }
  }
}
