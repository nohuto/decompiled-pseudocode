/*
 * XREFs of UserGetRedirectedWindowOrigin @ 0x14004BE20
 * Callers:
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     GetDCOrgOnScreen @ 0x140157CA0 (GetDCOrgOnScreen.c)
 *     GreGetRandomRgn @ 0x140158D50 (GreGetRandomRgn.c)
 *     DxgkEngBltViaGDI @ 0x1401B4070 (DxgkEngBltViaGDI.c)
 * Callees:
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 */

__int64 __fastcall UserGetRedirectedWindowOrigin(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 UserSessionState; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgnShared(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  v6 = LookupDC(a1, 1LL);
  if ( v6 && (*(_DWORD *)(v6 + 48) & 0x4000) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(*(_QWORD *)(v6 + 80)) )
    {
      *(_QWORD *)a2 = 0LL;
LABEL_11:
      v4 = 1;
    }
    else
    {
      v10 = v9;
      while ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 40);
        if ( (*(_BYTE *)(v11 + 27) & 0x20) != 0 )
        {
          v7 = v9;
          v8 = *(_WORD *)(v11 + 42) & 0x2FFF;
          if ( v9 == v10 || (_DWORD)v8 != 669 )
          {
            *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL);
            v8 = *(unsigned int *)(*(_QWORD *)(v9 + 40) + 92LL);
            *(_DWORD *)(a2 + 4) = v8;
            goto LABEL_11;
          }
          break;
        }
        v9 = *(_QWORD *)(v9 + 104);
      }
    }
  }
  v12 = W32GetUserSessionState(v8, v7);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v12 + 56968) + 48LL));
  return v4;
}
