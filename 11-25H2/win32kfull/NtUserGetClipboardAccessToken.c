/*
 * XREFs of NtUserGetClipboardAccessToken @ 0x140201290
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserGetClipboardAccessToken(_QWORD *a1, ACCESS_MASK a2)
{
  BOOL v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  const struct tagUIPI_INFO *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rcx
  ULONG64 v12; // rcx
  void *Handle; // [rsp+48h] [rbp-40h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h] BYREF
  _DWORD v16[4]; // [rsp+68h] [rbp-20h] BYREF

  v16[0] = 0x2000;
  v16[1] = -1;
  v16[2] = 0;
  v4 = 0;
  Handle = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  v7 = PtiCurrent(v6, v5);
  if ( UIPrivilegeIsolation::CheckAccess(
         (UIPrivilegeIsolation *)(*((_QWORD *)v7 + 58) + 864LL),
         (const struct tagUIPI_INFO *)v16,
         v8)
    && (v11 = *(void **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v10, v9) + 62) + 40LL) + 160LL)) != 0LL )
  {
    v4 = ObOpenObjectByPointer(v11, 0, 0LL, a2, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = Handle;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v12);
  return v4;
}
