/*
 * XREFs of RtlBootStatusItemInfo @ 0x180141908
 * Callers:
 *     RtlpGetSetBootStatusData @ 0x18011595C (RtlpGetSetBootStatusData.c)
 *     RtlCheckBootStatusIntegrity @ 0x180141940 (RtlCheckBootStatusIntegrity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBootStatusItemInfo(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 > 0x12 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = RtlpBootStatusFields[2 * a1];
    *a3 = RtlpBootStatusFields[2 * a1 + 1];
  }
  return v3;
}
