/*
 * XREFs of ?CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ @ 0x1401900DC
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x14005ABCC (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGGLOBAL::CaptureSchedulerLogs(DXGGLOBAL *this)
{
  _QWORD **v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  bool v4; // zf
  _QWORD *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  _QWORD *v8; // rcx
  DXGADAPTERLISTLOCK *v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = (_QWORD **)((char *)this + 808);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v9, (DXGGLOBAL *)((char *)this + 680));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v9);
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
    if ( v5[396] )
    {
      _m_prefetchw(v5 + 3);
      v6 = v5[3];
      while ( v6 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v5 + 3, v6 + 1, v6);
        if ( v7 == v6 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v10,
            (struct DXGADAPTER *)v5,
            1);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v5);
          if ( *((_DWORD *)v5 + 50) == 1 )
          {
            v8 = (_QWORD *)v5[396];
            if ( !*(_BYTE *)(v8[2] + 209LL) )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v8[92] + 8LL) + 64LL))(v8[93]);
          }
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
          goto LABEL_2;
        }
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v9);
}
