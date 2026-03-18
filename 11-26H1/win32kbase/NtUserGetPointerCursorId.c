/*
 * XREFs of NtUserGetPointerCursorId @ 0x1401E4AF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x14004F870 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1401474F0 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(int a1, __int64 a2)
{
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  CTouchProcessor *v8; // r14
  __int64 v9; // rcx
  unsigned __int64 ThreadPointerData; // r15
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (*v16)(void); // rax
  int v17; // eax
  __int64 (*v18)(void); // rax
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  v20 = 0;
  v4 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v21);
  if ( a1 && !HIWORD(a1) && a2 )
  {
    v8 = *(CTouchProcessor **)(W32GetUserSessionState(v6, v5, v7) + 3256);
    ThreadPointerData = CTouchProcessor::GetThreadPointerData(v8, (struct _LIST_ENTRY *)(v21 + 1208), a1, 0LL, 0LL, 0LL);
    if ( !ThreadPointerData )
      goto LABEL_13;
    v11 = 0;
    v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 48);
    v16 = *(__int64 (**)(void))(v13 + 6080);
    if ( v16 )
      v17 = v16();
    else
      v17 = -1073741637;
    if ( v17 >= 0 )
    {
      v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v13) + 48);
      v18 = *(__int64 (**)(void))(v13 + 6088);
      if ( v18 )
        v11 = v18();
    }
    if ( !v11
      && !(unsigned int)CTouchProcessor::GetPointerCursorIdFromMsgData((PERESOURCE *)v8, ThreadPointerData, &v20) )
    {
LABEL_13:
      UserSetLastError(87);
      v4 = 0;
    }
    if ( v4 )
      RtlWriteULongToUser(a2, v20);
  }
  else
  {
    v4 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v14, v15);
  return v4;
}
