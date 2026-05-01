/*
 * XREFs of _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::_lambda_5c8612707d1ce1f8a03bb177e1540ce1_ @ 0x180288FFC
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x180288CFC (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x180026E24 (--0ViewOptions@@QEAA@AEBU0@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800BE2B8 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_5c8612707d1ce1f8a03bb177e1540ce1_::_lambda_5c8612707d1ce1f8a03bb177e1540ce1_(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3,
        const struct ViewOptions *a4,
        __int64 *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v8; // rcx

  *(_DWORD *)a1 = *a2;
  *(_OWORD *)(a1 + 4) = *a3;
  ViewOptions::ViewOptions((ViewOptions *)(a1 + 24), a4);
  v8 = *a5;
  *(_QWORD *)(a1 + 80) = *a5;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_QWORD *)(a1 + 88) = *a6;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 96,
    a7);
  *(_QWORD *)(a1 + 96) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  return a1;
}
