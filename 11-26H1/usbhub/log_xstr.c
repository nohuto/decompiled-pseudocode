/*
 * XREFs of log_xstr @ 0x14004E5EC
 * Callers:
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x14001A440 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlTraceOutput @ 0x140025F40 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140026290 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhExceptionTrace @ 0x140033C60 (UsbhExceptionTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall log_xstr(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = a3;
  if ( a2 < 0x7FFF )
    *(_WORD *)(a1 + 8) = a2;
  else
    *(_WORD *)(a1 + 8) = 0x7FFF;
  return a1;
}
