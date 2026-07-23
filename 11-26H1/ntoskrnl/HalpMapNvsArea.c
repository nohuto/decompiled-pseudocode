/*
 * XREFs of HalpMapNvsArea @ 0x140C10598
 * Callers:
 *     HalpPowerStateCallback @ 0x1404E6270 (HalpPowerStateCallback.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     HalpFreeNvsBuffers @ 0x140C0EB14 (HalpFreeNvsBuffers.c)
 */

void __fastcall HalpMapNvsArea(__int64 a1)
{
  __int64 i; // rdi
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( HalpNvsPreservedDataSize )
  {
    HalpDisableNvsSaveRestore = 0;
    HalpNvsPreservedData = HalpMmAllocCtxAlloc(a1, (unsigned int)HalpNvsPreservedDataSize);
    if ( HalpNvsPreservedData )
    {
      for ( i = 0LL; (unsigned int)i < HalpNvsRegionCount; i = (unsigned int)(i + 1) )
      {
        v2 = MmMapIoSpaceEx(
               *(_QWORD *)(HalpNvsRegionData + 24 * i),
               *(unsigned int *)(HalpNvsRegionData + 24 * i + 8),
               0x204u);
        *(_QWORD *)(HalpNvsRegionData + 24 * i + 16) = v2;
        if ( !v2 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      DbgPrint("HALACPI:  The BIOS's non-volatile data will not be preserved\n");
      HalpDisableNvsSaveRestore = 1;
      HalpFreeNvsBuffers(v3);
    }
  }
  else
  {
    HalpDisableNvsSaveRestore = 1;
  }
}
