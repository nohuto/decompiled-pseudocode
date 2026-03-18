/*
 * XREFs of ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C5C0
 * Callers:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x14008645C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008B4A0 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     EditionPostDwmSpeedHitTest @ 0x14008C7D0 (EditionPostDwmSpeedHitTest.c)
 * Callees:
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 */

__int64 __fastcall ClassicIsWindowHit(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE *v6; // rcx
  unsigned __int8 v7; // dl
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  int v12; // esi
  BOOL v13; // edi
  __int64 v14; // rdx
  __int64 UserSessionState; // rax
  unsigned int y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  v4 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v4 + 31) & 0x10) == 0 )
    return 0LL;
  if ( a2.x < *(_DWORD *)(v4 + 88) )
    return 0LL;
  if ( a2.x >= *(_DWORD *)(v4 + 96) )
    return 0LL;
  if ( a2.y < *(_DWORD *)(v4 + 92) )
    return 0LL;
  if ( a2.y >= *(_DWORD *)(v4 + 100) )
    return 0LL;
  v5 = *(_QWORD *)(v4 + 168);
  if ( v5 )
  {
    if ( !(unsigned int)GrePtInRegion(v5, (unsigned int)a2.x, HIDWORD(*(unsigned __int64 *)&a2)) )
      return 0LL;
  }
  v6 = (_BYTE *)*((_QWORD *)a1 + 5);
  v7 = v6[26];
  if ( (v7 & 8) == 0 )
    return 1LL;
  if ( (v6[24] & 0x20) == 0
    && ((v7 & v6[27] & 0x20) != 0
     || (v9 = IsWindowDesktopComposed(a1),
         v10 = *((unsigned __int16 *)a1 + 128),
         v11 = *(_QWORD *)a1,
         v12 = v9,
         v13 = (unsigned __int16)v10 >= 0x602u,
         UserSessionState = W32GetUserSessionState(v10, v14),
         (unsigned int)GrePtInSprite(
                         *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL),
                         v11,
                         (unsigned int)a2.x,
                         y,
                         v13,
                         v12))) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
