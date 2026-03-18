/*
 * XREFs of IoOpenDeviceInterfaceRegistryKey @ 0x140B256D0
 * Callers:
 *     DifIoOpenDeviceInterfaceRegistryKeyWrapper @ 0x14065D2D0 (DifIoOpenDeviceInterfaceRegistryKeyWrapper.c)
 *     IoWMISuggestInstanceName @ 0x140822380 (IoWMISuggestInstanceName.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14099EF5C (_CmOpenDeviceInterfaceRegKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x1409DB5D0 (PnpUnicodeStringToWstrFree.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140A12668 (IopApplyMutableTagToRegistryKey.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoOpenDeviceInterfaceRegistryKey(
        PUNICODE_STRING SymbolicLinkName,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceInterfaceRegKey)
{
  wchar_t *v6; // rsi
  wchar_t *Buffer; // r9
  unsigned __int64 Length; // rcx
  __int64 MaximumLength; // rdx
  wchar_t *Pool2; // rax
  wchar_t *v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r9
  NTSTATUS v14; // ebx

  v6 = 0LL;
  if ( !SymbolicLinkName )
    goto LABEL_15;
  Buffer = SymbolicLinkName->Buffer;
  if ( !Buffer )
    goto LABEL_15;
  Length = SymbolicLinkName->Length;
  if ( !(_WORD)Length )
    goto LABEL_15;
  MaximumLength = SymbolicLinkName->MaximumLength;
  if ( (unsigned __int16)MaximumLength >= 2u )
  {
    if ( (unsigned __int16)Length <= (unsigned __int16)MaximumLength )
    {
      if ( *Buffer
        && ((_WORD)Length != (_WORD)MaximumLength || Buffer[((unsigned __int64)(unsigned int)Length >> 1) - 1])
        && (Length > MaximumLength - 2 || Buffer[(Length >> 1) - 1] && Buffer[Length >> 1]) )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
        v11 = Pool2;
        if ( !Pool2 )
        {
          v14 = -1073741670;
          goto LABEL_14;
        }
        memmove(Pool2, SymbolicLinkName->Buffer, SymbolicLinkName->Length);
        v6 = v11;
        v11[(unsigned __int64)SymbolicLinkName->Length >> 1] = 0;
      }
      else
      {
        v6 = Buffer;
      }
      goto LABEL_12;
    }
LABEL_15:
    v14 = -1073741811;
    goto LABEL_14;
  }
LABEL_12:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v14 = CmOpenDeviceInterfaceRegKey(
          *(__int64 *)&PiPnpRtlCtx,
          (__int64)v6,
          50,
          v13,
          DesiredAccess,
          1,
          (__int64)DeviceInterfaceRegKey,
          0LL);
  if ( v14 >= 0 && DeviceInterfaceRegKey )
    IopApplyMutableTagToRegistryKey(*DeviceInterfaceRegKey);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
LABEL_14:
  PnpUnicodeStringToWstrFree(v6, (__int64)SymbolicLinkName);
  return v14;
}
