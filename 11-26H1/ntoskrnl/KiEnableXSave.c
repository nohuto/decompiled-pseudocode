/*
 * XREFs of KiEnableXSave @ 0x140BEF020
 * Callers:
 *     KiRestoreXSaveSupport @ 0x140BEF008 (KiRestoreXSaveSupport.c)
 *     KiConfigureDynamicProcessor @ 0x140BFB830 (KiConfigureDynamicProcessor.c)
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

void __fastcall KiEnableXSave(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  int v5; // eax

  v1 = __readcr4();
  v2 = v1 & 0x40000;
  if ( _bittest64(&KeFeatureBits, 0x17u) )
  {
    if ( !v2 )
      __writecr4(v1 | 0x40000);
    __asm { xsetbv }
    if ( KeEnabledSupervisorXStateFeatures )
      __writemsr(0xDA0u, KeEnabledSupervisorXStateFeatures);
    if ( _bittest64(&KeFeatureBits, 0x37u) )
    {
      if ( a1 )
        v3 = *a1;
      else
        v3 = MEMORY[0xFFFFF78000000710];
      __writemsr(0x1C4u, v3);
    }
  }
  else if ( v2 )
  {
    __writecr4(v1 & 0xFFFFFFFFFFFBFFFFuLL);
  }
  if ( _bittest64(&KeFeatureBits, 0x17u) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->Context != &CurrentPrcb->ProcessorState.ContextFrame )
    {
      v5 = CurrentPrcb->ContextFlagsInit | 0x100040;
      CurrentPrcb->ContextFlagsInit = v5;
      if ( (_BYTE)KiKernelCetEnabled )
        CurrentPrcb->ContextFlagsInit = v5 | 0x100080;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        CurrentPrcb->CompactionMaskInit = (KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
    }
  }
}
