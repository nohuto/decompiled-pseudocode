/*
 * XREFs of NtUserGetPointerType @ 0x140087BC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ApiSetEditionGetThreadPointerHookData @ 0x14004F7EC (ApiSetEditionGetThreadPointerHookData.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x14004F970 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetPointerType(int a1, __int64 a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 ThreadPointerHookData; // r8
  __int64 v12; // r9
  CTouchProcessor *v14; // r12
  __int64 v15; // r15
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v16);
  if ( !a1 || HIWORD(a1) || !a2 )
  {
    v5 = 0;
    UserSetLastError(87);
    goto LABEL_7;
  }
  if ( a1 == 1 )
  {
    v4 = 4;
LABEL_6:
    RtlWriteULongToUser(a2, v4);
    goto LABEL_7;
  }
  v14 = *(CTouchProcessor **)(W32GetUserSessionState(v7, v6, v8) + 3256);
  v15 = v16;
  ThreadPointerHookData = ApiSetEditionGetThreadPointerHookData(v16 + 1208, a1);
  if ( !ThreadPointerHookData )
    ThreadPointerHookData = (__int64)CTouchProcessor::FindThreadPointerData(v14, (struct _LIST_ENTRY *)(v15 + 1208), a1);
  if ( !ThreadPointerHookData
    || (*(_DWORD *)(ThreadPointerHookData + 48) & 8) != 0
    || (v4 = *(_DWORD *)(ThreadPointerHookData + 20), !*(_QWORD *)(ThreadPointerHookData + 24)) )
  {
    UserSetLastError(87);
    v5 = 0;
  }
  if ( v5 )
    goto LABEL_6;
LABEL_7:
  UserSessionSwitchLeaveCritWithNonPaged(v10, v9, ThreadPointerHookData, v12);
  return v5;
}
