/*
 * XREFs of ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x140015778
 * Callers:
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140015820 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140017E94 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 * Callees:
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1400154A0 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 */

__int64 __fastcall FxRequestMemory::Create(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Object,
        FxRequestMemory **a3,
        unsigned int a4)
{
  FxMemoryObject *v6; // rax
  FxRequestMemory *v7; // rbx
  __int64 result; // rax

  v6 = (FxMemoryObject *)FxObjectHandleAlloc2(
                           DriverGlobals,
                           (unsigned __int64)Object,
                           0x98uLL,
                           a4,
                           0LL,
                           0,
                           FxObjectTypeExternal);
  v7 = (FxRequestMemory *)v6;
  if ( !v6 )
    return 3221225626LL;
  FxMemoryObject::FxMemoryObject(v6, DriverGlobals, 0x98u, 0LL);
  v7->m_pBuffer = 0LL;
  v7->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxRequestMemory_vtbl *)FxRequestMemory::`vftable'{for `FxObject'};
  v7->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxRequestMemory::`vftable'{for `IFxMemory'};
  result = 0LL;
  v7->m_Request = 0LL;
  v7->m_Mdl = 0LL;
  v7->m_Flags = 0;
  *a3 = v7;
  return result;
}
