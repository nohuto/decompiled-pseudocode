/*
 * XREFs of VfAddContextToHandle @ 0x1400E30D0
 * Callers:
 *     AddEventHooksWdfDeviceCreate @ 0x1400E2A7C (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1400E2E60 (AddEventHooksWdfIoQueueCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140056890 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14005B060 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfAddContextToHandle(
        FxContextHeader *ContextHeader,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int64 Handle,
        void **Context)
{
  __int64 result; // rax
  __int64 v9; // rax
  FxObject *v10; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int _a2; // eax
  int status; // [rsp+70h] [rbp+8h] BYREF

  status = 0;
  if ( !ContextHeader )
    return 3221225485LL;
  LOWORD(v9) = 0;
  v10 = (FxObject *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v9 = LOWORD(v10->__vftable);
    v10 = (FxObject *)((char *)v10 - v9);
  }
  m_Globals = v10->m_Globals;
  if ( (_WORD)v9 )
  {
    status = -1073741767;
    WPP_IFR_SF_qd(m_Globals, 3u, 0xBu, 0xCu, WPP_Verifier_cpp_Traceguids, (const void *)Handle, -1073741767);
  }
  else
  {
    FxObject::AddRef(v10, &status, 622, "minkernel\\wdf\\framework\\shared\\enhancedverif\\verifier.cpp");
    FxContextHeaderInit(ContextHeader, v10, Attributes);
    _a2 = FxObject::AddContext(v10, ContextHeader, Context, Attributes);
    status = _a2;
    if ( _a2 )
      WPP_IFR_SF_qd(m_Globals, 3u, 0xBu, 0xDu, WPP_Verifier_cpp_Traceguids, (const void *)Handle, _a2);
    v10->Release(v10, &status, 639, "minkernel\\wdf\\framework\\shared\\enhancedverif\\verifier.cpp");
  }
  result = (unsigned int)status;
  if ( status )
  {
    FxPoolFree(ContextHeader);
    return (unsigned int)status;
  }
  return result;
}
