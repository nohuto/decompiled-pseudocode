/*
 * XREFs of IopGetDeviceAttachmentBase @ 0x14026E884
 * Callers:
 *     IopGetDevicePDO @ 0x14026E760 (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026E7D0 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopCompleteUnloadOrDelete @ 0x140426EA4 (IopCompleteUnloadOrDelete.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140446FF4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopVerifyDriverObjectOnStack @ 0x1405CD540 (IopVerifyDriverObjectOnStack.c)
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
