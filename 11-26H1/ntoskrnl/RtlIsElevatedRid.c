/*
 * XREFs of RtlIsElevatedRid @ 0x140A62260
 * Callers:
 *     SepGetTokenElevation @ 0x1404707C0 (SepGetTokenElevation.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140A62010 (SepRemoveDisabledGroupsAndPrivileges.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x14048B1A0 (RtlSubAuthorityCountSid.c)
 */

BOOLEAN __cdecl RtlIsElevatedRid(PSID_AND_ATTRIBUTES SidAttr)
{
  PSID Sid; // rbx
  int v2; // edi
  ULONG v3; // ecx
  ULONG v4; // edx
  __int64 i; // rax

  if ( SidAttr )
  {
    if ( (SidAttr->Attributes & 0x30) == 0 )
    {
      Sid = SidAttr->Sid;
      v2 = *RtlSubAuthorityCountSid(SidAttr->Sid);
      if ( (_BYTE)v2 )
      {
        v3 = *RtlSubAuthoritySid(Sid, 0);
        if ( v3 < 0x50 || v3 > 0x6F )
        {
          v4 = *RtlSubAuthoritySid(Sid, v2 - 1);
          for ( i = 0LL; (unsigned int)i < 0x13; i = (unsigned int)(i + 1) )
          {
            if ( v4 == *((_DWORD *)qword_1400329E0 + i) )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
