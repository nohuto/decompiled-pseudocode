/*
 * XREFs of EtwTracePointerDeviceTransformationStop @ 0x140078680
 * Callers:
 *     rimPopulateContactFrameData @ 0x140076D40 (rimPopulateContactFrameData.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x140078A24 (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerDeviceTransformationStop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, "t", a3, (unsigned int)a1);
  return result;
}
