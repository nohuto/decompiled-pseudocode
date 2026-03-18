/*
 * XREFs of ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x14012C244
 * Callers:
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 * Callees:
 *     CalcWindowRgn @ 0x14002C744 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     DecPaintCount @ 0x14012BF18 (DecPaintCount.c)
 */

unsigned __int64 __fastcall GetNCUpdateRgn(struct tagWND *a1, int a2)
{
  unsigned __int64 v4; // rdi
  __int64 EmptyRgnPublic; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
  if ( v4 <= 1 )
    return v4;
  EmptyRgnPublic = CreateEmptyRgnPublic();
  v4 = EmptyRgnPublic;
  if ( EmptyRgnPublic )
  {
    if ( (unsigned int)GreCombineRgn(EmptyRgnPublic, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
      goto LABEL_5;
    GreDeleteObject(v4);
  }
  v4 = 1LL;
LABEL_5:
  if ( a2 )
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    CalcWindowRgn((__int64)a1, *(_QWORD *)(UserSessionState + 63360), 1);
    v12 = W32GetUserSessionState(v11, v10);
    v13 = GreCombineRgn(
            *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
            *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
            *(_QWORD *)(v12 + 63360),
            1LL);
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
        SetOrClrWF(0, a1, 0x120u, 1);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) == 0 )
          DecPaintCount((__int64)a1);
      }
    }
    else
    {
      GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
    }
  }
  return v4;
}
