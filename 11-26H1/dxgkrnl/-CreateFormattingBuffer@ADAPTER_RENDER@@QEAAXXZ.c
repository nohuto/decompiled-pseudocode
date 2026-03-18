/*
 * XREFs of ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1401A5FF8
 * Callers:
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1401A729C (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_RENDER::CreateFormattingBuffer(ADAPTER_RENDER *this)
{
  if ( *((_QWORD *)this + 156) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4386;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pFormattingBuffer == NULL", 4386LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 156) )
    *((_QWORD *)this + 156) = operator new[](0xFC00uLL, 0x4B677844u, 64LL);
}
