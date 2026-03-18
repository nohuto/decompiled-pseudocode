/*
 * XREFs of ValidateHmonitor @ 0x14003F8A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHmonitor(__int64 a1, __int64 a2)
{
  __int16 v2; // edi^2
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  __int16 v14; // di
  __int64 v15; // rsi
  __int64 result; // rax

  v2 = WORD1(a1);
  v3 = (unsigned __int16)a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  if ( v3 >= *(_QWORD *)(v4 + 8) )
    goto LABEL_9;
  UserSessionState = W32GetUserSessionState(v5, v4);
  v9 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v8, v7) + 19896) * v3);
  v10 = v9 + *(_QWORD *)(UserSessionState + 19888);
  v12 = W32GetUserSessionState(v9, v11);
  v13 = *(_QWORD *)(v12 + 19832);
  v14 = v2 & 0x7FFF;
  v15 = 5LL * (unsigned int)((v10 - *(_QWORD *)(v12 + 19888)) >> 5);
  if ( (v2 & 0x7FFF) != *(_WORD *)(v10 + 26) && v14 != 0x7FFF && (v14 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_9;
  if ( (*(_BYTE *)(v10 + 25) & 1) != 0 || *(_BYTE *)(v10 + 24) != 12 || (result = *(_QWORD *)(v13 + 8 * v15)) == 0 )
  {
LABEL_9:
    UserSetLastError(1461);
    return 0LL;
  }
  return result;
}
