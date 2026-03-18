/*
 * XREFs of ?GetEdidForTarget@EDIDCACHE@DxgMonitor@@UEAAJU_LUID@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1402707C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1402704C0 (-AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?ReadEdidFromRegistry@EDIDCACHE@DxgMonitor@@CAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x140270BFC (-ReadEdidFromRegistry@EDIDCACHE@DxgMonitor@@CAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@.c)
 */

__int64 __fastcall DxgMonitor::EDIDCACHE::GetEdidForTarget(
        DxgMonitor::EDIDCACHE *this,
        struct _LUID a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *const a5,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *a6)
{
  unsigned int v6; // esi
  unsigned int i; // ecx
  __int64 v13; // rax
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF
  LONG HighPart; // [rsp+6Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v6 = 0;
  if ( !a5 )
    return 3221225713LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DxgMonitor::EDIDCACHE *)((char *)this + 616), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  for ( i = 0; i < 4; ++i )
  {
    v13 = 152LL * i;
    if ( *(_DWORD *)((char *)this + v13 + 16) == a2.LowPart
      && *(_DWORD *)((char *)this + v13 + 20) == HighPart
      && *(_DWORD *)((char *)this + v13 + 24) == a3 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)this + v13 + 32);
      *((_OWORD *)a5 + 1) = *(_OWORD *)((char *)this + v13 + 48);
      *((_OWORD *)a5 + 2) = *(_OWORD *)((char *)this + v13 + 64);
      *((_OWORD *)a5 + 3) = *(_OWORD *)((char *)this + v13 + 80);
      *((_OWORD *)a5 + 4) = *(_OWORD *)((char *)this + v13 + 96);
      *((_OWORD *)a5 + 5) = *(_OWORD *)((char *)this + v13 + 112);
      *((_OWORD *)a5 + 6) = *(_OWORD *)((char *)this + v13 + 128);
      *((_OWORD *)a5 + 7) = *(_OWORD *)((char *)this + v13 + 144);
      if ( a6 )
        *a6 = *(enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *)((char *)this + v13 + 28);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
      return 0LL;
    }
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  if ( a4 && (int)DxgMonitor::EDIDCACHE::ReadEdidFromRegistry(a3, a5, a6) >= 0 )
    DxgMonitor::EDIDCACHE::AddEdid(this, a2, a3, 0, a5, *a6);
  else
    v6 = -1073741275;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return v6;
}
