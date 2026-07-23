/*
 * XREFs of IoWMISetSingleItem @ 0x140828460
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     WmipQuerySetExecuteSI @ 0x140A0D9D4 (WmipQuerySetExecuteSI.c)
 *     WmipAllocateSingleInstanceWnode @ 0x140B28E30 (WmipAllocateSingleInstanceWnode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMISetSingleItem(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        ULONG DataItemId,
        ULONG Version,
        ULONG ValueBufferSize,
        PVOID ValueBuffer)
{
  NTSTATUS SingleInstanceWnode; // ebx
  _QWORD *v11; // rdi
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v16; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF

  P[0] = 0LL;
  v16 = 0;
  v17 = 0;
  LODWORD(v18) = 0;
  SingleInstanceWnode = WmipAllocateSingleInstanceWnode(
                          68,
                          (_DWORD)InstanceName,
                          ValueBufferSize,
                          (unsigned int)&v17,
                          (__int64)&v18,
                          (__int64)&v16,
                          (__int64)P);
  if ( SingleInstanceWnode >= 0 )
  {
    v11 = P[0];
    v12 = v16;
    v13 = v17;
    *((_DWORD *)P[0] + 11) = 4;
    v11[2] = 0LL;
    *(_DWORD *)v11 = v12;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 2) = Version;
    *((_DWORD *)v11 + 14) = DataItemId;
    *((_DWORD *)v11 + 12) = v13;
    *(_WORD *)((char *)v11 + v13) = InstanceName->Length;
    memmove((char *)v11 + v13 + 2, InstanceName->Buffer, InstanceName->Length);
    v14 = (unsigned int)v18;
    *((_DWORD *)v11 + 16) = ValueBufferSize;
    *((_DWORD *)v11 + 15) = v14;
    memmove((char *)v11 + v14, ValueBuffer, ValueBufferSize);
    LODWORD(v18) = *(_DWORD *)v11;
    SingleInstanceWnode = WmipQuerySetExecuteSI(DataBlockObject, (__int64)v11, v12, (__int64)&v18);
    ExFreePoolWithTag(v11, 0);
  }
  return SingleInstanceWnode;
}
