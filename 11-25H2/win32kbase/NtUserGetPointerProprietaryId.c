/*
 * XREFs of NtUserGetPointerProprietaryId @ 0x140170FB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1401295A8 (-GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetPointerProprietaryId(unsigned __int16 a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  char PointerProprietaryId; // al
  int v8; // ebx
  __int64 v9; // rdx
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF
  struct _GUID Src; // [rsp+40h] [rbp-28h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(v11, 1LL);
  Src = 0LL;
  UserSessionState = W32GetUserSessionState(v5, v4);
  PointerProprietaryId = CTouchProcessor::GetPointerProprietaryId(
                           *(CTouchProcessor **)(UserSessionState + 3256),
                           a1,
                           &Src);
  v8 = 0;
  if ( PointerProprietaryId )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 0x10uLL);
    v8 = 1;
  }
  else
  {
    UserSetLastError(232);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v9);
  return v8;
}
