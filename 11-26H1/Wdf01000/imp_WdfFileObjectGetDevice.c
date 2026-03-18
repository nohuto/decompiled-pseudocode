/*
 * XREFs of imp_WdfFileObjectGetDevice @ 0x140064DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_WdfFileObjectGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 FileObject)
{
  __int64 v3; // rax
  FxFileObject *flags; // rbx
  FxDeviceBase *m_DeviceBase; // rax
  unsigned __int16 m_ObjectSize; // cx
  WDFDEVICE__ *result; // rax
  FxFileObject_vtbl *v8; // rax
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  const _GUID *v12; // [rsp+20h] [rbp-48h]
  FxFileObject **p_pFO; // [rsp+50h] [rbp-18h] BYREF
  __int16 v14; // [rsp+58h] [rbp-10h]
  __int16 v15; // [rsp+5Ah] [rbp-Eh]
  int v16; // [rsp+5Ch] [rbp-Ch]
  FxFileObject *pFO; // [rsp+78h] [rbp+10h] BYREF

  if ( !FileObject )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1018uLL);
  LOWORD(v3) = 0;
  flags = (FxFileObject *)(~FileObject & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (FileObject & 1) != 0 )
  {
    v3 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxFileObject *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4120 )
  {
    pFO = flags;
  }
  else
  {
    v15 = v3;
    pFO = 0LL;
    v16 = 0;
    v8 = flags->FxNonPagedObject::FxObject::__vftable;
    p_pFO = &pFO;
    v14 = 4120;
    if ( v8->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pFO) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v9, v10, v11, v12, (const void *)FileObject, 0x1018u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, FileObject, 0x1018uLL);
    }
    flags = pFO;
  }
  m_DeviceBase = flags->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  result = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    return 0LL;
  return result;
}
