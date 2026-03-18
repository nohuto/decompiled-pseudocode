/*
 * XREFs of ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140363988
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140363C84 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        ADAPTER_DISPLAY *this,
        unsigned __int8 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  void *v8; // rcx
  struct _D3DKMT_GETDISPLAYMODELIST *v9; // r9
  __int64 ActiveVidPnBasedDisplayModeList; // rbp
  __int64 v11; // rax
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  ULONG TimeIncrement; // eax
  _BYTE v18[16]; // [rsp+50h] [rbp-38h] BYREF
  void *v19[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v20; // [rsp+70h] [rbp-18h]

  v6 = MEMORY[0xFFFFF78000000320];
  v7 = v6 * KeQueryTimeIncrement();
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6701;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayModeList != NULL", 6701LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6702;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayModeList->VidPnSourceId < GetNumVidPnSources()",
      6702LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3->pModeList )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6703;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayModeList->pModeList == NULL",
      6703LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(a3->VidPnSourceId, (__int64)&EventStartRebuildModeCache);
  v8 = (void *)*((_QWORD *)this + 2);
  v20 = 0LL;
  v9 = (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v19 & -(__int64)(*((_QWORD *)this + 43) != 0LL));
  *(_OWORD *)v19 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(v8, a2, a3, v9);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (ADAPTER_DISPLAY *)((char *)this + 296), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v11 = *((_QWORD *)this + 43);
  if ( v11 )
  {
    v12 = *(void **)(v11 + 24LL * a3->VidPnSourceId + 8);
    if ( v12 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
    v13 = 3LL * a3->VidPnSourceId;
    v14 = *((_QWORD *)this + 43);
    *(_OWORD *)(v14 + 8 * v13) = *(_OWORD *)v19;
    *(_QWORD *)(v14 + 8 * v13 + 16) = v20;
  }
  else if ( v19[1] )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v19[1]);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a3->pModeList);
    a3->pModeList = 0LL;
    WdLogSingleEntry3(4LL, this, a3->VidPnSourceId, ActiveVidPnBasedDisplayModeList);
    WdLogGlobalForLineNumber = 6749;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(a3->VidPnSourceId, (__int64)&EventEndRebuildModeCache);
  v15 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  DxgkLogCodePointPacket(
    0x1Du,
    a3->VidPnSourceId,
    ActiveVidPnBasedDisplayModeList,
    (v15 * (unsigned __int64)TimeIncrement - v7) / 0x2710,
    *(_QWORD *)(*((_QWORD *)this + 2) + 412LL));
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
