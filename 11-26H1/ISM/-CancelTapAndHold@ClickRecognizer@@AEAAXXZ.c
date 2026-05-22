/*
 * XREFs of ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x1801B93F0
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B9260 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B9770 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1801B9920 (-Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClickRecognizer::CancelTapAndHold(ClickRecognizer *this)
{
  __int16 v1; // r8
  _BYTE *v2; // rdx
  __int16 v3; // r8

  v1 = *((_WORD *)this + 8);
  v2 = (char *)this + 20;
  if ( (v1 & 0x200) != 0 )
  {
    v3 = v1 & 0xFDFF;
    *((_WORD *)this + 8) = v3;
    if ( (*v2 & 0xF) == 3 )
    {
      *((_WORD *)this + 8) = v3 | 0x20;
      *(_QWORD *)((char *)this + 84) = *((_QWORD *)this + 14);
      *((_DWORD *)this + 23) = 2;
    }
  }
  *(_DWORD *)v2 &= 0xFFFFFFF0;
}
