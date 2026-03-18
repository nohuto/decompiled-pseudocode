/*
 * XREFs of NtUserSetTargetForResourceBrokering @ 0x1402A0400
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetTargetForResourceBrokering(int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct tagTHREADINFO *v9; // rsi
  __int64 v10; // rbp
  int v11; // ecx
  __int64 v12; // rax
  __int64 *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rcx

  EnterCrit(0LL, 0LL);
  v6 = PtiCurrent(v5, v4);
  v8 = 0LL;
  v9 = v6;
  v10 = 0LL;
  if ( a1 )
    goto LABEL_2;
  LOBYTE(v7) = *(_BYTE *)(*((_QWORD *)v6 + 58) + 808LL) & 0x30;
  if ( (_BYTE)v7 != 16 )
  {
LABEL_5:
    v11 = 5;
    goto LABEL_3;
  }
  if ( !a2 )
    goto LABEL_13;
  v12 = PtiFromThreadId(a2);
  v10 = v12;
  if ( v12 )
  {
    if ( (struct tagTHREADINFO *)v12 == v9 )
    {
      v13 = (__int64 *)((char *)v9 + 1680);
      v14 = (_QWORD *)((char *)v9 + 1680);
      goto LABEL_14;
    }
    v15 = *(_QWORD *)(v12 + 464);
    if ( (*(_BYTE *)(v15 + 808) & 0x30) != 0x10
      || !(unsigned __int8)PsIsWin32KFilterEnabledForProcess(*(_QWORD *)v15)
      && !(unsigned __int8)PsIsWin32KFilterAuditEnabledForProcess(**(_QWORD **)(v10 + 464)) )
    {
      goto LABEL_5;
    }
LABEL_13:
    v13 = (__int64 *)((char *)v9 + 1680);
    v14 = (_QWORD *)((char *)v9 + 1680);
    if ( v10 )
    {
      *((_QWORD *)v9 + 170) |= 0x8000000uLL;
      *v13 = v10;
      *(_QWORD *)(v10 + 1360) &= ~0x8000000uLL;
      *(_QWORD *)(v10 + 1680) = v9;
LABEL_18:
      v8 = 1LL;
      goto LABEL_19;
    }
LABEL_14:
    v7 = *v13;
    if ( *v13 )
    {
      *(_QWORD *)(v7 + 1680) = 0LL;
      *v14 = 0LL;
    }
    *((_QWORD *)v9 + 170) &= ~0x8000000uLL;
    goto LABEL_18;
  }
LABEL_2:
  v11 = 87;
LABEL_3:
  UserSetLastError(v11);
LABEL_19:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
