/*
 * XREFs of RtlIsElevatedRid @ 0x140A54CC0
 * Callers:
 *     SepGetTokenElevation @ 0x140477040 (SepGetTokenElevation.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140A54A70 (SepRemoveDisabledGroupsAndPrivileges.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140491650 (RtlSubAuthorityCountSid.c)
 */

char __fastcall RtlIsElevatedRid(__int64 a1)
{
  PSID v1; // rbx
  int v2; // edi
  ULONG v3; // ecx
  ULONG v4; // edx
  __int64 i; // rax

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x30) == 0 )
    {
      v1 = *(PSID *)a1;
      v2 = *RtlSubAuthorityCountSid(*(PSID *)a1);
      if ( (_BYTE)v2 )
      {
        v3 = *RtlSubAuthoritySid(v1, 0);
        if ( v3 < 0x50 || v3 > 0x6F )
        {
          v4 = *RtlSubAuthoritySid(v1, v2 - 1);
          for ( i = 0LL; (unsigned int)i < 0x13; i = (unsigned int)(i + 1) )
          {
            if ( v4 == *((_DWORD *)qword_140032460 + i) )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
