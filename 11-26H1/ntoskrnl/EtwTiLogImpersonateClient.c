/*
 * XREFs of EtwTiLogImpersonateClient @ 0x140904FBC
 * Callers:
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SeCompareTokens @ 0x140A3BAE0 (SeCompareTokens.c)
 *     EtwpTiFreeTokenIdentity @ 0x140AFD4F4 (EtwpTiFreeTokenIdentity.c)
 *     EtwpTiQueryTokenIdentity @ 0x140B1B73C (EtwpTiQueryTokenIdentity.c)
 *     EtwpTiFillTokenIdentity @ 0x140B2A5FC (EtwpTiFillTokenIdentity.c)
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
  if ( EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_PROCESS_IMPERSONATION_UP)
    && EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x4000000000uLL)
    || EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_PROCESS_IMPERSONATION_DOWN)
    && EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x40000000000uLL) )
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
      if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v4)
        && EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, v12)
        && (int)SeCompareTokens(a3, a4) >= 0
        && (int)EtwpTiQueryTokenIdentity(v20, a3) >= 0
        && (int)EtwpTiQueryTokenIdentity(v22, a4) >= 0 )
      {
        v14 = EtwpTiFillProcessIdentity(UserData, a1, &v19);
        v15 = EtwpTiFillThreadIdentity(&UserData[v14].Ptr, a2) + v14;
        v16 = EtwpTiFillTokenIdentity(&UserData[v15], v20) + v15;
        v17 = EtwpTiFillTokenIdentity(&UserData[v16], v22);
        EtwWrite(EtwThreatIntProvRegHandle, v4, 0LL, v17 + v16, UserData);
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
