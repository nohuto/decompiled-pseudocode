/*
 * XREFs of ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x14007ED1C
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14001EB5C (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqDD @ 0x1400985F0 (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qqdqdd @ 0x14009C1D4 (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureFileObjectClass(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _LIST_ENTRY *Blink; // rdi
  _LIST_ENTRY *v4; // r14
  signed int globals; // ebx
  signed int _a4; // r8d
  FxDeviceBase *m_DeviceBase; // rcx
  _LIST_ENTRY *v10; // rax
  const void *_a3; // rdx
  unsigned __int64 Flink; // rcx
  unsigned __int16 v13; // ax
  const void *_a2; // rcx
  unsigned int v15; // esi
  _LIST_ENTRY *v16; // r10
  _LIST_ENTRY *v17; // rcx
  int _a6; // ebx
  __int16 v19; // ax
  const void *v20; // r10
  int v21; // r8d
  unsigned __int64 m_Driver; // rcx
  unsigned __int16 v23; // ax
  FxDeviceBase *v24; // rdx
  const void *v25; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v27; // rdx

  m_Globals = this->m_Globals;
  Blink = FileObjInfoList->Blink;
  v4 = 0LL;
  globals = 1;
  while ( 1 )
  {
    if ( Blink == FileObjInfoList )
    {
      v15 = 0;
      LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next) = globals;
      return v15;
    }
    _a4 = (signed int)Blink[5].Flink;
    if ( _a4 != 1 && globals != _a4 )
      break;
LABEL_16:
    Blink = Blink->Blink;
  }
  if ( globals == 1 )
  {
    v4 = Blink[9].Blink;
    globals = (signed int)Blink[5].Flink;
    goto LABEL_16;
  }
  if ( globals < 0 == _a4 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    v10 = Blink[9].Blink;
    _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    globals = ((_a4 >= 0) << 31) - 2147483644;
    if ( !m_DeviceBase->m_ObjectSize )
      _a3 = 0LL;
    if ( v10 )
      Flink = (unsigned __int64)v10[1].Flink;
    else
      Flink = (unsigned __int64)m_DeviceBase->m_Driver;
    v13 = *(_WORD *)(Flink + 10);
    _a2 = (const void *)(Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v13 )
      _a2 = 0LL;
    WPP_IFR_SF_qqDD(m_Globals, 4u, _a4, 0x10u, WPP_FxPkgGeneral_cpp_Traceguids, _a2, _a3, _a4, globals);
    goto LABEL_16;
  }
  v15 = -1073741808;
  v16 = v4[1].Flink;
  v17 = Blink[9].Blink;
  _a6 = (unsigned int)globals >> 31;
  v19 = WORD1(v16->Blink);
  v20 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v19 )
    v20 = 0LL;
  v21 = (unsigned int)_a4 >> 31;
  if ( v17 )
    m_Driver = (unsigned __int64)v17[1].Flink;
  else
    m_Driver = (unsigned __int64)this->m_DeviceBase->m_Driver;
  v23 = *(_WORD *)(m_Driver + 10);
  v24 = this->m_DeviceBase;
  v25 = (const void *)(m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v23 )
    v25 = 0LL;
  m_ObjectSize = v24->m_ObjectSize;
  v27 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v27 = 0LL;
  WPP_IFR_SF_qqdqdd(
    m_Globals,
    (unsigned __int8)v27,
    0x12u,
    0xFu,
    WPP_FxPkgGeneral_cpp_Traceguids,
    v27,
    v25,
    v21,
    v20,
    _a6,
    -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return v15;
}
