/*
 * XREFs of ??1DXGGLOBAL@@EEAA@XZ @ 0x1401DBF5C
 * Callers:
 *     ??_GDXGGLOBAL@@EEAAPEAXI@Z @ 0x14007BD10 (--_GDXGGLOBAL@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x140058930 (--1-$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     McGenEventUnregister_EtwUnregister @ 0x140079A24 (McGenEventUnregister_EtwUnregister.c)
 *     ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x14007BB58 (--1CSERIALIZEDWORKQUEUE@@QEAA@XZ.c)
 *     ??1DisplayDiagnostics@@QEAA@XZ @ 0x14007BC2C (--1DisplayDiagnostics@@QEAA@XZ.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x14007BCE0 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x14007BD70 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1401CC2BC (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSOURCEHASH@@QEAA@XZ @ 0x1401DBF34 (--1DXGADAPTERSOURCEHASH@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1401E63DC (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1401FD3C0 (--1REMOTE_VSYNC@@QEAA@XZ.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1401FD830 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1402020B0 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140372410 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ??1HMGRTABLE@@QEAA@XZ @ 0x1403F0880 (--1HMGRTABLE@@QEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::~DXGGLOBAL(DXGGLOBAL *this)
{
  __int64 v2; // rbp
  DXGMMS_EXPORT **v3; // rbx
  DXGMMS_EXPORT *v4; // rsi
  void *v5; // rbx
  struct _ERESOURCE *v6; // rcx
  DXGDIAGNOSTICS *v7; // rcx
  DXGDIAGNOSTICS *v8; // rcx
  void *v9; // rbx
  struct DXGPROCESS *v10; // rcx
  void *v11; // rcx
  ULONG v12; // ebx
  unsigned int v13; // ebx
  void *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  void **v18; // rcx
  ReferenceCounted *v19; // rcx

  *(_QWORD *)this = &DXGGLOBAL::`vftable';
  if ( DxgExtensionRegistration )
  {
    ExUnregisterExtension();
    DxgExtensionRegistration = 0LL;
    DxgExtensionInfo = 0LL;
    DxgHostTable = 0LL;
    xmmword_1401682C8 = 0LL;
  }
  v2 = 2LL;
  v3 = (DXGMMS_EXPORT **)&DXGGLOBAL::m_pDxgmmsExport;
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      DXGMMS_EXPORT::Release(*v3);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
    }
    *v3++ = 0LL;
    --v2;
  }
  while ( v2 );
  if ( *((_BYTE *)this + 1363) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 160));
  v5 = (void *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    HMGRTABLE::~HMGRTABLE(*((HMGRTABLE **)this + 4));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  }
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 76);
  *((_QWORD *)this + 4) = 0LL;
  if ( v6 )
  {
    ExDeleteResourceLite(v6);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 76));
    *((_QWORD *)this + 76) = 0LL;
  }
  v7 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 121);
  if ( v7 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v7);
    *((_QWORD *)this + 121) = 0LL;
  }
  v8 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 122);
  if ( v8 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v8);
    *((_QWORD *)this + 122) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 123);
  if ( v9 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 123));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    *((_QWORD *)this + 123) = 0LL;
  }
  if ( *((_BYTE *)this + 1361) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)this + 12);
    *((_BYTE *)this + 1361) = 0;
  }
  if ( *((_BYTE *)this + 1362) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)this + 13);
    *((_BYTE *)this + 1362) = 0;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)this + 173);
  if ( v10 )
  {
    DXGPROCESS::DestroyDxgProcess(v10);
    *((_QWORD *)this + 173) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 38121);
  if ( v11 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
    *((_QWORD *)this + 38121) = 0LL;
  }
  if ( *((_QWORD *)this + 113) )
  {
    v12 = RtlNumberOfClearBits((PRTL_BITMAP)((char *)this + 872));
    if ( v12 != DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1698;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"RtlNumberOfClearBits(&m_GlobalAdapterOrdinalMap) == GetMaximumGlobalAdapterCount()",
        1698LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v13 = 1024 - DXGGLOBAL::GetMaximumGlobalAdapterCount(this);
    if ( RtlNumberOfClearBits((PRTL_BITMAP)((char *)this + 888)) != v13 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1699;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"RtlNumberOfClearBits(&m_SessionizedAdapterOrdinalMap) == ((MAX_ADAPTERS_CEILING) - GetMaximumGlobalAdapterCount())",
        1699LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RtlInitializeBitMap((PRTL_BITMAP)((char *)this + 872), 0LL, 0);
    RtlInitializeBitMap((PRTL_BITMAP)((char *)this + 888), 0LL, 0);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 113));
    *((_QWORD *)this + 113) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 185);
  if ( v14 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 185));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
    *((_QWORD *)this + 185) = 0LL;
  }
  v15 = *((_QWORD *)this + 238);
  if ( v15 )
  {
    ExUnsubscribeWnfStateChange(v15);
    *((_QWORD *)this + 238) = 0LL;
  }
  v16 = *((_QWORD *)this + 261);
  if ( v16 )
  {
    ExUnsubscribeWnfStateChange(v16);
    *((_QWORD *)this + 261) = 0LL;
  }
  v17 = (void *)*((_QWORD *)this + 262);
  if ( v17 )
  {
    PoUnregisterPowerSettingCallback(v17);
    *((_QWORD *)this + 262) = 0LL;
  }
  if ( *((_DWORD *)this + 527) )
  {
    McGenEventUnregister_EtwUnregister(SLEEPSTUDY_ETW_PROVIDER_Context);
    *((_DWORD *)this + 527) = 0;
  }
  if ( !KeCancelTimer((PKTIMER)this + 30) )
    KeFlushQueuedDpcs();
  if ( !KeCancelTimer((PKTIMER)this + 4778) )
    KeFlushQueuedDpcs();
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 38111));
  v18 = (void **)*((_QWORD *)this + 212);
  if ( v18 )
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v18);
  v19 = (ReferenceCounted *)*((_QWORD *)this + 38151);
  if ( v19 )
  {
    ReferenceCounted::Release(v19);
    *((_QWORD *)this + 38151) = 0LL;
  }
  if ( *((_BYTE *)this + 305440) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 305456));
  if ( *((_DWORD *)this + 91) != *((_DWORD *)this + 90) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1781;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ShareHandleTable.IsEmpty()", 1781LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 74) != (DXGGLOBAL *)((char *)this + 592) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1782;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SyncObjectList.IsEmpty()", 1782LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 83) != (DXGGLOBAL *)((char *)this + 664) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1783;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_KeyedMutexList.IsEmpty()", 1783LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 101) != (DXGGLOBAL *)((char *)this + 808) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1784;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_AdapterList.IsEmpty()", 1784LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 226) != (DXGGLOBAL *)((char *)this + 1808) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1785;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SharedPowerList.IsEmpty()", 1785LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 187) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1786;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_UefiFrameData == NULL", 1786LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 305744));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 305552));
  CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE((DXGGLOBAL *)((char *)this + 305368));
  REMOTEMONITORMAPPING::Clear((DXGGLOBAL *)((char *)this + 305272), 0LL);
  DisplayDiagnostics::~DisplayDiagnostics((DXGGLOBAL *)((char *)this + 305024));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304976));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304904));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304824));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 2112));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1824));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 226);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1616));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 198);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1536));
  DXGADAPTERSOURCEHASH::~DXGADAPTERSOURCEHASH((DXGGLOBAL *)((char *)this + 1400));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 1088));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 1032));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 824));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 101);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 760));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 680));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 83);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 616));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 74);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 544));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 53);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 376));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 43));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 296));
}
