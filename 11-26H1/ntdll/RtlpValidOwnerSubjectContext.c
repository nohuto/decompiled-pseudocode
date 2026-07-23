/*
 * XREFs of RtlpValidOwnerSubjectContext @ 0x180045300
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEqualSid @ 0x180043DE0 (RtlEqualSid.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801614B0 (NtOpenProcessToken.c)
 *     ZwPrivilegeCheck @ 0x180161690 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

char __fastcall RtlpValidOwnerSubjectContext(void *a1, void *a2, char a3, NTSTATUS *a4)
{
  char v4; // bl
  void *ProcessHeap; // r12
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  unsigned int *Heap_0; // r14
  unsigned int i; // edi
  NTSTATUS v14; // eax
  bool v15; // sf
  BOOLEAN v16; // al
  BOOLEAN Result[4]; // [rsp+30h] [rbp-89h] BYREF
  ULONG TokenInformationLength; // [rsp+34h] [rbp-85h] BYREF
  HANDLE TokenHandle[2]; // [rsp+38h] [rbp-81h] BYREF
  HANDLE ClientToken; // [rsp+48h] [rbp-71h]
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-69h] BYREF
  PSID TokenInformation[12]; // [rsp+70h] [rbp-49h] BYREF

  v4 = 0;
  ClientToken = a1;
  TokenInformationLength = 0;
  TokenHandle[0] = 0LL;
  Result[0] = 0;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( a2 )
  {
    if ( a3 )
    {
      v14 = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, TokenHandle);
      *a4 = v14;
      if ( v14 < 0 )
        return 0;
    }
    else
    {
      TokenHandle[0] = a1;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v9 = NtQueryInformationToken(TokenHandle[0], 1u, TokenInformation, 0x54u, &TokenInformationLength);
    *a4 = v9;
    if ( v9 < 0 )
      goto LABEL_31;
    if ( RtlEqualSid(a2, TokenInformation[0]) )
    {
      if ( a3 )
        NtClose(TokenHandle[0]);
    }
    else
    {
      v10 = NtQueryInformationToken(TokenHandle[0], 2u, 0LL, 0, &TokenInformationLength);
      *a4 = v10;
      if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741789 )
      {
LABEL_31:
        if ( a3 )
          NtClose(TokenHandle[0]);
        return 0;
      }
      Heap_0 = (unsigned int *)RtlAllocateHeap_0(ProcessHeap, 0, TokenInformationLength);
      if ( !Heap_0 )
      {
        *a4 = -1073741801;
        goto LABEL_31;
      }
      *a4 = NtQueryInformationToken(TokenHandle[0], 2u, Heap_0, TokenInformationLength, &TokenInformationLength);
      if ( a3 )
        NtClose(TokenHandle[0]);
      if ( *a4 < 0 )
      {
LABEL_16:
        RtlFreeHeap_0(ProcessHeap, 0, Heap_0);
        return v4;
      }
      for ( i = 0; i < *Heap_0; ++i )
      {
        if ( RtlEqualSid(a2, *(PSID *)&Heap_0[4 * i + 2]) )
        {
          if ( (Heap_0[4 * i + 4] & 0x18) == 8 )
          {
            v4 = 1;
            goto LABEL_16;
          }
          break;
        }
      }
      RtlFreeHeap_0(ProcessHeap, 0, Heap_0);
      TokenHandle[1] = (HANDLE)18;
      RequiredPrivileges.Privilege[0].Luid = (_LUID)18LL;
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      v15 = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, Result) < 0;
      v16 = 0;
      if ( !v15 )
        v16 = Result[0];
      if ( !v16 )
        goto LABEL_25;
    }
    return 1;
  }
LABEL_25:
  *a4 = -1073741734;
  return 0;
}
