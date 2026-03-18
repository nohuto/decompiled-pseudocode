/*
 * XREFs of ?AcquireExclusive@CTreeLock@@QEAAXXZ @ 0x18014F6D0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x180032674 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014F3A4 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CTreeLock::AcquireExclusive(RTL_SRWLOCK *this)
{
  DWORD CurrentThreadId; // eax
  DWORD v3; // ecx
  _DWORD *Value; // rbx
  CThreadContext *v5; // rax
  CThreadContext *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  AcquireSRWLockExclusive(this);
  CurrentThreadId = GetCurrentThreadId();
  v3 = CThreadContext::s_dwTlsIndex;
  LODWORD(this[1].Ptr) = CurrentThreadId;
  Value = TlsGetValue(v3);
  if ( !Value )
  {
    v5 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v5 || (v6 = CThreadContext::CThreadContext(v5), (Value = v6) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x87,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)0x8007000ELL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v6);
  }
  ++Value[10];
}
