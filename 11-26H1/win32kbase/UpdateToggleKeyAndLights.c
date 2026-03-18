/*
 * XREFs of UpdateToggleKeyAndLights @ 0x1401B0C10
 * Callers:
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x140217770 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 *     UpdateKeyLights @ 0x14021CBA0 (UpdateKeyLights.c)
 * Callees:
 *     IsRemoteConnection @ 0x14007E9B8 (IsRemoteConnection.c)
 *     IoControl @ 0x1401C4530 (IoControl.c)
 */

__int64 __fastcall UpdateToggleKeyAndLights(int a1, int a2, int a3)
{
  char v3; // di
  __int64 UserSessionState; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rcx
  int v30; // r8d
  __int64 v31; // rax
  int v32; // edx
  int v33; // r8d
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rax
  __int16 v39; // ax
  __int16 v40; // ax

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_WORD *)(UserSessionState + 12854) = 0;
  if ( (*(_BYTE *)(W32GetUserSessionState(v6, v5, v7) + 14333) & 2) != 0 )
  {
    *(_WORD *)(UserSessionState + 12854) |= 4u;
    v11 = W32GetUserSessionState(v9, v8, v10);
    *(_BYTE *)(v11 + 14397) |= 2u;
  }
  else
  {
    v15 = W32GetUserSessionState(v9, v8, v10);
    *(_BYTE *)(v15 + 14397) &= ~2u;
  }
  if ( (*(_BYTE *)(W32GetUserSessionState(v13, v12, v14) + 14364) & 2) != 0 )
  {
    *(_WORD *)(UserSessionState + 12854) |= 2u;
    v19 = W32GetUserSessionState(v17, v16, v18);
    *(_BYTE *)(v19 + 14428) |= 2u;
  }
  else
  {
    v23 = W32GetUserSessionState(v17, v16, v18);
    *(_BYTE *)(v23 + 14428) &= ~2u;
  }
  if ( (*(_BYTE *)(W32GetUserSessionState(v21, v20, v22) + 14364) & 8) != 0 )
  {
    *(_WORD *)(UserSessionState + 12854) |= 1u;
    v27 = W32GetUserSessionState(v25, v24, v26);
    *(_BYTE *)(v27 + 14428) |= 8u;
  }
  else
  {
    v31 = W32GetUserSessionState(v25, v24, v26);
    *(_BYTE *)(v31 + 14428) &= ~8u;
  }
  if ( *(_BYTE *)(UserSessionState + 12824) == 7
    || (unsigned int)IsRemoteConnection(v29) && *(_DWORD *)(W32GetUserSessionState(v29, v32, v33) + 68832) == 7 )
  {
    if ( (*(_BYTE *)(W32GetUserSessionState(v29, v28, v30) + 14333) & 8) != 0 )
    {
      *(_WORD *)(UserSessionState + 12854) |= 8u;
      v37 = W32GetUserSessionState(v35, v34, v36);
      *(_BYTE *)(v37 + 14397) |= 8u;
    }
    else
    {
      v38 = W32GetUserSessionState(v35, v34, v36);
      *(_BYTE *)(v38 + 14397) &= ~8u;
    }
  }
  if ( (unsigned int)IsRemoteConnection(v29) )
  {
    v39 = *(_WORD *)(UserSessionState + 12854);
    if ( (v3 & 1) != 0 )
      v40 = v39 | 0x8000;
    else
      v40 = v39 & 0x7FFF;
    *(_WORD *)(UserSessionState + 12854) = v40;
  }
  return IoControl((v3 & 2 | 4u) >> 1);
}
