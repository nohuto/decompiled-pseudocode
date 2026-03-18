/*
 * XREFs of MNAnimate @ 0x140045C18
 * Callers:
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     MNGetPopupFromMenu @ 0x140045940 (MNGetPopupFromMenu.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     StopFade @ 0x1401F4CB0 (StopFade.c)
 *     MNDestroyAnimationBitmap @ 0x1402B59EC (MNDestroyAnimationBitmap.c)
 *     ?IS_USERCRIT_CONTENDED@@YA_NXZ @ 0x1402EA4C8 (-IS_USERCRIT_CONTENDED@@YA_NXZ.c)
 */

char __fastcall MNAnimate(__int64 *a1, __int64 a2)
{
  int v2; // edi
  _DWORD *UserSessionState; // rax
  unsigned int v5; // ebx
  int v6; // r14d
  int v7; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // r9d
  int v11; // r10d
  int v12; // edi
  int v13; // ebx
  int v14; // ecx
  __int64 v15; // rcx

  v2 = a2;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  if ( (UserSessionState[10758] & 0x10) != 0 )
  {
    if ( !v2 )
      LOBYTE(UserSessionState) = StopFade();
    return (char)UserSessionState;
  }
  if ( !a1[12] )
    return (char)UserSessionState;
  v5 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 26);
  if ( !v2 || v5 > 0xA5 || (LOBYTE(UserSessionState) = IS_USERCRIT_CONTENDED(), (_BYTE)UserSessionState) )
  {
    GreBitBltInternal((HDC)a1[12], *((_DWORD *)a1 + 30), (HDC)a1[17], 0, 0, -2134114272, 0xFFFFFF, 0);
LABEL_24:
    MNDestroyAnimationBitmap(a1);
    _ReleaseDC(a1[12]);
    v15 = *a1;
    a1[12] = 0LL;
    LOBYTE(UserSessionState) = FindTimer(*(_QWORD *)(v15 + 56), 65531LL, 0, 1, 0LL);
    return (char)UserSessionState;
  }
  v6 = *((_DWORD *)a1 + 27);
  v7 = *((_DWORD *)a1 + 28);
  if ( (a1[1] & 0x180000) != 0 )
  {
    UserSessionState = (_DWORD *)GetDPIMetrics();
    v8 = *((_DWORD *)a1 + 29);
    LODWORD(UserSessionState) = (int)(UserSessionState[2] * v5 + 4) / 8;
    *((_DWORD *)a1 + 27) = (_DWORD)UserSessionState;
    if ( (int)UserSessionState > v8 )
      *((_DWORD *)a1 + 27) = v8;
  }
  if ( (a1[1] & 0x600000) != 0 )
  {
    UserSessionState = (_DWORD *)GetDPIMetrics();
    v9 = *((_DWORD *)a1 + 30);
    LODWORD(UserSessionState) = (int)(UserSessionState[3] * v5 + 8) / 16;
    *((_DWORD *)a1 + 28) = (_DWORD)UserSessionState;
    if ( (int)UserSessionState > v9 )
      *((_DWORD *)a1 + 28) = v9;
  }
  v10 = *((_DWORD *)a1 + 27);
  if ( v10 != v6 || *((_DWORD *)a1 + 28) != v7 )
  {
    v11 = 0;
    v12 = *((_DWORD *)a1 + 28);
    v13 = *((_DWORD *)a1 + 2) >> 19;
    if ( (v13 & 8) == 0 )
      v11 = *((_DWORD *)a1 + 30) - v12;
    v14 = 0;
    if ( (v13 & 2) == 0 )
      v14 = *((_DWORD *)a1 + 29) - v10;
    GreBitBltInternal((HDC)a1[12], v12, (HDC)a1[17], v14, v11, -2134114272, 0xFFFFFF, 0);
    LODWORD(UserSessionState) = *((_DWORD *)a1 + 27);
    if ( *((_DWORD *)a1 + 29) == (_DWORD)UserSessionState )
    {
      LODWORD(UserSessionState) = *((_DWORD *)a1 + 28);
      if ( *((_DWORD *)a1 + 30) == (_DWORD)UserSessionState )
        goto LABEL_24;
    }
  }
  return (char)UserSessionState;
}
