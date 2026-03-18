/*
 * XREFs of ?ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1401DF920
 * Callers:
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x140198854 (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceWarpAdapter(DXGGLOBAL *this, unsigned __int64 *a2)
{
  char *v4; // r9
  char *v5; // r8
  char *v6; // rax
  bool v7; // zf
  char *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  DXGADAPTERLISTLOCK *v12[3]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v12, (DXGGLOBAL *)((char *)this + 680));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v12);
  v4 = (char *)this + 808;
  v5 = (char *)*((_QWORD *)this + 101);
  while ( 1 )
  {
    v6 = 0LL;
    if ( v5 != v4 )
      v6 = v5;
    if ( !v6 )
      break;
    v7 = v5 == v4;
    v8 = v5;
    v5 = *(char **)v5;
    if ( v7 )
      v8 = 0LL;
    if ( (*((_DWORD *)v8 + 111) & 0x10) != 0 )
    {
      _m_prefetchw(v8 + 24);
      v9 = *((_QWORD *)v8 + 3);
      while ( v9 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v9 + 1, v9);
        if ( v10 == v9 )
        {
          *a2 = -1LL;
          goto LABEL_13;
        }
      }
    }
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 3429;
  v8 = 0LL;
LABEL_13:
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v12);
  return (struct DXGADAPTER *)v8;
}
