/*
 * XREFs of ??0DispBrokerClient@DispBroker@@QEAA@XZ @ 0x14019BAA4
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x14002C24C (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     Feature_IncreaseSyncAlpcTimeoutValue__private_IsEnabledDeviceUsageNoInline @ 0x1401ABECC (Feature_IncreaseSyncAlpcTimeoutValue__private_IsEnabledDeviceUsageNoInline.c)
 */

DispBroker::DispBrokerClient *__fastcall DispBroker::DispBrokerClient::DispBrokerClient(
        DispBroker::DispBrokerClient *this)
{
  *(_QWORD *)this = 0LL;
  *((_WORD *)this + 4) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 2) = (-(__int64)((unsigned int)Feature_IncreaseSyncAlpcTimeoutValue__private_IsEnabledDeviceUsageNoInline() != 0) & 0xFFFFFFFFE8287C00uLL)
                        - 50000000;
  DispBroker::DispBrokerClient::LoadRegistrySettings(this);
  return this;
}
