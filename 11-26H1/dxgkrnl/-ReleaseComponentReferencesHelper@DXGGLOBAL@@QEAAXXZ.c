/*
 * XREFs of ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1403FFEF8
 * Callers:
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1403EE83C (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 *     ?CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z @ 0x1403FFEE0 (-CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z.c)
 * Callees:
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x140011A58 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall DXGGLOBAL::ReleaseComponentReferencesHelper(DXGGLOBAL *this)
{
  _QWORD **v1; // r14
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  bool v4; // zf
  volatile signed __int32 *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  int v8; // eax
  unsigned int i; // esi
  DXGADAPTERLISTLOCK *v10[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v11[144]; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (_QWORD **)((char *)this + 808);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v10, (DXGGLOBAL *)((char *)this + 680));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v10);
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
    v5 = (volatile signed __int32 *)v2;
    v2 = (_QWORD *)*v2;
    if ( v4 )
      v5 = 0LL;
    if ( *((_DWORD *)v5 + 986) )
    {
      _m_prefetchw((const void *)(v5 + 6));
      v6 = *((_QWORD *)v5 + 3);
      do
      {
        if ( !v6 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 977;
          goto LABEL_2;
        }
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 3, v6 + 1, v6);
      }
      while ( v7 != v6 );
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)v5, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v5);
      v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL);
      if ( v8 < 0 )
      {
        WdLogSingleEntry2(3LL, v5, v8);
        WdLogGlobalForLineNumber = 972;
      }
      else
      {
        for ( i = 0; i < *((_DWORD *)v5 + 852); ++i )
        {
          if ( !*(_DWORD *)(520LL * i + *((_QWORD *)v5 + 408) + 208) )
            DXGADAPTER::SetPowerComponentIdleCBInternal((DXGADAPTER *)v5, i, 0);
        }
        _InterlockedDecrement(v5 + 986);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v10);
}
