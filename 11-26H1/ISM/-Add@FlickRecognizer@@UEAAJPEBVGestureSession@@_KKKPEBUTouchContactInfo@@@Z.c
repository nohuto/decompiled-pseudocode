/*
 * XREFs of ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B8750
 * Callers:
 *     <none>
 * Callees:
 *     ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x1801B88B0 (-AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z.c)
 *     ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x1801B8990 (-CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FlickRecognizer::Add(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        __int16 a3,
        unsigned int a4)
{
  char v5; // r15
  unsigned int v8; // r14d
  char v9; // si
  const struct GestureSession *v10; // rdx
  FlickRecognizer *v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // rax

  v5 = a3;
  if ( (a3 & 0x100) == 0 )
  {
    if ( (*((_DWORD *)a2 + 3) & 0x7880) != 0 )
    {
      v8 = *((_DWORD *)a2 + 187);
      v9 = 1;
    }
    else
    {
      v9 = 0;
      v8 = 1;
    }
    if ( (a3 & 1) != 0 )
    {
      (*(void (__fastcall **)(FlickRecognizer *))(*(_QWORD *)this + 32LL))(this);
      *((_DWORD *)this + 35) = *(unsigned __int16 *)((char *)a2 + (-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFE70uLL) + 1154);
    }
    v10 = a2;
    v11 = this;
    if ( v8 <= 1 )
    {
      v12 = -(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFE70uLL;
      if ( *(unsigned __int16 *)((char *)a2 + v12 + 1154) != *((_DWORD *)this + 35) )
      {
        (*(void (__fastcall **)(FlickRecognizer *, const struct GestureSession *))(*(_QWORD *)this + 32LL))(this, a2);
        v10 = a2;
        *((_DWORD *)this + 35) = *(unsigned __int16 *)((char *)a2 + v12 + 1154);
        v11 = this;
      }
      FlickRecognizer::AddPoint(v11, v10, *(struct tagPOINT *)((char *)a2 + v12 + 1156), a4);
      if ( (v5 & 4) != 0 )
      {
        v13 = *((unsigned __int8 *)this + 137);
        if ( (_BYTE)v13 != 10 && a4 - *((_DWORD *)this + 3 * v13 + 6) > *((unsigned __int16 *)this + 81) )
          (*(void (__fastcall **)(FlickRecognizer *, const struct GestureSession *))(*(_QWORD *)this + 32LL))(this, a2);
        FlickRecognizer::CheckForFlick(this, a2);
      }
    }
    else
    {
      (*(void (__fastcall **)(FlickRecognizer *, const struct GestureSession *))(*(_QWORD *)this + 32LL))(this, a2);
    }
  }
  return 0LL;
}
