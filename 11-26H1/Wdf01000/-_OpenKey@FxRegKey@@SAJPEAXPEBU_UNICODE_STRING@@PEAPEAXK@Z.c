/*
 * XREFs of ?_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z @ 0x140070C6C
 * Callers:
 *     imp_WdfRegistryOpenKey @ 0x1400814D0 (imp_WdfRegistryOpenKey.c)
 *     ?FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z @ 0x14008D078 (-FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400967C8 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x14009893C (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxRegKey::_OpenKey(
        void *ParentKey,
        _UNICODE_STRING *KeyName,
        void **Key,
        ACCESS_MASK DesiredAccess)
{
  _OBJECT_ATTRIBUTES oa; // [rsp+20h] [rbp-38h] BYREF

  oa.RootDirectory = ParentKey;
  oa.ObjectName = KeyName;
  *(_QWORD *)&oa.Length = 48LL;
  *(_QWORD *)&oa.Attributes = 576LL;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  return ZwOpenKey(Key, DesiredAccess, &oa);
}
