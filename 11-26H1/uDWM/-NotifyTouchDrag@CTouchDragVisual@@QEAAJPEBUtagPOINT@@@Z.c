/*
 * XREFs of ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800057B4 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180005D94 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x1800561D8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18006F064 (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800796F0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_2F@@@Z @ 0x18008B27C (-Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??$emplace_front@AEBUTOUCH_DRAG_POINT@@AEAM@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAAAEAUTrailPoint@CTouchDragVisual@@AEBUTOUCH_DRAG_POINT@@AEAM@Z @ 0x1800CC5A8 (--$emplace_front@AEBUTOUCH_DRAG_POINT@@AEAM@-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@U.c)
 *     ?ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z @ 0x1800CC60C (-ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z.c)
 *     ?Distance@CTouchDragVisual@@CAMAEBUTrailPoint@1@AEBUTOUCH_DRAG_POINT@@@Z @ 0x1800CC8C4 (-Distance@CTouchDragVisual@@CAMAEBUTrailPoint@1@AEBUTOUCH_DRAG_POINT@@@Z.c)
 *     ?ScaleForMonitorDPI@CTouchDragVisual@@CAMAEBUD2D_POINT_2F@@M@Z @ 0x1800CC960 (-ScaleForMonitorDPI@CTouchDragVisual@@CAMAEBUD2D_POINT_2F@@M@Z.c)
 *     ?DotProduct@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_2F@@0@Z @ 0x1800CCF68 (-DotProduct@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?Length@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_2F@@@Z @ 0x1800CCF88 (-Length@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Subtract@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_2F@@PEBUD2D_POINT_2F@@0@Z @ 0x1800CCFA8 (-Subtract@CTouchDragVisualHelper@@SA-AUD2D_VECTOR_2F@@PEBUD2D_POINT_2F@@0@Z.c)
 */

