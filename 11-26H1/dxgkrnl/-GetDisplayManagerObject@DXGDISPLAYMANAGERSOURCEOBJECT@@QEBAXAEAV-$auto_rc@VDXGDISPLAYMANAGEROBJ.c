/*
 * XREFs of ?GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@@Z @ 0x1403DD0B0
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1403DC9E0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@Z @ 0x14002DBF4 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 */

void __fastcall DXGDISPLAYMANAGERSOURCEOBJECT::GetDisplayManagerObject(__int64 a1, ReferenceCounted **a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (struct DXGFASTMUTEX *const)(a1 + 64), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset(a2, *(ReferenceCounted **)(a1 + 48));
  if ( *a2 )
    _InterlockedIncrement((volatile signed __int32 *)*a2 + 2);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v4);
}
