/*
 * XREFs of EtwTraceFlipManagerUpdateExpectedConsumerPresentId @ 0x14015CCB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x140113E38 (McTemplateK0qxq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerUpdateExpectedConsumerPresentId(__int64 a1, __int64 a2, int a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxq_EtwWriteTransfer(a1, &FlipManagerUpdateExpectedConsumerPresentId, a3, a1, a2, a3);
  return result;
}
