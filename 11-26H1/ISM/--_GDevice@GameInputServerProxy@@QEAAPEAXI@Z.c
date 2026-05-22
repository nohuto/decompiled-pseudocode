/*
 * XREFs of ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x18010EC80
 * Callers:
 *     ?NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z @ 0x180068120 (-NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z.c)
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x18010EB84 (--1GameInputServerProxy@@EEAA@XZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009B2C4 (--3@YAXPEAX@Z.c)
 */

void **__fastcall GameInputServerProxy::Device::`scalar deleting destructor'(
        void **this,
        const struct std::nothrow_t *a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 3, a2);
  operator delete(this);
  return this;
}
