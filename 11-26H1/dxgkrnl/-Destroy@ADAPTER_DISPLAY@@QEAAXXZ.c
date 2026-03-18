/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401A2A70
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1404121A4 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1400700BC (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1400858E0 (DpiSetSchedulerCallbackState.c)
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x140098620 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1401A1378 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x140320A4C (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int i; // esi
  __int64 v5; // rbx
  void *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rbx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  unsigned int j; // ebx
  ADAPTER_DISPLAY *v13; // rbx
  MONITOR_MGR *v14; // rcx
  ADAPTER_DISPLAY *v15; // rax
  __int64 v16; // rcx
  DXGDODPRESENT *v17; // rcx
  struct DXGGLOBAL *Global; // rax
  ADAPTER_DISPLAY *v19; // rdi
  char *v20; // rbx
  unsigned int ActualBufferSize; // eax
  _DWORD *v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rdx
  _BYTE v25[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( this[44] != (ADAPTER_DISPLAY *)(this + 44) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5333;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_OpmHandleMappingList)",
      5333LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this[16] )
  {
    v3 = *((_DWORD *)this + 24);
    for ( i = 0; i < v3; v3 = *((_DWORD *)this + 24) )
    {
      v5 = 4024LL * i;
      v6 = *(void **)((char *)this[16] + v5 + 1088);
      if ( v6 )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
        *(_QWORD *)((char *)this[16] + v5 + 1088) = 0LL;
      }
      ++i;
      *(_DWORD *)((char *)this[16] + v5 + 1096) = 0;
      *((_BYTE *)this[16] + v5 + 1100) = 0;
      *(_DWORD *)((char *)this[16] + v5 + 1104) = -1;
      *(_DWORD *)((char *)this[16] + v5 + 1116) = -1;
      *(_DWORD *)((char *)this[16] + v5 + 1120) = -1;
    }
    v7 = 0;
    if ( v3 )
    {
      do
      {
        v8 = 4024LL * v7;
        v9 = *(void **)((char *)this[16] + v8 + 800);
        if ( v9 )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
          *(_QWORD *)((char *)this[16] + v8 + 800) = 0LL;
          *(_DWORD *)((char *)this[16] + v8 + 816) = 0;
        }
        v10 = *(void **)((char *)this[16] + v8 + 848);
        if ( v10 )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
          *(_QWORD *)((char *)this[16] + v8 + 848) = 0LL;
        }
        v11 = *(void **)((char *)this[16] + v8 + 888);
        if ( v11 )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
          *(_QWORD *)((char *)this[16] + v8 + 888) = 0LL;
        }
        ++v7;
      }
      while ( v7 < *((_DWORD *)this + 24) );
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)(this + 78), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    for ( j = 0; j < *((_DWORD *)this + 24); ++j )
      DISPLAY_SOURCE::ClearAllDisplayState((ADAPTER_DISPLAY *)((char *)this[16] + 4024 * j));
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
  }
  v13 = this[13];
  if ( v13 )
  {
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)v13 + 40));
    (**(void (__fastcall ***)(ADAPTER_DISPLAY *, __int64))v13)(v13, 1LL);
    this[13] = 0LL;
  }
  if ( this[14] )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
    v14 = this[14];
    WdLogGlobalForLineNumber = 334;
    if ( v14 )
      MONITOR_MGR::`vector deleting destructor'(v14, 1);
    this[14] = 0LL;
  }
  v15 = this[2];
  v16 = *((_QWORD *)v15 + 27);
  if ( v16 && !*((_QWORD *)v15 + 396) )
  {
    DpiSetSchedulerCallbackState(v16, 0);
    KeFlushQueuedDpcs();
  }
  v17 = this[58];
  if ( v17 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v17);
    this[58] = 0LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  v19 = this[2];
  v20 = (char *)Global + 1400;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGGLOBAL *)((char *)Global + 1400), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((AUTOEXPANDALLOCATION *)(v20 + 48));
  v22 = (_DWORD *)*((_QWORD *)v20 + 6);
  v23 = ActualBufferSize >> 4;
  if ( v23 > 1 << *((_DWORD *)v20 + 17) )
    v23 = 1 << *((_DWORD *)v20 + 17);
  if ( v23 )
  {
    v24 = v23;
    do
    {
      if ( *v22 == *((_DWORD *)v19 + 103) && v22[1] == *((_DWORD *)v19 + 104) )
        v22[3] &= ~1u;
      v22 += 4;
      --v24;
    }
    while ( v24 );
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
}
