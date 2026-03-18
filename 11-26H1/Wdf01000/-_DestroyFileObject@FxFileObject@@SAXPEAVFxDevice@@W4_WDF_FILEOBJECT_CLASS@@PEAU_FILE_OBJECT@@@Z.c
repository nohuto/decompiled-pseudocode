/*
 * XREFs of ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x14004BA64
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14004BE40 (-_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x14004AAC0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxFileObject::_DestroyFileObject(
        FxDevice *pDevice,
        _WDF_FILEOBJECT_CLASS FileObjectClass,
        _FILE_OBJECT *pWdmFileObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int32 v4; // edx
  int FileObjectFromWdm; // eax
  _QWORD *FsContext; // rdi
  char m_ObjectFlags; // al
  KIRQL v10; // dl
  __int64 v11; // r8
  _QWORD *v12; // rcx
  FxVerifierLock *m_PkgWmi; // rcx
  FxVerifierLock *v14; // rcx
  FxFileObject *pfo; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+58h] [rbp+10h] BYREF

  m_Globals = pDevice->m_Globals;
  v4 = FileObjectClass & 0x7FFFFFFF;
  pfo = 0LL;
  if ( v4 == 1 )
    return;
  if ( pWdmFileObject )
  {
    if ( v4 == 2 )
    {
      FsContext = pWdmFileObject->FsContext;
      pWdmFileObject->FsContext = 0LL;
      goto LABEL_16;
    }
    if ( v4 == 3 )
    {
      FsContext = pWdmFileObject->FsContext2;
      pWdmFileObject->FsContext2 = 0LL;
      goto LABEL_16;
    }
LABEL_5:
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          pDevice,
                          WdfFileObjectWdfCannotUseFsContexts,
                          pWdmFileObject,
                          &pfo);
    FsContext = &pfo->FxNonPagedObject::FxObject::__vftable;
    if ( FileObjectFromWdm >= 0 && pfo )
    {
LABEL_7:
      m_ObjectFlags = pDevice->m_ObjectFlags;
      irql = 0;
      if ( m_ObjectFlags < 0 && (m_PkgWmi = (FxVerifierLock *)pDevice[-1].m_PkgWmi) != 0LL )
      {
        FxVerifierLock::Lock(m_PkgWmi, &irql, (unsigned __int8)pWdmFileObject);
        v10 = irql;
      }
      else
      {
        v10 = KeAcquireSpinLockRaiseToDpc(&pDevice->m_NPLock.m_Lock);
      }
      v11 = FsContext[18];
      if ( *(_QWORD **)(v11 + 8) != FsContext + 18 || (v12 = (_QWORD *)FsContext[19], (_QWORD *)*v12 != FsContext + 18) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      if ( SLOBYTE(pDevice->m_ObjectFlags) < 0 && (v14 = (FxVerifierLock *)pDevice[-1].m_PkgWmi) != 0LL )
        FxVerifierLock::Unlock(v14, v10, v11);
      else
        KeReleaseSpinLock(&pDevice->m_NPLock.m_Lock, v10);
      (*(void (__fastcall **)(_QWORD *))(*FsContext + 48LL))(FsContext);
      return;
    }
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxFileObject_cpp_Traceguids, pWdmFileObject);
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxFileObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(pDevice->m_Globals);
LABEL_16:
    if ( !FsContext )
      return;
    goto LABEL_7;
  }
  if ( v4 == 4 )
    goto LABEL_5;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0xBu, WPP_FxFileObject_cpp_Traceguids);
  FxVerifierDbgBreakPoint(pDevice->m_Globals);
}
