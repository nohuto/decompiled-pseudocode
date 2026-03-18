/*
 * XREFs of rimFindReferencedRimObj @ 0x1401FE4CC
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1402083FC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1402087A4 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x14007966C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFindReferencedRimObj(unsigned int a1, int a2, int a3, _QWORD *a4)
{
  _QWORD *v5; // rdi
  __int16 v6; // r15
  __int16 v7; // r12
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  _QWORD *i; // rsi
  int v16; // r8d
  _QWORD *v17; // rbx
  int v18; // eax
  int v19; // r9d
  int v20; // r8d
  NTSTATUS v21; // ebx
  __int64 v22; // rax

  v5 = 0LL;
  v6 = a3;
  v7 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 56);
  for ( i = *(_QWORD **)(W32GetUserSessionState(v11, v10, v12) + 120);
        i != (_QWORD *)(W32GetUserSessionState(v14, v13, v16) + 120);
        i = (_QWORD *)*i )
  {
    v17 = i - 2;
    if ( !*((_BYTE *)i + 64) && !*((_BYTE *)v17 + 81) && !*((_BYTE *)v17 + 10) && (a1 & *((_DWORD *)v17 + 21)) != 0 )
    {
      if ( a1 <= 0x10 )
      {
        v18 = 65814;
        if ( _bittest(&v18, a1) )
        {
          if ( !*((_DWORD *)v17 + 264) )
          {
            v20 = 360;
            goto LABEL_18;
          }
LABEL_19:
          v5 = i - 2;
          break;
        }
      }
      if ( a1 == 32 )
      {
        if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages((__int64)(i - 2), v7, v6) )
        {
          if ( v19 )
          {
            v20 = 370;
LABEL_18:
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, v20);
          }
          goto LABEL_19;
        }
        if ( v19 )
          v5 = i - 2;
      }
    }
  }
  if ( v5 )
  {
    v21 = ObReferenceObjectByPointer(v5, 3u, ExRawInputManagerObjectType, 1);
    if ( v21 >= 0 )
      *a4 = v5;
  }
  else
  {
    v21 = -1073741637;
  }
  v22 = W32GetUserSessionState(v14, v13, v16);
  RIMUnlockExclusive(v22 + 56);
  return (unsigned int)v21;
}
