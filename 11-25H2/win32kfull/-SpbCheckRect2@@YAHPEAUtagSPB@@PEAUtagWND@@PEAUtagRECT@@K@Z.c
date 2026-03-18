/*
 * XREFs of ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x140156758
 * Callers:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1401562B8 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheckRect @ 0x1401566D4 (SpbCheckRect.c)
 * Callees:
 *     FreeSpb @ 0x140156450 (FreeSpb.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x140157D00 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SpbCheckRect2(struct tagSPB *a1, struct tagWND *a2, struct tagRECT *a3, unsigned int a4)
{
  bool v4; // zf
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)a1 + 1) == 0LL;
  v11 = *a3;
  if ( !v4 )
  {
    if ( !(unsigned int)FBitsTouch(a2, &v11, a1, a4) )
      return 1LL;
    if ( *((_QWORD *)a1 + 5) || (unsigned int)SetOrCreateRectRgnIndirectPublic((char *)a1 + 40, (char *)a1 + 24) )
    {
      UserSessionState = W32GetUserSessionState(v6, a2);
      if ( (unsigned int)SetRectRgnIndirect(*(_QWORD *)(UserSessionState + 43080), &v11) )
      {
        v9 = W32GetUserSessionState(v8, a2);
        if ( (unsigned int)GreCombineRgn(*((_QWORD *)a1 + 5), *((_QWORD *)a1 + 5), *(_QWORD *)(v9 + 43080), 4LL) > 1 )
          return 1LL;
      }
    }
  }
  FreeSpb((char *)a1, (__int64)a2);
  return 0LL;
}
