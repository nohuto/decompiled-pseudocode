/*
 * XREFs of SeTokenIsElevated @ 0x1408FBC38
 * Callers:
 *     SeTokenCanImpersonate @ 0x140904C94 (SeTokenCanImpersonate.c)
 * Callees:
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeTokenIsElevated(_DWORD *a1, _BYTE *a2)
{
  bool v2; // zf
  NTSTATUS v4; // eax
  PVOID v5; // rcx
  unsigned int v6; // ebx
  PVOID TokenInformation; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[48] == 2;
  TokenInformation = 0LL;
  *a2 = 0;
  if ( v2 && (int)a1[49] < 2 )
  {
    return 0;
  }
  else
  {
    v4 = SeQueryInformationToken(a1, TokenElevation, &TokenInformation);
    v5 = TokenInformation;
    v6 = v4;
    if ( v4 >= 0 && *(_DWORD *)TokenInformation )
      *a2 = 1;
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  return v6;
}
