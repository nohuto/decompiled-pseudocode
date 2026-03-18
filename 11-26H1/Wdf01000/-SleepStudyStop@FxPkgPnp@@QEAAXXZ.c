/*
 * XREFs of ?SleepStudyStop@FxPkgPnp@@QEAAXXZ @ 0x14003BAC4
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14003AF3C (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::SleepStudyStop(FxPkgPnp *this)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx

  m_SleepStudy = this->m_SleepStudy;
  if ( m_SleepStudy )
  {
    if ( m_SleepStudy->ComponentPowerRef )
    {
      SleepstudyHelper_UnregisterComponent();
      this->m_SleepStudy->ComponentPowerRef = 0LL;
    }
    if ( this->m_SleepStudy->SleepStudyLibContext )
    {
      SleepstudyHelper_Uninitialize();
      this->m_SleepStudy->SleepStudyLibContext = 0LL;
    }
    ExFreePoolWithTag(this->m_SleepStudy, 0);
    this->m_SleepStudy = 0LL;
  }
}
