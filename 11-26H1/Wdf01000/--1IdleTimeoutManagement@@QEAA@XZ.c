/*
 * XREFs of ??1IdleTimeoutManagement@@QEAA@XZ @ 0x140083D44
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x14003BF28 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall IdleTimeoutManagement::~IdleTimeoutManagement(IdleTimeoutManagement *this)
{
  _POX_SETTINGS *m_PoxSettings; // r8
  unsigned int v2; // ecx
  _PO_FX_COMPONENT_V1 *Component; // rax

  m_PoxSettings = this->m_PoxSettings;
  v2 = 0;
  if ( m_PoxSettings )
  {
    Component = m_PoxSettings->Component;
    if ( Component )
      v2 = 24 * Component->IdleStateCount + 32;
    ExFreePoolWithTag((char *)m_PoxSettings - v2, 0);
  }
}
