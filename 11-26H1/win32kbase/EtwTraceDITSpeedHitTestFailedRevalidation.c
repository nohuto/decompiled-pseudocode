/*
 * XREFs of EtwTraceDITSpeedHitTestFailedRevalidation @ 0x1401DAB30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001E620 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDITSpeedHitTestFailedRevalidation(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0p_EtwWriteTransfer(
             a1,
             (__int64)&DITSpeedHitTestFailedRevalidation,
             (__int64)&W32kControlGuid,
             a1);
  return result;
}
