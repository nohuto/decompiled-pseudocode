/*
 * XREFs of ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x14001826C
 * Callers:
 *     DxgkRegisterDwmProcess @ 0x14041AC00 (DxgkRegisterDwmProcess.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(DXGSESSIONDATA *this)
{
  void *v2; // rcx
  void *CurrentProcess; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGSESSIONDATA *)((char *)this + 18672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v2 = (void *)*((_QWORD *)this + 2340);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)this + 2340) = 0LL;
  }
  CurrentProcess = (void *)PsGetCurrentProcess();
  *((_QWORD *)this + 2340) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v4);
}
