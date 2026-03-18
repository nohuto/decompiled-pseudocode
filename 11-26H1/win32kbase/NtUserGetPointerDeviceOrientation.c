/*
 * XREFs of NtUserGetPointerDeviceOrientation @ 0x140156800
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetPointerDeviceOrientation(__int64 a1, void *a2)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // ebx
  int v8; // edi
  __int64 v9; // r14
  int v10; // esi
  int v11; // edi
  __int64 MouseProcessor; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  int Src; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v20);
  Src = 1;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( a1 == -1 )
    goto LABEL_2;
  LOBYTE(v4) = 19;
  v18 = HMValidateHandleNoSecure(a1, v4);
  v5 = v18;
  if ( v18 )
  {
    if ( !*(_DWORD *)(v18 + 48) )
    {
LABEL_2:
      v10 = 1;
LABEL_3:
      v8 = 1;
      goto LABEL_4;
    }
    if ( (*(_DWORD *)(v18 + 184) & 0x80u) != 0 )
    {
      v9 = *(_QWORD *)(v18 + 456);
      goto LABEL_3;
    }
  }
LABEL_4:
  if ( v8 )
  {
    if ( v10 || *(_DWORD *)(v9 + 24) == 7 )
    {
      v11 = 1;
      MouseProcessor = anonymous_namespace_::GetMouseProcessor(v5, v4, v6);
      if ( MouseProcessor )
        v11 = *(_DWORD *)(MouseProcessor + 3016);
      Src = v11;
    }
    RtlCopyToUser(a2, &Src, 4uLL);
    v7 = 1;
  }
  else
  {
    UserSetLastError(6);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v14, v13, v15, v16);
  return v7;
}
