/*
 * XREFs of ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x18003859C
 * Callers:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180038378 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x180037B2C (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x180037FAC (-RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180038718 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x18004952C (--0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAcrylicSheet::StartRectAnimation(__int64 a1, __int128 *a2, __int128 *a3)
{
  CTimelineBase *v6; // rcx
  _QWORD *v7; // rsi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // esi
  unsigned int v12; // eax

  std::_Func_class<void,>::_Tidy(a1 + 288);
  std::_Func_class<void,>::_Tidy(a1 + 352);
  v6 = *(CTimelineBase **)(a1 + 488);
  if ( v6 )
    CTimelineBase::Release(v6);
  v7 = DefaultHeap::AllocClear(0x78uLL);
  if ( !v7 )
  {
    *(_QWORD *)(a1 + 488) = 0LL;
    v10 = -2147024882;
    v12 = 786;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v12, 0LL);
    CAcrylicSheet::StopAnimations((CAcrylicSheet *)a1);
    return (unsigned int)v10;
  }
  CTimelineBase::CTimelineBase(v7);
  *v7 = &CTimeline<float>::`vftable';
  *(_QWORD *)(a1 + 488) = v7;
  v8 = *a2;
  *(_WORD *)(a1 + 480) = 0;
  v9 = *a3;
  *(_BYTE *)(a1 + 482) = 0;
  *(_OWORD *)(a1 + 448) = v8;
  *(_OWORD *)(a1 + 464) = v9;
  v10 = CAcrylicSheet::RegisterGlobalTimer((CAcrylicSheet *)a1);
  if ( v10 < 0 )
  {
    v12 = 794;
    goto LABEL_7;
  }
  return (unsigned int)v10;
}
