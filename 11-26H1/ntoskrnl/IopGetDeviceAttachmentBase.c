/*
 * XREFs of IopGetDeviceAttachmentBase @ 0x14026F314
 * Callers:
 *     IopGetDevicePDO @ 0x14026F1F0 (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026F260 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14044EEC4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopVerifyDriverObjectOnStack @ 0x1405CAC70 (IopVerifyDriverObjectOnStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetDeviceAttachmentBase(__int64 a1)
{
  __int64 v1; // r8
  __int64 i; // rdx

  v1 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL); i; i = *(_QWORD *)(*(_QWORD *)(i + 312) + 48LL) )
    v1 = i;
  return v1;
}
