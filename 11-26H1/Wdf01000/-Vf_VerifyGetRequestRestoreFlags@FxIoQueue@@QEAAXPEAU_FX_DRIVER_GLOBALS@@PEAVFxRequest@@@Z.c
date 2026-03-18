/*
 * XREFs of ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400E5024
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140011D60 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxIoQueue::Vf_VerifyGetRequestRestoreFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *pRequest,
        FxRequest *FxDriverGlobals)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *irql; // [rsp+38h] [rbp+10h] BYREF

  irql = pRequest;
  LOBYTE(irql) = 0;
  FxNonPagedObject::Lock(FxDriverGlobals, (unsigned __int8 *)&irql, (unsigned __int8)FxDriverGlobals);
  v4 = (unsigned __int8)irql;
  FxDriverGlobals->m_VerifierFlags = FxDriverGlobals->m_VerifierFlags & 0xFFFC | 1;
  FxNonPagedObject::Unlock(FxDriverGlobals, v4, v5);
}
