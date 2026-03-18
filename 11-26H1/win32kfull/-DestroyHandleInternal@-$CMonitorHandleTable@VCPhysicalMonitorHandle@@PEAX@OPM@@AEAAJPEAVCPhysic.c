/*
 * XREFs of ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysicalMonitorHandle@@KPEAVCMutex@2@@Z @ 0x14024F0F4
 * Callers:
 *     ?DestroyHandlesOwnedByProcess@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAXPEAXPEAVCMutex@2@@Z @ 0x1401DE3C0 (-DestroyHandlesOwnedByProcess@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAXPEAX.c)
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x14028A858 (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct OPM::CMutex *a4)
{
  __int64 v5; // rdi
  int v8; // ebp
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v10, a4);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = 0LL;
  --*(_DWORD *)(a1 + 8);
  (**(void (__fastcall ***)(__int64, __int64))a2)(a2, 1LL);
  if ( v8 >= 0 )
    v8 = 0;
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v10);
  return (unsigned int)v8;
}
