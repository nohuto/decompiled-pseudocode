/*
 * XREFs of ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@MPEAM@Z @ 0x18013D430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x18013ACC8 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x18013CB5C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@MMMMMM@Z @ 0x18013D614 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@MMMMMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInertiaValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        float a3,
        float *a4)
{
  struct CInteractionTrackerBase *InteractionTracker; // rbx
  double v8; // xmm0_8
  float v9; // xmm10_4
  double v10; // xmm0_8
  float v11; // xmm8_4
  double v12; // xmm0_8
  float v13; // xmm7_4
  double v14; // xmm0_8
  float v15; // xmm6_4
  float v16; // xmm0_4
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  const wchar_t *v22; // [rsp+50h] [rbp-78h] BYREF
  CInteractionTrackerPositionAnimation *v23; // [rsp+58h] [rbp-70h] BYREF
  float v24; // [rsp+D0h] [rbp+8h] BYREF
  float v25; // [rsp+E0h] [rbp+18h] BYREF
  float v26; // [rsp+E8h] [rbp+20h] BYREF

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v8 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                   + 344LL))(
         InteractionTracker,
         2LL,
         *((unsigned int *)this + 71));
  v9 = *(float *)&v8;
  v10 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)InteractionTracker + 392LL))(
          InteractionTracker,
          2LL);
  v11 = *(float *)&v10;
  v12 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)InteractionTracker + 232LL))(
          InteractionTracker,
          2LL);
  v13 = *(float *)&v12;
  v14 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                    + 376LL))(
          InteractionTracker,
          2LL,
          *((unsigned int *)this + 71));
  v15 = *(float *)&v14;
  *(float *)&v14 = (*(float (__fastcall **)(struct CInteractionTrackerBase *, __int64, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                              + 376LL))(
                     InteractionTracker,
                     1LL,
                     *((unsigned int *)this + 71));
  v16 = CPositionMotion::AdvanceInertiaToTime(
          (CInteractionTrackerPositionAnimation *)((char *)this + 400),
          a2,
          a3,
          *(float *)&v14,
          v15,
          v13,
          v11,
          v9);
  *a4 = v16;
  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v17 = *((_DWORD *)this + 71);
    v25 = a3;
    v24 = v9;
    v26 = v16;
    v22 = ScrollAxisToString(v17);
    v23 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      byte_1803B60A2,
      v19,
      v20,
      (__int64)&v23,
      (void **)&v22,
      (__int64)&v26,
      (__int64)&v24,
      (__int64)&v25);
  }
  return 0LL;
}
