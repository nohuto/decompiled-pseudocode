/*
 * XREFs of ??1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ @ 0x140067D34
 * Callers:
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x140068944 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAA@XZ @ 0x14006698C (--1-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 */

void __fastcall DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup(
        DirectComposition::CInteractionConfigurationGroup *this,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx

  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::~CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>(
    (__int64)this + 64,
    a2);
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::~CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>(
    (__int64)this + 40,
    v3);
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::~CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>(
    (__int64)this + 16,
    v4);
}
