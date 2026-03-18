/*
 * XREFs of ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1402080B8
 * Callers:
 *     EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x14020F200 (EditionFinalizeKoreanImeCompStrOnMouseClick.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     GetAppImeCompatFlags @ 0x1402081C0 (GetAppImeCompatFlags.c)
 */

void __fastcall FinalizeKoreanImeCompStrOnMouseClick(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // [rsp+90h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v7 = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) + 112LL)
    && (GetAppImeCompatFlags(v2) & 0x400000) == 0 )
  {
    if ( *(_WORD *)(v2 + 664) <= 0x400u )
    {
      SetSystemInputSource(&v7);
      UserSessionState = W32GetUserSessionState(v5, v4);
      PostInputMessage(
        *(struct tagQ **)(UserSessionState + 18928),
        0LL,
        0,
        0x101uLL,
        229LL,
        0,
        0LL,
        0LL,
        0,
        (struct tagINPUT_MESSAGE_SOURCE *)&v7,
        0LL,
        0LL,
        0,
        0,
        0LL);
    }
    else
    {
      v3 = *(_QWORD *)(v2 + 816);
      if ( v3 )
      {
        if ( *(char *)(*(_QWORD *)(v3 + 40) + 20LL) >= 0 )
          PostMessage(v3, 647, 32, 0);
      }
    }
  }
}
