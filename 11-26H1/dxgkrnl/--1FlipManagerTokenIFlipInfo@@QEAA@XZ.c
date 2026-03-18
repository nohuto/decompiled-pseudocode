/*
 * XREFs of ??1FlipManagerTokenIFlipInfo@@QEAA@XZ @ 0x1400194D0
 * Callers:
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x14001949C (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall FlipManagerTokenIFlipInfo::~FlipManagerTokenIFlipInfo(FlipManagerTokenIFlipInfo *this)
{
  __int64 v2; // rax
  void *v3; // rdi

  if ( *((_QWORD *)this + 13) )
  {
    if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
    {
      v2 = *((_QWORD *)this + 13);
      v3 = *(void **)(v2 + 16);
      if ( v3 )
      {
        KeSetEvent(*(PRKEVENT *)(v2 + 16), 1, 0);
        ObfDereferenceObject(v3);
      }
    }
    ExFreePoolWithTag(*((PVOID *)this + 13), 0);
  }
}
