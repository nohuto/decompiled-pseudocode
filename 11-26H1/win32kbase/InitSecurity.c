/*
 * XREFs of InitSecurity @ 0x1402F408C
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     AllocAce @ 0x140108680 (AllocAce.c)
 *     CreateSecurityDescriptor @ 0x14012DC70 (CreateSecurityDescriptor.c)
 */

__int64 InitSecurity()
{
  PSID SeWorldSid; // rbp
  ULONG v1; // r14d
  int v2; // ecx
  __int64 v3; // rax
  unsigned int v4; // edi
  void *v5; // rbx
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rsi
  void *v11; // rax
  char *v12; // rax
  char *v13; // rcx
  void *v15; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rbp
  struct _ACL *SecurityDescriptor; // rbx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  _DWORD *UserSessionState; // rax
  __int64 v33; // rdx
  _DWORD *v34; // rcx
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
  v10 = v6;
  if ( !v6 )
    goto LABEL_5;
  v11 = (void *)AllocAce(v6, 0, 9, 0x10000000, SeExports->SeWorldSid, &AceListLength);
  v5 = v11;
  if ( !v11 )
    goto LABEL_11;
  v12 = (char *)AllocAce(v11, 0, 9, 0x10000000, SeExports->SeRestrictedSid, &AceListLength);
  v10 = v12;
  if ( !v12 )
  {
LABEL_5:
    v13 = (char *)v5;
LABEL_6:
    GreDeleteFastMutex(v13, v7, v8, v9);
    return 0LL;
  }
  v15 = (void *)AllocAce(v12, 0, 0, 5, SeExports->SeAliasAdminsSid, &AceListLength);
  v5 = v15;
  if ( !v15 )
    goto LABEL_11;
  v16 = (char *)AllocAce(v15, 0, 0, 2, SeExports->SeWorldSid, &AceListLength);
  v10 = v16;
  if ( !v16 )
    goto LABEL_5;
  v17 = (char *)AllocAce(v16, 0, 0, 2, SeExports->SeRestrictedSid, &AceListLength);
  v18 = v17;
  if ( !v17 )
  {
LABEL_11:
    v13 = v10;
    goto LABEL_6;
  }
  SecurityDescriptor = CreateSecurityDescriptor(v17, AceListLength, 0);
  *(_QWORD *)(W32GetUserSessionState(v21, v20, v22) + 63528) = SecurityDescriptor;
  GreDeleteFastMutex(v18, v23, v24, v25);
  W32GetUserSessionState(v27, v26, v28);
  UserSessionState = (_DWORD *)W32GetUserSessionState(v30, v29, v31);
  v33 = 24LL;
  v34 = UserSessionState + 10655;
  do
  {
    *(v34 - 1) = 0x20000;
    *v34 = 0x20000;
    v34[1] = 0x20000;
    v34[2] = 2031616;
    v34 += 4;
    --v33;
  }
  while ( v33 );
  UserSessionState[10662] = 131079;
  UserSessionState[10663] = 135160;
  UserSessionState[10664] = 0x20000;
  UserSessionState[10665] = 2035711;
  LOBYTE(v4) = *(_QWORD *)(W32GetUserSessionState((_DWORD)v34, 0, 0x20000) + 63528) != 0LL;
  return v4;
}
