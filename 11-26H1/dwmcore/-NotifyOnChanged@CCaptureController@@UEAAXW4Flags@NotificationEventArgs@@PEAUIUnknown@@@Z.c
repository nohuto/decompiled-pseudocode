/*
 * XREFs of ?NotifyOnChanged@CCaptureController@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801CD7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSwapChainHostVisualChanged@CCaptureController@@IEAAXXZ @ 0x18021CA00 (-OnSwapChainHostVisualChanged@CCaptureController@@IEAAXXZ.c)
 */

__int64 __fastcall CCaptureController::NotifyOnChanged(CCaptureController *a1, unsigned int a2, __int64 a3)
{
  if ( a3 && a3 == *((_QWORD *)a1 + 16) )
    CCaptureController::OnSwapChainHostVisualChanged(a1);
  return CResource::NotifyOnChanged((__int64)a1, a2, a3);
}
