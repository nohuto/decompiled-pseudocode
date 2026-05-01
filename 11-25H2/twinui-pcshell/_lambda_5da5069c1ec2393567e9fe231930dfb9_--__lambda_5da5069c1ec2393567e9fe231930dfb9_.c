/*
 * XREFs of _lambda_5da5069c1ec2393567e9fe231930dfb9_::__lambda_5da5069c1ec2393567e9fe231930dfb9_ @ 0x1804FF2C4
 * Callers:
 *     ?OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180179B10 (-OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@P.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___::_CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___ @ 0x1804FF2EC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_5da5069c1ec2393567e9fe231930dfb9_::__lambda_5da5069c1ec2393567e9fe231930dfb9_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(a1);
}
