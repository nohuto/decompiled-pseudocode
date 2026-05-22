/*
 * XREFs of ?Thunk_OnContinueProcessing_377@?$ISystemButtonEventControllerProxy_Receive@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18015FC70
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoInputObserverClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputObserverClientProxyImpl@1@@Z @ 0x180060F70 (--0-$CalloutWrapper@VBamoInputObserverClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800613A0 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?LogReceiveOnContinueProcessing@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18015F7B0 (-LogReceiveOnContinueProcessing@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@AEAAXAEBUSyst.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ISystemButtonEventControllerProxy_Receive<BamoImpl::BamoSystemButtonEventControllerProxyImpl>::Thunk_OnContinueProcessing_377(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        const struct SystemButtonEventInfo **a2)
{
  const struct SystemButtonEventInfo *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>::CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>(
    (__int64)v7,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  BamoImpl::BamoSystemButtonEventControllerProxyImpl::LogReceiveOnContinueProcessing(this, v3);
  LODWORD(v3) = (*(__int64 (__fastcall **)(char *, const struct SystemButtonEventInfo *))(*((_QWORD *)this - 2) + 104LL))(
                  (char *)this - 16,
                  v3);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v7);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v4, v5);
  return (unsigned int)v3;
}
