/*
 * XREFs of KeSetAutoAlignmentProcess @ 0x140AAEC94
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetAutoAlignmentProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 0);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 136), 0);
}
