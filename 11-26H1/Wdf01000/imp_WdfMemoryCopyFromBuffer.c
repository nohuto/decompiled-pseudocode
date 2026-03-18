/*
 * XREFs of imp_WdfMemoryCopyFromBuffer @ 0x14005C100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall imp_WdfMemoryCopyFromBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DestinationMemory,
        unsigned __int64 DestinationOffset,
        void *Buffer,
        size_t NumBytesToCopyFrom)
{
  unsigned int v5; // edi
  __int64 v9; // rax
  unsigned __int16 *flags; // rbx
  _FX_DRIVER_GLOBALS *v11; // rax
  IFxMemory *v12; // r15
  _FX_DRIVER_GLOBALS *v13; // rbx
  bool v14; // cf
  IFxMemory_vtbl *v15; // rax
  unsigned __int64 v16; // rbx
  char *v17; // rax
  IFxMemory v19; // rax
  unsigned __int8 v20; // dl
  unsigned int v21; // r8d
  unsigned __int16 v22; // r9
  WDFMEMORY__ *v23; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  IFxMemory *pDest; // [rsp+50h] [rbp-48h] BYREF
  IFxMemory **p_pDest; // [rsp+58h] [rbp-40h] BYREF
  __int16 v27; // [rsp+60h] [rbp-38h]
  __int16 v28; // [rsp+62h] [rbp-36h]
  int v29; // [rsp+64h] [rbp-34h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  v5 = 0;
  if ( !DestinationMemory )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x100AuLL);
  LOWORD(v9) = 0;
  flags = (unsigned __int16 *)(~DestinationMemory & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (DestinationMemory & 1) != 0 )
  {
    v9 = *flags;
    flags = (unsigned __int16 *)((char *)flags - v9);
  }
  if ( flags[4] == 4106 )
  {
    pDest = (IFxMemory *)flags;
  }
  else
  {
    v28 = v9;
    pDest = 0LL;
    v29 = 0;
    v19.__vftable = *(IFxMemory_vtbl **)flags;
    p_pDest = &pDest;
    v27 = 4106;
    if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***))v19.GetDriverGlobals)(flags, &p_pDest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *((_FX_DRIVER_GLOBALS **)flags + 2),
        v20,
        v21,
        v22,
        traceGuid,
        (const void *)DestinationMemory,
        0x100Au,
        flags,
        flags[4]);
      FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)flags + 2), WDF_INVALID_HANDLE, DestinationMemory, 0x100AuLL);
    }
    flags = (unsigned __int16 *)pDest;
  }
  v11 = (_FX_DRIVER_GLOBALS *)(*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)flags + 40LL))(flags);
  if ( !Buffer )
    FxVerifierNullBugCheck(v11, retaddr);
  if ( NumBytesToCopyFrom )
  {
    v12 = pDest;
    v13 = pDest->GetDriverGlobals(pDest);
    v14 = (((__int64 (__fastcall *)(IFxMemory *))v12->GetFlags)(v12) & 1) != 0;
    v15 = v12->__vftable;
    if ( v14 )
    {
      v23 = v15->GetHandle(v12);
      WPP_IFR_SF_q(v13, 2u, 0x12u, 0xAu, WPP_FxMemoryObject_cpp_Traceguids, v23);
      FxVerifierDbgBreakPoint(v13);
      return (unsigned int)-1073741819;
    }
    v16 = v15->GetBufferSize(v12);
    v17 = (char *)v12->GetBuffer(v12);
    if ( DestinationOffset )
    {
      if ( DestinationOffset >= v16 )
        return (unsigned int)-1073741306;
      v17 += DestinationOffset;
      v16 -= DestinationOffset;
    }
    if ( NumBytesToCopyFrom <= v16 )
    {
      memmove(v17, Buffer, NumBytesToCopyFrom);
      return v5;
    }
    return (unsigned int)-1073741306;
  }
  WPP_IFR_SF_D(v11, 2u, 0x12u, 0xCu, WPP_FxMemoryBufferApi_cpp_Traceguids, 0xC000000D);
  return 3221225485LL;
}
