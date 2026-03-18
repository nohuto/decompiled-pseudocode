/*
 * XREFs of EtwTraceCopyPointerInputFrameStop @ 0x1400E5440
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400E53B0 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceCopyPointerInputFrameStop(__int64 a1)
{
  char result; // al

  result = BYTE3(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000000LL) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &CopyPointerInputFrameStop, &W32kControlGuid);
  return result;
}
