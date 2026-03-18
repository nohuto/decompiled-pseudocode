/*
 * XREFs of ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x140217850
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     ApiSetEditionIsHotKey @ 0x140225938 (ApiSetEditionIsHotKey.c)
 */

void __fastcall LowLevelHexNumpad(__int64 a1, __int64 a2, int a3, __int16 a4)
{
  unsigned int v5; // ebp
  __int64 v7; // r14
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  char v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int16 v18; // di
  __int64 v19; // rdx
  __int64 UserSessionState; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int16 v23; // r15
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ecx

  v5 = (unsigned __int8)a2;
  v7 = (unsigned __int16)a1;
  v8 = (char *)(W32GetUserSessionState(a1, a2) + 14704);
  if ( (*(_BYTE *)(W32GetUserSessionState(v10, v9) + 14340) & 0x10) == 0 )
  {
    v13 = *v8;
    if ( (*v8 & 1) == 0 )
      return;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v13 = *v8;
    if ( (*v8 & 1) != 0 || (_DWORD)v7 == 78 || (_DWORD)v7 == 83 )
    {
      if ( (a4 & 0x100) != 0 )
      {
LABEL_3:
        *v8 = v13 & 0xFE;
        return;
      }
      v14 = *(_BYTE *)(W32GetUserSessionState(v12, v11) + 14340) & 0x10;
      LOBYTE(v17) = *(_BYTE *)(W32GetUserSessionState(v16, v15) + 14340) & 1;
      v18 = (unsigned __int8)v17;
      UserSessionState = W32GetUserSessionState(v17, v19);
      v22 = 65526LL;
      v23 = v18 | (v14 != 0 ? 4 : 0) | (2 * (*(_BYTE *)(UserSessionState + 14341) & 4));
      if ( ((v23 - 4) & 0xFFF6) != 0 )
      {
        *v8 &= ~1u;
      }
      else
      {
        LOBYTE(v22) = *v8;
        if ( (*v8 & 1) != 0 )
        {
          if ( ((unsigned __int16)(v7 - 71) > 0xBu || aVkNumpad[v7 - 71] == 0xFF)
            && (unsigned __int8)(v5 - 65) > 5u
            && (unsigned __int8)(v5 - 48) > 9u )
          {
            *v8 = v22 & 0xFE;
          }
        }
        else
        {
          v24 = (4 * (v23 & 1)) | ((*(_BYTE *)(W32GetUserSessionState(v22, v21) + 14340) & 4 | 2u) >> 1);
          if ( (*(_BYTE *)(W32GetUserSessionState(v26, v25) + 14358) & 0x40) != 0
            || (*(_BYTE *)(W32GetUserSessionState(v28, v27) + 14359) & 1) != 0 )
          {
            v29 = 8;
          }
          else
          {
            v29 = 0;
          }
          if ( !(unsigned int)ApiSetEditionIsHotKey(v24 | v29, v5) )
            *v8 |= 1u;
        }
      }
    }
  }
}
