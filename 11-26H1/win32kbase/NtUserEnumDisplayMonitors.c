/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x140199A90
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceEnumDisplayMonitors @ 0x14000B3E0 (EtwTraceEnumDisplayMonitors.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(
        HDC a1,
        void *Src,
        __int64 (__fastcall *a3)(__int64, __int64, struct tagRECT *, __int64),
        __int64 a4)
{
  LONG *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v20; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+50h] [rbp-48h] BYREF
  __int128 *v22; // [rsp+60h] [rbp-38h]

  v21 = 0LL;
  v8 = 0LL;
  EtwTraceEnumDisplayMonitors(a1 != 0LL, Src != 0LL);
  EnterLeaveCritShared::EnterLeaveCritShared(&v20);
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v9) + 32) )
  {
    if ( Src )
    {
      v20 = 0LL;
      RtlCopyFromUser(&v20, Src, 0x10uLL);
      v21 = v20;
      v8 = (LONG *)&v21;
      v22 = &v21;
    }
    v14 = (int)xxxEnumDisplayMonitors(a1, v8, a3, a4, 0);
    UserSessionSwitchLeaveCritWithNonPaged(v16, v15, v17, v18);
    return v14;
  }
  else
  {
    UserSessionSwitchLeaveCritWithNonPaged(v11, v10, v12, v13);
    return 0LL;
  }
}
