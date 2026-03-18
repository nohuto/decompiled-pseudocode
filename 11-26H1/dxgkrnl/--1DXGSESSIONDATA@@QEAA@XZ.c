/*
 * XREFs of ??1DXGSESSIONDATA@@QEAA@XZ @ 0x140201C2C
 * Callers:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1400820E4 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@Z @ 0x14002DBF4 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1DispBrokerClient@@QEAA@XZ @ 0x1400820BC (--1DispBrokerClient@@QEAA@XZ.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x14008210C (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     ?CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1400832A8 (-CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A56D4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this)
{
  __int64 v2; // rcx
  OUTPUTDUPL_SESSION_MGR *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  struct DXGGLOBAL *Global; // rax
  void *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r8
  _QWORD *v15; // rdx
  struct _KEVENT *v16; // rcx
  char *v17; // rcx
  void *v18; // rcx

  v2 = *((_QWORD *)this + 2344);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 2344) = 0LL;
  }
  v3 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
  {
    v4 = (void *)*((_QWORD *)this + 2345);
    if ( v4 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
      *((_QWORD *)this + 2345) = 0LL;
    }
  }
  *((_QWORD *)this + 2317) = 0LL;
  *((_QWORD *)this + 2318) = 0LL;
  if ( *((_DWORD *)this + 4742) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3584;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_cVailGuestReference", 3584LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 2372) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3585;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"nullptr == m_pVailGuestObject", 3585LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGSESSIONDATA **)this + 2323) != (DXGSESSIONDATA *)((char *)this + 18584) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3590;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_SessionAdapterListHead)",
      3590LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((DXGSESSIONDATA **)this + 2325) != (DXGSESSIONDATA *)((char *)this + 18600) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3591;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_SessionViewListHead)",
      3591LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 4632) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((_WORD *)this + 9321) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3598;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_NumDeviceInBatch == 0", 3598LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = (void *)*((_QWORD *)this + 2331);
  if ( v5 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
    *((_WORD *)this + 9320) = 0;
    *((_QWORD *)this + 2331) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 2332);
  *((_QWORD *)this + 2333) = 0LL;
  ObfDereferenceObject(v6);
  if ( *((_QWORD *)this + 2340) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3609;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_DwmProcess == nullptr", 3609LL, 0LL, 0LL, 0LL, 0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGVALIDATION::CleanupForSession((struct DXGGLOBAL *)((char *)Global + 1668), this);
  v8 = (void *)*((_QWORD *)this + 2343);
  if ( v8 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    *((_QWORD *)this + 2343) = 0LL;
    *((_DWORD *)this + 4684) = 0;
  }
  while ( 1 )
  {
    v9 = *((_DWORD *)this + 4694);
    if ( !v9 )
      break;
    v10 = *((_QWORD *)this + 2348);
    v11 = (unsigned int)(v9 - 1);
    *((_DWORD *)this + 4694) = v11;
    v12 = 32 * v11;
    if ( *(_QWORD *)(v12 + v10 + 8) )
    {
      v13 = v12 + v10 + 16;
      v14 = *(_QWORD *)v13;
      if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || (v15 = *(_QWORD **)(v12 + v10 + 24), *v15 != v13) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      --*(_DWORD *)(*(_QWORD *)(v12 + v10 + 8) + 4LL);
    }
  }
  v16 = (struct _KEVENT *)*((_QWORD *)this + 2346);
  *((_DWORD *)this + 4694) = -1;
  if ( v16 )
  {
    KeSetEvent(v16, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 2346));
    *((_QWORD *)this + 2346) = 0LL;
  }
  v17 = (char *)*((_QWORD *)this + 2348);
  if ( v17 != (char *)this + 18792 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
  v18 = (void *)*((_QWORD *)this + 2398);
  if ( v18 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
  if ( RtlNumberOfClearBits((PRTL_BITMAP)((char *)this + 19240)) != 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3665;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"RtlNumberOfClearBits(&m_SessionAdapterOrdinalMap) == (MAX_SESSIONIZED_ADAPTERS_PER_SESSION)",
      3665LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19192));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19120));
  auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset((ReferenceCounted **)this + 2387, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19040));
  DispBrokerClient::~DispBrokerClient((DispBrokerClientHandle **)this + 2373);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18920));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18672));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16));
}
