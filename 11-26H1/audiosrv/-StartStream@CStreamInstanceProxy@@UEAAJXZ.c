/*
 * XREFs of ?StartStream@CStreamInstanceProxy@@UEAAJXZ @ 0x18007FA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstanceProxy::StartStream(CStreamInstanceProxy *this)
{
  return CStreamInstanceProxyImpl::StartStream((CStreamInstanceProxy *)((char *)this - 40));
}
