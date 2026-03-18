/*
 * XREFs of HalpMcExportAndChargeNeededData @ 0x1407851F4
 * Callers:
 *     HalpMcUpdateInitializeBSP @ 0x140593D68 (HalpMcUpdateInitializeBSP.c)
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MmObtainChargesToLockPagedPool @ 0x14077BA70 (MmObtainChargesToLockPagedPool.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpMcExportAndChargeNeededData(void *Src, size_t Size)
{
  size_t v2; // rbp
  unsigned int v5; // edi
  struct _LIST_ENTRY *Pool2; // rax
  struct _LIST_ENTRY *v7; // rbx

  v2 = (unsigned int)Size;
  if ( !Src )
  {
    HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink = 0LL;
    *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[52] = 0;
    return 0LL;
  }
  v5 = (Size + 4095) & 0xFFFFF000;
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v5);
    if ( MmObtainChargesToLockPagedPool((__int16)v7, v5) )
    {
      McMicrocodePatchRecordCharged = 1;
LABEL_8:
      memmove(v7, Src, v2);
      if ( HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink )
        ExFreePoolWithTag(HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink, 0x636C6148u);
      HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink = v7;
      *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[52] = (v2 + 4095) & 0xFFFFF000;
      return 0LL;
    }
    ExFreePoolWithTag(v7, 0x636C6148u);
    v7 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
    if ( v7 )
      goto LABEL_8;
  }
  return 3221225495LL;
}
