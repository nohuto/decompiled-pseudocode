/*
 * XREFs of RIMFindTouchDigitizerWithSize @ 0x140205AA0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectReference @ 0x1400955E0 (RawInputManagerDeviceObjectReference.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 */

void __fastcall RIMFindTouchDigitizerWithSize(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD **v5; // r14
  _QWORD *v6; // rdi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rbx
  __int64 v15; // rax

  v5 = (_QWORD **)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 136);
  v6 = *v5;
  *a2 = 0LL;
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  RIMLockExclusive(UserSessionState + 56);
  while ( v6 != v5 )
  {
    v14 = v6 - 2;
    if ( !*((_BYTE *)v6 - 5)
      && *((_DWORD *)v14 + 30) == 2
      && (*((_DWORD *)v14 + 64) & 0x80u) != 0
      && (v14[30] & 0x400) == 0
      && (unsigned int)RIMIsTouchPointerDevice(v14[66]) )
    {
      v12 = *(_QWORD *)(v13 + 140) - *a1;
      if ( !v12 )
        v12 = *(_QWORD *)(v13 + 148) - a1[1];
      if ( !v12 )
      {
        RawInputManagerDeviceObjectReference(v6 - 2);
        *a2 = v14;
        break;
      }
    }
    v6 = (_QWORD *)*v6;
  }
  v15 = W32GetUserSessionState(v12, v11, v13);
  RIMUnlockExclusive(v15 + 56);
}
