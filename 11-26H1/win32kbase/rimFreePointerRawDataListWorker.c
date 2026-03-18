/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x14007621C
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x140074598 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1400761B0 (rimReclaimHoldingFrame.c)
 *     RIMFreeAllHoldingFrames @ 0x140131DB0 (RIMFreeAllHoldingFrames.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimFreePointerRawDataListWorker(_QWORD *Buffer, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  PVOID v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( Buffer )
  {
    v4 = Buffer;
    do
    {
      v5 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !*((_QWORD *)v5 + 1) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 442LL);
      GreDeleteFastMutex(*((char **)v5 + 1), a2, a3, a4);
      GreDeleteFastMutex((char *)v5, v6, v7, v8);
    }
    while ( v4 );
  }
}
