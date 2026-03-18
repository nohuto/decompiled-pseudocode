/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1401C33B0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401C36A4 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, struct tagPOINT *a2)
{
  int v3; // ebx
  struct tagPOINT *v4; // rcx
  __int64 v5; // rsi
  struct tagPOINT *v6; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagPOINT v8; // rdi
  unsigned int v9; // eax
  _BYTE *v10; // rdx
  struct tagPOINT v13; // [rsp+90h] [rbp+18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v13 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (struct tagPOINT *)MmUserProbeAddress;
    v13 = *v6;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    v8 = 0LL;
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v5, CurrentThreadDpiAwarenessContext) )
      v8 = v13;
    TransformPointBetweenCoordinateSpaces(&v13, &v13, v5, 0LL);
    if ( DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v5 + 40) + 88LL), v13) )
    {
      v9 = W32GetCurrentThreadDpiAwarenessContext(v4);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v5, v9) )
        v13 = v8;
      v10 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v10 = (_BYTE *)MmUserProbeAddress;
      *v10 = *v10;
      v10[7] = v10[7];
      v4 = a2;
      *a2 = v13;
      v3 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
