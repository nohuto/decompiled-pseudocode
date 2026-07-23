/*
 * XREFs of KeSetCheckStackExtentsProcess @ 0x140B02F4C
 * Callers:
 *     PspApplyMitigationOptions @ 0x140B4F59C (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetCheckStackExtentsProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 5u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 136), 5u);
}
