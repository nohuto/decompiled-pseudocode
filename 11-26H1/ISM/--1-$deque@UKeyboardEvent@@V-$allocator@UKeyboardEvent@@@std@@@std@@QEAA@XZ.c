/*
 * XREFs of ??1?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@QEAA@XZ @ 0x1800F0CFC
 * Callers:
 *     ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800F5838 (--1KeyboardOverriderDispatcher@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXXZ @ 0x1800F41D0 (-_Tidy@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<KeyboardEvent>::~deque<KeyboardEvent>(void **a1)
{
  void *v2; // rcx

  std::deque<KeyboardEvent>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16>(v2, (struct std::nothrow_t *)0x10);
}
