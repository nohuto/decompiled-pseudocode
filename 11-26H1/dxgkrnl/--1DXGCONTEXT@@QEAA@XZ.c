/*
 * XREFs of ??1DXGCONTEXT@@QEAA@XZ @ 0x1403A76E4
 * Callers:
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x14003CC00 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x14003CC28 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003DA90 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x140058930 (--1-$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7B58 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403A8330 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGPRESENT@@QEAA@XZ @ 0x1403A85B0 (--1DXGPRESENT@@QEAA@XZ.c)
 */

void __fastcall DXGCONTEXT::~DXGCONTEXT(DXGCONTEXT *this)
{
  __int64 v2; // rcx
  DXGPRESENT *v3; // rcx
  void *v4; // rcx
  _QWORD *v5; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v7; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v8; // rax
  void *v9; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v10; // rax
  DXGDEVICESYNCOBJECT *v11; // rcx
  struct DXGHWQUEUE **i; // rbx
  void *v13; // rcx
  unsigned int v14; // edx
  void *v15; // rbx

  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 6), *(_QWORD *)(*((_QWORD *)this + 2) + 40LL));
  v2 = *((_QWORD *)this + 2);
  WdLogGlobalForLineNumber = 682;
  if ( !*(_BYTE *)(v2 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 136)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 684;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      684LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 685;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      685LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 428) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 691;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_bDestroyed", 691LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (DXGPRESENT *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    DXGPRESENT::DestroyStagingBuffer(v3, *((struct DXGDEVICE **)this + 2));
    v15 = (void *)*((_QWORD *)this + 19);
    if ( v15 )
    {
      DXGPRESENT::~DXGPRESENT(*((DXGPRESENT **)this + 19));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    MmUnsecureVirtualMemory(v4);
    *((_QWORD *)this + 17) = 0LL;
  }
  v5 = (_QWORD *)((char *)this + 120);
  if ( *((_QWORD *)this + 16) )
  {
    if ( !*v5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 725;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPatchLocationTable != NULL", 725LL, 0LL, 0LL, 0LL, 0LL);
    }
    ExFreePoolWithTag(*((PVOID *)this + 16), 0);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *v5 )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)this + 120,
      (char *)this + 112,
      0x8000LL);
    *v5 = 0LL;
    *((_DWORD *)this + 26) = 0;
    *((_QWORD *)this + 14) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 12);
  if ( v7 )
  {
    MmUnsecureVirtualMemory(v7);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( *((_QWORD *)this + 11) )
  {
    v8 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v8 + 2))(
      -1LL,
      (char *)this + 88,
      (char *)this + 80,
      0x8000LL);
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 18) = 0;
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( *((_QWORD *)this + 44) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 767;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_pCommandDmaBuffer", 767LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = (void *)*((_QWORD *)this + 8);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 7) )
  {
    v10 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v10 + 2))(
      -1LL,
      (char *)this + 56,
      (char *)this + 48,
      0x8000LL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v11 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
  if ( v11 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v11);
  for ( i = (struct DXGHWQUEUE **)((char *)this + 400);
        *i != (struct DXGHWQUEUE *)i;
        DXGCONTEXT::DestroyHwQueue(this, *i, 0LL) )
  {
    ;
  }
  if ( *((DXGCONTEXT **)this + 42) != (DXGCONTEXT *)((char *)this + 336) )
  {
    WdLogSingleEntry5(0LL, 275LL, 44LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 801;
  }
  v13 = (void *)*((_QWORD *)this + 59);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x4B677844u);
  v14 = *((_DWORD *)this + 6);
  *((_QWORD *)this + 59) = 0LL;
  if ( v14 )
  {
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v14);
    *((_DWORD *)this + 6) = 0;
  }
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 50);
  *((_QWORD *)this + 2) = 0LL;
}
