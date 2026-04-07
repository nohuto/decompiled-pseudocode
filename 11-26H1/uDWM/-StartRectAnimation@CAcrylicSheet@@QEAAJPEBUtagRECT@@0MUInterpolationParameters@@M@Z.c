/*
 * XREFs of ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x18004282C
 * Callers:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180042604 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x1800233AC (--0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800401D0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x180040A48 (-RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18005E508 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAcrylicSheet::StartRectAnimation(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        float a4,
        __int128 *a5,
        float a6)
{
  __int64 v9; // rdx
  CTimelineBase *v10; // rcx
  CBaseObject *v11; // rsi
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // esi
  unsigned int v17; // eax
  _OWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h]

  std::_Func_class<void,>::_Tidy(a1 + 224, (__int64)a2);
  std::_Func_class<void,>::_Tidy(a1 + 288, v9);
  v10 = *(CTimelineBase **)(a1 + 424);
  if ( v10 )
    CTimelineBase::Release(v10);
  v11 = (CBaseObject *)CTimeline<float>::operator new();
  if ( !v11 )
  {
    *(_QWORD *)(a1 + 424) = 0LL;
    v15 = -2147024882;
    v17 = 760;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v17, 0LL);
    CAcrylicSheet::StopAnimations((CAcrylicSheet *)a1);
    return (unsigned int)v15;
  }
  v12 = *a5;
  v18[1] = a5[1];
  v18[0] = v12;
  v19 = *((_QWORD *)a5 + 4);
  CTimelineBase::CTimelineBase(v11, a4, 0.0, 1.0, (int *)v18, COERCE__INT64(a6));
  *(_QWORD *)v11 = &CTimeline<float>::`vftable';
  *(_QWORD *)(a1 + 424) = v11;
  v13 = *a2;
  *(_WORD *)(a1 + 416) = 0;
  v14 = *a3;
  *(_BYTE *)(a1 + 418) = 0;
  *(_OWORD *)(a1 + 384) = v13;
  *(_OWORD *)(a1 + 400) = v14;
  v15 = CAcrylicSheet::RegisterGlobalTimer((CAcrylicSheet *)a1);
  if ( v15 < 0 )
  {
    v17 = 768;
    goto LABEL_7;
  }
  return (unsigned int)v15;
}
