/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x140039D50
 * Callers:
 *     ??1DXGK_GAMMA_RAMP@@UEAA@XZ @ 0x140039AB8 (--1DXGK_GAMMA_RAMP@@UEAA@XZ.c)
 *     ??_EDXGTHREAD@@UEAAPEAXI@Z @ 0x140039B10 (--_EDXGTHREAD@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x140039BB4 (--1DMMVIDPNSOURCEMODESET@@UEAA@XZ.c)
 *     ??_E?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@UEAAPEAXI@Z @ 0x1400700F0 (--_E-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x14009590C (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x14009598C (--1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ.c)
 *     ??1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ @ 0x140277604 (--1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1403B91B8 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1403DBFEC (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1404238D0 (--1DXGMONITOR@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x140426878 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this)
{
  *(_QWORD *)this = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 52;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Reference counted instance being destroyed still has %I64d outstanding references on it!",
      *((int *)this + 2),
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
