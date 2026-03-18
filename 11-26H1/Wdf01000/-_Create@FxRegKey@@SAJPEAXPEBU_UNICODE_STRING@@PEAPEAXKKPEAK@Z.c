/*
 * XREFs of ?_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z @ 0x14006B2E0
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x14006B030 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     RegistryWriteCurrentTime @ 0x14007CE50 (RegistryWriteCurrentTime.c)
 *     imp_WdfRegistryCreateKey @ 0x140081210 (imp_WdfRegistryCreateKey.c)
 *     ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x1400955A0 (-OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKe.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x14009893C (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1400AADCC (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxRegKey::_Create(
        void *ParentKey,
        _UNICODE_STRING *KeyName,
        void **NewKey,
        ACCESS_MASK DesiredAccess,
        ULONG CreateOptions,
        unsigned int *CreateDisposition)
{
  _OBJECT_ATTRIBUTES oa; // [rsp+40h] [rbp-38h] BYREF

  oa.RootDirectory = ParentKey;
  oa.ObjectName = KeyName;
  *(_QWORD *)&oa.Length = 48LL;
  *(_QWORD *)&oa.Attributes = 576LL;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  return ZwCreateKey(NewKey, DesiredAccess, &oa, 0, 0LL, CreateOptions, CreateDisposition);
}
