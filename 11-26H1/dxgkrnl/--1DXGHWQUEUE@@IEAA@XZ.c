/*
 * XREFs of ??1DXGHWQUEUE@@IEAA@XZ @ 0x140401EFC
 * Callers:
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x14003CCD8 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x14003CC28 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003DA90 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ @ 0x1404020A8 (-DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ.c)
 */

void __fastcall DXGHWQUEUE::~DXGHWQUEUE(DXGHWQUEUE *this)
{
  void *v2; // rcx
  DXGDEVICESYNCOBJECT *v3; // rcx
  DXGDEVICESYNCOBJECT *v4; // rcx
  DXGDEVICESYNCOBJECT *v5; // rcx
  unsigned int v6; // edx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  ULONG_PTR NumberOfBytes; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 32;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"_DestroyedCoreState", 32LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGHWQUEUE::DestroyDoorbell(this);
  if ( *((_QWORD *)this + 19) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 36;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"_Doorbell == nullptr", 36LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (void *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    NumberOfBytes = 4096LL;
    MmRotatePhysicalView(v2, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
    v9 = 4096LL;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, __int64 *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)this + 128,
      &v9,
      0x8000LL);
  }
  v3 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 10);
  if ( v3 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v3);
  v4 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 12);
  if ( v4 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v4);
  v5 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 7);
  if ( v5 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v5);
  v6 = *((_DWORD *)this + 6);
  if ( v6 )
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL), v6);
  *((_QWORD *)this + 2) = 0LL;
}
