/*
 * XREFs of HalpMcExportAndChargeNeededData @ 0x140787D24
 * Callers:
 *     HalpMcUpdateInitializeBSP @ 0x1405964E8 (HalpMcUpdateInitializeBSP.c)
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmObtainChargesToLockPagedPool @ 0x14077E6B0 (MmObtainChargesToLockPagedPool.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpMcExportAndChargeNeededData(void *Src, size_t Size)
{
  size_t v2; // rbp
  unsigned int v5; // edi
  struct _KTHREAD *Pool2; // rax
  struct _KTHREAD *v7; // rbx

  v2 = (unsigned int)Size;
  if ( !Src )
  {
    HalpDeviceBlockUnblockPushLock.WaitBlock[0].Thread = 0LL;
    *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[16] = 0;
    return 0LL;
  }
  v5 = (Size + 4095) & 0xFFFFF000;
  Pool2 = (struct _KTHREAD *)ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v5);
    if ( MmObtainChargesToLockPagedPool((__int16)v7, v5) )
    {
      McMicrocodePatchRecordCharged = 1;
LABEL_8:
      memmove(v7, Src, v2);
      if ( HalpDeviceBlockUnblockPushLock.WaitBlock[0].Thread )
        ExFreePoolWithTag(HalpDeviceBlockUnblockPushLock.WaitBlock[0].Thread, 0x636C6148u);
      HalpDeviceBlockUnblockPushLock.WaitBlock[0].Thread = v7;
      *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[16] = (v2 + 4095) & 0xFFFFF000;
      return 0LL;
    }
    ExFreePoolWithTag(v7, 0x636C6148u);
    v7 = (struct _KTHREAD *)ExAllocatePool2(0x40uLL);
    if ( v7 )
      goto LABEL_8;
  }
  return 3221225495LL;
}
