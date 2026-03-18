/*
 * XREFs of ?_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA_COMPLETION_STATUS@@@Z @ 0x140072300
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qqqD @ 0x14008838C (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qD @ 0x140088B34 (WPP_IFR_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxDmaSystemTransaction::_SystemDmaCompletion(
        _DMA_ADAPTER *__formal,
        _DEVICE_OBJECT *a2,
        FxNonPagedObject *CompletionContext,
        unsigned int Status)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r8
  char v9; // bp
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int8 FxVerifierOn; // al
  FxVerifierLock *Blink; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rbx
  const void *v16; // rcx
  unsigned __int8 oldIrql; // [rsp+80h] [rbp+18h] BYREF

  m_Globals = CompletionContext->m_Globals;
  oldIrql = 0;
  if ( SLOBYTE(CompletionContext->m_ObjectFlags) < 0
    && (Blink = (FxVerifierLock *)CompletionContext[-1].m_ChildEntry.Blink) != 0LL )
  {
    FxVerifierLock::Lock(Blink, &oldIrql, (unsigned __int8)CompletionContext);
    v7 = oldIrql;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&CompletionContext->m_NPLock.m_Lock);
  }
  if ( *(_QWORD *)&CompletionContext[2].m_SpinLock.m_DbgFlagIsInitialized )
  {
    HIDWORD(CompletionContext[2].m_SpinLock.m_Lock) = Status;
    v9 = 1;
    BYTE1(CompletionContext[2].m_SpinLock.m_Lock) = 1;
  }
  else
  {
    v9 = 0;
  }
  FxNonPagedObject::Unlock(CompletionContext, v7, v8);
  FxVerifierOn = m_Globals->FxVerifierOn;
  if ( v9 == 1 )
  {
    if ( FxVerifierOn && m_Globals->FxVerboseOn )
    {
      m_ObjectSize = CompletionContext->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)CompletionContext ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qD(m_Globals, v10, 0xFu, 0xCu, WPP_FxDmaTransactionSystem_cpp_Traceguids, _a2, Status);
    }
  }
  else
  {
    if ( FxVerifierOn && m_Globals->FxVerboseOn )
    {
      v16 = (const void *)((unsigned __int64)CompletionContext ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !CompletionContext->m_ObjectSize )
        v16 = 0LL;
      WPP_IFR_SF_qqqD(
        m_Globals,
        v10,
        v11,
        0xDu,
        WPP_FxDmaTransactionSystem_cpp_Traceguids,
        CompletionContext[2].m_DisposeSingleEntry.Next,
        CompletionContext[2].m_DeviceBase,
        v16,
        Status);
    }
    CompletionContext->__vftable[2].QueryInterface(CompletionContext, (FxQueryInterfaceParams *)Status);
  }
}
