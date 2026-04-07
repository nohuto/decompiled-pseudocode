/*
 * XREFs of ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x1800A13DC
 * Callers:
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x1800A14D8 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800E0A3C (-StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5B80 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x180037B2C (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x180037FAC (-RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAcrylicSheet::StartAlphaAnimation(CAcrylicSheet *this, float a2, float a3, float a4)
{
  CTimelineBase *v5; // rcx
  LPVOID v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  int v11; // esi
  unsigned int v12; // eax

  v5 = (CTimelineBase *)*((_QWORD *)this + 63);
  if ( v5 )
    CTimelineBase::Release(v5);
  v6 = DefaultHeap::AllocClear(0x78uLL);
  if ( !v6 )
  {
    *((_QWORD *)this + 63) = 0LL;
    goto LABEL_8;
  }
  v10 = CTimeline<float>::CTimeline<float>((__int64)v6, v7, v8, v9, 0);
  *((_QWORD *)this + 63) = v10;
  if ( !v10 )
  {
LABEL_8:
    v11 = -2147024882;
    v12 = 726;
    goto LABEL_9;
  }
  *((float *)this + 124) = a2;
  *((float *)this + 125) = a3;
  v11 = CAcrylicSheet::RegisterGlobalTimer(this);
  if ( v11 < 0 )
  {
    v12 = 731;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v12, 0LL);
    CAcrylicSheet::StopAnimations(this);
  }
  return (unsigned int)v11;
}
