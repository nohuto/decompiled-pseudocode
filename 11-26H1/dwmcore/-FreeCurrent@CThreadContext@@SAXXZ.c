/*
 * XREFs of ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1801BC5C0
 * Callers:
 *     DllMain @ 0x1801BC54C (DllMain.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CThreadContext@@AEAA@XZ @ 0x18028C1D8 (--1CThreadContext@@AEAA@XZ.c)
 */

void CThreadContext::FreeCurrent(void)
{
  CThreadContext *Value; // rax
  CThreadContext *v1; // rbx

  Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  v1 = Value;
  if ( Value )
  {
    CThreadContext::~CThreadContext(Value);
    operator delete(v1, 0x1C0uLL);
    TlsSetValue(CThreadContext::s_dwTlsIndex, 0LL);
  }
}
