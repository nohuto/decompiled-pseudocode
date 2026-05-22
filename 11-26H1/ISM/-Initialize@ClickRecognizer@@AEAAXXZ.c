/*
 * XREFs of ?Initialize@ClickRecognizer@@AEAAXXZ @ 0x1801B971C
 * Callers:
 *     ??0ClickRecognizer@@QEAA@XZ @ 0x1801B9190 (--0ClickRecognizer@@QEAA@XZ.c)
 *     ?Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1801B9920 (-Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClickRecognizer::Initialize(ClickRecognizer *this)
{
  *((_WORD *)this + 8) = *((_WORD *)this + 8) & 0x80 | 2;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 10) = 12;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 13) = 12;
  *((_OWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 16) = 16;
  *((_OWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 20) = 16;
}
