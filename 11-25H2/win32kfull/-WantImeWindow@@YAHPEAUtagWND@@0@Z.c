/*
 * XREFs of ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1401B5D5C
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14005E1E4 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall WantImeWindow(struct tagWND *a1, struct tagWND *a2)
{
  struct tagWND *v3; // rdi
  __int64 v4; // rdx
  __int16 *v5; // rcx
  __int16 v6; // bx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int16 *v10; // rcx
  __int16 v11; // bx

  v3 = a1;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent((__int64)a1, (__int64)a2) + 132, 0, 0) & 0x2000000) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 18LL) & 4) != 0 )
    return 0LL;
  v5 = *(__int16 **)(*((_QWORD *)a2 + 17) + 8LL);
  v6 = *v5;
  if ( v6 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872) + 898LL) )
    return 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v8 = *((_QWORD *)a2 + 3);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD *)(v8 + 40);
  if ( !v9 || (*(_DWORD *)(v9 + 64) & 4) != 0 )
    return 0LL;
  if ( v3 )
  {
    while ( v3 && v8 == *((_QWORD *)v3 + 3) )
    {
      if ( v3 == *(struct tagWND **)(v8 + 112) )
        return 0LL;
      v10 = *(__int16 **)(*((_QWORD *)v3 + 17) + 8LL);
      v11 = *v10;
      if ( v11 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v7) + 19872) + 898LL)
        || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v3 + 17) + 8LL) + 10LL) & 1) != 0 )
      {
        return 0LL;
      }
      v3 = (struct tagWND *)*((_QWORD *)v3 + 13);
    }
  }
  return 1LL;
}
