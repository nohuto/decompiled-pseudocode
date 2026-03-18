/*
 * XREFs of TraceDxgkPerformanceWarning @ 0x14005AA60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall TraceDxgkPerformanceWarning(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    return McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventPerformanceWarning);
  return result;
}
