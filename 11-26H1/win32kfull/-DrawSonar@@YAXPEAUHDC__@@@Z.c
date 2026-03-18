/*
 * XREFs of ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1402A3FDC
 * Callers:
 *     zzzAnimateFade @ 0x1402A456C (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1402A46E0 (zzzStartSonar.c)
 * Callees:
 *     GreCreatePen @ 0x140082518 (GreCreatePen.c)
 *     GreEllipse @ 0x140113870 (GreEllipse.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 */

void __fastcall DrawSonar(HDC a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  HBRUSH SolidBrush; // rsi
  __int64 UserSessionState; // rbx
  int v6; // r13d
  INT v7; // r12d
  INT v8; // eax
  __int64 Pen; // rax
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbx
  RECT v15; // [rsp+30h] [rbp-38h] BYREF
  INT v16; // [rsp+78h] [rbp+10h]

  SolidBrush = (HBRUSH)GreCreateSolidBrush(16711935LL);
  if ( SolidBrush )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    v6 = *(_DWORD *)(UserSessionState + 16316);
    v7 = EngMulDiv(100, *(_DWORD *)(UserSessionState + 16328), 96);
    v8 = EngMulDiv(4, *(_DWORD *)(UserSessionState + 16328), 96);
    *(_QWORD *)&v15.left = 0LL;
    v15.right = 2 * v7;
    v15.bottom = 2 * v7;
    v16 = v8;
    FillRect(a1, &v15, SolidBrush);
    Pen = GreCreatePen(0, 0, 0xFFFFFF, 0LL);
    v10 = Pen;
    if ( Pen )
    {
      v11 = GreSelectPen(a1, Pen);
      v12 = GreCreateSolidBrush(8421504LL);
      v13 = v12;
      if ( v12 )
      {
        v14 = GreSelectBrush(a1, v12);
        GreEllipse(a1, v7 - v6, v7 - v6, v7 + v6, v7 + v6);
        GreSelectBrush(a1, SolidBrush);
        GreEllipse(a1, v16 - v6 + v7, v16 - v6 + v7, v6 + v7 - v16, v6 + v7 - v16);
        GreSelectBrush(a1, v14);
        GreDeleteObject(v13);
      }
      GreSelectPen(a1, v11);
      GreDeleteObject(v10);
    }
    GreDeleteObject(SolidBrush);
  }
}
