/*
 * XREFs of FreeThreadsWindowHooks @ 0x1400C9110
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     FreeHook @ 0x1400C8710 (FreeHook.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1400C91F0 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 */

void __fastcall FreeThreadsWindowHooks(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rax
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbp

  v2 = PtiCurrent(a1, a2);
  v3 = v2;
  if ( v2 && *((_QWORD *)v2 + 62) )
  {
    HMAssignmentUnlock((char *)v2 + 728);
    v4 = 40LL;
    while ( 1 )
    {
      v5 = *(_QWORD *)((char *)v3 + v4 + 920);
      if ( v5 )
        break;
      v5 = *(_QWORD *)(v4 + *((_QWORD *)v3 + 63));
      if ( v5 )
        break;
LABEL_6:
      v4 += 8LL;
      if ( v4 > 160 )
      {
        *((_DWORD *)v3 + 180) = 0;
        return;
      }
    }
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 40);
      if ( v6 || (*(_DWORD *)(v5 + 64) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v5 + 64) & 1) != 0 )
          goto LABEL_13;
      }
      else
      {
        v6 = *(_QWORD *)(v4 + *((_QWORD *)v3 + 63));
      }
      UnlinkHook((struct tagHOOK *)v5);
      *(_DWORD *)(v5 + 64) |= 0x80u;
      *(_QWORD *)(v5 + 40) = 0LL;
LABEL_13:
      if ( *(struct tagTHREADINFO **)(v5 + 16) == v3 )
        FreeHook((PETHREAD **)v5);
      v5 = v6;
      if ( !v6 )
        goto LABEL_6;
    }
  }
}
