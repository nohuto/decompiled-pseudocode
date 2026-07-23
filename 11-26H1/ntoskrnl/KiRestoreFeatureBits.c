/*
 * XREFs of KiRestoreFeatureBits @ 0x140510000
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x1405322F4 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiSetMicrocodeUpdateOptions @ 0x140530140 (KiSetMicrocodeUpdateOptions.c)
 *     KeInitializeCatRegisters @ 0x1405301F8 (KeInitializeCatRegisters.c)
 *     KiSetVirtualMitigationControl @ 0x140535B50 (KiSetVirtualMitigationControl.c)
 *     KiApplyProcessorErrata @ 0x1405F723C (KiApplyProcessorErrata.c)
 *     KiCheckMicrocode @ 0x140C13A9C (KiCheckMicrocode.c)
 */

__int64 KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int64 MsrIa32TsxCtrl; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, (unsigned __int64)stru_140FC11F0.SavedApcState.ApcListHead[0].Blink);
  if ( _bittest64((const signed __int64 *)&CurrentPrcb->FeatureBits, 0x22u) )
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  if ( CurrentPrcb->BpbCurrentSpecCtrl || (KeFeatureBits2 & 0x600) != 0 )
    __writemsr(0x48u, CurrentPrcb->BpbCurrentSpecCtrl);
  KiSetVirtualMitigationControl(CurrentPrcb);
  if ( (KeFeatureBits2 & 0x8000) != 0 )
  {
    v2 = 290LL;
    MsrIa32TsxCtrl = CurrentPrcb->MsrIa32TsxCtrl;
    v1 = HIDWORD(MsrIa32TsxCtrl);
    __writemsr(0x122u, MsrIa32TsxCtrl);
  }
  KiSetMicrocodeUpdateOptions(v2, v1);
  KeInitializeCatRegisters();
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  KiApplyProcessorErrata(CurrentPrcb, 0LL);
  if ( KiFlushPcid && !VslVsmEnabled )
  {
    v4 = __readcr3();
    __writecr3(v4 | 2);
  }
  KiCheckMicrocode(CurrentPrcb);
  if ( KiUserCetAllowed )
  {
    v5 = __readcr4();
    __writecr4(v5 | 0x800000);
  }
  result = (unsigned int)KiHresetMask;
  if ( (_DWORD)KiHresetMask )
    __writemsr(0x17DAu, (unsigned int)KiHresetMask);
  return result;
}
