/*
 * XREFs of NtUserGetPointerProprietaryId @ 0x1401616B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x140161764 (-GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetPointerProprietaryId(unsigned int a1, void *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  bool PointerProprietaryId; // al
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  struct _GUID Src; // [rsp+38h] [rbp-20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v15);
  Src = 0LL;
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  PointerProprietaryId = CTouchProcessor::GetPointerProprietaryId(
                           *(CTouchProcessor **)(UserSessionState + 3256),
                           a1,
                           &Src);
  v9 = 0;
  if ( PointerProprietaryId )
  {
    RtlCopyToUser(a2, &Src, 0x10uLL);
    v9 = 1;
  }
  else
  {
    UserSetLastError(232);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v11, v10, v12, v13);
  return v9;
}
