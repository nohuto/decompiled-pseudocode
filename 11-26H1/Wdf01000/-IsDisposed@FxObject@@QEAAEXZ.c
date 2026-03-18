/*
 * XREFs of ?IsDisposed@FxObject@@QEAAEXZ @ 0x14003A088
 * Callers:
 *     ??1FxDevice@@UEAA@XZ @ 0x140039D90 (--1FxDevice@@UEAA@XZ.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x14003C014 (--1FxDriver@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxObject::IsDisposed(FxObject *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v5; // al
  bool v6; // bl

  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierOn || !m_Globals->FxVerifierHandle )
    return 1;
  p_m_Lock = &this->m_SpinLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v6 = this->m_ObjectState != 1;
  KeReleaseSpinLock(p_m_Lock, v5);
  return v6;
}
