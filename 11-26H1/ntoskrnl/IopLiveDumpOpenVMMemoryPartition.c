/*
 * XREFs of IopLiveDumpOpenVMMemoryPartition @ 0x1405D3420
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwOpenPartition @ 0x14072A600 (ZwOpenPartition.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopLiveDumpOpenVMMemoryPartition(__int64 a1)
{
  NTSTATUS v2; // ebx
  void *v3; // rcx
  bool v4; // al
  bool v6; // [rsp+38h] [rbp-69h] BYREF
  PVOID Object; // [rsp+40h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v10[2]; // [rsp+88h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+98h] [rbp-9h] BYREF
  _QWORD *v12; // [rsp+B8h] [rbp+17h]
  __int64 v13; // [rsp+C0h] [rbp+1Fh]
  bool *v14; // [rsp+C8h] [rbp+27h]
  __int64 v15; // [rsp+D0h] [rbp+2Fh]
  PVOID *p_Object; // [rsp+D8h] [rbp+37h]
  __int64 v17; // [rsp+E0h] [rbp+3Fh]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartitionHyperV");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenPartition((PHANDLE)(a1 + 1096), 2u, &ObjectAttributes);
  if ( v2 < 0
    || (v3 = *(void **)(a1 + 1096),
        Object = 0LL,
        v2 = ObReferenceObjectByHandle(v3, 2u, PsPartitionType, 0, &Object, 0LL),
        *(_QWORD *)(a1 + 1104) = Object,
        v2 < 0) )
  {
    LODWORD(Object) = v2;
    *(_DWORD *)(a1 + 80) |= 4u;
    if ( IopLiveDumpIsTracingEnabled() )
    {
      v10[1] = 4LL;
      v10[0] = &Object;
      IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_OPEN_VM_MEMORY_PARTITION_FAILURE, 1LL, v10);
    }
    if ( (unsigned int)dword_140E06D90 > 5 && tlgKeywordOn((__int64)&dword_140E06D90, 0x200000000000LL) )
    {
      v10[0] = 0x1000000LL;
      v12 = v10;
      v4 = (*(_DWORD *)(a1 + 80) & 4) != 0;
      v13 = 8LL;
      v6 = v4;
      v15 = 1LL;
      v14 = &v6;
      p_Object = &Object;
      LODWORD(Object) = v2;
      v17 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06D90,
        (unsigned __int8 *)byte_140047DEB,
        (const GUID *)(a1 + 968),
        (const GUID *)(a1 + 952),
        5u,
        &v11);
    }
  }
  return (unsigned int)v2;
}
