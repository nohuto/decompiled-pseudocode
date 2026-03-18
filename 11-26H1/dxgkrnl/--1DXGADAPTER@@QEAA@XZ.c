/*
 * XREFs of ??1DXGADAPTER@@QEAA@XZ @ 0x140196D84
 * Callers:
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x14007BCB8 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??1MOCKDRIVERSTATE@@QEAA@XZ @ 0x14006E6A4 (--1MOCKDRIVERSTATE@@QEAA@XZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x14006E6E4 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x14006E70C (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x140198168 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ @ 0x1401982FC (-DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ.c)
 */

void __fastcall DXGADAPTER::~DXGADAPTER(DXGADAPTER *this)
{
  ADAPTER_DISPLAY *v2; // rcx
  ADAPTER_RENDER *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rdi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(v9[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v9, 0LL, 0x50u, 0);
  DXGADAPTER::Destroy(this, v9[1]);
  v2 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 395);
  if ( v2 )
  {
    ADAPTER_DISPLAY::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 395) = 0LL;
  }
  v3 = (ADAPTER_RENDER *)*((_QWORD *)this + 396);
  if ( v3 )
  {
    ADAPTER_RENDER::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 396) = 0LL;
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 35);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 35));
    *((_QWORD *)this + 35) = 0LL;
  }
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 21);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 21));
    *((_QWORD *)this + 21) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 408);
  if ( v6 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
    *((_QWORD *)this + 408) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 559);
  if ( v7 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  if ( *((_QWORD *)this + 379) )
  {
    DXGADAPTER::DestroyPhysicalAdapterData(this);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 379));
    *((_QWORD *)this + 379) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 627);
  if ( v8 )
  {
    MOCKDRIVERSTATE::~MOCKDRIVERSTATE(*((MOCKDRIVERSTATE **)this + 627));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  }
  DXGADAPTER::DestroyVSyncPhaseState(this);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v9);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 596));
  *((_QWORD *)this + 2) = 0LL;
}
