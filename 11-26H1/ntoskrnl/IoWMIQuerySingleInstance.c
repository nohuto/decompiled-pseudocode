/*
 * XREFs of IoWMIQuerySingleInstance @ 0x140A0D070
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WmipQuerySetExecuteSI @ 0x140A0D9D4 (WmipQuerySetExecuteSI.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIQuerySingleInstance(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  ULONG v5; // ebp
  unsigned int v6; // edi
  _DWORD *Pool2; // rbx
  NTSTATUS SetExecuteSI; // edi
  int v12; // eax
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v5 = *InOutBufferSize;
  v6 = (InstanceName->Length + 73) & 0xFFFFFFF8;
  Pool2 = OutBuffer;
  if ( !OutBuffer || v5 < v6 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v5 = v6;
    if ( !Pool2 )
      return -1073741670;
  }
  memset_0(Pool2, 0, 0x40uLL);
  Pool2[11] = 2;
  *Pool2 = v6;
  Pool2[12] = 64;
  Pool2[14] = v6;
  *((_WORD *)Pool2 + 32) = InstanceName->Length;
  memmove((char *)Pool2 + 66, InstanceName->Buffer, InstanceName->Length);
  LODWORD(v14) = *Pool2;
  SetExecuteSI = WmipQuerySetExecuteSI(DataBlockObject, (__int64)Pool2, v5, (__int64)&v14);
  if ( SetExecuteSI < 0 )
  {
LABEL_9:
    if ( Pool2 == OutBuffer )
      return SetExecuteSI;
LABEL_10:
    ExFreePoolWithTag(Pool2, 0);
    return SetExecuteSI;
  }
  v12 = Pool2[11];
  if ( (v12 & 0x100) != 0 )
  {
    SetExecuteSI = -1073741637;
    goto LABEL_9;
  }
  if ( (v12 & 0x20) != 0 )
  {
    SetExecuteSI = -1073741789;
    *InOutBufferSize = Pool2[12];
    goto LABEL_9;
  }
  *InOutBufferSize = v14;
  if ( Pool2 != OutBuffer )
  {
    SetExecuteSI = -1073741789;
    goto LABEL_10;
  }
  return SetExecuteSI;
}
