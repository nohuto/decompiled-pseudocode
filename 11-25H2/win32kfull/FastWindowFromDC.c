/*
 * XREFs of FastWindowFromDC @ 0x140157F0C
 * Callers:
 *     _ScrollDC @ 0x1401569D0 (_ScrollDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastWindowFromDC(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 **v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 *i; // rbx
  __int64 *v14; // rax
  __int64 ***v15; // rdi
  __int64 *v16; // rax

  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  v7 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968) + 24LL);
  if ( (_QWORD *)*v7 != v7 )
  {
    v9 = *(__int64 ***)(W32GetUserSessionState(v8, v7) + 56968);
    v10 = v9[3];
    if ( v10[2] == a1 && (v10[6] & 0x401000) == 0x1000 )
      v3 = v10[10];
    goto LABEL_3;
  }
  v9 = *(__int64 ***)(W32GetUserSessionState(v8, v7) + 56968);
  for ( i = v9[3]; ; i = (__int64 *)*i )
  {
    v9 = (__int64 **)(*(_QWORD *)(W32GetUserSessionState(v9, v10) + 56968) + 24LL);
    if ( i == (__int64 *)v9 )
      goto LABEL_3;
    if ( i[2] == a1 )
      break;
  }
  if ( (i[6] & 0x401000) == 0x1000 )
  {
    v9 = *(__int64 ***)(W32GetUserSessionState(v9, v10) + 56968);
    if ( v9[3] == i )
    {
LABEL_19:
      v3 = i[10];
      goto LABEL_3;
    }
    v14 = (__int64 *)*i;
    if ( (__int64 *)*i == i )
    {
      v15 = (__int64 ***)(i + 1);
    }
    else
    {
      if ( (__int64 *)v14[1] != i )
        goto LABEL_20;
      v15 = (__int64 ***)(i + 1);
      v9 = (__int64 **)i[1];
      if ( *v9 != i )
        goto LABEL_20;
      *v9 = v14;
      v14[1] = (__int64)v9;
    }
    v9 = (__int64 **)(*(_QWORD *)(W32GetUserSessionState(v9, v10) + 56968) + 24LL);
    v16 = *v9;
    if ( (__int64 **)(*v9)[1] == v9 )
    {
      *i = (__int64)v16;
      *v15 = v9;
      v16[1] = (__int64)i;
      *v9 = i;
      goto LABEL_19;
    }
LABEL_20:
    __fastfail(3u);
  }
LABEL_3:
  v11 = W32GetUserSessionState(v9, v10);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v11 + 56968) + 48LL));
  return v3;
}
