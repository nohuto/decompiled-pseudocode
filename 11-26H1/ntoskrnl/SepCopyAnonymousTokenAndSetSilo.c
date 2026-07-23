/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x140AB430C
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     SepGetAnonymousToken @ 0x1403B321C (SepGetAnonymousToken.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepSetServerSiloToken @ 0x140818078 (SepSetServerSiloToken.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     SepFinalizeTokenAcls @ 0x140902AEC (SepFinalizeTokenAcls.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 *     SeSetSessionIdToken @ 0x140AE5DDC (SeSetSessionIdToken.c)
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
  ObfReferenceObjectWithTag(*(PVOID *)&PspSiloMonitorLock.WaitBlockFill11[160], 0x75536553u);
  v10.SubjectSecurityContext.PrimaryToken = *(PACCESS_TOKEN *)&PspSiloMonitorLock.WaitBlockFill11[160];
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
