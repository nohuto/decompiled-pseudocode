/*
 * XREFs of NtUserValidateTimerCallback @ 0x140145110
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserValidateTimerCallback(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD **v9; // r9
  _QWORD *i; // r8
  HANDLE v12; // rbx
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = 1LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v4, v3);
  if ( CurrentThreadNonPaged )
    v8 = *CurrentThreadNonPaged;
  else
    v8 = 0LL;
  if ( *(_DWORD *)(v8 + 672) > 0x501u
    || (*(_DWORD *)(v8 + 688) & 0x1000000) == 0
    || (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 528), 0, 0) & 0xC) != 0
    || (v12 = *(HANDLE *)(W32GetUserSessionState(v7, v6) + 63544), PsGetProcessId(**(PEPROCESS **)(v8 + 464)) == v12) )
  {
    v9 = (_QWORD **)(W32GetUserSessionState(v7, v6) + 57544);
    for ( i = *v9; i != v9; i = (_QWORD *)*i )
    {
      v7 = *(_QWORD *)(v8 + 464);
      if ( *(_QWORD *)(*(i - 6) + 464LL) == v7 && (*(_DWORD *)(i - 3) & 6) == 0 && *(i - 5) == a1 )
        goto LABEL_13;
    }
    v2 = 0LL;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
