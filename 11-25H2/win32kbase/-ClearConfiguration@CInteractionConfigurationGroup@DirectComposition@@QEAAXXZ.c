/*
 * XREFs of ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x14006802C
 * Callers:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x140067D68 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1400669C4 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 */

void __fastcall DirectComposition::CInteractionConfigurationGroup::ClearConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this)
{
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
    (__int64)this + 16,
    0);
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
    (__int64)this + 40,
    0);
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
    (__int64)this + 64,
    0);
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 1;
  *((_DWORD *)this + 23) = -1;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 3) |= 0x1Fu;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 20) = 0;
}
