/*
 * XREFs of ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x1800315C8
 * Callers:
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800314A0 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009AFC4 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=6
CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::WindowFrame::WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  *(_QWORD *)this = &CTopLevelWindow::WindowFrame::`vftable';
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 8));
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 40));
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 72));
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 104));
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 136));
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 168));
  `eh vector constructor iterator'(
    (char *)this + 200,
    0x140uLL,
    4uLL,
    (void (*)(void *))CTopLevelWindow::WindowFrame::DPIImages::DPIImages,
    (void (*)(void *))CTopLevelWindow::WindowFrame::DPIImages::~DPIImages);
  return this;
}
