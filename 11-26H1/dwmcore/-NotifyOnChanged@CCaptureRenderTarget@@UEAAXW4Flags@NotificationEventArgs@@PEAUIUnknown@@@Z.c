/*
 * XREFs of ?NotifyOnChanged@CCaptureRenderTarget@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801CB880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureRenderTarget::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( a3 )
    *(_BYTE *)(a1 + 2588) = 1;
  return CResource::NotifyOnChanged(a1, a2, a3);
}
