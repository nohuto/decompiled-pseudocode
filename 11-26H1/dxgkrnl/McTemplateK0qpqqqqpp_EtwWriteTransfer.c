/*
 * XREFs of McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1400111D0
 * Callers:
 *     DxgkSubmitPresentToHwQueue @ 0x1402B6190 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 *     DxgkPresentRedirected @ 0x140330FD0 (DxgkPresentRedirected.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400127B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0qpqqqqpp_EtwWriteTransfer(__int64 a1)
{
  return McGenEventWrite_EtwWriteTransfer(a1, &Present);
}
