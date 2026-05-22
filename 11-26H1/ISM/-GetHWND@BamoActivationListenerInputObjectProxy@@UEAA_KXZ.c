/*
 * XREFs of ?GetHWND@BamoActivationListenerInputObjectProxy@@UEAA_KXZ @ 0x180037A30
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800375E0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180037618 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

__int64 __fastcall BamoActivationListenerInputObjectProxy::GetHWND(BamoActivationListenerInputObjectProxy *this)
{
  __int64 v2; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v8 = 0LL;
  v3 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v2 + 32);
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(v3) )
  {
    v8 = (volatile signed __int32 *)v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v3);
  }
  v6 = *((_QWORD *)this + 5);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v8, v4, v5);
  return v6;
}
