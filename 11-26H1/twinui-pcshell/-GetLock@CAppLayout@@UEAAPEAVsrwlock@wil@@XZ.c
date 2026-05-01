/*
 * XREFs of ?GetLock@CAppLayout@@UEAAPEAVsrwlock@wil@@XZ @ 0x1806C68B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct wil::srwlock *__fastcall CAppLayout::GetLock(CAppLayout *this)
{
  return (CAppLayout *)((char *)this + 24);
}
