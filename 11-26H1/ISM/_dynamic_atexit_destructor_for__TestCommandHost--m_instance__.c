/*
 * XREFs of _dynamic_atexit_destructor_for__TestCommandHost::m_instance__ @ 0x1801DDCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VTestCommandHost@@@std@@QEBAXPEAVTestCommandHost@@@Z @ 0x18010CE10 (--R-$default_delete@VTestCommandHost@@@std@@QEBAXPEAVTestCommandHost@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__TestCommandHost::m_instance__(__int64 a1)
{
  if ( TestCommandHost::m_instance )
    std::default_delete<TestCommandHost>::operator()(a1, (TestCommandHost *)TestCommandHost::m_instance);
}
