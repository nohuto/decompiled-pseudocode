/*
 * XREFs of ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x14001B834
 * Callers:
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x14001B774 (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x14006F2B0 (-_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfIoResourceListCreate @ 0x140099180 (imp_WdfIoResourceListCreate.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x14009B134 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A574 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxResourceCollection::FxResourceCollection(
        FxResourceCollection *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 Type,
        unsigned __int16 Size,
        unsigned __int8 AccessFlags)
{
  KIRQL v6; // al

  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)Type, Size, FxDriverGlobals);
  this->m_Count = 0;
  this->m_ListHead.Blink = &this->m_ListHead;
  this->m_ListHead.Flink = &this->m_ListHead;
  this->__vftable = (FxResourceCollection_vtbl *)FxIoResList::`vftable';
  this->m_AccessFlags = AccessFlags;
  this->m_Changed = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  this->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v6);
}
