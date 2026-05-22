/*
 * XREFs of ?GetFeatures@BamoControllerNavigationOverrideProxy@@UEAAIXZ @ 0x180036F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800375E0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoControllerNavigationOverrideProxy::GetFeatures(BamoControllerNavigationOverrideProxy *this)
{
  __int64 v2; // rdi
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rbp
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v7 = 0LL;
  v3 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v2 + 32);
  v4 = *((_DWORD *)v3 + 46);
  if ( v4 != GetCurrentThreadId() )
  {
    v7 = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v3);
  }
  v5 = *((_DWORD *)this + 11);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v7);
  return v5;
}
