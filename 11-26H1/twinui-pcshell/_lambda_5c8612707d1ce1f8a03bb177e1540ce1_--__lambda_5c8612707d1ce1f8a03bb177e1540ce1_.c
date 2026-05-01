/*
 * XREFs of _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::__lambda_5c8612707d1ce1f8a03bb177e1540ce1_ @ 0x18028907C
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x180288CFC (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___::_CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___ @ 0x180468790 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800BE4F4 (--1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_5c8612707d1ce1f8a03bb177e1540ce1_::__lambda_5c8612707d1ce1f8a03bb177e1540ce1_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::~OnInputAppRequestedShowActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)(a1 + 12));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 10);
  return std::vector<Geometry::CRect>::_Tidy(a1 + 7);
}
