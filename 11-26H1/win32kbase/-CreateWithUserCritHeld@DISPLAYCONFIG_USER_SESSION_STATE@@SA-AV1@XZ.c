/*
 * XREFs of ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x1400FB568
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1400FA930 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x1400FB0F0 (NtUserQueryDisplayConfig.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1400293F0 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 __fastcall DISPLAYCONFIG_USER_SESSION_STATE::CreateWithUserCritHeld(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // bl
  bool v9; // zf
  char v10; // al
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  __int64 i; // rdx
  __int64 result; // rax
  __int64 UserSessionState; // rax

  v8 = 1;
  if ( !*(_WORD *)(W32GetUserSessionState(a1, a2, a3) + 68744)
    || (v9 = (unsigned int)UserRemoteConnectedSessionUsingWddm(v5, v4, v6, v7) == 0, v10 = 0, !v9) )
  {
    v10 = 1;
  }
  *(_BYTE *)a1 = v10;
  if ( !*(_WORD *)(W32GetUserSessionState(v5, v4, v6) + 68744)
    || (UserSessionState = W32GetUserSessionState(v12, v11, v13),
        v12 = 0xFFFF,
        *(_WORD *)(UserSessionState + 68744) == 0xFFFF)
    || (v9 = *(_DWORD *)(W32GetUserSessionState(0xFFFF, v11, v13) + 68696) == 0, v14 = 1, v9) )
  {
    v14 = 0;
  }
  *(_BYTE *)(a1 + 1) = v14;
  v15 = W32GetUserSessionState(v12, v11, v13);
  v16 = *(_QWORD *)(v15 + 57008);
  v17 = (_DWORD *)(v16 + 4);
  if ( !*(_BYTE *)(v16 + 8) )
    v17 = *(_DWORD **)(v15 + 57008);
  *(_DWORD *)(a1 + 4) = *v17;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v17) + 88) + 1184LL); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
      goto LABEL_11;
  }
  v8 = 0;
LABEL_11:
  result = a1;
  *(_BYTE *)(a1 + 8) = v8;
  return result;
}
