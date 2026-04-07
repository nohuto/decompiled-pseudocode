/*
 * XREFs of ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18006A510
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800D0E14 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800D0F7C (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800D10D8 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800D1290 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Width@?$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180020964 (-Width@-$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Height@?$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180020970 (-Height@-$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040BDC (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18004D118 (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x18006ABE4 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateOpacityAndLocation(CTouchPressHoldVisual *this)
{
  double v1; // xmm1_8
  int v3; // ebx
  int v4; // edx
  float v5; // xmm6_4
  int v6; // r8d
  int v7; // eax
  float v8; // xmm8_4
  float v9; // xmm12_4
  float v10; // xmm13_4
  int v11; // eax
  unsigned int v12; // ebx
  CBaseObject *v13; // rdi
  int v14; // eax
  int v15; // eax
  float v16; // xmm10_4
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  CBaseObject *v33; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+40h] [rbp-C8h] BYREF
  double v35; // [rsp+50h] [rbp-B8h]
  struct _D3DCOLORVALUE v36; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DCOLORVALUE v37; // [rsp+68h] [rbp-A0h] BYREF

  v1 = *((float *)this + 72);
  v33 = 0LL;
  CVisual::SetOpacity(this, v1);
  if ( *((int *)this + 69) < 10 )
    *((_DWORD *)this + 69) = 10;
  if ( *((int *)this + 70) < 10 )
    *((_DWORD *)this + 70) = 10;
  CRenderDataVisual::ClearInstructions(this);
  v3 = *((_DWORD *)this + 69);
  v4 = *((_DWORD *)this + 73);
  v5 = (float)(*((_DWORD *)this + 65) - v3 / 2);
  *(float *)&v34 = v5;
  v6 = MulDiv(-5, v4, 100);
  v7 = *((_DWORD *)this + 70);
  v8 = (float)(*((_DWORD *)this + 66) - *((_DWORD *)this + 71) - v3 / 2 + v6);
  *((float *)&v34 + 2) = (float)v3 + v5;
  *((float *)&v34 + 1) = v8;
  *(struct _D3DCOLORVALUE *)&v37.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
  *((float *)&v34 + 3) = (float)v7 + v8;
  *(struct _D3DCOLORVALUE *)&v36.r = (struct _D3DCOLORVALUE)_xmm;
  if ( v3 <= 4 || v7 <= 4 )
  {
    v30 = CRectangleInstruction::Create(&v33);
    v12 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x136u, 0LL);
      goto LABEL_29;
    }
    v13 = v33;
    v31 = CRectangleInstruction::SetSolidFill(v33, &v36, 0.949999988079071);
    v12 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x137u, 0LL);
    }
    else
    {
      CSolidRectangleInstruction::SetRect((__int64)v13, &v34);
      v32 = CRenderDataVisual::AddInstruction(this, v13);
      v12 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x139u, 0LL);
    }
  }
  else
  {
    v9 = TMilRect<float,D2D_RECT_F,RectUniqueness::NotNeeded>::Width((__int64)&v34);
    v35 = (float)(v8 + 2.0);
    v10 = TMilRect<float,D2D_RECT_F,RectUniqueness::NotNeeded>::Height(&v34);
    *(_QWORD *)&v34 = __PAIR64__(LODWORD(v8), LODWORD(v5));
    *((float *)&v34 + 2) = v5 + 2.0;
    *((float *)&v34 + 3) = v8 + v10;
    v11 = CRectangleInstruction::Create(&v33);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x155u, 0LL);
      goto LABEL_29;
    }
    v13 = v33;
    v14 = CRectangleInstruction::SetSolidFill(v33, &v36, 0.949999988079071);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x156u, 0LL);
    }
    else
    {
      CSolidRectangleInstruction::SetRect((__int64)v13, &v34);
      v15 = CRenderDataVisual::AddInstruction(this, v13);
      v12 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x158u, 0LL);
      }
      else
      {
        if ( v13 )
        {
          CBaseObject::Release(v13);
          v33 = 0LL;
        }
        v16 = v5 + 2.0;
        *(float *)&v34 = v16;
        *((float *)&v34 + 3) = v8 + 2.0;
        *((float *)&v34 + 2) = (float)(v16 + v9) - 4.0;
        v17 = CRectangleInstruction::Create(&v33);
        v12 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x160u, 0LL);
          goto LABEL_29;
        }
        v13 = v33;
        v18 = CRectangleInstruction::SetSolidFill(v33, &v36, 0.949999988079071);
        v12 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x161u, 0LL);
        }
        else
        {
          CSolidRectangleInstruction::SetRect((__int64)v13, &v34);
          v19 = CRenderDataVisual::AddInstruction(this, v13);
          v12 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x163u, 0LL);
          }
          else
          {
            if ( v13 )
            {
              CBaseObject::Release(v13);
              v33 = 0LL;
            }
            *((float *)&v34 + 3) = v8 + v10;
            *(float *)&v34 = (float)(v9 + v5) - 2.0;
            *((float *)&v34 + 2) = *(float *)&v34 + 2.0;
            v20 = CRectangleInstruction::Create(&v33);
            v12 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x16Bu, 0LL);
              goto LABEL_29;
            }
            v13 = v33;
            v21 = CRectangleInstruction::SetSolidFill(v33, &v36, 0.949999988079071);
            v12 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x16Cu, 0LL);
            }
            else
            {
              CSolidRectangleInstruction::SetRect((__int64)v13, &v34);
              v22 = CRenderDataVisual::AddInstruction(this, v13);
              v12 = v22;
              if ( v22 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x16Eu, 0LL);
              }
              else
              {
                if ( v13 )
                {
                  CBaseObject::Release(v13);
                  v33 = 0LL;
                }
                *(float *)&v34 = v5 + 2.0;
                *((float *)&v34 + 1) = (float)(v8 + v10) - 2.0;
                *((float *)&v34 + 2) = (float)(v16 + v9) - 4.0;
                *((float *)&v34 + 3) = *((float *)&v34 + 1) + 2.0;
                v23 = CRectangleInstruction::Create(&v33);
                v12 = v23;
                if ( v23 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x176u, 0LL);
                  goto LABEL_29;
                }
                v13 = v33;
                v24 = CRectangleInstruction::SetSolidFill(v33, &v36, 0.949999988079071);
                v12 = v24;
                if ( v24 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x177u, 0LL);
                }
                else
                {
                  CSolidRectangleInstruction::SetRect((__int64)v13, &v34);
                  v25 = CRenderDataVisual::AddInstruction(this, v13);
                  v12 = v25;
                  if ( v25 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x179u, 0LL);
                  }
                  else
                  {
                    if ( v13 )
                    {
                      CBaseObject::Release(v13);
                      v33 = 0LL;
                    }
                    *((float *)&v34 + 1) = v35;
                    *((float *)&v34 + 3) = (float)(*((float *)&v34 + 1) + v10) - 4.0;
                    v26 = CRectangleInstruction::Create(&v33);
                    v12 = v26;
                    if ( v26 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x181u, 0LL);
LABEL_29:
                      v13 = v33;
                      goto LABEL_30;
                    }
                    v13 = v33;
                    v28 = CRectangleInstruction::SetSolidFill(v33, &v37, 0.300000011920929);
                    v12 = v28;
                    if ( v28 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x182u, 0LL);
                    }
                    else
                    {
                      CSolidRectangleInstruction::SetRect((__int64)v13, &v34);
                      v29 = CRenderDataVisual::AddInstruction(this, v13);
                      v12 = v29;
                      if ( v29 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x184u, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_30:
  if ( v13 )
    CBaseObject::Release(v13);
  return v12;
}
