/*
 * XREFs of ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x140068944
 * Callers:
 *     ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140068BF0 (--_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_G?$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x140069810 (--_G-$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@.c)
 * Callees:
 *     ??1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ @ 0x140067D34 (--1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ.c)
 *     ??1?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAA@XZ @ 0x140068994 (--1-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEA.c)
 *     ?Reset@?$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z @ 0x1400689B8 (-Reset@-$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  *(_QWORD *)this = &DirectComposition::CInteractionMarshaler::`vftable';
  CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::~CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>((char *)this + 296);
  CDynamicArray<unsigned int,2003858261>::Reset((char *)this + 280);
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup(
    (DirectComposition::CInteractionMarshaler *)((char *)this + 160),
    v2);
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup(
    (DirectComposition::CInteractionMarshaler *)((char *)this + 56),
    v3);
}
