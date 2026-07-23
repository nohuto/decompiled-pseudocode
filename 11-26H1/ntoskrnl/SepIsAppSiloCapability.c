/*
 * XREFs of SepIsAppSiloCapability @ 0x1404B6E7C
 * Callers:
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlIdentifierAuthoritySid @ 0x140AFD33C (RtlIdentifierAuthoritySid.c)
 */

char __fastcall SepIsAppSiloCapability(_BYTE *a1)
{
  PSID v1; // r9
  PSID_IDENTIFIER_AUTHORITY v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v6; // r11d
  int v7; // r8d
  __int64 v8; // rdx

  if ( *a1 != **(_BYTE **)&RtlpBootStatHandleLock.ApcStateFill[40]
    || a1[1] <= *(_BYTE *)(*(_QWORD *)&RtlpBootStatHandleLock.ApcStateFill[40] + 1LL) )
  {
    return 0;
  }
  RtlIdentifierAuthoritySid(*(PSID *)&RtlpBootStatHandleLock.ApcStateFill[40]);
  v2 = RtlIdentifierAuthoritySid(v1);
  v7 = *(_DWORD *)v2->Value - *(_DWORD *)v3;
  if ( *(_DWORD *)v2->Value == *(_DWORD *)v3 )
    v7 = *(unsigned __int16 *)&v2->Value[4] - *(unsigned __int16 *)(v3 + 4);
  v8 = 0LL;
  if ( v7 )
    return 0;
  while ( (unsigned int)v8 < v6 )
  {
    if ( *(_DWORD *)(v4 + 4 * v8 + 8) != *(_DWORD *)(v5 + 4 * v8 + 8) )
      return 0;
    v8 = (unsigned int)(v8 + 1);
  }
  return 1;
}
