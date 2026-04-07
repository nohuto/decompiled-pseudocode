/*
 * XREFs of ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180065660
 * Callers:
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800655C4 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18008E5EC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=6
CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::WindowFrame::WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  `eh vector constructor iterator'(
    (char *)this + 192,
    0x140uLL,
    4uLL,
    (void (*)(void *))CTopLevelWindow::WindowFrame::DPIImages::DPIImages,
    (void (*)(void *))CTopLevelWindow::WindowFrame::DPIImages::~DPIImages);
  return this;
}
