/*
 * XREFs of ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1400603BC
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14001B4B0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?Init@FxPowerIdleMachine@@QEAAJXZ @ 0x1400604A0 (-Init@FxPowerIdleMachine@@QEAAJXZ.c)
 */

int __fastcall FxPowerPolicyOwnerSettings::Init(FxPowerPolicyOwnerSettings *this)
{
  struct _CALLBACK_OBJECT **p_m_PowerCallbackObject; // rbx
  PVOID v3; // rax
  _UNICODE_STRING string; // [rsp+20h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES oa; // [rsp+30h] [rbp-38h] BYREF

  *(&oa.Length + 1) = 0;
  *(&oa.Attributes + 1) = 0;
  string = 0LL;
  RtlInitUnicodeString(&string, L"\\Callback\\PowerState");
  oa.Length = 48;
  oa.ObjectName = &string;
  p_m_PowerCallbackObject = &this->m_PowerCallbackObject;
  oa.RootDirectory = 0LL;
  oa.Attributes = 64;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  if ( ExCreateCallback(&this->m_PowerCallbackObject, &oa, 0, 1u) >= 0 )
  {
    v3 = ExRegisterCallback(*p_m_PowerCallbackObject, FxPowerPolicyOwnerSettings::_PowerStateCallback, this);
    this->m_PowerCallbackRegistration = v3;
    if ( !v3 )
    {
      ObfDereferenceObject(*p_m_PowerCallbackObject);
      *p_m_PowerCallbackObject = 0LL;
    }
  }
  return FxPowerIdleMachine::Init(&this->m_PowerIdleMachine);
}
