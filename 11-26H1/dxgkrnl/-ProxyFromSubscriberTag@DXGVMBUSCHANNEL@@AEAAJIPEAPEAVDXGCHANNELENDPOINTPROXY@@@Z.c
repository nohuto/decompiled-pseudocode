/*
 * XREFs of ?ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z @ 0x140213380
 * Callers:
 *     ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140213248 (-ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x140213414 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::ProxyFromSubscriberTag(
        DXGVMBUSCHANNEL *this,
        int a2,
        struct DXGCHANNELENDPOINTPROXY **a3)
{
  unsigned int v6; // edi
  _QWORD **v7; // rbx
  _QWORD *v8; // r9
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = -1073741275;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v7 = (_QWORD **)((char *)this + 48);
  v8 = *v7;
  if ( *v7 != v7 )
  {
    while ( v8 != v7 )
    {
      if ( *(_DWORD *)(((unsigned __int64)(v8 - 2) & ((unsigned __int128)-(__int128)(unsigned __int64)v8 >> 64)) + 0x24) == a2 )
      {
        *a3 = (struct DXGCHANNELENDPOINTPROXY *)((unsigned __int64)(v8 - 2) & ((unsigned __int128)-(__int128)(unsigned __int64)v8 >> 64));
        v6 = 0;
        break;
      }
      v8 = (_QWORD *)*v8;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  return v6;
}
