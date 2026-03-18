/*
 * XREFs of EtwTraceTouchPadConfidenceCleared @ 0x14012C8C0
 * Callers:
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x14012C518 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 * Callees:
 *     McTemplateK0qtt_EtwWriteTransfer @ 0x14012C8EC (McTemplateK0qtt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadConfidenceCleared(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0qtt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
