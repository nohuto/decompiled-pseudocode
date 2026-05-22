/*
 * XREFs of ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B9260
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x1801B93F0 (-CancelTapAndHold@ClickRecognizer@@AEAAXXZ.c)
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B9770 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z @ 0x1801B984C (-PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z.c)
 */

__int64 __fastcall ClickRecognizer::Add(ClickRecognizer *this, struct tagPOINT *a2, __int16 a3, unsigned int a4)
{
  char v5; // si
  unsigned int y; // r11d
  char v9; // al
  char *v10; // rbp
  __int16 v11; // r10
  int v12; // ecx
  ClickRecognizer *v13; // rcx
  __int16 v14; // r10
  ClickRecognizer *v15; // rcx
  __int16 v16; // r10
  __int16 v17; // r10
  struct tagPOINT v19; // [rsp+60h] [rbp+18h] BYREF

  v5 = a3;
  if ( (a3 & 0x100) == 0 )
  {
    if ( (a2[1].y & 0x7880) != 0 )
    {
      y = a2[93].y;
      v9 = 1;
    }
    else
    {
      v9 = 0;
      y = 1;
    }
    v10 = (char *)&a2[144] + (-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFE70uLL);
    *((_QWORD *)this + 14) = *(_QWORD *)(v10 + 4);
    if ( (a3 & 1) != 0 )
    {
      v11 = *((_WORD *)this + 8) & 0xFFFD;
      v12 = *((unsigned __int16 *)this + 14);
      *((_WORD *)this + 8) = v11 | 0x200;
      *((_DWORD *)this + 5) &= 0xFFFFFFF1;
      *((_DWORD *)this + 5) |= 1u;
      *((_DWORD *)this + 33) = a4 + v12;
      if ( (a2[1].y & 2) != 0 && (v11 & 0x80u) != 0 )
      {
        v13 = (ClickRecognizer *)(a4 - *((_DWORD *)this + 32));
        if ( (unsigned int)v13 <= *((unsigned __int16 *)this + 13)
          && ClickRecognizer::PointsWithinThreshold(
               v13,
               (const struct tagPOINT *)this + 15,
               (const struct tagPOINT *)(v10 + 4),
               *((unsigned __int16 *)this + 12)) )
        {
          *((_WORD *)this + 8) = v14 | 0x209;
          *((_QWORD *)this + 7) = *(_QWORD *)(v10 + 4);
        }
      }
    }
    ClickRecognizer::OnTouch(this, (const struct GestureSession *)a2, a4, y, (const struct TouchContactInfo *)v10);
    if ( (v5 & 4) != 0 )
    {
      v16 = *((_WORD *)this + 8);
      v19 = a2[149];
      if ( (v16 & 2) != 0
        || !ClickRecognizer::PointsWithinThreshold(
              v15,
              &v19,
              (const struct tagPOINT *)(v10 + 4),
              *((unsigned __int16 *)this + 18))
        || (unsigned int)(((int)(*((_DWORD *)this + 5) << 28) >> 28) - 1) > 2
        || (v16 & 1) != 0 )
      {
        v17 = v16 & 0xFF7F;
      }
      else
      {
        v17 = v16 | 0x84;
        *(_QWORD *)((char *)this + 44) = *((_QWORD *)this + 14);
      }
      *((_WORD *)this + 8) = v17;
      *((_QWORD *)this + 15) = *((_QWORD *)this + 14);
      ClickRecognizer::CancelTapAndHold(this);
    }
  }
  return 0LL;
}
