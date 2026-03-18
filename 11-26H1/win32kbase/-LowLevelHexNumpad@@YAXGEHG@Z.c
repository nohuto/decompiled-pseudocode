/*
 * XREFs of ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x140174824
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     ApiSetEditionIsHotKey @ 0x14022781C (ApiSetEditionIsHotKey.c)
 */

void __fastcall LowLevelHexNumpad(int a1, int a2, int a3, __int16 a4)
{
  unsigned int v5; // r14d
  __int64 v7; // r15
  char *v8; // rsi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  char v15; // al
  char v16; // bl
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // ecx
  __int16 v21; // di
  int v22; // edx
  int v23; // r8d
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // ebx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  bool v34; // zf
  int v35; // eax

  v5 = (unsigned __int8)a2;
  v7 = (unsigned __int16)a1;
  v8 = (char *)(W32GetUserSessionState(a1, a2, a3) + 14696);
  if ( (*(_BYTE *)(W32GetUserSessionState(v10, v9, v11) + 14332) & 0x10) == 0 )
  {
    v15 = *v8;
    if ( (*v8 & 1) == 0 )
      return;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v15 = *v8;
    if ( (*v8 & 1) != 0 || (_DWORD)v7 == 78 || (_DWORD)v7 == 83 )
    {
      if ( (a4 & 0x100) != 0 )
      {
LABEL_3:
        *v8 = v15 & 0xFE;
        return;
      }
      v16 = *(_BYTE *)(W32GetUserSessionState(v13, v12, v14) + 14332) & 0x10;
      LOBYTE(v20) = *(_BYTE *)(W32GetUserSessionState(v18, v17, v19) + 14332) & 1;
      v21 = (unsigned __int8)v20;
      v26 = *(_BYTE *)(W32GetUserSessionState(v20, v22, v23) + 14333) & 4;
      LOWORD(v26) = v21 | (v16 != 0 ? 4 : 0) | (2 * v26);
      if ( (_WORD)v26 == 4 || (_WORD)v26 == 5 || (unsigned __int16)(v26 - 12) <= 1u )
      {
        LOBYTE(v24) = *v8;
        if ( (*v8 & 1) != 0 )
        {
          if ( ((unsigned __int16)(v7 - 71) > 0xBu || aVkNumpad[v7 - 71] == 0xFF)
            && (unsigned __int8)(v5 - 65) > 5u
            && (unsigned __int8)(v5 - 48) > 9u )
          {
            *v8 = v24 & 0xFE;
          }
        }
        else
        {
          v27 = (4 * (v26 & 1)) | (*(unsigned __int8 *)(W32GetUserSessionState(v24, v26, v25) + 14332) >> 1) & 2;
          if ( (*(_BYTE *)(W32GetUserSessionState(v29, v28, v30) + 14350) & 0x40) != 0
            || (v34 = (*(_BYTE *)(W32GetUserSessionState(v32, v31, v33) + 14351) & 1) == 0, v35 = 1, !v34) )
          {
            v35 = 9;
          }
          if ( !(unsigned int)ApiSetEditionIsHotKey(v35 | (unsigned int)v27, v5) )
            *v8 |= 1u;
        }
      }
      else
      {
        *v8 &= ~1u;
      }
    }
  }
}
