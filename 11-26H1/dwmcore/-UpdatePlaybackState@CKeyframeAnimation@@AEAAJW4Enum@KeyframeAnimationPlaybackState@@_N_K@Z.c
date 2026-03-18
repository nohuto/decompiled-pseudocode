/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18019275C
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801850D0 (-SetProperty@CKeyframeAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW45KeyframeAnimationDelayBehavior@@MW45KeyframeAnimationDirection@@MW45KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1D08 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EX.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x18027A010 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::UpdatePlaybackState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  unsigned int v5; // ebx
  bool v6; // zf
  __int64 v7; // rdx
  CComposition *v8; // rax
  __int64 v9; // rcx

  if ( *(_QWORD *)(a1 + 304) )
  {
    if ( a2 > 2 )
    {
      v5 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x304u, 0LL);
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 444) == 0;
      *(_DWORD *)(a1 + 448) = a2;
      if ( v6 && a2 )
      {
        if ( a3 )
          a4 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 312LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 312LL))
                         + 24);
        *(_QWORD *)(a1 + 376) = a4;
        *(_QWORD *)(a1 + 384) = a4;
      }
      v7 = 1LL;
      v8 = g_pComposition;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 816LL) + 417LL) = 1;
      v9 = *((_QWORD *)v8 + 110);
      if ( v9 == *((_QWORD *)v8 + 111) )
      {
        if ( v9 != -1 )
          v7 = v9 + 1;
        if ( v7 != v9 )
          ScheduleCompositionPass(0, 8u);
      }
      return 0;
    }
  }
  else
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x2FDu, 0LL);
  }
  return v5;
}
