/*
 * XREFs of ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1401A4E2C
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z @ 0x14019FF84 (-Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ @ 0x140064F70 (-DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401F9FE0 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x140202490 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A90F8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Stop(ADAPTER_DISPLAY *this, struct _LUID *a2)
{
  char *v3; // rdx
  char *i; // rcx
  char *v5; // rax
  char *v6; // rax
  DXGPROTECTEDSESSION *v7; // r14
  DXGPROTECTEDSESSION *j; // rbx
  DXGPROTECTEDSESSION *v9; // rax
  DXGPROTECTEDSESSION *v10; // rcx
  DXGADAPTER *v11; // rcx
  struct DXGGLOBAL *Global; // rax
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rbx
  unsigned int k; // ebx
  __int64 v17; // rcx
  __int64 v18; // rax
  DXGSESSIONDATA **v19; // rcx
  unsigned int v20; // [rsp+78h] [rbp+10h] BYREF

  if ( !(_BYTE)a2 )
  {
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
      this,
      (struct ADAPTER_RENDER *)(*(_QWORD *)(*((_QWORD *)this + 2) + 3168LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(*((_QWORD *)this + 2) + 3168LL) >> 64)));
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 32));
    v3 = (char *)this + 80;
    for ( i = (char *)*((_QWORD *)this + 10); ; i = *(char **)i )
    {
      v5 = 0LL;
      if ( i != v3 )
        v5 = i;
      if ( !v5 )
        break;
      v6 = i;
      if ( i == v3 )
        v6 = 0LL;
      *((_DWORD *)v6 + 14) = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4);
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 680));
    v7 = (ADAPTER_DISPLAY *)((char *)this + 728);
    for ( j = (DXGPROTECTEDSESSION *)*((_QWORD *)this + 91); ; j = *(DXGPROTECTEDSESSION **)j )
    {
      v9 = 0LL;
      if ( j != v7 )
        v9 = j;
      if ( !v9 )
        break;
      v10 = j;
      if ( j == v7 )
        v10 = 0LL;
      DXGPROTECTEDSESSION::Stop(v10);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 85);
  }
  v11 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v20 = 0;
  if ( (*((_DWORD *)v11 + 111) & 0x100) != 0 && DXGADAPTER::IsAdapterSessionized(v11, a2, &v20, 0LL) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v13 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 123), v20);
    if ( v13 < 0 )
    {
      v14 = v20;
      v15 = v13;
      WdLogSingleEntry2(2LL, v20, v13);
      WdLogGlobalForLineNumber = 6372;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to purge the cached IDD display config request for session 0x%I64x, (Status = 0x%I64x).",
        v14,
        v15,
        0LL,
        0LL,
        0LL);
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 24); ++k )
  {
    v17 = 4024LL * k;
    v18 = *((_QWORD *)this + 16);
    if ( *(_BYTE *)(v17 + v18 + 762) )
    {
      v19 = *(DXGSESSIONDATA ***)(v17 + v18 + 48);
      if ( v19 )
        DXGSESSIONDATA::DecrementDesktopVidPnCount(*v19);
    }
  }
  KeCancelTimer((PKTIMER)((char *)this + 752));
  KeFlushQueuedDpcs();
}
