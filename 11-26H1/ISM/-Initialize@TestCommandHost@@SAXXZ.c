/*
 * XREFs of ?Initialize@TestCommandHost@@SAXXZ @ 0x180099810
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x18004B6EC (-Initialize@InputStateManager@@IEAAJXZ.c)
 * Callees:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x180042ED4 (--0TestCommandHost@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??R?$default_delete@VTestCommandHost@@@std@@QEBAXPEAVTestCommandHost@@@Z @ 0x18010CE10 (--R-$default_delete@VTestCommandHost@@@std@@QEBAXPEAVTestCommandHost@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void TestCommandHost::Initialize(void)
{
  TestCommandHost *v0; // rax
  __int64 v1; // rdx
  TestCommandHost *v2; // [rsp+30h] [rbp+8h]

  if ( !TestCommandHost::m_instance )
  {
    v2 = (TestCommandHost *)operator new(0x88uLL);
    v0 = TestCommandHost::TestCommandHost(v2);
    v1 = TestCommandHost::m_instance;
    TestCommandHost::m_instance = (__int64)v0;
    if ( v1 )
      std::default_delete<TestCommandHost>::operator()();
  }
}
