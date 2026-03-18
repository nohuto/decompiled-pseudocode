/*
 * XREFs of ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1401A1724
 * Callers:
 *     EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1401F3160 (EditionFinalizeKoreanImeCompStrOnMouseClick.c)
 * Callees:
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     GetAppImeCompatFlags @ 0x1401A1D9C (GetAppImeCompatFlags.c)
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
  if ( !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) + 112LL)
    && (GetAppImeCompatFlags(v2) & 0x400000) == 0 )
  {
    if ( *(_WORD *)(v2 + 672) <= 0x400u )
    {
      SetSystemInputSource(&v7);
      UserSessionState = W32GetUserSessionState(v5, v4);
      PostInputMessage(
        *(struct tagQ **)(UserSessionState + 18888),
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
      v3 = *(_QWORD *)(v2 + 824);
      if ( v3 )
      {
        if ( *(char *)(*(_QWORD *)(v3 + 40) + 20LL) >= 0 )
          PostMessage(v3, 647, 32, 0);
      }
    }
  }
}
