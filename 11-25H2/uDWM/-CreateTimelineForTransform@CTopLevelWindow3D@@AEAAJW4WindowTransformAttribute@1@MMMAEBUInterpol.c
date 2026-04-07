/*
 * XREFs of ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpolationParameters@@@Z @ 0x18004939C
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x18004952C (--0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::CreateTimelineForTransform(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  CTimelineBase *v5; // rcx
  _QWORD *v6; // r14

  v3 = 0;
  v4 = a2;
  v5 = *(CTimelineBase **)(a1 + 8LL * a2 + 344);
  if ( v5 )
  {
    CTimelineBase::Release(v5);
    *(_QWORD *)(a1 + 8 * v4 + 344) = 0LL;
  }
  v6 = DefaultHeap::AllocClear(0x78uLL);
  if ( v6 )
  {
    CTimelineBase::CTimelineBase(v6);
    *v6 = &CTimeline<float>::`vftable';
    *(_QWORD *)(a1 + 8 * v4 + 344) = v6;
  }
  else
  {
    *(_QWORD *)(a1 + 8 * v4 + 344) = 0LL;
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xB7u, 0LL);
  }
  return v3;
}
