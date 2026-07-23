/*
 * XREFs of IoWMISetSingleInstance @ 0x140828320
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     WmipQuerySetExecuteSI @ 0x140A0D9D4 (WmipQuerySetExecuteSI.c)
 *     WmipAllocateSingleInstanceWnode @ 0x140B28E30 (WmipAllocateSingleInstanceWnode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMISetSingleInstance(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        ULONG Version,
        ULONG ValueBufferSize,
        PVOID ValueBuffer)
{
  NTSTATUS SingleInstanceWnode; // ebx
  _QWORD *v10; // rdi
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v15; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF

  P[0] = 0LL;
  v15 = 0;
  v16 = 0;
  LODWORD(v17) = 0;
  SingleInstanceWnode = WmipAllocateSingleInstanceWnode(
                          64,
                          (_DWORD)InstanceName,
                          ValueBufferSize,
                          (unsigned int)&v16,
                          (__int64)&v17,
                          (__int64)&v15,
                          (__int64)P);
  if ( SingleInstanceWnode >= 0 )
  {
    v10 = P[0];
    v11 = v15;
    v12 = v16;
    *((_DWORD *)P[0] + 11) = 2;
    v10[2] = 0LL;
    *(_DWORD *)v10 = v11;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 2) = Version;
    *((_DWORD *)v10 + 12) = v12;
    *(_WORD *)((char *)v10 + v12) = InstanceName->Length;
    memmove((char *)v10 + v12 + 2, InstanceName->Buffer, InstanceName->Length);
    v13 = (unsigned int)v17;
    *((_DWORD *)v10 + 15) = ValueBufferSize;
    *((_DWORD *)v10 + 14) = v13;
    memmove((char *)v10 + v13, ValueBuffer, ValueBufferSize);
    LODWORD(v17) = *(_DWORD *)v10;
    SingleInstanceWnode = WmipQuerySetExecuteSI(DataBlockObject, (__int64)v10, v11, (__int64)&v17);
    ExFreePoolWithTag(v10, 0);
  }
  return SingleInstanceWnode;
}
