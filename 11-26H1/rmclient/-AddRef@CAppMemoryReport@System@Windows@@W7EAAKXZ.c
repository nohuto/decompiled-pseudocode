/*
 * XREFs of ?AddRef@CAppMemoryReport@System@Windows@@W7EAAKXZ @ 0x1800174F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::System::CAppMemoryReport::AddRef(__int64 a1, volatile int *a2)
{
  return Windows::System::CAppMemoryReport::AddRef((Windows::System::CAppMemoryReport *)(a1 - 8), a2);
}
