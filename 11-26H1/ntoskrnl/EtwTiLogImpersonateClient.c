/*
 * XREFs of EtwTiLogImpersonateClient @ 0x1409294AC
 * Callers:
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x1402563E0 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140257DB0 (EtwpTiFillProcessIdentity.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     EtwpTiFillThreadIdentity @ 0x1404A21B8 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     SeCompareTokens @ 0x140A28A40 (SeCompareTokens.c)
 *     EtwpTiFreeTokenIdentity @ 0x140AFB874 (EtwpTiFreeTokenIdentity.c)
 *     EtwpTiQueryTokenIdentity @ 0x140B192EC (EtwpTiQueryTokenIdentity.c)
 *     EtwpTiFillTokenIdentity @ 0x140B282CC (EtwpTiFillTokenIdentity.c)
 */

signed __int64 __fastcall EtwTiLogImpersonateClient(__int64 a1, __int64 a2, void *a3, void *a4)
{
  const EVENT_DESCRIPTOR *v4; // r14
  char v9; // r12
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  ULONGLONG v12; // rbx
  signed __int64 result; // rax
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // eax
  PVOID TokenInformation; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h]
  _OWORD v22[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData[36]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = &THREATINT_PROCESS_IMPERSONATION_UP;
  v23 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  TokenInformation = 0LL;
  memset(v22, 0, sizeof(v22));
  v9 = 0;
  memset(v20, 0, sizeof(v20));
  if ( EtwEventEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, &THREATINT_PROCESS_IMPERSONATION_UP)
    && EtwProviderEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, 0, 0x4000000000uLL)
    || EtwEventEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, &THREATINT_PROCESS_IMPERSONATION_DOWN)
    && EtwProviderEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, 0, 0x40000000000uLL) )
  {
    if ( !a3 )
    {
      a3 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, v10, v11);
      v9 = 1;
    }
    if ( SeQueryInformationToken(a4, TokenIntegrityLevel, (PVOID *)((char *)&TokenInformation + 4)) >= 0
      && SeQueryInformationToken(a3, TokenIntegrityLevel, &TokenInformation) >= 0 )
    {
      if ( HIDWORD(TokenInformation) < (unsigned int)TokenInformation )
      {
        v12 = 0x40000000000LL;
        v4 = &THREATINT_PROCESS_IMPERSONATION_DOWN;
      }
      else
      {
        v12 = 0x4000000000LL;
      }
      if ( EtwEventEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, v4)
        && EtwProviderEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, 0, v12)
        && (int)SeCompareTokens(a3, a4) >= 0
        && (int)EtwpTiQueryTokenIdentity(v20, a3) >= 0
        && (int)EtwpTiQueryTokenIdentity(v22, a4) >= 0 )
      {
        v14 = EtwpTiFillProcessIdentity(UserData, a1, &v19);
        v15 = EtwpTiFillThreadIdentity(&UserData[v14].Ptr, a2) + v14;
        v16 = EtwpTiFillTokenIdentity(&UserData[v15], v20) + v15;
        v17 = EtwpTiFillTokenIdentity(&UserData[v16], v22);
        EtwWrite(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, v4, 0LL, v17 + v16, UserData);
      }
    }
  }
  EtwpTiFreeTokenIdentity(v20);
  result = EtwpTiFreeTokenIdentity(v22);
  if ( v9 )
  {
    if ( a3 )
      return ObFastDereferenceObject((signed __int64 *)(a1 + 584), (ULONG_PTR)a3, 0x746C6644u);
  }
  return result;
}
