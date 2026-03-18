/*
 * XREFs of IopLiveDumpOpenVMMemoryPartition @ 0x1405D0C1C
 * Callers:
 *     IoCaptureLiveDump @ 0x14051255C (IoCaptureLiveDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405D78B4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwOpenPartition @ 0x140725A30 (ZwOpenPartition.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopLiveDumpOpenVMMemoryPartition(__int64 a1)
{
  NTSTATUS v2; // ebx
  void *v3; // rcx
  bool v4; // al
  bool v6; // [rsp+38h] [rbp-69h] BYREF
  PVOID Object; // [rsp+40h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  _DWORD v9[2]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v10; // [rsp+60h] [rbp-41h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-39h]
  int v12; // [rsp+70h] [rbp-31h]
  int v13; // [rsp+74h] [rbp-2Dh]
  __int128 v14; // [rsp+78h] [rbp-29h]
  _QWORD v15[2]; // [rsp+88h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+98h] [rbp-9h] BYREF
  _QWORD *v17; // [rsp+B8h] [rbp+17h]
  __int64 v18; // [rsp+C0h] [rbp+1Fh]
  bool *v19; // [rsp+C8h] [rbp+27h]
  __int64 v20; // [rsp+D0h] [rbp+2Fh]
  PVOID *p_Object; // [rsp+D8h] [rbp+37h]
  __int64 v22; // [rsp+E0h] [rbp+3Fh]

  v9[1] = 0;
  v13 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartitionHyperV");
  v9[0] = 48;
  p_DestinationString = &DestinationString;
  v10 = 0LL;
  v12 = 512;
  v14 = 0LL;
  v2 = ZwOpenPartition(a1 + 1096, 2LL, v9);
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
      v15[1] = 4LL;
      v15[0] = &Object;
      IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_OPEN_VM_MEMORY_PARTITION_FAILURE, 1LL, v15);
    }
    if ( (unsigned int)dword_140E06D90 > 5 && tlgKeywordOn((__int64)&dword_140E06D90, 0x200000000000LL) )
    {
      v15[0] = 0x1000000LL;
      v17 = v15;
      v4 = (*(_DWORD *)(a1 + 80) & 4) != 0;
      v18 = 8LL;
      v6 = v4;
      v20 = 1LL;
      v19 = &v6;
      p_Object = &Object;
      LODWORD(Object) = v2;
      v22 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06D90,
        (unsigned __int8 *)&word_140047126,
        (const GUID *)(a1 + 968),
        (const GUID *)(a1 + 952),
        5u,
        &v16);
    }
  }
  return (unsigned int)v2;
}
