/*
 * XREFs of NtOpenThread @ 0x140A10500
 * Callers:
 *     DifNtOpenThreadWrapper @ 0x14067F5D0 (DifNtOpenThreadWrapper.c)
 * Callees:
 *     PsOpenThread @ 0x140A10530 (PsOpenThread.c)
 */

__int64 __fastcall NtOpenThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // [rsp+20h] [rbp-18h]
  char PreviousMode; // [rsp+28h] [rbp-10h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = PreviousMode;
  return PsOpenThread(a1, a2, a3, a4, v5, PreviousMode);
}
