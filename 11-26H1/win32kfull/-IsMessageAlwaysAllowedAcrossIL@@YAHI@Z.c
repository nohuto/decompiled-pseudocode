/*
 * XREFs of ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14012EFF0
 * Callers:
 *     _PostTransformableMessageIL @ 0x1400218F0 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x140022150 (NtUserPostMessage.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     _ChangeWindowMessageFilterEx @ 0x14012BF48 (_ChangeWindowMessageFilterEx.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x14012EDA0 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x14012F170 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     NtUserPostThreadMessage @ 0x1401D3B50 (NtUserPostThreadMessage.c)
 *     _PostMessageCheckIL @ 0x1401EE5AC (_PostMessageCheckIL.c)
 * Callees:
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1401AF77C (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall IsMessageAlwaysAllowedAcrossIL(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx

  v1 = 0;
  if ( a1 > 0x309 )
  {
    v9 = a1 - 778;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
            return 1;
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 5;
            if ( !v14 )
              return 1;
            v15 = v14 - 7;
            if ( !v15 )
              return 1;
            v16 = v15 - 1;
            if ( !v16 || v16 == 4 )
              return 1;
            return v1;
          }
        }
      }
    }
LABEL_23:
    LOBYTE(v1) = (unsigned int)IsFmtBlocked(0x80u) == 0;
    return v1;
  }
  if ( a1 == 777 )
    goto LABEL_23;
  if ( !a1 )
    return 1;
  v2 = a1 - 3;
  if ( !v2 )
    return 1;
  v3 = v2 - 2;
  if ( !v3 )
    return 1;
  v4 = v3 - 8;
  if ( !v4 )
    return 1;
  v5 = v4 - 1;
  if ( !v5 )
    return 1;
  v6 = v5 - 37;
  if ( !v6 )
    return 1;
  v7 = v6 - 76;
  if ( !v7 )
    return 1;
  v8 = v7 - 646;
  if ( !v8 || v8 == 3 )
    return 1;
  return v1;
}
