/*
 * XREFs of ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1401DD034
 * Callers:
 *     ?DxgkEnableStablePowerState@@YAXXZ @ 0x1401DCE3C (-DxgkEnableStablePowerState@@YAXXZ.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x140198C14 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::EnableStablePowerState(DXGGLOBAL *this)
{
  _QWORD **v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  bool v4; // zf
  _QWORD *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  DXGADAPTERLISTLOCK *v8[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v9[144]; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (_QWORD **)((char *)this + 808);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v8, (DXGGLOBAL *)((char *)this + 680));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v8);
  v2 = *v1;
  while ( 1 )
  {
LABEL_2:
    v3 = 0LL;
    if ( v2 != v1 )
      v3 = v2;
    if ( !v3 )
      break;
    v4 = v2 == v1;
    v5 = v2;
    v2 = (_QWORD *)*v2;
    if ( v4 )
      v5 = 0LL;
    _m_prefetchw(v5 + 3);
    v6 = v5[3];
    while ( v6 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64(v5 + 3, v6 + 1, v6);
      if ( v7 == v6 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, (struct DXGADAPTER *const)v5, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v5);
        if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v9, 1LL) >= 0 )
          DXGADAPTER::EnableStablePowerState((ADAPTER_RENDER **)v5);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
        goto LABEL_2;
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v8);
}
