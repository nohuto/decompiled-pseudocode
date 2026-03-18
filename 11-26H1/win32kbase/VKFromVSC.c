/*
 * XREFs of VKFromVSC @ 0x14008ABB0
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14010FC20 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 *     ProcessKeyboardInjectedInput @ 0x140124B80 (ProcessKeyboardInjectedInput.c)
 * Callees:
 *     ?IsWinstaLessSession@@YA_NXZ @ 0x14003AE7C (-IsWinstaLessSession@@YA_NXZ.c)
 *     GetActiveHKL @ 0x14008B420 (GetActiveHKL.c)
 *     GetModificationNumber @ 0x1400E861C (GetModificationNumber.c)
 *     GetModifierBits @ 0x1400E863C (GetModifierBits.c)
 */

char __fastcall VKFromVSC(unsigned __int8 *a1, char a2)
{
  __int16 v3; // di
  __int16 ActiveHKL; // si
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  _DWORD *v11; // r8
  __int16 v12; // si
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  unsigned int v22; // eax
  char v23; // al
  unsigned __int8 v24; // al
  __int64 UserSessionState; // rax
  unsigned __int16 ModifierBits; // ax
  int v27; // edx
  int v28; // ecx
  __int64 ModificationNumber; // rsi
  int v30; // r8d
  unsigned int *v31; // rdx
  unsigned int v32; // eax

  v3 = 255;
  *((_WORD *)a1 + 1) = 255;
  ActiveHKL = GetActiveHKL();
  v11 = *(_DWORD **)(W32GetUserSessionState(v7, v6, v8) + 19904);
  if ( ((*v11 & 4) != 0 || IsWinstaLessSession()) && ((v12 = ActiveHKL & 0x3FF, v12 == 18) || v12 == 17) )
  {
    v23 = *a1;
    if ( *a1 == 113 || v23 == 114 )
    {
      v24 = v23 | 0x80;
      a2 = -32;
    }
    else
    {
      v24 = v23 & 0x7F;
    }
    *a1 = v24;
  }
  else
  {
    *a1 &= ~0x80u;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v10, v9, (_DWORD)v11) + 18944)
    && (v14 = *(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 18944), *(_QWORD *)(v14 + 472)) )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 18944) + 472LL) + 48LL)
                    + 32LL);
  }
  else
  {
    v16 = *(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 14056);
  }
  switch ( a2 )
  {
    case 0:
      if ( *a1 < *(_BYTE *)(v16 + 56) )
      {
        LODWORD(v18) = *a1;
        v3 = *(_WORD *)(*(_QWORD *)(v16 + 48) + 2LL * *a1);
        if ( v3 )
          goto LABEL_11;
      }
LABEL_27:
      LOBYTE(v22) = -1;
      return v22;
    case -32:
      v3 = 511;
      if ( *a1 == 42 || *a1 == 54 )
        goto LABEL_26;
      v18 = *(_QWORD *)(v16 + 64);
      break;
    case -31:
      v18 = *(_QWORD *)(v16 + 72);
      break;
    default:
      goto LABEL_27;
  }
  if ( v18 )
  {
    while ( 1 )
    {
      LODWORD(v16) = *(unsigned __int16 *)(v18 + 2);
      if ( !(_WORD)v16 )
        break;
      if ( *(_BYTE *)v18 == *a1 )
      {
        v3 = *(_WORD *)(v18 + 2);
        break;
      }
      v18 += 4LL;
    }
  }
LABEL_11:
  if ( *(_DWORD *)(W32GetUserSessionState(v18, v16, v17) + 13980) )
  {
    *(_DWORD *)(W32GetUserSessionState(v20, v19, v21) + 13980) = 0;
LABEL_26:
    LOBYTE(v22) = 0;
    return v22;
  }
  if ( v3 == 19 )
  {
    *a1 = 69;
    *(_DWORD *)(W32GetUserSessionState(v20, v19, v21) + 13980) = 1;
  }
  else if ( (v3 & 0x200) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v20, v19, v21);
    ModifierBits = GetModifierBits(&Modifiers_VK_STANDARD, UserSessionState + 14392);
    ModificationNumber = (unsigned __int16)GetModificationNumber(&Modifiers_VK_STANDARD, ModifierBits);
    if ( (_DWORD)ModificationNumber != 15 )
    {
      v31 = *(unsigned int **)(*(_QWORD *)(W32GetUserSessionState(v28, v27, v30) + 13968) + 8 * ModificationNumber);
      if ( v31 )
      {
        while ( 1 )
        {
          v32 = *v31;
          if ( !*v31 )
            break;
          if ( (_BYTE)v32 == (_BYTE)v3 )
          {
            v22 = HIWORD(v32);
            *((_WORD *)a1 + 1) = v22;
            return v22;
          }
          ++v31;
        }
      }
    }
  }
  *((_WORD *)a1 + 1) = v3;
  LOBYTE(v22) = v3;
  return v22;
}
