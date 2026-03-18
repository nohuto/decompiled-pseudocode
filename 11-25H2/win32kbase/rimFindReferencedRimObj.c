/*
 * XREFs of rimFindReferencedRimObj @ 0x1401D7200
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1401E90CC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1401E9474 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x14002AA58 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFindReferencedRimObj(__int64 a1, __int64 a2, __int16 a3, _QWORD *a4)
{
  _QWORD *v5; // rdi
  __int16 v7; // r12
  unsigned int v8; // ebp
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  int v18; // eax
  int v19; // r9d
  int v20; // r8d
  NTSTATUS v21; // ebx
  __int64 v22; // rax

  v5 = 0LL;
  v7 = a2;
  v8 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 56);
  v12 = *(_QWORD **)(W32GetUserSessionState(v11, v10) + 120);
  if ( v12 == (_QWORD *)(W32GetUserSessionState(v14, v13) + 120) )
    goto LABEL_23;
  while ( 1 )
  {
    v17 = v12 - 2;
    if ( !*((_BYTE *)v12 + 64) && !*((_BYTE *)v17 + 81) && !*((_BYTE *)v17 + 10) && (v8 & *((_DWORD *)v17 + 21)) != 0 )
    {
      if ( v8 <= 0x10 )
      {
        v18 = 65814;
        if ( _bittest(&v18, v8) )
        {
          if ( *((_DWORD *)v17 + 264) )
            goto LABEL_19;
          v20 = 360;
          goto LABEL_18;
        }
      }
      if ( v8 == 32 )
        break;
    }
LABEL_12:
    v12 = (_QWORD *)*v12;
    if ( v12 == (_QWORD *)(W32GetUserSessionState(v16, v15) + 120) )
      goto LABEL_20;
  }
  if ( !(unsigned int)rimIsExplicitRimUsagesMatchingUsages((__int64)(v12 - 2), v7, a3) )
  {
    if ( v19 )
      v5 = v12 - 2;
    goto LABEL_12;
  }
  if ( !v19 )
    goto LABEL_19;
  v20 = 370;
LABEL_18:
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v20);
LABEL_19:
  v5 = v12 - 2;
LABEL_20:
  if ( !v5 )
  {
LABEL_23:
    v21 = -1073741637;
    goto LABEL_24;
  }
  v21 = ObReferenceObjectByPointer(v5, 3u, ExRawInputManagerObjectType, 1);
  if ( v21 >= 0 )
    *a4 = v5;
LABEL_24:
  v22 = W32GetUserSessionState(v16, v15);
  RIMUnlockExclusive(v22 + 56);
  return (unsigned int)v21;
}
