/*
 * XREFs of ?GetInputFlags@CInputQueue@@UEBAJPEAW4CompositionInputFlags@@@Z @ 0x1401334B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputQueue::GetInputFlags(CInputQueue *this, enum CompositionInputFlags *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 16);
  return 0LL;
}
