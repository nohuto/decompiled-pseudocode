/*
 * XREFs of ??2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140052A80
 * Callers:
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x140052930 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x140052AB0 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 */

void *__fastcall FxMemoryBufferFromPoolLookaside::operator new(
        unsigned __int64 FxDriverGlobals,
        _FX_DRIVER_GLOBALS *ValidMemory,
        void *Attributes,
        _WDF_OBJECT_ATTRIBUTES *Size)
{
  return FxObjectAndHandleHeaderInit(ValidMemory, Attributes, 0x90u, Size, FxObjectTypeExternal);
}
