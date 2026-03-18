/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800944C4
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180093290 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x180026BA0 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x180026CB8 (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x180092F10 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18009E280 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z @ 0x180187524 (-EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z.c)
 *     ?InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z @ 0x1801902D4 (-InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180197928 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInputLuid@CInteraction@@QEBA?AU_LUID@@XZ @ 0x18019F388 (-GetInputLuid@CInteraction@@QEBA-AU_LUID@@XZ.c)
 *     ?HasInputSink@CInteraction@@QEBA_NXZ @ 0x18019FB30 (-HasInputSink@CInteraction@@QEBA_NXZ.c)
 *     ?AdjustInputTypeForInteraction@CHitTestContext@@AEBA?AW4InputType@@W42@PEBVCInteraction@@@Z @ 0x1801A35D0 (-AdjustInputTypeForInteraction@CHitTestContext@@AEBA-AW4InputType@@W42@PEBVCInteraction@@@Z.c)
 *     DuplicateCompositionInputSinkHelper @ 0x1801A5A00 (DuplicateCompositionInputSinkHelper.c)
 *     McTemplateU0qqp_EventWriteTransfer @ 0x1801AA940 (McTemplateU0qqp_EventWriteTransfer.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@W4InputType@@@Z @ 0x1802184F8 (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?GetHwnd@CInteraction@@QEBAPEAUHWND__@@W4CompositionInputType@@@Z @ 0x18021F0D0 (-GetHwnd@CInteraction@@QEBAPEAUHWND__@@W4CompositionInputType@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        CHitTestContext *this,
        const struct CHitTestContext::HitTestPointRequest *a2,
        struct CHitTestContext::HitTestPointResult *a3)
{
  unsigned int v3; // r12d
  struct CInteraction *v4; // r15
  struct CHitTestContext::HitTestPointResult *v5; // rsi
  const struct CHitTestContext::HitTestPointRequest *v6; // r14
  __int64 v8; // rcx
  __int64 Hwnd; // r10
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  CVisual *v13; // rsi
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v15; // r12
  char v16; // al
  char v17; // cl
  bool v18; // dl
  HANDLE v19; // rax
  __int64 v20; // rax
  unsigned int InputType; // eax
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r12
  __int64 v24; // rbx
  int v25; // eax
  int v26; // eax
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  int v29; // eax
  __m128i v30; // xmm1
  bool v31; // al
  char v33; // [rsp+30h] [rbp-99h]
  HANDLE hSourceHandle; // [rsp+38h] [rbp-91h]
  unsigned int v35; // [rsp+48h] [rbp-81h]
  __int64 v36; // [rsp+50h] [rbp-79h]
  __int64 v37; // [rsp+58h] [rbp-71h]
  int v38; // [rsp+60h] [rbp-69h]
  CVisual *v39; // [rsp+70h] [rbp-59h]
  __m128i si128; // [rsp+80h] [rbp-49h] BYREF
  __m128i v41; // [rsp+90h] [rbp-39h]
  __m128i v42; // [rsp+A0h] [rbp-29h]
  __m128i v43; // [rsp+B0h] [rbp-19h]
  int v44; // [rsp+C0h] [rbp-9h]
  bool v45; // [rsp+130h] [rbp+67h]
  bool v48; // [rsp+148h] [rbp+7Fh]

  v3 = 0;
  v4 = 0LL;
  v5 = a3;
  v6 = a2;
  hSourceHandle = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0qqp_EventWriteTransfer(
      *(_QWORD *)(*(_QWORD *)a2 + 72LL),
      (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start,
      *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 3),
      *(_QWORD *)(*(_QWORD *)a2 + 72LL));
  CHitTestContext::EvaluateHitTestAttributesAndInputType(this, *((unsigned int *)v6 + 5), *((unsigned int *)v6 + 4));
  CHitTestContext::HitTestTreeWalk(
    v8,
    *(_QWORD *)v6,
    (float)*((int *)v6 + 2),
    (float)*((int *)v6 + 3),
    *((_DWORD *)this + 54));
  if ( !*((_QWORD *)this + 13) )
  {
    v24 = 0LL;
    goto LABEL_60;
  }
  Hwnd = 0LL;
  v10 = 0LL;
  v11 = *(_QWORD *)v6;
  v12 = 0LL;
  v13 = (CVisual *)*((_QWORD *)this + 13);
  v44 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v39 = *(CVisual **)(v11 + 72);
  v41 = _mm_load_si128((const __m128i *)&_xmm);
  *(_WORD *)((char *)&v44 + 1) = 41;
  LODWORD(v11) = *((_DWORD *)this + 22);
  v36 = 0LL;
  v45 = (_DWORD)v11 == 0;
  v42 = _mm_load_si128((const __m128i *)&_xmm);
  v43 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v44) = -86;
  v37 = 0LL;
  v38 = v11;
  v48 = 0;
  do
  {
    if ( !Hwnd )
      v37 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v13 + 304LL))(v13);
    InteractionInternal = CVisual::GetInteractionInternal(v13);
    v15 = InteractionInternal;
    if ( InteractionInternal )
    {
      v35 = CHitTestContext::AdjustInputTypeForInteraction(this, *((unsigned int *)this + 22), InteractionInternal);
      v16 = CHitTestContext::InteractionMatchesHitTest(this, v35, v15);
      v17 = v16;
      v33 = v16;
      if ( *((_DWORD *)this + 22) != 6 )
        goto LABEL_22;
      if ( !v48 )
      {
        if ( v4 )
        {
LABEL_26:
          if ( !v45 )
            v45 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)v15 + 9) + 80LL))(
                    (__int64)v15 + 72,
                    v35,
                    0LL) != 0;
          if ( CInteraction::HasInputSink(v15) )
          {
            if ( !hSourceHandle && v33 && (!v38 || (unsigned int)CVisual::GetInputQueueType(v13)) )
            {
              hSourceHandle = CVisual::GetInputHandle(v13);
              v12 = **(_QWORD **)&CVisual::GetInputLuid(v13);
              CVisual::GetWorldTransform(v13, *(const struct CVisualTree **)v6, (struct CMILMatrix *)&si128, 0LL, 0LL);
            }
            if ( !v36 )
            {
              v10 = **(_QWORD **)&CInteraction::GetInputLuid(v15);
              v36 = v10;
            }
            Hwnd = v37;
            if ( !v37 )
            {
              v20 = *((_QWORD *)v15 + 14);
              if ( v20 )
              {
                if ( *(_BYTE *)(v20 + 104) )
                {
                  InputType = CInputSinkStruct::GetInputType(v35);
                  Hwnd = CInteraction::GetHwnd(v15, InputType);
                  v37 = Hwnd;
                }
              }
            }
          }
          else
          {
            Hwnd = v37;
          }
          goto LABEL_41;
        }
        if ( !v16 )
        {
          v48 = ((*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*((_QWORD *)v15 + 9) + 88LL))(
                   (__int64)v15 + 72,
                   5LL,
                   32831LL,
                   0LL)
              || (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*((_QWORD *)v15 + 9) + 88LL))(
                   (__int64)v15 + 72,
                   6LL,
                   32831LL,
                   0LL))
             && (*((_BYTE *)v15 + 200) & 0x10) == 0;
          goto LABEL_26;
        }
