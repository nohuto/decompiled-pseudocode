/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1403E7368
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1401B7730 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1403E7010 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x14004CC44 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DpiMiracastGetForcedMode @ 0x1403E7594 (DpiMiracastGetForcedMode.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1403E76C0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1403E7724 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x14042A5B4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v2; // bl
  bool v3; // r13
  __int64 v4; // rdi
  int ForcedMode; // eax
  int v6; // esi
  __int64 RenderAdapterForSession; // rax
  __int64 v8; // rbp
  int v9; // edi
  char v11; // r14
  char v12; // bp
  PVOID v13; // rsi
  char v14; // r12
  PVOID Tag; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v2 = 1;
  }
  v3 = 0;
  v4 = 0LL;
  ForcedMode = DpiMiracastGetForcedMode();
  v6 = ForcedMode;
  if ( ForcedMode != 3 )
  {
    if ( ForcedMode != 1 )
    {
      RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
      v8 = RenderAdapterForSession;
      if ( RenderAdapterForSession )
      {
        LODWORD(Tag) = 0;
        v9 = DpiMiracastQueryMiracastSupportForFDO(RenderAdapterForSession, &Tag);
        if ( v9 < 0 )
        {
          if ( v2 )
            ReleaseMiniportListMutex();
          return (unsigned int)v9;
        }
        v11 = BYTE1(Tag);
        v4 = *(_QWORD *)(v8 + 2696);
        v3 = (_BYTE)Tag != 0;
        if ( (_BYTE)Tag )
        {
          if ( BYTE1(Tag) )
            goto LABEL_15;
        }
        if ( v6 == 2 )
          goto LABEL_15;
      }
    }
    Tag = 0LL;
    if ( (int)DpiMiracastFindDisplayAdapterFdoIhv(&Tag) >= 0 )
    {
      v13 = Tag;
      if ( Tag )
      {
        LODWORD(Tag) = 0;
        v12 = 0;
        v14 = 0;
        v11 = 0;
        if ( (int)DpiMiracastQueryMiracastSupportForFDO(v13, &Tag) >= 0 )
        {
          v11 = BYTE3(Tag);
          v14 = BYTE2(Tag);
          if ( BYTE2(Tag) )
          {
            v4 = *((_QWORD *)v13 + 337);
            v12 = 1;
          }
        }
        if ( *((_BYTE *)v13 + 484) )
          DpiEnableD3Requests(*((_QWORD *)v13 + 3));
        ExReleaseResourceLite(*((PERESOURCE *)v13 + 21));
        KeLeaveCriticalRegion();
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)v13 + 2, v13, 0x20u);
        if ( v14 )
          goto LABEL_17;
      }
    }
    if ( v3 )
    {
      v11 = 0;
LABEL_15:
      v12 = 0;
LABEL_17:
      DWORD1(xmmword_140169348) = dword_1401692A4;
      LOBYTE(xmmword_140169348) = v11;
      BYTE8(xmmword_140169348) = v12;
      *(_QWORD *)((char *)&xmmword_140169348 + 12) = v4;
      if ( a1 )
      {
        *(_OWORD *)a1 = xmmword_140169348;
        *(_DWORD *)(a1 + 16) = dword_140169358;
      }
      if ( v2 )
        ReleaseMiniportListMutex();
      return 0LL;
    }
    xmmword_140169348 = 0LL;
    dword_140169358 = 0;
  }
  if ( v2 )
    ReleaseMiniportListMutex();
  return 3221225659LL;
}
