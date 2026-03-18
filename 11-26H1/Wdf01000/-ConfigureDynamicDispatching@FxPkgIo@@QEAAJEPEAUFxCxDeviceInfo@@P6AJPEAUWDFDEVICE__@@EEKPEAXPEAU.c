/*
 * XREFs of ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1400A122C
 * Callers:
 *     imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x140091EA0 (imp_WdfDeviceConfigureWdmIrpDispatchCallback.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14004C424 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z @ 0x140062444 (-Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z.c)
 *     WPP_IFR_SF_cd @ 0x140091694 (WPP_IFR_SF_cd.c)
 *     WPP_IFR_SF_qcd @ 0x1400A1770 (WPP_IFR_SF_qcd.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxPkgIo::ConfigureDynamicDispatching(
        FxPkgIo *this,
        unsigned __int8 MajorFunction,
        FX_POOL *CxDeviceInfo,
        FX_POOL *EvtDeviceWdmIrpDispatch,
        FX_POOL *DriverContext)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int v8; // eax
  unsigned __int8 v9; // dl
  char v10; // cl
  unsigned int id; // r8d
  unsigned __int16 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r15
  unsigned int v15; // ebx
  char OldIrql; // cl
  FX_POOL *v17; // rdx
  FX_POOL *i; // rdi
  _LIST_ENTRY *Blink; // rax
  char v20; // al
  _LIST_ENTRY *Flink; // rcx
  unsigned __int16 v22; // ax
  const void *v23; // rcx
  ULONG Tag; // ecx
  void *v25; // rax
  FX_POOL **v26; // rax
  FX_POOL **v27; // rsi
  __int64 v28; // rcx
  FX_POOL *m_Lock; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  int v32; // [rsp+38h] [rbp-40h]
  __m128i v33; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  m_Globals = this->m_Globals;
  v8 = FxIrpDynamicDispatchInfo::Mj2Index(MajorFunction);
  v14 = v8;
  if ( v8 >= 4 )
  {
    v15 = -1073741811;
    WPP_IFR_SF_cd(m_Globals, v9, 0xDu, 0x15u, WPP_FxPkgIo_cpp_Traceguids, v10);
    return v15;
  }
  if ( CxDeviceInfo )
    OldIrql = CxDeviceInfo->PagedLock.m_Lock.OldIrql;
  else
    OldIrql = 0;
  v17 = (FX_POOL *)(v13 + 376);
  for ( i = *(FX_POOL **)(v13 + 376); ; i = *(FX_POOL **)&i->NonPagedLock.m_DbgFlagIsInitialized )
  {
    if ( i == v17 )
    {
LABEL_22:
      Tag = m_Globals->Tag;
      v25 = retaddr;
      v33.m128i_i64[0] = 0LL;
      v33.m128i_i64[1] = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v25 = 0LL;
      v26 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v33, 0x58uLL, Tag, v25);
      v27 = v26;
      if ( !v26 )
      {
        v15 = -1073741670;
        WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0x17u, WPP_FxPkgIo_cpp_Traceguids, 0xC000009A);
        return v15;
      }
      `vector constructor iterator'(
        (char *)v26 + 16,
        0x10uLL,
        4uLL,
        (void *(__fastcall *)(void *))FxIrpDynamicDispatchInfo::Info::Info);
      v27[1] = (FX_POOL *)v27;
      *v27 = (FX_POOL *)v27;
      memset(v27 + 2, 0, 0x40uLL);
      v27[10] = CxDeviceInfo;
      v28 = 2 * v14;
      v27[v28 + 3] = DriverContext;
      v27[v28 + 2] = EvtDeviceWdmIrpDispatch;
      m_Lock = (FX_POOL *)i->NonPagedLock.m_Lock;
      if ( *(FX_POOL **)&m_Lock->NonPagedLock.m_DbgFlagIsInitialized != i )
        __fastfail(3u);
      *v27 = i;
      v27[1] = m_Lock;
      *(_QWORD *)&m_Lock->NonPagedLock.m_DbgFlagIsInitialized = v27;
      i->NonPagedLock.m_Lock = (unsigned __int64)v27;
      return 0;
    }
    Blink = i->PagedLock.m_Lock.Event.Header.WaitListHead.Blink;
    v20 = Blink ? LOBYTE(Blink[5].Blink) : 0;
    if ( OldIrql == v20 )
      break;
    if ( OldIrql > v20 )
      goto LABEL_22;
  }
  if ( !*((_QWORD *)&i->NonPagedHead.Flink + 2 * v14) )
  {
    *((_QWORD *)&i->NonPagedHead.Blink + 2 * v14) = DriverContext;
    *((_QWORD *)&i->NonPagedHead.Flink + 2 * v14) = EvtDeviceWdmIrpDispatch;
    return 0;
  }
  v15 = -1073741811;
  if ( CxDeviceInfo )
    Flink = CxDeviceInfo->NonPagedHead.Flink;
  else
    Flink = *(_LIST_ENTRY **)(*(_QWORD *)(v13 + 96) + 136LL);
  v22 = WORD1(Flink->Blink);
  v23 = (const void *)((unsigned __int64)Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v22 )
    v23 = 0LL;
  WPP_IFR_SF_qcd(m_Globals, (unsigned __int8)v17, id, v12, _a1, v23, id, v32);
  return v15;
}
