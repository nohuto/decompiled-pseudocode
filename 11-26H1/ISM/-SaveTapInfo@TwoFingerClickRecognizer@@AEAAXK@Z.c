/*
 * XREFs of ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x1801BB6BC
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801BB320 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801B8BC8 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

void __fastcall TwoFingerClickRecognizer::SaveTapInfo(TwoFingerClickRecognizer *this, int a2)
{
  TwoFingerClickRecognizer *v2; // r9
  int v3; // r10d
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r8d
  __int16 v7; // cx
  __int16 v8; // cx
  struct tagPOINT v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h]

  v2 = this;
  v3 = (*((_DWORD *)this + 11) + *((_DWORD *)this + 13)) / 2;
  LODWORD(v10) = v3;
  v4 = *((_DWORD *)this + 12) + *((_DWORD *)this + 14);
  v5 = 65511LL;
  LOWORD(v5) = *((_WORD *)v2 + 8) & 0xFFE6 | 1;
  HIDWORD(v10) = v4 / 2;
  *((_WORD *)v2 + 8) = v5;
  if ( (v5 & 4) != 0 )
  {
    v6 = *((unsigned __int16 *)v2 + 34);
    v9.x = *((_DWORD *)v2 + 7) - v3;
    v9.y = *((_DWORD *)v2 + 8) - v4 / 2;
    if ( !GestureRecognizer::MeetsThreshold((GestureRecognizer *)v5, &v9, v6) )
      v7 |= 2u;
  }
  else
  {
    *((_DWORD *)v2 + 6) = a2 + *((unsigned __int16 *)v2 + 35);
    v7 = v5 | 0x18;
  }
  if ( (v7 & 2) != 0 )
    v8 = v7 & 0xFFFB;
  else
    v8 = v7 | 4;
  *((_WORD *)v2 + 8) = v8;
  if ( (v8 & 2) == 0 )
    *(_QWORD *)((char *)v2 + 28) = v10;
  *((_DWORD *)v2 + 5) = 0;
}
