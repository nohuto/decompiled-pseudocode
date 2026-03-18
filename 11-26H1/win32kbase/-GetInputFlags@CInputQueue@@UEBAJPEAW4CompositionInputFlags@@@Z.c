/*
 * XREFs of ?GetInputFlags@CInputQueue@@UEBAJPEAW4CompositionInputFlags@@@Z @ 0x14016B100
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
