/*
 * XREFs of UpdateKeyLights @ 0x14018D000
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3EF0 (xxxChangeForegroundKeyboardTable.c)
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x140106F00 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     IsRemoteConnection @ 0x14002AFE4 (IsRemoteConnection.c)
 *     Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DA4 (Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x140213D10 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     UpdateToggleKeyAndLights @ 0x140217B90 (UpdateToggleKeyAndLights.c)
 */

void __fastcall UpdateKeyLights(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
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
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax

  v4 = 0;
  if ( (unsigned int)Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v4) = a1 != 0;
    UpdateToggleKeyAndLights(v4);
  }
  else
  {
    *(_WORD *)(W32GetUserSessionState(v3, v2) + 12854) = 0;
    if ( (*(_BYTE *)(W32GetUserSessionState(v6, v5) + 14341) & 2) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      *(_WORD *)(UserSessionState + 12854) |= 4u;
      v12 = W32GetUserSessionState(v11, v10);
      *(_BYTE *)(v12 + 14405) |= 2u;
    }
    else
    {
      v15 = W32GetUserSessionState(v8, v7);
      *(_BYTE *)(v15 + 14405) &= ~2u;
    }
    if ( (*(_BYTE *)(W32GetUserSessionState(v14, v13) + 14372) & 2) != 0 )
    {
      v18 = W32GetUserSessionState(v17, v16);
      *(_WORD *)(v18 + 12854) |= 2u;
      v21 = W32GetUserSessionState(v20, v19);
      *(_BYTE *)(v21 + 14436) |= 2u;
    }
    else
    {
      v24 = W32GetUserSessionState(v17, v16);
      *(_BYTE *)(v24 + 14436) &= ~2u;
    }
    if ( (*(_BYTE *)(W32GetUserSessionState(v23, v22) + 14372) & 8) != 0 )
    {
      v27 = W32GetUserSessionState(v26, v25);
      *(_WORD *)(v27 + 12854) |= 1u;
      v30 = W32GetUserSessionState(v29, v28);
      *(_BYTE *)(v30 + 14436) |= 8u;
    }
    else
    {
      v33 = W32GetUserSessionState(v26, v25);
      *(_BYTE *)(v33 + 14436) &= ~8u;
    }
    if ( *(_BYTE *)(W32GetUserSessionState(v32, v31) + 12824) == 7
      || (unsigned int)IsRemoteConnection() && *(_DWORD *)(W32GetUserSessionState(v37, v36) + 68840) == 7 )
    {
      if ( (*(_BYTE *)(W32GetUserSessionState(v35, v34) + 14341) & 8) != 0 )
      {
        v40 = W32GetUserSessionState(v39, v38);
        *(_WORD *)(v40 + 12854) |= 8u;
        v43 = W32GetUserSessionState(v42, v41);
        *(_BYTE *)(v43 + 14405) |= 8u;
      }
      else
      {
        v44 = W32GetUserSessionState(v39, v38);
        *(_BYTE *)(v44 + 14405) &= ~8u;
      }
    }
    if ( (unsigned int)IsRemoteConnection() )
    {
      v47 = W32GetUserSessionState(v46, v45);
      if ( a1 )
      {
        v46 = 0x8000LL;
        *(_WORD *)(v47 + 12854) |= 0x8000u;
      }
      else
      {
        v46 = 0x7FFFLL;
        *(_WORD *)(v47 + 12854) &= ~0x8000u;
      }
    }
    v48 = W32GetUserSessionState(v46, v45);
    *(_DWORD *)(v48 + 12872) |= 2u;
    v51 = W32GetUserSessionState(v50, v49);
    CKeyboardSensor::UpdateKeyboardLEDs(*(CKeyboardSensor **)(v51 + 12928));
  }
}
