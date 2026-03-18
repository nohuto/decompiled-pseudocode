/*
 * XREFs of imp_WdfDeviceGetFileObject @ 0x14004B200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFFILEOBJECT__ *__fastcall imp_WdfDeviceGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _FILE_OBJECT *FileObject)
{
  _FX_DRIVER_GLOBALS *v3; // r15
  __int64 v6; // rdi
  unsigned __int16 *flags; // rbx
  __int64 v8; // rax
  _FX_DRIVER_GLOBALS *v9; // r14
  int v10; // r12d
  int v11; // eax
  char v12; // al
  unsigned __int64 FsContext; // rsi
  KIRQL v14; // r14
  unsigned __int16 *v15; // rdx
  unsigned __int16 *v16; // r8
  unsigned __int16 *v17; // rcx
  __int64 v19; // rax
  unsigned __int8 v20; // dl
  unsigned __int16 v21; // r9
  FxVerifierLock *v22; // rcx
  FxVerifierLock *v23; // rcx
  const void *v24; // rax
  unsigned int v25; // edx
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  FxDevice **p_pDevice; // [rsp+50h] [rbp-48h] BYREF
  __int16 v28; // [rsp+58h] [rbp-40h]
  __int16 v29; // [rsp+5Ah] [rbp-3Eh]
  int v30; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int8 PreviousIrql; // [rsp+A0h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+A8h] [rbp+10h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+B8h] [rbp+20h]

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v6 = 0LL;
  flags = (unsigned __int16 *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v8) = 0;
  if ( (Device & 1) != 0 )
  {
    v8 = *flags;
    flags = (unsigned __int16 *)((char *)flags - v8);
  }
  if ( flags[4] == 4098 )
  {
    pDevice = (FxDevice *)flags;
  }
  else
  {
    v29 = v8;
    pDevice = 0LL;
    v30 = 0;
    v19 = *(_QWORD *)flags;
    p_pDevice = &pDevice;
    v28 = 4098;
    if ( (*(int (__fastcall **)(unsigned __int16 *, FxDevice ***))(v19 + 40))(flags, &p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *((_FX_DRIVER_GLOBALS **)flags + 2),
        v20,
        (unsigned int)FileObject,
        v21,
        traceGuid,
        (const void *)Device,
        0x1002u,
        flags,
        flags[4]);
      FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)flags + 2), WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    flags = (unsigned __int16 *)pDevice;
  }
  v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)flags + 2);
  v10 = *((_DWORD *)flags + 72);
  v11 = v10 & 0x7FFFFFFF;
  globals = v9;
  if ( (v10 & 0x7FFFFFFF) == 1 )
    return (WDFFILEOBJECT__ *)v6;
  if ( FileObject )
  {
    if ( v11 == 2 )
    {
      FsContext = (unsigned __int64)FileObject->FsContext;
    }
    else
    {
      if ( v11 != 3 )
        goto LABEL_10;
      FsContext = (unsigned __int64)FileObject->FsContext2;
    }
LABEL_20:
    if ( FsContext )
    {
      if ( *(_WORD *)(FsContext + 10) )
        return (WDFFILEOBJECT__ *)(FsContext ^ 0xFFFFFFFFFFFFFFF8uLL);
    }
    else if ( v10 >= 0 )
    {
      WPP_IFR_SF_q(v9, 2u, 0x12u, 0x11u, WPP_FxFileObject_cpp_Traceguids, FileObject);
      WPP_IFR_SF_(v9, 2u, 0x12u, 0x12u, WPP_FxFileObject_cpp_Traceguids);
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v9, v25, 9u) )
        FxVerifierDbgBreakPoint(*((_FX_DRIVER_GLOBALS **)flags + 2));
    }
    return (WDFFILEOBJECT__ *)v6;
  }
  if ( *((_BYTE *)flags + 220) && v11 == 4 )
  {
LABEL_10:
    v12 = *((_BYTE *)flags + 24);
    FsContext = 0LL;
    PreviousIrql = 0;
    if ( v12 < 0 && (v22 = (FxVerifierLock *)*((_QWORD *)flags - 5)) != 0LL )
    {
      FxVerifierLock::Lock(v22, &PreviousIrql, (unsigned __int8)FileObject);
      v14 = PreviousIrql;
    }
    else
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)flags + 14);
    }
    v15 = flags + 200;
    v16 = (unsigned __int16 *)*((_QWORD *)flags + 50);
    v17 = v16;
    if ( FileObject )
    {
      while ( v17 != v15 )
      {
        if ( *((_FILE_OBJECT **)v17 - 2) == FileObject )
          goto LABEL_16;
        v17 = *(unsigned __int16 **)v17;
      }
    }
    else
    {
LABEL_16:
      FsContext = (unsigned __int64)(v17 - 72);
      if ( v17 != (unsigned __int16 *)144 )
      {
LABEL_17:
        if ( *((char *)flags + 24) < 0 && (v23 = (FxVerifierLock *)*((_QWORD *)flags - 5)) != 0LL )
          FxVerifierLock::Unlock(v23, v14, (unsigned __int8)v16);
        else
          KeReleaseSpinLock((PKSPIN_LOCK)flags + 14, v14);
        v9 = globals;
        goto LABEL_20;
      }
    }
    if ( *((_BYTE *)flags + 220) && *(_DWORD *)(*((_QWORD *)flags + 18) + 72LL) == 27 && v16 != v15 )
    {
      FsContext = (unsigned __int64)(v16 - 72);
      if ( v16 == (unsigned __int16 *)144 )
        v24 = 0LL;
      else
        v24 = *(const void **)(FsContext + 128);
      WPP_IFR_SF_qq(globals, 3u, 0x12u, 0xFu, WPP_FxFileObject_cpp_Traceguids, FileObject, v24);
      WPP_IFR_SF_(globals, 3u, 0x12u, 0x10u, WPP_FxFileObject_cpp_Traceguids);
    }
    goto LABEL_17;
  }
  if ( v10 >= 0 )
  {
    WPP_IFR_SF_(v9, 2u, 0x12u, 0xEu, WPP_FxFileObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(*((_FX_DRIVER_GLOBALS **)flags + 2));
    WPP_IFR_SF_D(v3, 2u, 0x12u, 0xAu, WPP_FxDeviceApiKm_cpp_Traceguids, 0xC0000001);
    return 0LL;
  }
  return (WDFFILEOBJECT__ *)v6;
}
