/*
 * XREFs of ParseSyncSessionData @ 0x140135C90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibEalLogError @ 0x14008D638 (TcglibEalLogError.c)
 *     GetTokenData @ 0x140136BEC (GetTokenData.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall ParseSyncSessionData(int **a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 *v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // r9d
  int v8; // r9d
  char v9; // r8
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  const void *TokenData; // rax
  size_t v13; // r8
  __int64 v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( *(_DWORD *)(a3 + 8) != 5 || *(_DWORD *)(a3 + 12) < 2u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v16 = MEMORY[0xC];
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_0fcae427bce03ba20eb03603e1248831_Traceguids,
        MEMORY[8],
        v16);
    }
    v9 = 1;
    LOBYTE(v8) = MEMORY[8];
    v15 = MEMORY[0xC];
    goto LABEL_13;
  }
  v5 = *(__int64 **)(a3 + 16);
  v6 = *v5;
  v7 = *(_DWORD *)(*v5 + 12);
  if ( v7 > 4 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xBu,
        (__int64)&WPP_0fcae427bce03ba20eb03603e1248831_Traceguids,
        v7);
    v8 = *(_DWORD *)(v6 + 12);
    v9 = 2;
    v15 = 0LL;
LABEL_13:
    v3 = -1073741435;
    TcglibEalLogError(*a1, "ErrInvalidSyncData", v9, v8, v15, 0LL);
    return v3;
  }
  v10 = (_DWORD *)(a2 + 8);
  v11 = *v5;
  *(_DWORD *)(a2 + 8) = 0;
  TokenData = (const void *)GetTokenData(v11, a2, *(unsigned int *)(v6 + 12));
  memmove(v10, TokenData, v13);
  TcglibEalLogCommand(*a1, "ParseSyncSessionData", *v10, 0, 0LL, 0LL);
  return v3;
}
