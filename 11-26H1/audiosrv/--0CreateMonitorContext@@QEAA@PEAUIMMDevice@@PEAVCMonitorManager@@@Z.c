/*
 * XREFs of ??0CreateMonitorContext@@QEAA@PEAUIMMDevice@@PEAVCMonitorManager@@@Z @ 0x18011B92C
 * Callers:
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18008233C (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CreateMonitorContext *__fastcall CreateMonitorContext::CreateMonitorContext(
        CreateMonitorContext *this,
        struct IMMDevice *a2,
        struct CMonitorManager *a3)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IMMDevice *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 1) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct CMonitorManager *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
