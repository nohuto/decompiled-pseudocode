/*
 * XREFs of ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x14042FF34
 * Callers:
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x140198854 (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x140057920 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceBddFallbackAdapter(DXGGLOBAL *this, unsigned __int64 *a2)
{
  char *v4; // r9
  char *v5; // r8
  char *v6; // rax
  char *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  DXGADAPTERLISTLOCK *v11[3]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v11, (DXGGLOBAL *)((char *)this + 680));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v11);
  v4 = (char *)this + 808;
  v5 = (char *)*((_QWORD *)this + 101);
  while ( 1 )
  {
    v6 = 0LL;
    if ( v5 != v4 )
      v6 = v5;
    if ( !v6 )
      break;
    v7 = v5;
    if ( v5 == v4 )
      v7 = 0LL;
    if ( DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v7) )
    {
      _m_prefetchw(v7 + 24);
      v8 = *((_QWORD *)v7 + 3);
      while ( v8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 3, v8 + 1, v8);
        if ( v9 == v8 )
        {
          *a2 = -1LL;
          goto LABEL_13;
        }
      }
    }
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 3395;
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"BDD Fallback not found!", 3395LL, 0LL, 0LL, 0LL, 0LL);
  v7 = 0LL;
LABEL_13:
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v11);
  return (struct DXGADAPTER *)v7;
}
