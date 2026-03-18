/*
 * XREFs of KeCopyXfdMaskToPeb @ 0x1404E8568
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x140A9A3AC (PspSetupUserProcessAddressSpace.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B6131C (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 */

void __fastcall KeCopyXfdMaskToPeb(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 *v4; // rax

  if ( _bittest64(&KeFeatureBits, 0x37u) )
  {
    v2 = a1[92];
    if ( v2 )
    {
      v3 = 0LL;
      v4 = (__int64 *)a1[98];
      if ( v4 )
        v3 = *v4;
      RtlWriteULong64ToUser(v2 + 1992, a1[51]);
      if ( v3 )
        RtlWriteULong64ToUser(v3 + 1152, a1[51]);
    }
  }
}
