/*
 * XREFs of ?Clear@tagUNIQUE_WINDOW_HANDLE@@QEAAXXZ @ 0x1401AA440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagUNIQUE_WINDOW_HANDLE::Clear(tagUNIQUE_WINDOW_HANDLE *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
}
