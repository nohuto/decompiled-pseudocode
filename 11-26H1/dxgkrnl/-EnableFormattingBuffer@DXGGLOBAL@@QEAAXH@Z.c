/*
 * XREFs of ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1401DCF48
 * Callers:
 *     ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1401DCE18 (-DxgkEnableFormattingBuffer@@YAXH@Z.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1401A729C (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall DXGGLOBAL::EnableFormattingBuffer(DXGGLOBAL *this, int a2)
{
  _QWORD **v3; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  bool v6; // zf
  _QWORD *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  DXGADAPTERLISTLOCK *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = (_QWORD **)((char *)this + 808);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v10, (DXGGLOBAL *)((char *)this + 680));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v10);
  v4 = *v3;
  while ( 1 )
  {
LABEL_2:
    v5 = 0LL;
    if ( v4 != v3 )
      v5 = v4;
    if ( !v5 )
      break;
    v6 = v4 == v3;
    v7 = v4;
    v4 = (_QWORD *)*v4;
    if ( v6 )
      v7 = 0LL;
    if ( v7[396] )
    {
      _m_prefetchw(v7 + 3);
      v8 = v7[3];
      while ( v8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64(v7 + 3, v8 + 1, v8);
        if ( v9 == v8 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v11,
            (struct DXGADAPTER *)v7,
            1);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
          if ( *((_DWORD *)v7 + 50) == 1 )
            ADAPTER_RENDER::EnableFormattingBuffer((ADAPTER_RENDER *)v7[396], a2);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
          goto LABEL_2;
        }
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v10);
}
