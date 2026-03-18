/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x140AB2F6C
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140AB2A30 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     SepGetAnonymousToken @ 0x1403C9F7C (SepGetAnonymousToken.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SepSetServerSiloToken @ 0x14081221C (SepSetServerSiloToken.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     SepFinalizeTokenAcls @ 0x140926FDC (SepFinalizeTokenAcls.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     SeCreateAccessState @ 0x140A10980 (SeCreateAccessState.c)
 *     SeSetSessionIdToken @ 0x140AE7F2C (SeSetSessionIdToken.c)
 */

__int64 __fastcall SepCopyAnonymousTokenAndSetSilo(__int64 a1, PVOID *a2)
{
  int AnonymousToken; // esi
  char *v5; // rdi
  ULONG ServerSiloServiceSessionId; // eax
  int v7; // edi
  PACCESS_TOKEN Token; // [rsp+40h] [rbp-1B8h] BYREF
  struct _ACCESS_STATE v10; // [rsp+50h] [rbp-1A8h] BYREF
  _QWORD v11[28]; // [rsp+F0h] [rbp-108h] BYREF

  Token = 0LL;
  AnonymousToken = SepGetAnonymousToken(0LL, &Token);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  memset_0(&v10, 0, sizeof(v10));
  memset_0(v11, 0, sizeof(v11));
  v5 = (char *)Token;
  SeCreateAccessState(
    &v10,
    v11,
    0LL,
    (struct _KLOCK_ENTRIES *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Token - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Token - 48) >> 8)]
                            + 76));
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
    (ULONG_PTR)v10.SubjectSecurityContext.PrimaryToken,
    0x75536553u);
  ObfReferenceObjectWithTag(PspSiloMonitorLock.WaitBlock[3].Thread, 0x75536553u);
  v10.SubjectSecurityContext.PrimaryToken = PspSiloMonitorLock.WaitBlock[3].Thread;
  AnonymousToken = ObInsertObjectEx(v5, &v10, 0, 0, 0, 0LL, 0LL);
  SeDeleteAccessState((__int64)&v10);
  if ( AnonymousToken < 0 )
  {
LABEL_8:
    *a2 = 0LL;
    return (unsigned int)AnonymousToken;
  }
  else
  {
    SepFinalizeTokenAcls(v5);
    *a2 = v5;
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a1);
    if ( ServerSiloServiceSessionId != -1 && (v7 = SeSetSessionIdToken(v5, ServerSiloServiceSessionId), v7 < 0)
      || (v7 = SepSetServerSiloToken((__int64)*a2, a1), v7 < 0) )
    {
      ObfDereferenceObject(*a2);
      *a2 = 0LL;
    }
    return (unsigned int)v7;
  }
}
