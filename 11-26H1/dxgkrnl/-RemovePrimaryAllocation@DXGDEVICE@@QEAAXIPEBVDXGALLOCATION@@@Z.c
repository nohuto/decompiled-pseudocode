/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x140054744
 * Callers:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1403EE524 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rsi
  _QWORD *v9; // rax
  bool v10; // zf
  _BYTE v11[32]; // [rsp+50h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, this + 42);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 246); i = (unsigned int)(i + 1) )
  {
    if ( a3 == *((const struct DXGALLOCATION **)this[v3 + 107] + i) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v9[3] = a3;
      v9[4] = (unsigned int)i;
      v9[5] = v3;
      v10 = *((_BYTE *)this + 4 * v3 + 1240) == 0;
      WdLogGlobalForLineNumber = 871;
      if ( v10 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 873;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_PrimaryDescription[VidPnSourceId].PrimaryCount",
          873LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_QWORD *)this[v3 + 107] + i) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1240);
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
}
