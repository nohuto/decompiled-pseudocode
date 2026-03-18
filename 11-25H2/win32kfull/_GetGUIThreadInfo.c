/*
 * XREFs of _GetGUIThreadInfo @ 0x140194C48
 * Callers:
 *     NtUserGetGUIThreadInfo @ 0x140194B00 (NtUserGetGUIThreadInfo.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetGUIThreadInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rsi
  int v4; // ecx
  __int64 v6; // rdi
  __int64 v7; // rax
  struct tagTHREADINFO *v8; // rax
  struct tagTHREADINFO *v9; // rax
  _QWORD *v10; // rax
  int v11; // ecx
  int v12; // ecx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // ecx
  int v22; // edx
  int v23; // ecx

  v2 = a2;
  v3 = (_QWORD *)a1;
  if ( *(_DWORD *)a2 != 72 )
  {
    v4 = 87;
LABEL_3:
    UserSetLastError(v4);
    return 0LL;
  }
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 472);
  }
  else
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(0LL, a2) + 18888);
    if ( !v6 )
      return 0LL;
    v7 = *(_QWORD *)(v6 + 128);
    if ( v7 )
    {
      a1 = *(_QWORD *)(v7 + 16);
      if ( *(_QWORD *)(a1 + 472) == v6 )
      {
        v3 = *(_QWORD **)(v7 + 16);
        v8 = PtiCurrent(a1, a2);
        a1 = v3[62];
        if ( *((_QWORD *)v8 + 62) != a1 )
          goto LABEL_15;
      }
    }
  }
  if ( *(_QWORD *)(v6 + 320)
    && (v9 = PtiCurrent(a1, a2),
        a1 = *(_QWORD *)(v6 + 320),
        a2 = *(_QWORD *)(a1 + 16),
        *(_QWORD *)(a2 + 496) != *((_QWORD *)v9 + 62))
    || v3 && (a1 = *((_QWORD *)PtiCurrent(a1, a2) + 62), v3[62] != a1) )
  {
LABEL_15:
    v4 = 5;
    goto LABEL_3;
  }
  *(_DWORD *)(v2 + 4) = 0;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  if ( v3 )
  {
    a2 = v3[89];
    a1 = 0LL;
    if ( a2 && (*(_DWORD *)(a2 + 200) & 8) == 0 && *(_QWORD *)(a2 + 16) )
    {
      *(_DWORD *)(v2 + 4) = 2;
      a1 = 2LL;
      *(_QWORD *)(v2 + 40) = **(_QWORD **)(v3[89] + 16LL);
    }
    v10 = (_QWORD *)v3[81];
    if ( v10 )
    {
      if ( *v10 )
      {
        v11 = a1 | 4;
        *(_DWORD *)(v2 + 4) = v11;
        a2 = *(unsigned int *)*v10;
        if ( (a2 & 2) != 0 )
        {
          if ( (a2 & 4) == 0 )
            goto LABEL_28;
          v12 = v11 | 8;
        }
        else
        {
          v12 = v11 | 0x10;
        }
        *(_DWORD *)(v2 + 4) = v12;
LABEL_28:
        a1 = *(_QWORD *)v3[81];
        v13 = *(_QWORD **)(a1 + 8);
        if ( v13 )
          *(_QWORD *)(v2 + 32) = *v13;
      }
    }
  }
  v14 = *(_QWORD **)(v6 + 128);
  if ( v14 )
    v14 = (_QWORD *)*v14;
  *(_QWORD *)(v2 + 8) = v14;
  v15 = *(_QWORD **)(v6 + 120);
  if ( v15 )
    v15 = (_QWORD *)*v15;
  *(_QWORD *)(v2 + 16) = v15;
  v16 = *(_QWORD **)(v6 + 112);
  if ( v16 )
    v16 = (_QWORD *)*v16;
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_QWORD *)(v2 + 24) = v16;
  v17 = *(_QWORD **)(v6 + 320);
  if ( v17 )
  {
    *(_QWORD *)(v2 + 48) = *v17;
    v18 = PtiCurrent(a1, a2);
    v19 = *(_QWORD *)(v6 + 320);
    if ( *(struct tagTHREADINFO **)(v19 + 16) == v18
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 136) + 8LL) + 8LL) & 0x20) == 0 )
    {
      v23 = *(_DWORD *)(v6 + 340);
      *(_DWORD *)(v2 + 56) = v23;
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v6 + 352) + v23;
      v21 = *(_DWORD *)(v6 + 344);
      *(_DWORD *)(v2 + 60) = v21;
      v22 = *(_DWORD *)(v6 + 348);
    }
    else
    {
      v20 = *(_DWORD *)(v6 + 380);
      *(_DWORD *)(v2 + 56) = v20;
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v6 + 388) + v20;
      v21 = *(_DWORD *)(v6 + 384);
      *(_DWORD *)(v2 + 60) = v21;
      v22 = *(_DWORD *)(v6 + 392);
    }
    *(_DWORD *)(v2 + 68) = v21 + v22;
    if ( !*(_DWORD *)(v6 + 332) )
      *(_DWORD *)(v2 + 4) |= 1u;
  }
  else if ( v3 && (*(_DWORD *)(v3[58] + 12LL) & 0x4000000) != 0 )
  {
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(v3[62] + 152LL);
    *(_OWORD *)(v2 + 56) = *(_OWORD *)(v3[62] + 160LL);
  }
  else
  {
    *(_OWORD *)(v2 + 56) = 0LL;
  }
  return 1LL;
}
