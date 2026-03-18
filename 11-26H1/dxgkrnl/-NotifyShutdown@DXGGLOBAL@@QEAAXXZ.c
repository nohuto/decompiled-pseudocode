/*
 * XREFs of ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1401DF380
 * Callers:
 *     DxgkShutdown @ 0x1401D5810 (DxgkShutdown.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?NodeUsageTelemetry@DXGADAPTER@@QEAAX_N@Z @ 0x14019CF80 (-NodeUsageTelemetry@DXGADAPTER@@QEAAX_N@Z.c)
 *     DxgkShutdownBootGraphics @ 0x14030C080 (DxgkShutdownBootGraphics.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGGLOBAL::NotifyShutdown(DXGGLOBAL *this)
{
  char *v2; // r14
  char *v3; // rdi
  char *v4; // rax
  bool v5; // zf
  char *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  DXGADAPTERLISTLOCK *v12[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v13[144]; // [rsp+30h] [rbp-A8h] BYREF

  DxgkShutdownBootGraphics(0LL, 0);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v12, (DXGGLOBAL *)((char *)this + 680));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v12);
  v2 = (char *)this + 808;
  v3 = (char *)*((_QWORD *)this + 101);
  while ( 1 )
  {
LABEL_2:
    v4 = 0LL;
    if ( v3 != v2 )
      v4 = v3;
    if ( !v4 )
      break;
    v5 = v3 == v2;
    v6 = v3;
    v3 = *(char **)v3;
    if ( v5 )
      v6 = 0LL;
    _m_prefetchw(v6 + 24);
    v7 = *((_QWORD *)v6 + 3);
    while ( v7 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 3, v7 + 1, v7);
      if ( v8 == v7 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, (struct DXGADAPTER *const)v6, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
        if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v13, 2LL) >= 0 )
        {
          v9 = *((_QWORD *)v6 + 396);
          if ( v9 )
            ADAPTER_RENDER::FlushScheduler(v9, 6LL, 0xFFFFFFFFLL);
          v10 = *((_QWORD *)v6 + 396);
          if ( v10 && !*(_BYTE *)(*(_QWORD *)(v10 + 16) + 209LL) )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 760) + 8LL) + 48LL))(*(_QWORD *)(v10 + 768));
            DXGADAPTER::NodeUsageTelemetry(*(DXGADAPTER **)(v10 + 16));
          }
          v11 = *((_QWORD *)v6 + 396);
          if ( v11 )
            ADAPTER_RENDER::FlushScheduler(v11, 7LL, 0xFFFFFFFFLL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
        goto LABEL_2;
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v12);
}