LABEL_25:
        v4 = v15;
        goto LABEL_26;
      }
      if ( v16 && v4 && (*((_BYTE *)v4 + 200) & 0x10) != 0 && (*((_BYTE *)v15 + 200) & 0x10) == 0 )
      {
        v18 = 0;
        v4 = 0LL;
        v19 = 0LL;
        v45 = 0;
        hSourceHandle = 0LL;
      }
      else
      {
LABEL_22:
        v19 = hSourceHandle;
        v18 = v45;
      }
      if ( v4 )
        goto LABEL_26;
      hSourceHandle = v19;
      v45 = v18;
      if ( !v17 )
        goto LABEL_26;
      goto LABEL_25;
    }
LABEL_41:
    if ( v13 == v39 )
      break;
    v13 = (CVisual *)*((_QWORD *)v13 + 11);
  }
  while ( v13 );
  v5 = a3;
  v22 = (__int64)(*((_QWORD *)this + 17) - *((_QWORD *)this + 16)) >> 3;
  *(_DWORD *)a3 = v22 + 1;
  if ( (unsigned int)(v22 + 1) <= *((_DWORD *)a3 + 1) )
  {
    v23 = 0LL;
    if ( v22 )
    {
      do
      {
        *(_QWORD *)(*((_QWORD *)a3 + 1) + 8 * v23) = **(_QWORD **)&CVisual::GetInputLuid(*(CVisual **)(*((_QWORD *)this + 16) + 8 * v23));
        ++v23;
      }
      while ( v23 < v22 );
      v6 = a2;
    }
    *(_QWORD *)(*((_QWORD *)a3 + 1) + 8 * v22) = v10;
  }
  v24 = (__int64)hSourceHandle;
  *((_QWORD *)a3 + 2) = v37;
  if ( hSourceHandle && v4 && v45 )
  {
    v25 = DuplicateCompositionInputSinkHelper(hSourceHandle, (LPHANDLE)a3 + 3);
    if ( v25 < 0 )
    {
      v3 = v25 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180376C98, 2u, v25 | 0x10000000, 0x304u, 0LL);
      goto LABEL_61;
    }
    v26 = *((_DWORD *)v4 + 430);
    v27 = v41;
    *(__m128i *)((char *)a3 + 40) = si128;
    *((_DWORD *)a3 + 27) = v26;
    v28 = v42;
    v29 = v44;
    *(__m128i *)((char *)a3 + 56) = v27;
    *((_QWORD *)a3 + 4) = v12;
    v30 = v43;
    *(__m128i *)((char *)a3 + 72) = v28;
    *(__m128i *)((char *)a3 + 88) = v30;
    *((_DWORD *)a3 + 26) = v29;
    v31 = *((_DWORD *)v6 + 4) != 4
       || *((_DWORD *)this + 22) == 6
       && (*(unsigned int (__fastcall **)(__int64, __int64))(*((_QWORD *)v4 + 9) + 80LL))((__int64)v4 + 72, 6LL);
    *((_BYTE *)a3 + 112) = v31;
    _InterlockedExchange64((volatile __int64 *)v4 + 216, *(_QWORD *)(*(_QWORD *)v6 + 2632LL));
    *((_BYTE *)v4 + 200) ^= (*((_BYTE *)v4 + 200) ^ (2 * *((_BYTE *)this + 120))) & 2;
  }
  v3 = 0;
LABEL_60:
  InputTraceLogging::DWM::HitTestTreeWalkResult(
    *((_DWORD *)v6 + 4),
    *((_DWORD *)v6 + 5),
    *((_QWORD *)v5 + 3),
    *((_QWORD *)v5 + 2),
    v24,
    v4);
LABEL_61:
  *((_DWORD *)this + 44) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0qqp_EventWriteTransfer(
      *((_QWORD *)this + 13),
      (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop,
      *((_DWORD *)v6 + 2),
      *((_DWORD *)v6 + 3),
      *((_QWORD *)this + 13));
  return v3;
}
