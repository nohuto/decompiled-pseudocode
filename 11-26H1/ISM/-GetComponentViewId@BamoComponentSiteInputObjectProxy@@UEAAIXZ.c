/*
 * XREFs of ?GetComponentViewId@BamoComponentSiteInputObjectProxy@@UEAAIXZ @ 0x180036D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800375E0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180037618 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

__int64 __fastcall BamoComponentSiteInputObjectProxy::GetComponentViewId(BamoComponentSiteInputObjectProxy *this)
{
  __int64 v2; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v6 = 0LL;
  v3 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v2 + 32);
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(v3) )
  {
    v6 = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v3);
  }
  v4 = *((_DWORD *)this + 10);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v6);
  return v4;
}
