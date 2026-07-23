/*
 * XREFs of VrpPreQueryKeyName @ 0x140AA5E64
 * Callers:
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140213010 (EtwWriteTransfer.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall VrpPreQueryKeyName(__int64 a1)
{
  __int64 v2; // rsi
  __int64 *v3; // r13
  __int16 *v4; // r14
  unsigned int v5; // ecx
  char *v6; // r12
  bool IsKernelAddress; // al
  bool v8; // r15
  size_t v9; // r8
  void *v10; // rdx
  char *v11; // rcx
  __int16 v12; // ax
  __int16 *v13; // rcx
  __int16 v14; // cx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 *v19; // rcx
  __int64 v20; // [rsp+38h] [rbp-C0h]
  __int64 v21; // [rsp+40h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B0h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-88h] BYREF
  __int16 *v25; // [rsp+80h] [rbp-78h]
  int v26; // [rsp+88h] [rbp-70h]
  int v27; // [rsp+8Ch] [rbp-6Ch]
  int *v28; // [rsp+90h] [rbp-68h]
  __int64 v29; // [rsp+98h] [rbp-60h]
  __int64 v30; // [rsp+A0h] [rbp-58h]
  int v31; // [rsp+A8h] [rbp-50h] BYREF
  int v32; // [rsp+ACh] [rbp-4Ch]
  __int64 *v33; // [rsp+B0h] [rbp-48h]
  __int64 v34; // [rsp+B8h] [rbp-40h]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v21 = v2;
  if ( (unsigned int)dword_140E0A5C0 > 2 )
  {
    v3 = &EmptyUnicodeString;
    v19 = (__int64 *)(v2 + 16);
    if ( !*(_QWORD *)(v2 + 24) )
      v19 = &EmptyUnicodeString;
    v28 = &v31;
    v29 = 2LL;
    v30 = v19[1];
    v31 = *(unsigned __int16 *)v19;
    v32 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 2;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_140E0A5C8;
    UserData.Size = *(unsigned __int16 *)off_140E0A5C8;
    UserData.Reserved = 2;
    v25 = (__int16 *)byte_14005B903;
    v26 = 35;
    v27 = 1;
    LODWORD(v20) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E0A5E0, &EventDescriptor, &ActivityId, 0LL, 4u, &UserData);
  }
  else
  {
    v3 = &EmptyUnicodeString;
  }
  v4 = (__int16 *)(v2 + 16);
  v20 = v2 + 16;
  v5 = *(unsigned __int16 *)(v2 + 16) + 18;
  **(_DWORD **)(a1 + 24) = v5;
  if ( *(_DWORD *)(a1 + 16) < v5 )
  {
    v17 = -1073741820;
  }
  else
  {
    v6 = (char *)(*(_QWORD *)(a1 + 8) + 16LL);
    IsKernelAddress = MmIsKernelAddress((unsigned __int64)v6);
    v8 = !IsKernelAddress;
    v9 = (unsigned __int16)*v4;
    v10 = *(void **)(v2 + 24);
    if ( IsKernelAddress )
      RtlCopyVolatileMemory(v6, v10, v9);
    else
      RtlCopyToUser(v6, v10, v9);
    v11 = &v6[2 * ((unsigned __int64)(unsigned __int16)*v4 >> 1)];
    if ( v8 )
      RtlWriteUShortToUser(v11, 0);
    else
      *(_WORD *)v11 = 0;
    v12 = *v4;
    v13 = *(__int16 **)(a1 + 8);
    if ( v8 )
      RtlWriteUShortToUser(v13, v12);
    else
      *v13 = v12;
    v14 = *v4;
    v15 = *(_QWORD *)(a1 + 8);
    if ( v8 )
      RtlWriteUShortToUser((_WORD *)(v15 + 2), v14);
    else
      *(_WORD *)(v15 + 2) = v14;
    v16 = *(_QWORD *)(a1 + 8);
    if ( v8 )
      RtlWriteULong64ToUser((_QWORD *)(v16 + 8), (__int64)v6);
    else
      *(_QWORD *)(v16 + 8) = v6;
    v17 = -1073740541;
  }
  if ( (unsigned int)dword_140E0A5C0 > 5 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      v3 = (__int64 *)(v2 + 16);
    v28 = &v31;
    v29 = 2LL;
    v30 = v3[1];
    v31 = *(unsigned __int16 *)v3;
    v32 = 0;
    LODWORD(v21) = v17;
    v33 = &v21;
    v34 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_140E0A5C8;
    UserData.Size = *(unsigned __int16 *)off_140E0A5C8;
    UserData.Reserved = 2;
    v25 = word_14005BA8A;
    v26 = 51;
    v27 = 1;
    LODWORD(v20) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E0A5E0, &EventDescriptor, &ActivityId, 0LL, 5u, &UserData);
  }
  return v17;
}
