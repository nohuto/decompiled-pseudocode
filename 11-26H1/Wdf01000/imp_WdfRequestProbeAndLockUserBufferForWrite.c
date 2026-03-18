/*
 * XREFs of imp_WdfRequestProbeAndLockUserBufferForWrite @ 0x140015AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140015820 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140084660 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall imp_WdfRequestProbeAndLockUserBufferForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void *Buffer,
        unsigned __int64 Length,
        WDFMEMORY__ **MemoryObject)
{
  unsigned int v5; // r15d
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ **v8; // rsi
  int result; // eax
  unsigned int v10; // edx
  FxRequest *v11; // r10
  _FX_DRIVER_GLOBALS *v12; // rcx
  signed int _a1; // eax
  int IsDriverOwned; // edi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // r8
  FxRequestMemory *pMemory; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]
  unsigned __int8 irql; // [rsp+70h] [rbp+30h] BYREF
  FxRequest *pRequest; // [rsp+80h] [rbp+40h] BYREF

  v5 = Length;
  pRequest = 0LL;
  pMemory = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v8 = MemoryObject;
  if ( !MemoryObject )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    v11 = pRequest;
    v12 = pRequest->m_Globals;
    if ( v12->FxVerifierOn && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v12, v10, 9u) || *(_BYTE *)(v16 + 325)) )
    {
      irql = 0;
      FxNonPagedObject::Lock(v11, &irql, v17);
      IsDriverOwned = FxRequest::VerifyRequestIsDriverOwned(pRequest, m_Globals);
      FxNonPagedObject::Unlock(pRequest, irql, v18);
      if ( IsDriverOwned < 0 )
        return IsDriverOwned;
      v11 = pRequest;
    }
    _a1 = FxRequest::ProbeAndLockForWrite(v11, Buffer, v5, &pMemory);
    IsDriverOwned = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x43u, WPP_FxRequestApi_cpp_Traceguids, _a1);
    }
    else
    {
      if ( pMemory->m_ObjectSize )
        v15 = (unsigned __int64)pMemory ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v15 = 0LL;
      *v8 = (WDFMEMORY__ *)v15;
    }
    return IsDriverOwned;
  }
  return result;
}
