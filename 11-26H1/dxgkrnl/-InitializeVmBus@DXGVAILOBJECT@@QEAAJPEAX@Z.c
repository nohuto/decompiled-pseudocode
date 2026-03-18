/*
 * XREFs of ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x14020E3FC
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401F66FC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x140083274 (-SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x14020D788 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::InitializeVmBus(DXGVAILOBJECT *this, void *a2, const struct _GUID *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  struct _GUID v8; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)&v8.Data1 = 0LL;
  v4 = CreateVmBusChannel(a2, &v8, a3);
  if ( v4 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGVAILOBJECT *)((char *)this + 40), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
    DXGVAILOBJECT::SetVmBusChannel(this, *(struct DXGVMBUSCHANNEL **)&v8.Data1);
    *((_QWORD *)this + 13) = PsGetCurrentProcess(v5);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1663;
  }
  return (unsigned int)v4;
}
