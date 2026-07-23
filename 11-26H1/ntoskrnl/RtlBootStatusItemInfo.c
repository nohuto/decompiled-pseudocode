/*
 * XREFs of RtlBootStatusItemInfo @ 0x140B06E38
 * Callers:
 *     RtlCheckBootStatusIntegrity @ 0x14080B218 (RtlCheckBootStatusIntegrity.c)
 *     PopBootStatGet @ 0x140B6AD34 (PopBootStatGet.c)
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
    *a2 = RtlpBootStatusFields[a1];
    *a3 = HIDWORD(RtlpBootStatusFields[a1]);
  }
  return v3;
}
