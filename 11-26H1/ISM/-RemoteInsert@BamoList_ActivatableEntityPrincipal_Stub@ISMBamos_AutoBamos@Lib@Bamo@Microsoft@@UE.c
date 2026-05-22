/*
 * XREFs of ?RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180037AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoteInsert@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180034F6C (-RemoteInsert@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800375E0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180037618 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub::RemoteInsert(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub *this,
        unsigned int a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  __int64 v6; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // rdi
  const char *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  volatile signed __int32 *v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 24LL);
  v13 = 0LL;
  v7 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v6 + 32);
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(v7) )
  {
    v13 = (volatile signed __int32 *)v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v7);
  }
  v9 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_StubImpl::RemoteInsert(
         (Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub *)((char *)this + 8),
         a2,
         a3,
         v8);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v13, v10, v11);
  return v9;
}
