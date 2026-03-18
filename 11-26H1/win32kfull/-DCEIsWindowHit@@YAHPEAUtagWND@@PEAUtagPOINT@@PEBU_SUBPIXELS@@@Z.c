/*
 * XREFs of ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008C37C
 * Callers:
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008C2DC (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x14008CC5C (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008DB28 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

__int64 __fastcall DCEIsWindowHit(struct tagWND *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  struct tagPOINT v3; // rbx
  __int64 v5; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const struct _D3DMATRIX *v11; // rdx
  const struct tagRECT *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int8 v15; // dl
  int v17; // eax
  __int64 v18; // rbp
  int v19; // esi
  BOOL v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  struct tagPOINT v24; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a2;
  v5 = *((_QWORD *)a1 + 5);
  v24 = *a2;
  if ( (*(_BYTE *)(v5 + 31) & 0x10) == 0 )
    return 0LL;
  v8 = (*(unsigned __int8 *)(v5 + 233) >> 4) & 2 | 1;
  if ( (*(_BYTE *)(v5 + 233) & 0x40) == 0 )
    v8 = (*(unsigned __int8 *)(v5 + 233) >> 4) & 2;
  if ( v8
    || *((_QWORD *)a1 + 3)
    && *(_DWORD *)(W32GetUserSessionState(v5, a2) + 66084)
    && *(_QWORD *)(W32GetUserSessionState(v10, v9) + 62968) != *((_QWORD *)a1 + 3)
    && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != 2
    && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != 3
    && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != 14
    && (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) - 17) > 1 )
  {
    return 0LL;
  }
  v11 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 27);
  v12 = (const struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( !v11 )
  {
    if ( v3.x >= v12->left
      && v3.x < *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL)
      && v3.y >= *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL)
      && v3.y < *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) )
    {
      goto LABEL_12;
    }
    return 0LL;
  }
  if ( !DCEHitTestWindow(v12, v11, &v24, a3) )
    return 0LL;
  v3 = v24;
LABEL_12:
  v13 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
  if ( v13 && !(unsigned int)GrePtInRegion(v13, (unsigned int)v3.x, (unsigned int)v24.y) )
    return 0LL;
  v14 = *((_QWORD *)a1 + 5);
  v15 = *(_BYTE *)(v14 + 26);
  if ( (v15 & 8) != 0 && (*(_DWORD *)(v14 + 232) & 2) == 0 )
  {
    if ( (*(_BYTE *)(v14 + 24) & 0x20) != 0 )
      return 0LL;
    if ( v3.x >= *(_DWORD *)(v14 + 88)
      && v3.x < *(_DWORD *)(v14 + 96)
      && v3.y >= *(_DWORD *)(v14 + 92)
      && v3.y < *(_DWORD *)(v14 + 100)
      && (v15 & *(_BYTE *)(v14 + 27) & 0x20) == 0 )
    {
      v17 = IsWindowDesktopComposed(a1);
      v18 = *(_QWORD *)a1;
      v19 = v17;
      v20 = *((_WORD *)a1 + 128) >= 0x602u;
      UserSessionState = W32GetUserSessionState(v22, v21);
      if ( !(unsigned int)GrePtInSprite(
                            *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL),
                            v18,
                            (unsigned int)v3.x,
                            (unsigned int)v24.y,
                            v20,
                            v19) )
        return 0LL;
    }
  }
  if ( *((_QWORD *)a1 + 27) )
    *a2 = v3;
  return 1LL;
}
