/*
 * XREFs of MiInitializeKasan @ 0x140CF9930
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     KasanTrackAddressNoInline @ 0x140534710 (KasanTrackAddressNoInline.c)
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 *     KasanInitSystem @ 0x140CCDE10 (KasanInitSystem.c)
 *     MiFillGapAddresses @ 0x140CFF990 (MiFillGapAddresses.c)
 */

void __fastcall MiInitializeKasan(__int64 a1)
{
  __int64 v2; // rbx
  void *DpcStack; // rcx
  unsigned __int64 v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  void *volatile StackLimit; // rcx

  if ( _bittest64(&MiFlags, 0x25u) )
  {
    v2 = qword_140E37D50;
    MiFillGapAddresses(qword_140E37D50, qword_140E37D50 + qword_140E37D58 - 1);
    DpcStack = KeGetPcr()->Prcb.DpcStack;
    KasaniShadow = v2;
    v4 = (unsigned __int64)DpcStack + 80LL - (unsigned int)KeKernelStackSize;
    if ( byte_140FC8BD8 && (int)KasanTrackAddressNoInline(v4, (unsigned int)KeKernelStackSize, 0) < 0 )
      MxInstallMoreMemory(7);
    v5 = (char *)KeGetPcr()->Prcb.IsrStack - (unsigned int)KeIsrStackSize;
    if ( byte_140FC8BD8 && (int)KasanTrackAddressNoInline((unsigned __int64)v5, (unsigned int)KeIsrStackSize, 0) < 0 )
      MxInstallMoreMemory(8);
    v6 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80LL - (unsigned int)KeExceptionStackSize;
    if ( byte_140FC8BD8
      && (int)KasanTrackAddressNoInline((unsigned __int64)v6, (unsigned int)KeExceptionStackSize, 0) < 0 )
    {
      MxInstallMoreMemory(9);
    }
    StackLimit = KeGetCurrentThread()->StackLimit;
    if ( byte_140FC8BD8 )
    {
      if ( (int)KasanTrackAddressNoInline((unsigned __int64)StackLimit, (unsigned int)KeKernelStackSize, 0) < 0 )
        MxInstallMoreMemory(10);
    }
    KasanInitSystem(a1, 1);
  }
}
