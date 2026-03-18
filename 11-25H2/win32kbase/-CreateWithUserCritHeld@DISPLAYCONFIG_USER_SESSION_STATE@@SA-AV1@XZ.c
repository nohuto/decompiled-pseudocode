/*
 * XREFs of ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x14006BDEC
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1401700F0 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x140172D30 (NtUserQueryDisplayConfig.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x14006BE78 (DrvIsWddmDriverPresent.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x14006BED0 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 __fastcall DISPLAYCONFIG_USER_SESSION_STATE::CreateWithUserCritHeld(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  bool v10; // zf

  if ( !*(_WORD *)(W32GetUserSessionState(a1, a2) + 68752)
    || (v10 = (unsigned int)UserRemoteConnectedSessionUsingWddm() == 0, v3 = 0, !v10) )
  {
    v3 = 1;
  }
  *(_BYTE *)a1 = v3;
  *(_BYTE *)(a1 + 1) = (unsigned int)UserRemoteConnectedSessionUsingWddm() != 0;
  UserSessionState = W32GetUserSessionState(v5, v4);
  v7 = *(_QWORD *)(UserSessionState + 57016);
  v8 = (_DWORD *)(v7 + 4);
  if ( !*(_BYTE *)(v7 + 8) )
    v8 = *(_DWORD **)(UserSessionState + 57016);
  *(_DWORD *)(a1 + 4) = *v8;
  *(_BYTE *)(a1 + 8) = (unsigned int)DrvIsWddmDriverPresent() != 0;
  return a1;
}
