/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1403ED754
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1403ED6BC (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgCreateEvent@@YAJPEAPEAU_KEVENT@@W4_EVENT_TYPE@@E@Z @ 0x14006AE14 (-DxgCreateEvent@@YAJPEAPEAU_KEVENT@@W4_EVENT_TYPE@@E@Z.c)
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x140080C9C (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1402842E4 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1403ED958 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1404149D4 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x140417200 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this, enum _EVENT_TYPE a2)
{
  struct _KEVENT **v2; // rdi
  NTSTATUS Event; // esi
  unsigned int v6; // esi
  BLTQUEUE *v7; // rax
  BLTQUEUE *v8; // rax
  BLTQUEUE **v9; // rdi
  int v10; // eax
  __int64 v11; // r14
  int v12; // ecx

  v2 = (struct _KEVENT **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || (Event = DxgCreateEvent((PVOID *)this + 2, a2), Event >= 0) )
  {
    v6 = 64;
    v7 = (BLTQUEUE *)operator new(0xBE0uLL, 0x4B677844u, 64LL);
    if ( v7 )
      v8 = BLTQUEUE::BLTQUEUE(v7, 0LL, 0xFFFFFFFF, *v2, 0);
    else
      v8 = 0LL;
    v9 = (BLTQUEUE **)((char *)this + 8);
    *((_QWORD *)this + 1) = v8;
    if ( v8 )
    {
      v10 = BLTQUEUE::Startup(v8);
      v11 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 90;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to start remote VSync emulation, status 0x%I64x",
          v11,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( *v9 )
        {
          BLTQUEUE::`scalar deleting destructor'(*v9, 1);
          *v9 = 0LL;
        }
      }
      else
      {
        BLTQUEUE::EnableVSync(*v9);
        if ( !*((_BYTE *)this + 1) )
        {
          v12 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 76304);
          if ( !v12 || (v6 = 0x3E8u / (v12 + 1)) == 0 )
          {
            v6 = 32;
            v9 = (BLTQUEUE **)((char *)this + 8);
          }
        }
        BLTQUEUE::UpdateDisplayModeInfo(*v9, (struct _D3DDDI_RATIONAL)(v6 | 0x100000000LL), 768);
      }
      return (unsigned int)v11;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 57;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to create remote VSync emulation class",
        57LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 48;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create remote VSync event",
      48LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)Event;
  }
}
