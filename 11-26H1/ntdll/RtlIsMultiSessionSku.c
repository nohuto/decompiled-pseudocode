/*
 * XREFs of RtlIsMultiSessionSku @ 0x18000DFB0
 * Callers:
 *     GetGlobalizationUserModelType @ 0x18000CF80 (GetGlobalizationUserModelType.c)
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1801105C0 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 */

char __fastcall RtlIsMultiSessionSku(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    return *((_BYTE *)NtCurrentPeb()->SharedData + 28);
  else
    return MEMORY[0x7FFE02F1] & 1;
}
