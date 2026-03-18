/*
 * XREFs of ??1FxPkgIo@@UEAA@XZ @ 0x14003A3D8
 * Callers:
 *     ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x14003A3A0 (--_EFxPkgIo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140075B3C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall FxPkgIo::~FxPkgIo(FxPkgIo *this)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rsi
  _LIST_ENTRY *Flink; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *v5; // rax

  this->m_DefaultQueue = 0LL;
  this->__vftable = (FxPkgIo_vtbl *)FxPkgIo::`vftable';
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  this->m_DeviceBase = 0LL;
  while ( 1 )
  {
    Flink = p_m_DynamicDispatchInfoListHead->Flink;
    if ( p_m_DynamicDispatchInfoListHead->Flink == p_m_DynamicDispatchInfoListHead )
      break;
    if ( Flink->Blink != p_m_DynamicDispatchInfoListHead || (v5 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_m_DynamicDispatchInfoListHead->Flink = v5;
    v5->Blink = p_m_DynamicDispatchInfoListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    if ( Flink )
    {
      `vector destructor iterator'(&Flink[1], 0x10uLL, 4uLL, (void (__fastcall *)(void *))FxDeviceBase::AddChildList);
      FxStump::operator delete(Flink);
    }
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0xBu, WPP_FxPkgIo_cpp_Traceguids, this);
  FxNonPagedObject::~FxNonPagedObject(this);
}
