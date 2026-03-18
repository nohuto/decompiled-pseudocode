/*
 * XREFs of imp_WdfDmaTransactionInitialize @ 0x14005C580
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingOffset @ 0x14005C540 (imp_WdfDmaTransactionInitializeUsingOffset.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDd @ 0x140017BE4 (WPP_IFR_SF_qDd.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x14001BEF0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qiqd @ 0x1400867D8 (WPP_IFR_SF_qiqd.c)
 *     WPP_IFR_SF_ql @ 0x1400868F4 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qqdd @ 0x140086A1C (WPP_IFR_SF_qqdd.c)
 *     ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x140088DF4 (-PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfDmaTransactionInitialize(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        _WDF_DMA_DIRECTION DmaDirection,
        _MDL *Mdl,
        char *VirtualAddress,
        unsigned __int64 Length)
{
  _WDF_DMA_DIRECTION v7; // r10d
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  FxDmaTransactionBase *flags; // rbx
  unsigned __int64 v13; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _MDL *v15; // r13
  unsigned __int64 v16; // r9
  char *v17; // rbx
  char *v18; // rdx
  __int64 ByteCount; // rcx
  _FX_DRIVER_GLOBALS *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  _FX_DRIVER_GLOBALS *v23; // r10
  signed __int64 v24; // rbx
  int *v25; // r12
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rcx
  _BYTE *v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ebx
  FxDmaTransactionBase_vtbl *v35; // rax
  unsigned int v36; // r8d
  unsigned __int16 v37; // r9
  __int64 v38; // rax
  unsigned int v39; // r8d
  unsigned __int16 v40; // r9
  const void *v41; // rcx
  _WORD *v42; // rbx
  unsigned __int64 v43; // rdi
  const void *v44; // rax
  unsigned __int64 v45; // rcx
  __int16 v46; // ax
  const void *v47; // rdi
  const _GUID *traceGuid; // [rsp+20h] [rbp-50h]
  unsigned int id; // [rsp+40h] [rbp-30h]
  _FX_DRIVER_GLOBALS *FxDriverGlobals; // [rsp+50h] [rbp-20h] BYREF
  __int16 v51; // [rsp+58h] [rbp-18h]
  __int16 v52; // [rsp+5Ah] [rbp-16h]
  int v53; // [rsp+5Ch] [rbp-14h]
  FxDmaTransactionBase **p_pDmaTrans; // [rsp+60h] [rbp-10h] BYREF
  __int16 v55; // [rsp+68h] [rbp-8h]
  __int16 v56; // [rsp+6Ah] [rbp-6h]
  int v57; // [rsp+6Ch] [rbp-4h]
  void *retaddr; // [rsp+A8h] [rbp+38h]
  FxDmaTransactionBase *pDmaTrans; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int8 (__fastcall *v60)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *); // [rsp+C0h] [rbp+50h]
  _WDF_DMA_DIRECTION v61; // [rsp+C8h] [rbp+58h]

  v61 = DmaDirection;
  v60 = EvtProgramDmaFunction;
  v7 = DmaDirection;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1401uLL);
  LOWORD(v10) = 0;
  v11 = ~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL;
  flags = (FxDmaTransactionBase *)v11;
  v13 = DmaTransaction & 1;
  if ( (DmaTransaction & 1) != 0 )
  {
    v10 = *(unsigned __int16 *)v11;
    flags = (FxDmaTransactionBase *)(v11 - v10);
  }
  if ( flags->m_Type == 5121 )
  {
    pDmaTrans = flags;
  }
  else
  {
    v52 = v10;
    pDmaTrans = 0LL;
    v53 = 0;
    v35 = flags->__vftable;
    FxDriverGlobals = (_FX_DRIVER_GLOBALS *)&pDmaTrans;
    v51 = 5121;
    if ( v35->QueryInterface(flags, (FxQueryInterfaceParams *)&FxDriverGlobals) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        DmaTransaction,
        v36,
        v37,
        traceGuid,
        (const void *)DmaTransaction,
        0x1401u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, DmaTransaction, 0x1401uLL);
    }
    flags = pDmaTrans;
    v7 = v61;
  }
  m_Globals = flags->m_Globals;
  if ( !EvtProgramDmaFunction )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  v15 = Mdl;
  if ( !Mdl )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v16 = Length;
  if ( !Length )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaTransactionAPI_cpp_Traceguids, (const void *)DmaTransaction);
    return 3221225485LL;
  }
  if ( (unsigned int)v7 > WdfDmaDirectionWriteToDevice )
  {
    WPP_IFR_SF_qDd(
      m_Globals,
      DmaTransaction,
      0xFu,
      0x15u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      (const void *)DmaTransaction,
      v7,
      0xC000000D);
    return 3221225485LL;
  }
  v17 = VirtualAddress;
  v18 = (char *)Mdl->StartVa + Mdl->ByteOffset;
  ByteCount = Mdl->ByteCount;
  if ( VirtualAddress < v18
    || (v20 = (_FX_DRIVER_GLOBALS *)&v18[ByteCount],
        FxDriverGlobals = (_FX_DRIVER_GLOBALS *)&v18[ByteCount],
        VirtualAddress >= &v18[ByteCount]) )
  {
    WPP_IFR_SF_qqdd(
      m_Globals,
      2u,
      0xFu,
      0x16u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      VirtualAddress,
      v18,
      ByteCount,
      -1073741811);
    return 3221225485LL;
  }
  LOWORD(v21) = 0;
  if ( v13 )
  {
    v21 = *(unsigned __int16 *)v11;
    v11 -= v21;
  }
  if ( *(_WORD *)(v11 + 8) == 5121 )
  {
    pDmaTrans = (FxDmaTransactionBase *)v11;
  }
  else
  {
    v56 = v21;
    pDmaTrans = 0LL;
    v57 = 0;
    v38 = *(_QWORD *)v11;
    p_pDmaTrans = &pDmaTrans;
    v55 = 5121;
    if ( (*(int (__fastcall **)(unsigned __int64, FxDmaTransactionBase ***))(v38 + 40))(v11, &p_pDmaTrans) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v11 + 16),
        (unsigned __int8)v18,
        v39,
        v40,
        traceGuid,
        (const void *)DmaTransaction,
        0x1401u,
        (const void *)v11,
        *(unsigned __int16 *)(v11 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v11 + 16), WDF_INVALID_HANDLE, DmaTransaction, 0x1401uLL);
    }
    v11 = (unsigned __int64)pDmaTrans;
    v20 = FxDriverGlobals;
    v16 = Length;
  }
  v22 = *(_QWORD *)(v11 + 128);
  if ( *(_DWORD *)(v22 + 184) != 3 && (*(_BYTE *)(v22 + 380) & 0xC) == 4 && &v17[v16] > (char *)v20 )
  {
    WPP_IFR_SF_qiqd(m_Globals, (unsigned __int8)v18, (unsigned int)v20, v16, traceGuid, v17, v16, v20, id);
    return 3221225485LL;
  }
  v23 = *(_FX_DRIVER_GLOBALS **)(v11 + 16);
  v24 = v17 - (char *)v15->StartVa - v15->ByteOffset;
  FxDriverGlobals = v23;
  if ( v23->FxVerboseOn )
  {
    v41 = (const void *)(v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v11 + 10) )
      v41 = 0LL;
    WPP_IFR_SF_q(v23, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionBase_cpp_Traceguids, v41);
    v23 = FxDriverGlobals;
  }
  v25 = (int *)(v11 + 120);
  v26 = *(_DWORD *)(v11 + 120);
  if ( v26 != 1 && v26 != 2 && v26 != 7 )
  {
    v42 = (_WORD *)(v11 + 10);
    v43 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v44 = (const void *)v43;
    if ( !*v42 )
      v44 = 0LL;
    WPP_IFR_SF_ql(v23, 2u, 0xFu, 0xCu, WPP_FxDmaTransactionBase_cpp_Traceguids, v44, v26);
    if ( !*v42 )
      v43 = 0LL;
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_DMA_FATAL_ERROR, v43, *v25);
  }
  v27 = *(_QWORD *)(v11 + 128);
  v28 = v61;
  v29 = v27 + 184;
  v30 = (_BYTE *)(v27 + 380);
  if ( v61 )
  {
    v31 = v27 + 280;
    if ( (*v30 & 0x10) == 0 )
      v31 = v27 + 184;
  }
  else
  {
    v31 = v27 + 184;
  }
  *(_QWORD *)(v11 + 136) = v31;
  *(_QWORD *)(v11 + 208) = *(_QWORD *)(v31 + 80);
  v32 = (unsigned int)Length;
  *(_QWORD *)(v11 + 224) = (unsigned int)Length;
  *(_QWORD *)(v11 + 216) = v32;
  *(_QWORD *)(v11 + 152) = v60;
  *(_DWORD *)(v11 + 124) = v28;
  *(_QWORD *)(v11 + 176) = v15;
  *(_QWORD *)(v11 + 192) = v24;
  *(_QWORD *)(v11 + 184) = v15;
  *(_QWORD *)(v11 + 200) = v24;
  if ( *(_DWORD *)v29 == 3 )
  {
    if ( (*v30 & 0x10) != 0 )
      v29 = v27 + 96 * v28 + 184;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v29 + 64) + 8LL) + 144LL))(
      *(_QWORD *)(v29 + 64),
      *(_QWORD *)(v11 + 168));
  }
  if ( *(_BYTE *)(v11 + 248) )
  {
    v45 = *(unsigned int *)(*(_QWORD *)(v11 + 128) + 388LL);
    if ( *(_QWORD *)(v11 + 208) < v45 )
      *(_QWORD *)(v11 + 208) = v45;
    v33 = FxDmaTransactionBase::PrepareForSingleTransfer((FxDmaTransactionBase *)v11);
    if ( v33 < 0 )
      goto LABEL_63;
  }
  v33 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 64LL))(v11);
  if ( v33 < 0 )
LABEL_63:
    FxDmaTransactionBase::ReleaseForReuse((FxDmaTransactionBase *)v11, 0LL);
  else
    *(_DWORD *)(v11 + 120) = 3;
  if ( FxDriverGlobals->FxVerboseOn )
  {
    v46 = *(_WORD *)(v11 + 10);
    v47 = (const void *)(v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v46 )
      v47 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 5u, 0xFu, 0xDu, WPP_FxDmaTransactionBase_cpp_Traceguids, v47, v33);
  }
  if ( v33 < 0 )
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x18u, WPP_FxDmaTransactionAPI_cpp_Traceguids, (const void *)DmaTransaction, v33);
  return (unsigned int)v33;
}
