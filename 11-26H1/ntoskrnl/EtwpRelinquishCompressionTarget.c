/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x1406CC2F0
 * Callers:
 *     EtwpFreeCompression @ 0x140430384 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1406CB8FC (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1406CBEA0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1406CC118 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x140219758 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021D850 (EtwpGetLoggerTimeStamp.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  __int64 v2; // rbx

  if ( *(_QWORD *)(a1 + 1416) )
  {
    v2 = *(_QWORD *)(a1 + 1416);
    *(_QWORD *)(v2 + 16) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1416), 5u);
    *(_QWORD *)(a1 + 1416) = 0LL;
  }
}
