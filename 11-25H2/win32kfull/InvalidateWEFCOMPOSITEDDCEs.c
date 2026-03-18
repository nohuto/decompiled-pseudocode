/*
 * XREFs of InvalidateWEFCOMPOSITEDDCEs @ 0x14015232C
 * Callers:
 *     xxxSystemTimerProc @ 0x140246950 (xxxSystemTimerProc.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     UnionRect @ 0x1401524B8 (UnionRect.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x140152568 (-PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x140152674 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall InvalidateWEFCOMPOSITEDDCEs(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *i; // rbx
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 Prop; // rax
  bool v13; // al
  struct tagWND *v14; // rcx
  struct tagRECT v15; // [rsp+20h] [rbp-28h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 56968);
  for ( i = *(__int64 **)(v6 + 24); ; i = (__int64 *)*i )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968) + 24LL;
    if ( i == (__int64 *)v6 )
      break;
    if ( (i[6] & 0x4400800) == 0 )
    {
      if ( i[10] )
      {
        if ( !(unsigned int)GreIsRendering(i[2]) && (i[6] & 0x5000) == 0x5000 )
        {
          v6 = *(_QWORD *)(i[12] + 40);
          if ( (*(_BYTE *)(v6 + 27) & 2) != 0 )
          {
            v10 = i[2];
            v15 = 0LL;
            if ( (unsigned int)GreGetBounds(v10, &v15, 4LL) )
            {
              v11 = W32GetUserSessionState(v6, v5);
              Prop = GetProp(i[12], *(unsigned __int16 *)(v11 + 41358), 1u);
              if ( (*(_BYTE *)(*(_QWORD *)(i[12] + 40) + 27LL) & 0x10) != 0 )
              {
                UnionRect(Prop + 16, Prop + 16, &v15);
              }
              else
              {
                v13 = IS_USERCRIT_OWNED_EXCLUSIVE();
                v14 = (struct tagWND *)i[12];
                if ( v13 )
                  InvalidateWEFCOMPOSITEDWindow(v14, &v15);
                else
                  PostCOMPOSITEDInvalidateAPC(v14, &v15);
              }
            }
          }
        }
      }
    }
  }
  v8 = W32GetUserSessionState(v6, v5);
  return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v8 + 56968) + 48LL));
}
