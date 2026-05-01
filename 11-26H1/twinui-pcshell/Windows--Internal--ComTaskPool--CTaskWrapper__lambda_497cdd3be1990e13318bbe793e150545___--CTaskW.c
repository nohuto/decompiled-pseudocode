/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545___::CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545_____lambda_497cdd3be1990e13318bbe793e150545___ @ 0x1802EA3A0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_497cdd3be1990e13318bbe793e150545___ @ 0x180159FB8 (Windows--Internal--ComTaskPool--QueueTask__lambda_497cdd3be1990e13318bbe793e150545___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545___::CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545_____lambda_497cdd3be1990e13318bbe793e150545___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // r8

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != (_QWORD *)a2 )
  {
    a1[2] = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(
    a1 + 3,
    (_QWORD *)(a2 + 8));
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(a2 + 16);
  *a1 = &off_18072E3F0;
  return a1;
}