__int64 __fastcall CTouchDragVisual::NotifyTouchDrag(CTouchDragVisual *this, const struct tagPOINT *a2)
{
  FLOAT v4; // r15d
  char *v5; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  DWORD TickCount; // r13d
  unsigned int v9; // esi
  bool v10; // r12
  DWORD v11; // ecx
  unsigned int v12; // ecx
  CContactManager *v13; // rcx
  int v14; // eax
  bool v15; // zf
  __m128i v16; // xmm1
  FLOAT x; // xmm0_4
  __int64 v18; // rax
  float v19; // ecx
  __int64 v20; // rdi
  __int128 v21; // xmm0
  float v22; // xmm6_4
  __int128 v23; // xmm1
  FLOAT v24; // eax
  unsigned int v25; // r14d
  __int64 v26; // r12
  float *v27; // rdi
  float v28; // xmm0_4
  float v29; // xmm0_4
  _QWORD *v30; // r14
  int v31; // eax
  FLOAT v32; // xmm0_4
  unsigned int v33; // eax
  int v34; // eax
  int v35; // esi
  __int64 v36; // rdx
  FLOAT v37; // ecx
  float v38; // xmm6_4
  unsigned int v39; // esi
  DWORD v40; // r15d
  __int64 v41; // rdi
  __int64 v42; // r13
  float v43; // xmm0_4
  int v44; // eax
  __int64 v45; // rcx
  float v46; // xmm7_4
  int v47; // eax
  int v49; // [rsp+28h] [rbp-69h]
  struct D2D_VECTOR_2F v50; // [rsp+38h] [rbp-59h] BYREF
  float v51; // [rsp+40h] [rbp-51h] BYREF
  __int128 v52; // [rsp+48h] [rbp-49h] BYREF
  int v53; // [rsp+58h] [rbp-39h]
  struct D2D_VECTOR_2F v54[2]; // [rsp+60h] [rbp-31h] BYREF
  float v55; // [rsp+70h] [rbp-21h]
  struct D2D_VECTOR_2F v56[2]; // [rsp+78h] [rbp-19h] BYREF
  int v57; // [rsp+88h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v4 = 0.0;
  v5 = (char *)this + 248;
  TickCount = GetTickCount();
  v9 = *((_DWORD *)this + 68);
  v10 = !v9 || *(float *)(*(_QWORD *)v5 + 4LL) != (float)a2->x || *(float *)(*(_QWORD *)v5 + 8LL) != (float)a2->y;
  if ( v9 )
  {
    v11 = TickCount - **(_DWORD **)v5;
    if ( (float)((float)((float)((float)(*(float *)(*(_QWORD *)v5 + 8LL) - (float)a2->y)
                               * (float)(*(float *)(*(_QWORD *)v5 + 8LL) - (float)a2->y))
                       + (float)((float)(*(float *)(*(_QWORD *)v5 + 4LL) - (float)a2->x)
                               * (float)(*(float *)(*(_QWORD *)v5 + 4LL) - (float)a2->x)))
               / (float)(int)(v11 * v11)) >= 0.000029999999 )
    {
      *((_DWORD *)this + 104) = 0;
    }
    else
    {
      v12 = *((_DWORD *)this + 104) + v11;
      *((_DWORD *)this + 104) = v12;
      if ( v12 > 0x5DC )
      {
        v13 = (CContactManager *)*((_QWORD *)this + 49);
        if ( v13 )
        {
          v14 = CContactManager::NotifyTouchDragVisualComplete(v13, this);
          v4 = *(float *)&v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x47u, 0LL);
LABEL_50:
            CTouchDragVisual::Stop(this);
            return LODWORD(v4);
          }
        }
        *((_DWORD *)this + 104) = 0;
      }
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
  {
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmTouchDragVisual_BeginDraw_Info,
      v6,
      1,
      (__int64)v56);
  }
  if ( v10 )
  {
    v15 = *((_BYTE *)this + 420) == 0;
    v16 = _mm_cvtsi32_si128(a2->y);
    x = (float)a2->x;
    v55 = 0.0;
    LODWORD(v54[0].x) = TickCount;
    v54[0].y = x;
    v54[1] = (struct D2D_VECTOR_2F)_mm_cvtepi32_ps(v16).m128_u32[0];
    if ( v15 || !v9 )
    {
      DynArray<TOUCH_DRAG_POINT,0>::InsertAt((__int64)this + 248, (unsigned __int64)v54, v6, v7);
      ++v9;
    }
    else
    {
      v18 = *(_QWORD *)v5;
      v19 = v55;
      *(_OWORD *)v18 = *(_OWORD *)&v54[0].x;
      *(float *)(v18 + 16) = v19;
    }
    *((_BYTE *)this + 420) = 0;
    if ( v9 > 1 )
    {
      v20 = *((_QWORD *)this + 31);
      v21 = *(_OWORD *)(v20 + 20);
      v57 = *(_DWORD *)(v20 + 36);
      *(_OWORD *)&v56[0].x = v21;
      v50 = CTouchDragVisualHelper::Subtract(
              (const struct D2D_POINT_2F *)&v54[0].y,
              (const struct D2D_POINT_2F *)&v56[0].y);
      v22 = CTouchDragVisualHelper::Length(&v50);
      if ( v9 <= 2 )
      {
        if ( v22 < 10.0 )
LABEL_26:
          *((_BYTE *)this + 420) = 1;
      }
      else
      {
        v23 = *(_OWORD *)(v20 + 40);
        v53 = *(_DWORD *)(v20 + 56);
        v52 = v23;
        v56[0] = CTouchDragVisualHelper::Subtract(
                   (const struct D2D_POINT_2F *)&v56[0].y,
                   (const struct D2D_POINT_2F *)((char *)&v52 + 4));
        CTouchDragVisualHelper::Normalize(v56);
        if ( (float)((float)(CTouchDragVisualHelper::DotProduct(&v50, v56) / v22) / v22) > 0.059999999 )
          goto LABEL_26;
      }
      LODWORD(v24) = CTouchVisual::RegisterGlobalTimer(this);
      v56[0].x = v24;
      v4 = v24;
      if ( v24 < 0.0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SLODWORD(v24), 0x80u, 0LL);
        goto LABEL_50;
      }
      v25 = 0;
      v26 = 0LL;
      do
      {
        v27 = (float *)*((_QWORD *)this + 31);
        if ( v25 )
        {
          v29 = v27[5 * v25 - 3];
          if ( v25 == v9 - 1 )
          {
            LODWORD(v54[1].y) = COERCE_UNSIGNED_INT(v29 - v27[v26 + 2]) ^ _xmm;
            v28 = v27[5 * v25 - 4] - v27[v26 + 1];
          }
          else
          {
            LODWORD(v54[1].y) = COERCE_UNSIGNED_INT(v29 - v27[5 * v25 + 7]) ^ _xmm;
            v28 = v27[5 * v25 - 4] - v27[5 * v25 + 6];
          }
        }
        else
        {
          LODWORD(v54[1].y) = COERCE_UNSIGNED_INT(v27[2] - v27[7]) ^ _xmm;
          v28 = v27[1] - v27[6];
        }
        v55 = v28;
        CTouchDragVisualHelper::Normalize((struct D2D_VECTOR_2F *)&v54[1].y);
        ++v25;
        v27[v26 + 3] = v54[1].y;
        v27[v26 + 4] = v55;
        v26 += 5LL;
      }
      while ( v25 < 2 );
      v30 = (_QWORD *)((char *)this + 280);
      CTouchDragVisualHelper::SmoothTouchDragPath((__int64 *)this + 31, (__int64)this + 280);
      v31 = *((_DWORD *)this + 76);
      if ( v31 )
      {
        if ( !*((_QWORD *)this + 43) )
        {
          v32 = CTouchDragVisual::ScaleForMonitorDPI(
                  (const struct D2D_POINT_2F *)(*v30 + 4 * ((unsigned int)(v31 - 1) + 4LL * (unsigned int)(v31 - 1) + 1)),
                  20.0);
          v33 = *((_DWORD *)this + 76) - 1;
          v50.x = v32;
          std::deque<CTouchDragVisual::TrailPoint>::emplace_front<TOUCH_DRAG_POINT const &,float &>(
            (char *)this + 312,
            *v30 + 20LL * v33,
            &v50);
          v34 = CTouchDragVisual::ConnectSprite(
                  this,
                  *(struct CTouchDragVisual::TrailPoint **)(*((_QWORD *)this + 40)
                                                          + 8
                                                          * (*((_QWORD *)this + 42) & (*((_QWORD *)this + 41) - 1LL))));
          if ( v34 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xA7,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
              (const char *)(unsigned int)v34,
              v49);
        }
        v35 = *((_DWORD *)this + 76);
        v36 = *(_QWORD *)(*((_QWORD *)this + 40) + 8 * (*((_QWORD *)this + 42) & (*((_QWORD *)this + 41) - 1LL)));
        v50.x = *(FLOAT *)(v36 + 28);
        v37 = v50.x;
        v38 = (float)(1.0 - fmaxf(0.0, fminf(1.0, (float)(int)(TickCount - LODWORD(v50.x)) / 200.0)))
            * (float)(*(float *)(v36 + 24) * 0.5);
        v39 = v35 - 1;
        if ( v39 )
        {
          v40 = TickCount;
          v41 = 20LL * v39;
          do
          {
            v42 = v41 + *v30;
            if ( *(_DWORD *)v42 >= LODWORD(v37) )
            {
              v43 = CTouchDragVisual::ScaleForMonitorDPI((const struct D2D_POINT_2F *)(v42 + 4), 20.0);
              v44 = v40 - *(_DWORD *)v42;
              v45 = *((_QWORD *)this + 40);
              v51 = v43;
              v46 = (float)(1.0 - fmaxf(0.0, fminf(1.0, (float)v44 / 200.0))) * (float)(v43 * 0.5);
              if ( CTouchDragVisual::Distance(
                     *(const struct CTouchDragVisual::TrailPoint **)(v45
                                                                   + 8
                                                                   * (*((_QWORD *)this + 42) & (*((_QWORD *)this + 41)
                                                                                              - 1LL))),
                     (const struct TOUCH_DRAG_POINT *)v42) < (float)(v46 + v38) )
              {
                v37 = v50.x;
              }
              else
              {
                std::deque<CTouchDragVisual::TrailPoint>::emplace_front<TOUCH_DRAG_POINT const &,float &>(
                  (char *)this + 312,
                  v42,
                  &v51);
                v47 = CTouchDragVisual::ConnectSprite(
                        this,
                        *(struct CTouchDragVisual::TrailPoint **)(*((_QWORD *)this + 40)
                                                                + 8
                                                                * (*((_QWORD *)this + 42) & (*((_QWORD *)this + 41) - 1LL))));
                if ( v47 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0xBF,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
                    (const char *)(unsigned int)v47,
                    v49);
                v38 = v46;
                v37 = *(float *)(*(_QWORD *)(*((_QWORD *)this + 40)
                                           + 8 * (*((_QWORD *)this + 42) & (*((_QWORD *)this + 41) - 1LL)))
                               + 28LL);
                v50.x = v37;
              }
            }
            v41 -= 20LL;
            --v39;
          }
          while ( v39 );
          v4 = v56[0].x;
        }
      }
    }
  }
  return LODWORD(v4);
}
