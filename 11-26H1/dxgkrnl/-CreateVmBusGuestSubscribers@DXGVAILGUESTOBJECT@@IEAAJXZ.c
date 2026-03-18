/*
 * XREFs of ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x14020D820
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x14020E2AC (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x140213414 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::CreateVmBusGuestSubscribers(DXGVAILGUESTOBJECT *this)
{
  __int64 v2; // rax
  DXGVMBUSCHANNEL *v3; // rcx
  int v4; // edi
  __int64 v5; // rax
  DXGVMBUSCHANNEL *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGVAILGUESTOBJECT *)((char *)this + 16), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( *((_OWORD *)this + 5) != 0LL )
  {
    v4 = -1073740528;
    goto LABEL_15;
  }
  v2 = operator new(0x18uLL, 0x4B677844u, 256LL);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)v2 = &DXG_GUEST_REMOTEOBJECTCHANNEL::`vftable';
    *(_WORD *)(v2 + 16) = 0;
    v3 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 10) = v2;
    v4 = DXGVMBUSCHANNEL::RegisterSubscriber(
           v3,
           0x6F746D72u,
           (struct IDXGCHANNELSUBSCRIBER *)v2,
           (struct IDXGCHANNEL **)(v2 + 8));
    if ( v4 >= 0 )
    {
      v5 = operator new(0x18uLL, 0x4B677844u, 256LL);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 8) = 0LL;
        *(_QWORD *)v5 = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
        *(_WORD *)(v5 + 16) = 0;
        v6 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
        *((_QWORD *)this + 11) = v5;
        v4 = DXGVMBUSCHANNEL::RegisterSubscriber(
               v6,
               0x706D6F63u,
               (struct IDXGCHANNELSUBSCRIBER *)v5,
               (struct IDXGCHANNEL **)(v5 + 8));
        if ( v4 >= 0 )
          goto LABEL_15;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 2096;
      }
      else
      {
        *((_QWORD *)this + 11) = 0LL;
        v4 = -1073741801;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 2084;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2073;
    }
  }
  else
  {
    *((_QWORD *)this + 10) = 0LL;
    v4 = -1073741801;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2061;
  }
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
    *((_QWORD *)this + 10) = 0LL;
  }
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
    *((_QWORD *)this + 11) = 0LL;
  }
LABEL_15:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  return (unsigned int)v4;
}
