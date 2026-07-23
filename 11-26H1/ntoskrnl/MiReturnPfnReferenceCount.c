/*
 * XREFs of MiReturnPfnReferenceCount @ 0x1404A7FE0
 * Callers:
 *     MiInitializeNewImageSectionProtos @ 0x1404A7DCC (MiInitializeNewImageSectionProtos.c)
 *     MiDeleteImageCreationMdls @ 0x140A63794 (MiDeleteImageCreationMdls.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140320354 (MiReturnPfnReferenceCountAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // edi

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v3 = MiReturnPfnReferenceCountAtDpc(v1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v3;
}
