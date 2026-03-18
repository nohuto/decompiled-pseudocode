/*
 * XREFs of ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140175800
 * Callers:
 *     _PostMessageCheckIL @ 0x1400CA9FC (_PostMessageCheckIL.c)
 *     _PostTransformableMessageIL @ 0x14012A580 (_PostTransformableMessageIL.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     NtUserPostMessage @ 0x1401421C0 (NtUserPostMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140167A50 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x140182E58 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     NtUserPostThreadMessage @ 0x14024B7E0 (NtUserPostThreadMessage.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1401758DC (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsMessageAllowedAcrossILByReceiver(
        struct tagPROCESSINFO *a1,
        struct tagWND *a2,
        unsigned __int16 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rcx
  void **WindowMessageFilter; // rcx
  _QWORD *v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = *((_QWORD *)a1 + 105);
  v4 = 0;
  v5 = a3;
  v6 = 1;
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 8 * ((unsigned __int64)a3 >> 13));
    if ( v7 )
    {
      v11 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)a3 >> 9) & 0xF));
      if ( v11 )
      {
        if ( ((unsigned __int8)(1 << (a3 & 7)) & *(_BYTE *)((((unsigned __int64)a3 >> 3) & 0x3F) + v11)) != 0 )
          return v6;
      }
    }
  }
  if ( a2 )
  {
    WindowMessageFilter = GetWindowMessageFilter(a2);
    if ( !WindowMessageFilter )
      return 0;
    v9 = WindowMessageFilter[v5 >> 13];
    if ( !v9 )
      return 0;
    v12 = v9[(v5 >> 9) & 0xF];
    if ( !v12 || ((unsigned __int8)(1 << (v5 & 7)) & *(_BYTE *)(((v5 >> 3) & 0x3F) + v12)) == 0 )
      return 0;
    return v6;
  }
  return v4;
}
