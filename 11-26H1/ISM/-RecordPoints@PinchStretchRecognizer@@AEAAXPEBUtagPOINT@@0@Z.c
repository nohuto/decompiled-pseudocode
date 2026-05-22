/*
 * XREFs of ?RecordPoints@PinchStretchRecognizer@@AEAAXPEBUtagPOINT@@0@Z @ 0x1801B9064
 * Callers:
 *     ?Add@PinchStretchRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B8E10 (-Add@PinchStretchRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801B8BC8 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

void __fastcall PinchStretchRecognizer::RecordPoints(
        PinchStretchRecognizer *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  _BYTE *v3; // r9
  char v4; // r10
  GestureRecognizer *v5; // rcx
  unsigned int v6; // r8d
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF
  struct tagPOINT v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = (char *)this + 56;
  v4 = *((_BYTE *)this + 56);
  *((struct tagPOINT *)this + 4) = *a2;
  *((struct tagPOINT *)this + 5) = *a3;
  if ( (v4 & 1) == 0 )
  {
    *((struct tagPOINT *)this + 2) = *a2;
    *((struct tagPOINT *)this + 3) = *a3;
  }
  v7.x = *((_DWORD *)this + 4) - a2->x;
  v7.y = *((_DWORD *)this + 5) - a2->y;
  v8 = v7;
  v7.x = *((_DWORD *)this + 6) - a3->x;
  v7.y = *((_DWORD *)this + 7) - a3->y;
  if ( (v4 & 2) == 0
    && ((v4 & 1) == 0
     || GestureRecognizer::MeetsThreshold(this, &v8, *((unsigned __int16 *)this + 29))
     || GestureRecognizer::MeetsThreshold(v5, &v7, v6)) )
  {
    *v3 = v4 | 2;
  }
}
