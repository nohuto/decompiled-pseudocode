/*
 * XREFs of ?Thunk_AcknowledgeGestureReceived_14@?$IMagnifierControllerProxy_Receive@VBamoMagnifierControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18015B880
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoInputObserverClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputObserverClientProxyImpl@1@@Z @ 0x180060F70 (--0-$CalloutWrapper@VBamoInputObserverClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800613A0 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?LogReceiveAcknowledgeGestureReceived@BamoMagnifierControllerProxyImpl@BamoImpl@@AEAAXXZ @ 0x18015B28C (-LogReceiveAcknowledgeGestureReceived@BamoMagnifierControllerProxyImpl@BamoImpl@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IMagnifierControllerProxy_Receive<BamoImpl::BamoMagnifierControllerProxyImpl>::Thunk_AcknowledgeGestureReceived_14(
        Microsoft::BamoImpl::BamoProxyImpl *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>::CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>(
    (__int64)v6,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  BamoImpl::BamoMagnifierControllerProxyImpl::LogReceiveAcknowledgeGestureReceived(this);
  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 152LL))((char *)this - 16);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v6);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v3, v4);
  return v2;
}
