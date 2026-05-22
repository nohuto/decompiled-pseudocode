/*
 * XREFs of ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B9BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1801B9CF8 (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DragRecognizer::Add(DragRecognizer *this, const struct GestureSession *a2, __int16 a3)
{
  bool v5; // r15
  unsigned int v6; // r14d
  char v7; // bp
  int v8; // ebx
  _BYTE *v9; // rbx
  char v10; // dl
  char v11; // dl
  unsigned __int64 v12; // rcx
  char v13; // cl

  if ( (a3 & 0x100) != 0 )
    return 0LL;
  v5 = 0;
  if ( (*((_DWORD *)a2 + 3) & 0x7880) != 0 )
  {
    v6 = *((_DWORD *)a2 + 187);
    v7 = 1;
  }
  else
  {
    v7 = 0;
    v6 = 1;
  }
  v8 = a3 & 1;
  if ( (a3 & 1) != 0 )
    (*(void (__fastcall **)(DragRecognizer *))(*(_QWORD *)this + 32LL))(this);
  if ( v6 != 1 && !v8 )
  {
    v9 = (char *)this + 30;
LABEL_14:
    if ( (*v9 & 1) != 0 )
    {
      v13 = *v9 & 0xFE;
      *v9 = v13;
      if ( (v13 & 2) != 0 )
      {
        v13 |= 8u;
        *v9 = v13;
      }
      if ( v6 > 1 && (v13 & 6) == 2 )
      {
        *((_DWORD *)this + 18) &= 0xFFFFFFCF;
        *v9 = v13 | 4;
      }
    }
    return 0LL;
  }
  v9 = (char *)this + 30;
  v10 = *((_BYTE *)this + 30);
  if ( (v10 & 1) == 0 )
  {
    v11 = v10 | 1;
    *v9 = v11;
    v12 = (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFE70uLL) + 1156;
    *((_QWORD *)this + 7) = *(_QWORD *)((char *)a2 + v12);
    *((_QWORD *)this + 8) = *(_QWORD *)((char *)a2 + v12);
    v5 = (v11 & 2) != 0;
    *((_DWORD *)this + 8) = *(unsigned __int16 *)((char *)a2 + (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFE70uLL) + 1154);
  }
  if ( *(unsigned __int16 *)((char *)a2 + (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFE70uLL) + 1154) != *((_DWORD *)this + 8) )
    goto LABEL_14;
  DragRecognizer::AddPoint(
    this,
    a2,
    (const struct tagPOINT *)((char *)a2 + (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFE70uLL) + 1156),
    v5);
  if ( v6 != 1 )
    goto LABEL_14;
  return 0LL;
}
