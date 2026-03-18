/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1400A21E4
 * Callers:
 *     HMValidateHandleWithDescriptor @ 0x1400A1BA0 (HMValidateHandleWithDescriptor.c)
 *     ValidateHandleSecure @ 0x1400A1F30 (ValidateHandleSecure.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x14010D040 (EtwTraceUIPIHandleValidationError.c)
 *     ?CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z @ 0x1401A8A90 (-CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v8; // rbp
  __int16 v9; // ax
  __int64 v10; // rdi
  const struct tagUIPI_INFO *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(UserSessionState + 19832);
  v5 = 5LL * (unsigned int)(((__int64)a1 - *(_QWORD *)(UserSessionState + 19888)) >> 5);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v6);
  v8 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    return 1LL;
  v9 = *((_WORD *)&unk_14024703C + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v9 & 2) != 0 )
  {
    v10 = *(_QWORD *)(v4 + 8 * v5 + 8);
  }
  else
  {
    if ( (v9 & 1) == 0 )
      return 1LL;
    v15 = *(_QWORD *)(v4 + 8 * v5 + 8);
    if ( !v15 )
      return 1LL;
    v10 = *(_QWORD *)(v15 + 464);
  }
  if ( !v10
    || *(_QWORD *)v10 == *(_QWORD *)(W32GetUserGdiSessionState() + 40)
    || UIPrivilegeIsolation::CheckAccess(
         (UIPrivilegeIsolation *)(v8 + 108),
         (const struct tagUIPI_INFO *)(v10 + 864),
         v11) )
  {
    return 1LL;
  }
  v16 = *((unsigned __int8 *)a1 + 24);
  v17 = W32GetUserSessionState(v13, v12);
  EtwTraceUIPIHandleValidationError(
    v8,
    v10,
    **(_QWORD **)(*(_QWORD *)(v17 + 19832) + 40LL * (unsigned int)(((__int64)a1 - *(_QWORD *)(v17 + 19888)) >> 5)),
    v16);
  UserSetLastError(5);
  return 0LL;
}
