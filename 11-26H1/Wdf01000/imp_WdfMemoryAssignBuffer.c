/*
 * XREFs of imp_WdfMemoryAssignBuffer @ 0x14005A940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfMemoryAssignBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Memory,
        void *Buffer,
        unsigned __int64 BufferSize)
{
  __int64 v7; // rax
  FxMemoryBufferPreallocated *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 result; // rax
  FxMemoryBufferPreallocated_vtbl *v11; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxMemoryBufferPreallocated **p_pMemory; // [rsp+50h] [rbp-28h] BYREF
  __int16 v17; // [rsp+58h] [rbp-20h]
  __int16 v18; // [rsp+5Ah] [rbp-1Eh]
  int v19; // [rsp+5Ch] [rbp-1Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxMemoryBufferPreallocated *pMemory; // [rsp+88h] [rbp+10h] BYREF

  if ( !Memory )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1022uLL);
  LOWORD(v7) = 0;
  flags = (FxMemoryBufferPreallocated *)(~Memory & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Memory & 1) != 0 )
  {
    v7 = LOWORD(flags->FxMemoryObject::FxObject::__vftable);
    flags = (FxMemoryBufferPreallocated *)((char *)flags - v7);
  }
  if ( flags->m_Type == 4130 )
  {
    pMemory = flags;
  }
  else
  {
    v18 = v7;
    pMemory = 0LL;
    v19 = 0;
    v11 = flags->FxMemoryObject::FxObject::__vftable;
    p_pMemory = &pMemory;
    v17 = 4130;
    if ( v11->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pMemory) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v12, v13, v14, traceGuid, (const void *)Memory, 0x1022u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Memory, 0x1022uLL);
    }
    flags = pMemory;
  }
  m_Globals = flags->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( BufferSize )
  {
    flags->m_pBuffer = Buffer;
    result = 0LL;
    flags->m_BufferSize = BufferSize;
  }
  else
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xBu, WPP_FxMemoryBufferPreallocatedAPI_cpp_Traceguids, 0xC000000D);
    return 3221225485LL;
  }
  return result;
}
