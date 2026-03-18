/*
 * XREFs of ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x14020A188
 * Callers:
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x140209E70 (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x14003B088 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z @ 0x14020AC18 (-ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::DestroyTrackedWorkload(DXGTRACKEDWORKLOAD *this)
{
  DXGTRACKEDWORKLOAD *v2; // rcx
  DXGTRACKEDWORKLOAD **v3; // rax
  __int64 v4; // rax
  void *v5; // rcx
  char *v6; // rcx
  char *v7; // rbx
  void *v8; // rcx
  _BYTE v9[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 116) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v9,
      (struct _KTHREAD **)(*((_QWORD *)this + 2) + 576LL));
    DXGTRACKEDWORKLOAD::ReportState(this, 0x1E2u);
    v2 = *(DXGTRACKEDWORKLOAD **)this;
    if ( *(DXGTRACKEDWORKLOAD **)(*(_QWORD *)this + 8LL) != this
      || (v3 = (DXGTRACKEDWORKLOAD **)*((_QWORD *)this + 1), *v3 != this) )
    {
      __fastfail(3u);
    }
    *v3 = v2;
    *((_QWORD *)v2 + 1) = v3;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
    v4 = *((_QWORD *)this + 9);
    *((_BYTE *)this + 116) = 0;
    if ( v4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1347;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_cReference", 1347LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_QWORD *)this + 142) )
    {
      KeSetEvent((PRKEVENT)((char *)this + 1112), 0, 0);
      KeWaitForSingleObject(*((PVOID *)this + 142), Executive, 0, 0, 0LL);
      ObfDereferenceObject(*((PVOID *)this + 142));
      *((_QWORD *)this + 142) = 0LL;
    }
    v5 = (void *)*((_QWORD *)this + 11);
    if ( v5 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
      *((_QWORD *)this + 11) = 0LL;
    }
    v6 = (char *)*((_QWORD *)this + 4);
    if ( v6 )
    {
      v7 = v6 - 8;
      `vector destructor iterator'(
        v6,
        136LL,
        *((_QWORD *)v6 - 1),
        (void (__fastcall *)(char *))DXGTRACKEDWORKLOAD::WorkloadInstancePair::~WorkloadInstancePair);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
      *((_QWORD *)this + 4) = 0LL;
    }
    v8 = (void *)*((_QWORD *)this + 3);
    if ( v8 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
