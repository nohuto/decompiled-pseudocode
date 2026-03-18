/*
 * XREFs of ?SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEBUD2D_RECT_F@@PEA_N@Z @ 0x1400B4FBC
 * Callers:
 *     ?SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401910A0 (-SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDC.c)
 * Callees:
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B5300 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1400B53B0 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 */

void __fastcall DirectComposition::CRectangleClipMarshaler::SetRectangleHelper(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const __m128i *a3,
        bool *a4)
{
  bool v4; // bl
  float v8; // xmm1_4
  char v9; // r10
  float v10; // xmm1_4
  char v11; // r9
  float v12; // xmm1_4
  char v13; // r8
  float v14; // xmm2_4
  char v15; // dl
  char v16; // cl
  unsigned int *v17; // rax
  unsigned int *v18; // rdi
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rsi
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  __m128 v24; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v24 = (__m128)_mm_loadu_si128(a3);
  v8 = fminf(2097152.0, fmaxf(_mm_shuffle_ps(v24, v24, 85).m128_f32[0], -2097152.0));
  if ( *((float *)this + 25) == v8 )
  {
    v9 = 0;
  }
  else
  {
    *((float *)this + 25) = v8;
    v9 = 1;
  }
  v10 = fminf(2097152.0, fmaxf(v24.m128_f32[0], -2097152.0));
  if ( *((float *)this + 24) == v10 )
  {
    v11 = 0;
  }
  else
  {
    *((float *)this + 24) = v10;
    v11 = 1;
  }
  v12 = fminf(2097152.0, fmaxf(v24.m128_f32[3], -2097152.0));
  if ( *((float *)this + 27) == v12 )
  {
    v13 = 0;
  }
  else
  {
    *((float *)this + 27) = v12;
    v13 = 1;
  }
  v14 = fminf(2097152.0, fmaxf(v24.m128_f32[2], -2097152.0));
  if ( *((float *)this + 26) == v14 )
  {
    v15 = 0;
  }
  else
  {
    *((float *)this + 26) = v14;
    v15 = 1;
  }
  if ( *((float *)this + 28) == 0.0 )
  {
    if ( *((float *)this + 29) == 0.0 )
    {
      if ( *((float *)this + 30) == 0.0 )
      {
        if ( *((float *)this + 31) == 0.0 )
        {
          if ( *((float *)this + 32) == 0.0 )
          {
            if ( *((float *)this + 33) == 0.0 )
            {
              if ( *((float *)this + 34) == 0.0 )
              {
                if ( *((float *)this + 35) == 0.0 )
                {
                  v16 = 0;
                  goto LABEL_18;
                }
                *((_DWORD *)this + 35) = 0;
              }
              else
              {
                *((_DWORD *)this + 34) = 0;
              }
            }
            else
            {
              *((_DWORD *)this + 33) = 0;
            }
          }
          else
          {
            *((_DWORD *)this + 32) = 0;
          }
        }
        else
        {
          *((_DWORD *)this + 31) = 0;
        }
      }
      else
      {
        *((_DWORD *)this + 30) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 29) = 0;
    }
  }
  else
  {
    *((_DWORD *)this + 28) = 0;
  }
  v16 = 1;
LABEL_18:
  if ( *((_QWORD *)this + 5) )
  {
    if ( *((int *)a2 + 6) > 2 )
    {
      while ( *((_QWORD *)this + 5) )
        DirectComposition::CAnimationBinding::DetachAndDelete(*((PVOID *)this + 5), a2);
    }
    else
    {
      v19 = *((_QWORD *)this + 5);
      if ( v19 )
      {
        do
        {
          v20 = *(_DWORD *)(v19 + 8);
          v21 = *(_QWORD *)(v19 + 32);
          if ( (v20 & 2) != 0 )
          {
            v22 = (_QWORD *)((char *)a2 + 496);
            while ( 1 )
            {
              v23 = (_QWORD *)*v22;
              if ( !*v22 )
                break;
              if ( (DirectComposition::CRectangleClipMarshaler *)v23[2] == this )
              {
                *v22 = *v23;
                *v23 = 0LL;
              }
              else
              {
                v22 = (_QWORD *)*v22;
              }
            }
            DirectComposition::CAnimationBinding::DetachAndDelete((PVOID)v19, a2);
          }
          else if ( (v20 & 1) != 0 )
          {
            DirectComposition::CApplicationChannel::NewRemovingBinding(a2, (PVOID)v19);
          }
          v19 = v21;
        }
        while ( v21 );
      }
    }
    v16 = 1;
    v9 = 1;
    v11 = 1;
    v13 = 1;
    v15 = 1;
    goto LABEL_20;
  }
  if ( v9 )
  {
LABEL_20:
    v17 = (unsigned int *)((char *)this + 16);
    *((_DWORD *)this + 4) &= ~0x4000u;
    goto LABEL_21;
  }
  v17 = (unsigned int *)((char *)this + 16);
LABEL_21:
  if ( v11 )
  {
    *v17 &= ~0x2000u;
    v18 = (unsigned int *)((char *)this + 16);
  }
  else
  {
    v18 = v17;
  }
  if ( v13 )
    *v17 &= ~0x10000u;
  else
    v18 = v17;
  if ( v15 )
    *v18 = *v17 & 0xFFFF7FFF;
  if ( v16 )
    *v18 &= ~0x1000u;
  if ( *a4 || v9 || v11 || v13 || v15 || v16 )
    v4 = 1;
  *a4 = v4;
}
