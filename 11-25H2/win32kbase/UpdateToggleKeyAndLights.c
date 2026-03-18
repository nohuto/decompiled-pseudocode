/*
 * XREFs of UpdateToggleKeyAndLights @ 0x140217B90
 * Callers:
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x140106F00 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 *     UpdateKeyLights @ 0x14018D000 (UpdateKeyLights.c)
 * Callees:
 *     IsRemoteConnection @ 0x14002AFE4 (IsRemoteConnection.c)
 *     IoControl @ 0x140216750 (IoControl.c)
 */

void __fastcall UpdateToggleKeyAndLights(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int16 v32; // ax
  __int16 v33; // ax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = UserSessionState + 12824;
  *(_WORD *)(UserSessionState + 12854) = 0;
  if ( (*(_BYTE *)(W32GetUserSessionState(v6, v5) + 14341) & 2) != 0 )
  {
    *(_WORD *)(v4 + 30) |= 4u;
    v9 = W32GetUserSessionState(v8, v7);
    *(_BYTE *)(v9 + 14405) |= 2u;
  }
  else
  {
    v12 = W32GetUserSessionState(v8, v7);
    *(_BYTE *)(v12 + 14405) &= ~2u;
  }
  if ( (*(_BYTE *)(W32GetUserSessionState(v11, v10) + 14372) & 2) != 0 )
  {
    *(_WORD *)(v4 + 30) |= 2u;
    v15 = W32GetUserSessionState(v14, v13);
    *(_BYTE *)(v15 + 14436) |= 2u;
  }
  else
  {
    v18 = W32GetUserSessionState(v14, v13);
    *(_BYTE *)(v18 + 14436) &= ~2u;
  }
  if ( (*(_BYTE *)(W32GetUserSessionState(v17, v16) + 14372) & 8) != 0 )
  {
    *(_WORD *)(v4 + 30) |= 1u;
    v21 = W32GetUserSessionState(v20, v19);
    *(_BYTE *)(v21 + 14436) |= 8u;
  }
  else
  {
    v24 = W32GetUserSessionState(v20, v19);
    *(_BYTE *)(v24 + 14436) &= ~8u;
  }
  if ( *(_BYTE *)v4 == 7
    || (unsigned int)IsRemoteConnection() && *(_DWORD *)(W32GetUserSessionState(v26, v25) + 68840) == 7 )
  {
    if ( (*(_BYTE *)(W32GetUserSessionState(v23, v22) + 14341) & 8) != 0 )
    {
      *(_WORD *)(v4 + 30) |= 8u;
      v29 = W32GetUserSessionState(v28, v27);
      *(_BYTE *)(v29 + 14405) |= 8u;
    }
    else
    {
      v30 = W32GetUserSessionState(v28, v27);
      *(_BYTE *)(v30 + 14405) &= ~8u;
    }
  }
  if ( (unsigned int)IsRemoteConnection() )
  {
    v32 = *(_WORD *)(v4 + 30);
    if ( (v2 & 1) != 0 )
      v33 = v32 | 0x8000;
    else
      v33 = v32 & 0x7FFF;
    *(_WORD *)(v4 + 30) = v33;
  }
  IoControl((v2 & 2 | 4u) >> 1, v31);
}
