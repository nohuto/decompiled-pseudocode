/*
 * XREFs of KeFindFirstSetRightGroupMask @ 0x140200980
 * Callers:
 *     KeFindFirstSetLeftGroupMask @ 0x140200760 (KeFindFirstSetLeftGroupMask.c)
 *     KeQueryNodeActiveAffinity2 @ 0x14050E130 (KeQueryNodeActiveAffinity2.c)
 *     EtwpExtractCompactedAffinity @ 0x1406C5550 (EtwpExtractCompactedAffinity.c)
 *     KeInitializeProcess @ 0x140963BE4 (KeInitializeProcess.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     MmCreatePeb @ 0x140ACA4F0 (MmCreatePeb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupMask(__int64 *a1)
{
  __int64 *v2; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  v2 = a1;
  v4 = *a1;
  result = -1LL;
  while ( 1 )
  {
    v6 = ~v4;
    if ( v6 != -1 )
      break;
    if ( ++v2 > a1 )
      return result;
    v4 = *v2;
  }
  _BitScanForward64((unsigned __int64 *)&v6, ~v6);
  v7 = v6 + ((v2 - a1) << 6);
  if ( v7 > 0x1F )
    return -1LL;
  return v7;
}
