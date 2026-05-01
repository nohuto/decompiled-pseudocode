/*
 * XREFs of ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1800B33EC
 * Callers:
 *     ?SetDesiredSystemVisual@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEAV2@W4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800B213C (-SetDesiredSystemVisual@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEAV2@W4FRAME_SYST.c)
 *     _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x1800B2DC8 (_lambda_31520e38682400c193ecfa4924368fd9_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler(
        CFrameApplicationPresentation::PresentedWindowChangeHandler *this)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 64LL))(*(_QWORD *)this, &v3);
  v2 = v3;
  if ( v3 != *((_QWORD *)this + 1) )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 632LL) + 520LL))(*(_QWORD *)(*(_QWORD *)this + 632LL));
    v2 = v3;
  }
  if ( v2 )
  {
    v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
}
