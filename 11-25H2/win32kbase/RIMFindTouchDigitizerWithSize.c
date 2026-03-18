/*
 * XREFs of RIMFindTouchDigitizerWithSize @ 0x1401E50C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     RawInputManagerDeviceObjectReference @ 0x1401806B0 (RawInputManagerDeviceObjectReference.c)
 */

void __fastcall RIMFindTouchDigitizerWithSize(_QWORD *a1, _QWORD *a2)
{
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rax

  v4 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 136);
  v5 = *v4;
  *a2 = 0LL;
  UserSessionState = W32GetUserSessionState(v7, v6);
  RIMLockExclusive(UserSessionState + 56);
  while ( v5 != v4 )
  {
    v11 = v5 - 2;
    if ( !*((_BYTE *)v5 - 5)
      && *((_DWORD *)v11 + 30) == 2
      && (*((_DWORD *)v11 + 64) & 0x80u) != 0
      && (v11[30] & 0x400) == 0 )
    {
      v9 = v11[66];
      if ( (unsigned int)(*(_DWORD *)(v9 + 24) - 1) <= 3 )
      {
        v10 = *(_QWORD *)(v9 + 140) - *a1;
        if ( !v10 )
          v10 = *(_QWORD *)(v9 + 148) - a1[1];
        if ( !v10 )
        {
          RawInputManagerDeviceObjectReference(v5 - 2);
          *a2 = v11;
          break;
        }
      }
    }
    v5 = (_QWORD *)*v5;
  }
  v12 = W32GetUserSessionState(v10, v9);
  RIMUnlockExclusive(v12 + 56);
}
