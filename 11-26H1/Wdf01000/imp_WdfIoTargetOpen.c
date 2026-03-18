/*
 * XREFs of imp_WdfIoTargetOpen @ 0x140006560
 * Callers:
 *     <none>
 * Callees:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140006830 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     FxIoTargetValidateOpenParams @ 0x1400076EC (FxIoTargetValidateOpenParams.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

int __fastcall imp_WdfIoTargetOpen(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned __int8 v6; // dl
  __int64 v7; // rax
  FxIoTargetRemote *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int v11; // eax
  size_t Size; // rdi
  int result; // eax
  int v14; // eax
  int v15; // edi
  FxIoTargetRemote_vtbl *v16; // rax
  unsigned int v17; // r8d
  unsigned __int16 v18; // r9
  KIRQL CurrentIrql; // al
  const _GUID *traceGuid; // [rsp+28h] [rbp-89h]
  FxIoTargetRemote **p_pTarget; // [rsp+58h] [rbp-59h] BYREF
  __int16 v22; // [rsp+60h] [rbp-51h]
  __int16 v23; // [rsp+62h] [rbp-4Fh]
  int v24; // [rsp+64h] [rbp-4Dh]
  _DWORD v25[36]; // [rsp+68h] [rbp-49h] BYREF
  void *retaddr; // [rsp+110h] [rbp+5Fh]
  FxIoTargetRemote *pTarget; // [rsp+120h] [rbp+6Fh] BYREF

  memset(v25, 0, 0x88uLL);
  if ( !IoTarget )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1201uLL);
  LOWORD(v7) = 0;
  flags = (FxIoTargetRemote *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v7 = LOWORD(flags->__vftable);
    flags = (FxIoTargetRemote *)((char *)flags - v7);
  }
  if ( flags->m_Type == 4609 )
  {
    pTarget = flags;
  }
  else
  {
    v23 = v7;
    pTarget = 0LL;
    v24 = 0;
    v16 = flags->__vftable;
    p_pTarget = &pTarget;
    v22 = 4609;
    if ( v16->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pTarget) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v6, v17, v18, traceGuid, (const void *)IoTarget, 0x1201u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1201uLL);
    }
    flags = pTarget;
  }
  m_Globals = flags->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x14u, WPP_FxIoTargetAPI_cpp_Traceguids, (const void *)IoTarget);
  if ( !OpenParams )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return -1073741808;
    }
  }
  WdfBindInfo = m_Globals->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xD )
    v11 = 136;
  else
    v11 = 120;
  Size = OpenParams->Size;
  if ( (_DWORD)Size != 136 )
  {
    if ( (_DWORD)Size != 120 )
    {
      WPP_IFR_SF_DDd(m_Globals, v6, 0xEu, 0x15u, WPP_FxIoTargetAPI_cpp_Traceguids, Size, v11, -1073741820);
      return -1073741820;
    }
    memset(&v25[1], 0, 0x84uLL);
    memmove(v25, OpenParams, Size);
    v25[0] = 136;
    OpenParams = (_WDF_IO_TARGET_OPEN_PARAMS *)v25;
  }
  result = FxIoTargetValidateOpenParams(m_Globals, OpenParams);
  if ( result >= 0 )
  {
    v14 = FxIoTargetRemote::Open(pTarget, OpenParams);
    v15 = v14;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x16u, WPP_FxIoTargetAPI_cpp_Traceguids, (const void *)IoTarget, v14);
    return v15;
  }
  return result;
}
