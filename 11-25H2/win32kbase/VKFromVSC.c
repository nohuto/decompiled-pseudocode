/*
 * XREFs of VKFromVSC @ 0x1401174C0
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14005DEB0 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 *     ProcessKeyboardInjectedInput @ 0x1400FBA78 (ProcessKeyboardInjectedInput.c)
 * Callees:
 *     ?IsWinstaLessSession@@YA_NXZ @ 0x14004A1F4 (-IsWinstaLessSession@@YA_NXZ.c)
 *     GetActiveHKL @ 0x1400670C0 (GetActiveHKL.c)
 *     GetModifierBits @ 0x1400F09F0 (GetModifierBits.c)
 *     GetModificationNumber @ 0x14010F83C (GetModificationNumber.c)
 */

char __fastcall VKFromVSC(unsigned __int8 *a1, __int64 a2)
{
  char v2; // bp
  __int16 v3; // di
  __int16 ActiveHKL; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  char v17; // cl
  __int64 UserSessionState; // rax
  unsigned __int16 ModifierBits; // ax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 ModificationNumber; // rsi
  unsigned int *v23; // rdx
  unsigned int v24; // eax

  v2 = a2;
  v3 = 255;
  *((_WORD *)a1 + 1) = 255;
  ActiveHKL = GetActiveHKL((__int64)a1, a2);
  if ( ((**(_DWORD **)(W32GetUserSessionState(v7, v6) + 19872) & 4) != 0 || IsWinstaLessSession())
    && (unsigned __int16)((ActiveHKL & 0x3FF) - 17) <= 1u )
  {
    v17 = *a1;
    if ( (unsigned __int8)(*a1 - 113) <= 1u )
    {
      LOBYTE(v9) = v17 | 0x80;
      v2 = -32;
    }
    else
    {
      LOBYTE(v9) = v17 & 0x7F;
    }
    *a1 = v9;
  }
  else
  {
    *a1 &= ~0x80u;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18904)
    && (v11 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18904), *(_QWORD *)(v11 + 480)) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 18904) + 480LL) + 48LL)
                    + 32LL);
  }
  else
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 14064);
  }
  switch ( v2 )
  {
    case 0:
      if ( *a1 < *(_BYTE *)(v12 + 56) )
      {
        v13 = *a1;
        v3 = *(_WORD *)(*(_QWORD *)(v12 + 48) + 2 * v13);
        if ( v3 )
          goto LABEL_10;
      }
LABEL_26:
      LOBYTE(v16) = -1;
      return v16;
    case -32:
      v3 = 511;
      if ( *a1 == 42 || *a1 == 54 )
        goto LABEL_25;
      v13 = *(_QWORD *)(v12 + 64);
      break;
    case -31:
      v13 = *(_QWORD *)(v12 + 72);
      break;
    default:
      goto LABEL_26;
  }
  if ( v13 )
  {
    while ( 1 )
    {
      v12 = *(unsigned __int16 *)(v13 + 2);
      if ( !(_WORD)v12 )
        break;
      if ( *(_BYTE *)v13 == *a1 )
      {
        v3 = *(_WORD *)(v13 + 2);
        break;
      }
      v13 += 4LL;
    }
  }
LABEL_10:
  if ( *(_DWORD *)(W32GetUserSessionState(v13, v12) + 13988) )
  {
    *(_DWORD *)(W32GetUserSessionState(v15, v14) + 13988) = 0;
LABEL_25:
    LOBYTE(v16) = 0;
    return v16;
  }
  if ( v3 == 19 )
  {
    *a1 = 69;
    *(_DWORD *)(W32GetUserSessionState(v15, v14) + 13988) = 1;
  }
  else if ( (v3 & 0x200) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v15, v14);
    ModifierBits = GetModifierBits((unsigned __int8 **)&Modifiers_VK_STANDARD, UserSessionState + 14400);
    ModificationNumber = (unsigned __int16)GetModificationNumber((__int64)&Modifiers_VK_STANDARD, ModifierBits);
    if ( (_DWORD)ModificationNumber != 15 )
    {
      v23 = *(unsigned int **)(*(_QWORD *)(W32GetUserSessionState(v21, v20) + 13976) + 8 * ModificationNumber);
      if ( v23 )
      {
        while ( 1 )
        {
          v24 = *v23;
          if ( !*v23 )
            break;
          if ( (_BYTE)v24 == (_BYTE)v3 )
          {
            v16 = HIWORD(v24);
            *((_WORD *)a1 + 1) = v16;
            return v16;
          }
          ++v23;
        }
      }
    }
  }
  *((_WORD *)a1 + 1) = v3;
  LOBYTE(v16) = v3;
  return v16;
}
