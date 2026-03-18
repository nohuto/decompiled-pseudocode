/*
 * XREFs of NtUserGetPointerDeviceOrientation @ 0x14003B7F0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetPointerDeviceOrientation(__int64 a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // esi
  __int64 v8; // r14
  int v9; // edi
  int v10; // edi
  __int64 MouseProcessor; // rax
  __int64 v13; // rax
  int Src; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  Src = 1;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  if ( a1 == -1 )
    goto LABEL_2;
  LOBYTE(v4) = 19;
  v13 = HMValidateHandleNoSecure(a1, v4);
  v5 = v13;
  if ( v13 )
  {
    if ( !*(_DWORD *)(v13 + 48) )
    {
LABEL_2:
      v9 = 1;
LABEL_3:
      v7 = 1;
      goto LABEL_4;
    }
    if ( (*(_DWORD *)(v13 + 184) & 0x80u) != 0 )
    {
      v8 = *(_QWORD *)(v13 + 456);
      goto LABEL_3;
    }
  }
LABEL_4:
  if ( v7 )
  {
    if ( v9 || *(_DWORD *)(v8 + 24) == 7 )
    {
      v10 = 1;
      MouseProcessor = anonymous_namespace_::GetMouseProcessor(v5, v4);
      if ( MouseProcessor )
        v10 = *(_DWORD *)(MouseProcessor + 3016);
      Src = v10;
    }
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 4uLL);
    v6 = 1;
  }
  else
  {
    UserSetLastError(6LL);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL);
  return v6;
}
