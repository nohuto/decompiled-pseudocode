/*
 * XREFs of HalpDmaCvmSetPageShareability @ 0x140785D68
 * Callers:
 *     HalpDmaFreeMapRegisterFrame @ 0x1405339CC (HalpDmaFreeMapRegisterFrame.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14058B358 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaCvmMakeMasterAdapterMapRegistersShared @ 0x14058B99C (HalpDmaCvmMakeMasterAdapterMapRegistersShared.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x140785A30 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x140785AAC (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HalpDmaCvmMakeMdlDevicePrivate @ 0x140785BD0 (HalpDmaCvmMakeMdlDevicePrivate.c)
 *     HalpDmaCvmMakeMdlDeviceShared @ 0x140785C5C (HalpDmaCvmMakeMdlDeviceShared.c)
 * Callees:
 *     HalpDmaCvmHandleUnrecoverableFrames @ 0x14058B98C (HalpDmaCvmHandleUnrecoverableFrames.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDmaCvmSetPageShareability(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v5; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v5 = qword_140FBAD48;
  v7 = a2;
  v8 = a1;
  if ( byte_140FBAD41 )
  {
    if ( a4 )
      *a4 = a1;
  }
  else
  {
    if ( !a3 )
      v8 = ~qword_140FBAD48 & a1;
    if ( (int)guard_dispatch_icall_no_overrides(v8 >> 12, a2) >= 0 )
    {
      if ( a4 )
      {
        if ( a3 )
          *a4 = v8 | v5;
        else
          *a4 = v8;
      }
    }
    else if ( !a3 )
    {
      HalpDmaCvmHandleUnrecoverableFrames(v10, v9, v7);
    }
  }
}
