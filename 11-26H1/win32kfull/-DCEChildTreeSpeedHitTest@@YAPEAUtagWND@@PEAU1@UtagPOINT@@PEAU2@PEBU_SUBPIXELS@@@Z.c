/*
 * XREFs of ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x14008CC5C
 * Callers:
 *     EditionPostDwmSpeedHitTest @ 0x14008C7D0 (EditionPostDwmSpeedHitTest.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x14008CC5C (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008C37C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x14008CC5C (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 */

struct tagWND *__fastcall DCEChildTreeSpeedHitTest(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4)
{
  struct tagWND *v4; // r15
  struct _SUBPIXELS *v5; // rbx
  __int64 v9; // rcx
  struct tagPOINT v10; // rbx
  __int64 v11; // rcx
  _BYTE *v12; // rcx
  unsigned __int8 v13; // dl
  _DWORD *v14; // rcx
  struct tagPOINT v15; // rax
  unsigned __int64 v16; // rax
  struct tagWND *v17; // rax
  int v19; // eax
  __int64 v20; // r14
  int v21; // ebp
  BOOL v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 UserSessionState; // rax
  struct tagPOINT v26; // [rsp+70h] [rbp+8h] BYREF
  struct _SUBPIXELS *v27; // [rsp+88h] [rbp+20h]

  v27 = a4;
  v4 = (struct tagWND *)*((_QWORD *)a1 + 14);
  v5 = a4;
  while ( 1 )
  {
    if ( !v4 )
      return a1;
    if ( *((_QWORD *)v4 + 27) )
      break;
    v9 = *((_QWORD *)v4 + 5);
    v10 = *a3;
    v26 = *a3;
    if ( (*(_BYTE *)(v9 + 31) & 0x10) != 0
      && v10.x >= *(_DWORD *)(v9 + 88)
      && v10.x < *(_DWORD *)(v9 + 96)
      && v10.y >= *(_DWORD *)(v9 + 92)
      && v10.y < *(_DWORD *)(v9 + 100) )
    {
      v11 = *(_QWORD *)(v9 + 168);
      if ( !v11 || (unsigned int)GrePtInRegion(v11, (unsigned int)v10.x, HIDWORD(*(unsigned __int64 *)&v10)) )
      {
        v12 = (_BYTE *)*((_QWORD *)v4 + 5);
        v13 = v12[26];
        if ( (v13 & 8) == 0
          || (v12[24] & 0x20) == 0
          && ((v13 & v12[27] & 0x20) != 0
           || (v19 = IsWindowDesktopComposed(v4),
               v20 = *(_QWORD *)v4,
               v21 = v19,
               v22 = *((_WORD *)v4 + 128) >= 0x602u,
               UserSessionState = W32GetUserSessionState(v24, v23),
               (unsigned int)GrePtInSprite(
                               *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL),
                               v20,
                               (unsigned int)v10.x,
                               (unsigned int)v26.y,
                               v22,
                               v21))) )
        {
          v5 = v27;
          goto LABEL_12;
        }
      }
    }
    v5 = v27;
LABEL_25:
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
  }
  v26 = a2;
  if ( !(unsigned int)DCEIsWindowHit(v4, &v26, v5) )
    goto LABEL_25;
  *a3 = v26;
LABEL_12:
  if ( *((_QWORD *)v4 + 14) )
  {
    v14 = (_DWORD *)*((_QWORD *)v4 + 5);
    v15 = *a3;
    if ( a3->x >= v14[26] && v15.x < v14[28] )
    {
      v16 = HIDWORD(*(unsigned __int64 *)&v15);
      if ( (int)v16 >= v14[27] && (int)v16 < v14[29] )
      {
        v17 = DCEChildTreeSpeedHitTest(v4, a2, a3, v5);
        if ( v17 )
        {
          if ( v17 != v4 )
            return v17;
        }
      }
    }
  }
  return v4;
}
