/*
 * XREFs of ?UserCheckForMessageAccessWithWindowCapability@@YAHPEAUtagWND@@I@Z @ 0x140159300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserCheckForMessageAccessWithWindowCapability(struct tagWND *a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  PVOID v9; // rdi
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-9h] BYREF
  _OWORD Buffer[2]; // [rsp+70h] [rbp+17h] BYREF
  __int128 v12; // [rsp+90h] [rbp+37h]
  int AccessStatus; // [rsp+C0h] [rbp+67h] BYREF
  DWORD GrantedAccess; // [rsp+D0h] [rbp+77h] BYREF

  v3 = 0;
  LOWORD(v5) = 0;
  if ( a1 )
    v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 19864);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GrantedAccess = 0;
  AccessStatus = 0;
  v7 = *(_QWORD *)(v6 + 40LL * (unsigned __int16)v5 + 24);
  if ( !v7 )
    return 0LL;
  v12 = 0LL;
  DWORD2(v12) = a2;
  memset(Buffer, 0, sizeof(Buffer));
  v9 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v7 + 40), Buffer);
  if ( !v9 )
    return 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v3) = SeAccessCheck(
                 v9,
                 &SubjectContext,
                 0,
                 0x10001u,
                 0,
                 0LL,
                 (PGENERIC_MAPPING)&WinMsgCapGenericMapping,
                 1,
                 &GrantedAccess,
                 &AccessStatus) != 0;
  SeReleaseSubjectContext(&SubjectContext);
  return v3;
}
