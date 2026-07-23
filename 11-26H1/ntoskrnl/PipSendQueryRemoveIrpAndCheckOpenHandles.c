/*
 * XREFs of PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407BB964
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x1409B568C (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026E7D0 (IoGetDeviceAttachmentBaseRef.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PnpIsChainDereferenced @ 0x1404DC41C (PnpIsChainDereferenced.c)
 *     PnpCollectOpenHandles @ 0x1407B0814 (PnpCollectOpenHandles.c)
 *     PnpFreeVetoInformation @ 0x1407B08B4 (PnpFreeVetoInformation.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1409B6D78 (PnpDeleteLockedDeviceNodes.c)
 *     PnpLogVetoInformation @ 0x140B478A4 (PnpLogVetoInformation.c)
 */

__int64 __fastcall PipSendQueryRemoveIrpAndCheckOpenHandles(
        int a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        PVOID **a5,
        LARGE_INTEGER Interval)
{
  __int64 v6; // r15
  _DWORD *QuadPart; // r14
  UNICODE_STRING *v11; // r12
  int v12; // edi
  __int64 v13; // rax
  unsigned int i; // ebx
  PVOID **v15; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v17; // rbx
  char *DeviceNode; // rdx
  int v19; // r9d
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  _QWORD *v23[2]; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+60h] [rbp-10h]
  bool v25; // [rsp+64h] [rbp-Ch]
  bool v26; // [rsp+65h] [rbp-Bh]
  char v27; // [rsp+66h] [rbp-Ah]
  char v28; // [rsp+67h] [rbp-9h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A8h] [rbp+38h] BYREF

  v6 = *(_QWORD *)(a2 + 160);
  QuadPart = (_DWORD *)Interval.QuadPart;
  DeviceObject = 0LL;
  v11 = (UNICODE_STRING *)(Interval.QuadPart + 8);
  v12 = PnpDeleteLockedDeviceNodes(
          v6,
          a3,
          0,
          1,
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          Interval.QuadPart,
          Interval.QuadPart + 8);
  v27 = 0;
  v28 = 0;
  v26 = (a1 & 0xFFFFFFFB) == 0;
  if ( v6 )
    v13 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v13 = 0LL;
  v24 = 0;
  v22 = v13 + 40;
  v23[1] = v23;
  v23[0] = v23;
  v21 = 0LL;
  v25 = (NtGlobalFlag & 0x4000) != 0;
  if ( v12 < 0 )
  {
    if ( *QuadPart == 6 )
      PnpCollectOpenHandles(a5, a4, (__int64)&v21);
  }
  else
  {
    v12 = 0;
    Interval.QuadPart = -1000000LL;
    for ( i = 0; i < 0x32; ++i )
    {
      if ( i )
        KeDelayExecutionThread(0, 0, &Interval);
      if ( !PnpIsChainDereferenced((__int64 *)a5, a4, 1, 0, &DeviceObject) )
        goto LABEL_20;
    }
    v15 = a5;
    *QuadPart = 5;
    PnpCollectOpenHandles(v15, a4, (__int64)&v21);
    if ( DeviceObject )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v17 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
        DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      else
        DeviceNode = 0LL;
      RtlCopyUnicodeString(v11, (PCUNICODE_STRING)(DeviceNode + 40));
      ObfDereferenceObject(v17);
    }
    else
    {
      RtlInitUnicodeString(v11, 0LL);
    }
    LOBYTE(v19) = 1;
    PnpDeleteLockedDeviceNodes(v6, a3, 1, v19, 0, 0, 0LL, 0LL);
    v12 = -2147483608;
  }
LABEL_20:
  if ( v26 )
  {
    PnpLogVetoInformation(v22, v23);
    PnpFreeVetoInformation(v23);
  }
  return (unsigned int)v12;
}
