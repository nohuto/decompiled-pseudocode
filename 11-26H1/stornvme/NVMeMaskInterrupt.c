/*
 * XREFs of NVMeMaskInterrupt @ 0x140006BC0
 * Callers:
 *     ProcessCompletionQueues @ 0x140007D70 (ProcessCompletionQueues.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeHwMSIInterrupt @ 0x140009320 (NVMeHwMSIInterrupt.c)
 * Callees:
 *     <none>
 */

void __fastcall NVMeMaskInterrupt(__int64 a1, char a2)
{
  int v2; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_BYTE *)(a1 + 21) & 0x20) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 16);
    if ( v2 == 1 || v2 == 2 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 12LL) = 1 << a2;
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      *(_BYTE *)(a1 + 21) |= 0x20u;
    }
  }
}
