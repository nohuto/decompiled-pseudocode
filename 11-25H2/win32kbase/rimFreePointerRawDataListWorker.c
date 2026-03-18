/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x14002EFB4
 * Callers:
 *     rimReclaimHoldingFrame @ 0x14002EF5C (rimReclaimHoldingFrame.c)
 *     RIMFreeAllHoldingFrames @ 0x14015161C (RIMFreeAllHoldingFrames.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimFreePointerRawDataListWorker(_QWORD *Buffer)
{
  _QWORD *v1; // rbx
  PVOID v2; // rdi

  if ( Buffer )
  {
    v1 = Buffer;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      if ( !*((_QWORD *)v2 + 1) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 450LL);
      GreDeleteFastMutex(*((char **)v2 + 1));
      GreDeleteFastMutex((char *)v2);
    }
    while ( v1 );
  }
}
