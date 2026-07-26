/*
 * XREFs of ??1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ @ 0x14009BDE8
 * Callers:
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x140054A80 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x14009D990 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140078DC0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x140161630 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

void __fastcall _NDIS_FILTER_DRIVER_BLOCK::~_NDIS_FILTER_DRIVER_BLOCK(_NDIS_FILTER_DRIVER_BLOCK *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&this->Triage.__ptr_.__value_, 0LL);
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(&this->Bind, v2, v3);
}
