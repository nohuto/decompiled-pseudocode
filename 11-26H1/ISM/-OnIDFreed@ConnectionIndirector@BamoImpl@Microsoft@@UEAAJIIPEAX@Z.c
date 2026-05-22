/*
 * XREFs of ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x1800353D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ @ 0x1800352D8 (-AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800375E0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180037618 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnIDFreed(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  volatile signed __int32 *v6; // rdi
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // rbp
  Microsoft::Bamo::BamoProxy *v8; // rax
  volatile signed __int32 *v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = (volatile signed __int32 *)((char *)this - 16);
  v10 = 0LL;
  v7 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)*((_QWORD *)this + 2);
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(v7) )
  {
    v10 = v6;
    _InterlockedIncrement(v6 + 2);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v7);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 64LL) && a4 )
  {
    a4[29] = 1;
    v8 = (Microsoft::Bamo::BamoProxy *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a4 + 56LL))(a4);
    Microsoft::Bamo::BamoProxy::AbandonOnDisconnect(v8);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v10);
  return 0LL;
}
