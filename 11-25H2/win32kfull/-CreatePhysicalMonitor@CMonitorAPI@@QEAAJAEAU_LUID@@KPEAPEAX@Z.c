/*
 * XREFs of ?CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z @ 0x1402022A0
 * Callers:
 *     ?CreatePhysicalMonitor@@YAJAEAU_LUID@@KPEAPEAX@Z @ 0x14020224C (-CreatePhysicalMonitor@@YAJAEAU_LUID@@KPEAPEAX@Z.c)
 * Callees:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1402003BC (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMon.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CMonitorAPI::CreatePhysicalMonitor(CMonitorAPI *this, struct _LUID *a2, unsigned int a3, void **a4)
{
  OPM::CMonitorPDO *Pool2; // rax
  __int64 v9; // rdi
  unsigned int v10; // ebx
  void *v12; // [rsp+20h] [rbp-10h] BYREF
  _BYTE v13[8]; // [rsp+28h] [rbp-8h] BYREF
  int v14; // [rsp+50h] [rbp+20h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v13, this);
  v12 = 0LL;
  v14 = 0;
  Pool2 = (OPM::CMonitorPDO *)ExAllocatePool2(258LL, 96LL, 1664248135LL);
  v9 = (__int64)Pool2;
  if ( Pool2 )
  {
    OPM::CMonitorPDO::CMonitorPDO(Pool2, a2, a3, &v14);
    *(_QWORD *)v9 = &CPhysicalMonitorHandle::`vftable';
    OPM::CMutex::CMutex((OPM::CMutex *)(v9 + 72), &v14);
    *(_QWORD *)(v9 + 80) = 0LL;
    *(_DWORD *)(v9 + 88) = 0;
    if ( v14 < 0
      || (v14 = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::AddHandleToTable((__int64)this + 8, v9, &v12),
          v10 = v14,
          v14 < 0) )
    {
      (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1LL);
      v10 = v14;
    }
    else
    {
      *a4 = v12;
    }
  }
  else
  {
    v10 = -1073741801;
    v14 = -1073741801;
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v13);
  return v10;
}
