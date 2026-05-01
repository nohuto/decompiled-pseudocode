/*
 * XREFs of ??_EWindowArrangementView@@UEAAPEAXI@Z @ 0x1805284B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x180528200 (--1WindowArrangementView@@UEAA@XZ.c)
 */

WindowArrangementView *__fastcall WindowArrangementView::`vector deleting destructor'(
        WindowArrangementView *this,
        char a2)
{
  WindowArrangementView::~WindowArrangementView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x290);
  return this;
}
