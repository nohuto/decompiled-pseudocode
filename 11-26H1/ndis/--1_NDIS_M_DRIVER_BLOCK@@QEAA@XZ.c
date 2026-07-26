/*
 * XREFs of ??1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ @ 0x14009316C
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x140094F30 (NdisLWMRegisterMiniportDriver.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x140139848 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140078DC0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ?reset@?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14008C0E0 (-reset@-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE.c)
 */

void __fastcall _NDIS_M_DRIVER_BLOCK::~_NDIS_M_DRIVER_BLOCK(_NDIS_M_DRIVER_BLOCK *this)
{
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&this->Triage.__ptr_.__value_, 0LL);
  wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(
    (void **)&this->UnhookedCharacteristics.__ptr_.__value_,
    0LL);
}
