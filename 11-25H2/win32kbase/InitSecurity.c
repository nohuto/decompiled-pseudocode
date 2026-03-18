/*
 * XREFs of InitSecurity @ 0x1402E97F0
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     CreateSecurityDescriptor @ 0x140049900 (CreateSecurityDescriptor.c)
 *     AllocAce @ 0x140049D70 (AllocAce.c)
 */

__int64 InitSecurity()
{
  PSID SeWorldSid; // rbp
  ULONG v1; // r14d
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // edi
  void *v5; // rbx
  char *v6; // rax
  char *v7; // rsi
  void *v8; // rax
  char *v9; // rax
  char *v10; // rcx
  void *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rbp
  struct _ACL *SecurityDescriptor; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *UserSessionState; // rax
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  ULONG AceListLength; // [rsp+50h] [rbp+8h] BYREF

  SeWorldSid = SeExports->SeWorldSid;
  v1 = RtlLengthSid(SeWorldSid);
  v3 = Win32AllocPoolWithQuotaZInitImpl(v2, v1 + 8, 0x65737355u);
  v4 = 0;
  v5 = (void *)v3;
  if ( !v3 )
    return 0LL;
  *(_WORD *)(v3 + 2) = v1 + 8;
  AceListLength = v1 + 8;
  *(_WORD *)v3 = 3584;
  *(_DWORD *)(v3 + 4) = 983935;
  RtlCopySid(v1, (PSID)(v3 + 8), SeWorldSid);
  v6 = (char *)AllocAce(v5, 0, 14, 983935, SeExports->SeRestrictedSid, &AceListLength);
  v7 = v6;
  if ( !v6 )
    goto LABEL_5;
  v8 = (void *)AllocAce(v6, 0, 9, 0x10000000, SeExports->SeWorldSid, &AceListLength);
  v5 = v8;
  if ( !v8 )
    goto LABEL_11;
  v9 = (char *)AllocAce(v8, 0, 9, 0x10000000, SeExports->SeRestrictedSid, &AceListLength);
  v7 = v9;
  if ( !v9 )
  {
LABEL_5:
    v10 = (char *)v5;
LABEL_6:
    GreDeleteFastMutex(v10);
    return 0LL;
  }
  v12 = (void *)AllocAce(v9, 0, 0, 5, SeExports->SeAliasAdminsSid, &AceListLength);
  v5 = v12;
  if ( !v12 )
    goto LABEL_11;
  v13 = (char *)AllocAce(v12, 0, 0, 2, SeExports->SeWorldSid, &AceListLength);
  v7 = v13;
  if ( !v13 )
    goto LABEL_5;
  v14 = (char *)AllocAce(v13, 0, 0, 2, SeExports->SeRestrictedSid, &AceListLength);
  v15 = v14;
  if ( !v14 )
  {
LABEL_11:
    v10 = v7;
    goto LABEL_6;
  }
  SecurityDescriptor = CreateSecurityDescriptor(v14, AceListLength, 0);
  *(_QWORD *)(W32GetUserSessionState(v18, v17) + 63536) = SecurityDescriptor;
  GreDeleteFastMutex(v15);
  W32GetUserSessionState(v20, v19);
  UserSessionState = (_DWORD *)W32GetUserSessionState(v22, v21);
  v24 = 24LL;
  v25 = UserSessionState + 10650;
  do
  {
    *(v25 - 2) = 0x20000;
    *(v25 - 1) = 0x20000;
    *v25 = 0x20000;
    v25[1] = 2031616;
    v25 += 4;
    --v24;
  }
  while ( v24 );
  UserSessionState[10656] = 131079;
  UserSessionState[10657] = 135160;
  UserSessionState[10658] = 0x20000;
  UserSessionState[10659] = 2035711;
  LOBYTE(v4) = *(_QWORD *)(W32GetUserSessionState(v25, 0LL) + 63536) != 0LL;
  return v4;
}
