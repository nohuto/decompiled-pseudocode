/*
 * XREFs of xxxDestroyThreadDDEObject @ 0x14017D9E0
 * Callers:
 *     NtUserDdeInitialize @ 0x14017DB40 (NtUserDdeInitialize.c)
 *     NtUserCsDdeUninitialize @ 0x14021EFA0 (NtUserCsDdeUninitialize.c)
 * Callees:
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxDestroyThreadDDEObject(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *i; // rax
  _QWORD *v11; // rcx
  _QWORD *j; // rax
  struct tagWND *v13; // rbx

  if ( *(_BYTE *)(_HMPheFromObject(a2) + 24) != 9
    || (*(_BYTE *)(_HMPheFromObject(a2) + 25) & 1) != 0
    || *(_QWORD *)(_HMPkheFromObject(a2) + 8) != a1 )
  {
    return 0LL;
  }
  if ( a2 == *(_QWORD **)(W32GetUserSessionState(v5, v4) + 66680) )
  {
    v8 = a2[3];
    *(_QWORD *)(W32GetUserSessionState(v7, v6) + 66680) = v8;
  }
  else
  {
    v9 = *(_QWORD **)(W32GetUserSessionState(v7, v6) + 66680);
    for ( i = (_QWORD *)v9[3]; i != a2; i = (_QWORD *)i[3] )
      v9 = i;
    v9[3] = a2[3];
  }
  v11 = *(_QWORD **)(a1 + 664);
  if ( a2 == v11 )
  {
    *(_QWORD *)(a1 + 664) = a2[4];
  }
  else
  {
    for ( j = (_QWORD *)v11[4]; j != a2; j = (_QWORD *)j[4] )
      v11 = j;
    v11[4] = a2[4];
  }
  if ( (unsigned int)HMMarkObjectDestroy(a2) )
  {
    v13 = (struct tagWND *)a2[6];
    if ( HMAssignmentUnlock(a2 + 6) )
    {
      HMFreeObject(a2);
      xxxDestroyWindow(v13);
    }
    else
    {
      HMFreeObject(a2);
    }
  }
  return 1LL;
}
