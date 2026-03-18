/*
 * XREFs of EtwTraceDCompCommitBatchEvent @ 0x140137D90
 * Callers:
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401B2C40 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     McTemplateK0qpqt_EtwWriteTransfer @ 0x140137DCC (McTemplateK0qpqt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDCompCommitBatchEvent(int a1, int a2, int a3, int a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
    return McTemplateK0qpqt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4 != 0);
  return result;
}
