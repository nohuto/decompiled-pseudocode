/*
 * XREFs of ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1401DF0E8
 * Callers:
 *     DxgkNotifyAdapterRemoval @ 0x1401E0834 (DxgkNotifyAdapterRemoval.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x14040EF38 (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::NotifyAdapterRemoval(DXGGLOBAL *this)
{
  ADAPTER_RENDER *v2; // rsi
  ADAPTER_RENDER *v3; // rdi
  ADAPTER_RENDER *v4; // rax
  bool v5; // zf
  ADAPTER_RENDER **v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  DXGADAPTERLISTLOCK *v9[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v10[144]; // [rsp+30h] [rbp-A8h] BYREF

  if ( !*((_BYTE *)this + 305636) )
  {
    DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v9, (DXGGLOBAL *)((char *)this + 680));
    DXGAUTOADAPTERLISTLOCK::AcquireShared(v9);
    v2 = (DXGGLOBAL *)((char *)this + 808);
    v3 = (ADAPTER_RENDER *)*((_QWORD *)this + 101);
    while ( 1 )
    {
LABEL_3:
      v4 = 0LL;
      if ( v3 != v2 )
        v4 = v3;
      if ( !v4 )
        break;
      v5 = v3 == v2;
      v6 = (ADAPTER_RENDER **)v3;
      v3 = *(ADAPTER_RENDER **)v3;
      if ( v5 )
        v6 = 0LL;
      _m_prefetchw(v6 + 3);
      v7 = (signed __int64)v6[3];
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, (struct DXGADAPTER *const)v6, 0LL);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
          if ( v6[396] )
          {
            if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10, 0LL) >= 0 )
              ADAPTER_RENDER::SignalCrossAdapterSyncObjects(v6[396]);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
          goto LABEL_3;
        }
      }
    }
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v9);
  }
}
