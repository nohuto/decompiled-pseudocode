/*
 * XREFs of GreIsRendering @ 0x1400196C0
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 */

__int64 __fastcall GreIsRendering(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 SessionState; // rax
  __int128 v12; // kr00_16
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  int v15; // [rsp+28h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int128 v19; // [rsp+50h] [rbp-10h]

  v16 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v18 = 0LL;
  v19 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v2, v16);
  if ( !CurrentThreadWin32Thread || (v4 = *CurrentThreadWin32Thread) == 0 )
  {
    *(_QWORD *)&v19 = &v14;
    *((_QWORD *)&v19 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
    goto LABEL_13;
  }
  *(_QWORD *)&v19 = &v14;
  *((_QWORD *)&v19 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
  v5 = v4 + 8;
  if ( !v5 )
  {
LABEL_13:
    *((_QWORD *)&v18 + 1) = &v18;
    *(_QWORD *)&v18 = &v18;
    goto LABEL_7;
  }
  v6 = *(_QWORD *)(v5 + 88);
  v7 = (_QWORD *)(v5 + 88);
  if ( *(_QWORD **)(v6 + 8) != v7 )
    goto LABEL_5;
  *(_QWORD *)&v18 = v6;
  *((_QWORD *)&v18 + 1) = v7;
  *(_QWORD *)(v6 + 8) = &v18;
  *v7 = &v18;
LABEL_7:
  v8 = HmgShareLock(v16, a1, 1LL, 1LL);
  v14 = v8;
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 + 40) & 1;
    SessionState = W32GetSessionState(v9);
    HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v14);
    v12 = v18;
    v14 = 0LL;
    if ( *(__int128 **)(v18 + 8) != &v18 || **((__int128 ***)&v18 + 1) != &v18 )
LABEL_5:
      __fastfail(3u);
    **((_QWORD **)&v18 + 1) = v18;
    result = v10;
    *(_QWORD *)(v12 + 8) = *((_QWORD *)&v12 + 1);
  }
  else
  {
    PopThreadGuardedObject(&v18);
    return 0LL;
  }
  return result;
}
