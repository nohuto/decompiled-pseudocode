/*
 * XREFs of _ExcludeUpdateRgn @ 0x140054468
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x140053DC8 (-UT_InvertCaret@@YAXXZ.c)
 *     NtUserExcludeUpdateRgn @ 0x140202B30 (NtUserExcludeUpdateRgn.c)
 * Callees:
 *     GreExtSelectClipRgn @ 0x1400C353C (GreExtSelectClipRgn.c)
 *     GetDCOrgOnScreen @ 0x140157CA0 (GetDCOrgOnScreen.c)
 *     GreGetRandomRgn @ 0x140158D50 (GreGetRandomRgn.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1401DE6E0 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall ExcludeUpdateRgn(HDC a1, struct tagWND *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 UserSessionState; // rax
  __int64 v25; // [rsp+30h] [rbp-28h] BYREF
  __int128 v26; // [rsp+38h] [rbp-20h] BYREF

  v25 = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      return GreIntersectClipRect(a1, 0LL, 0LL, 0LL, 0);
    }
    else if ( (unsigned int)GetDCOrgOnScreen(a1, &v25) )
    {
      W32GetUserSessionState(v6, v5);
      if ( (unsigned int)GreGetRandomRgn(a1) == 1 )
      {
        UserSessionState = W32GetUserSessionState(v8, v7);
        GreOffsetRgn(*(_QWORD *)(UserSessionState + 63368), (unsigned int)v25, HIDWORD(v25));
      }
      else
      {
        v9 = W32GetUserSessionState(v8, v7);
        CalcVirtualScreenClipRegion(*(HRGN *)(v9 + 63368), a2);
      }
      v12 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL);
      v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 63368);
      v16 = W32GetUserSessionState(v15, v14);
      GreCombineRgn(*(_QWORD *)(v16 + 63368), v13, v12, 4LL);
      v19 = W32GetUserSessionState(v18, v17);
      GreOffsetRgn(*(_QWORD *)(v19 + 63368), (unsigned int)-(int)v25, (unsigned int)-HIDWORD(v25));
      v22 = W32GetUserSessionState(v21, v20);
      return GreExtSelectClipRgn(a1, *(HRGN *)(v22 + 63368));
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v26 = 0LL;
    return GreGetClipBox(a1, &v26, 0LL);
  }
}
