/*
 * XREFs of ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1403B2BB0
 * Callers:
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403BBFC8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x140215AF0 (-ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403B2D1C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 *     ?ClearStateReportingFlags@DXGDEVICE@@QEAAXXZ @ 0x1403B354C (-ClearStateReportingFlags@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::ReportState(ADAPTER_RENDER *this)
{
  struct _KTHREAD **v2; // rcx
  struct _KTHREAD **v3; // rcx
  DXGDEVICE **v4; // rdi
  DXGDEVICE **i; // r8
  DXGDEVICE **v6; // rax
  DXGDEVICE *v7; // rcx
  DXGDEVICE ***v8; // r8
  DXGDEVICE **v9; // rsi
  DXGDEVICE **j; // r8
  DXGDEVICE **v11; // rax
  DXGDEVICE *k; // r14
  DXGDEVICE *v13; // rax
  DXGDEVICE *v14; // rcx
  DXGDEVICE *m; // rdi
  DXGDEVICE *v16; // rax
  DXGDEVICE *v17; // rcx
  DXGDEVICE ***v18; // r8
  DXGDEVICE *v19; // rcx

  v2 = (struct _KTHREAD **)*((_QWORD *)this + 234);
  if ( v2 )
    DXGVIRTUALGPUMANAGER::ReportState(v2);
  v3 = (struct _KTHREAD **)*((_QWORD *)this + 233);
  if ( v3 )
    DXGVIRTUALGPUMANAGER::ReportState(v3);
  v4 = (DXGDEVICE **)((char *)this + 144);
  for ( i = (DXGDEVICE **)*((_QWORD *)this + 18); ; i = *v8 )
  {
    v6 = 0LL;
    if ( i != v4 )
      v6 = i;
    if ( !v6 )
      break;
    v7 = (DXGDEVICE *)i;
    if ( i == v4 )
      v7 = 0LL;
    DXGDEVICE::ClearStateReportingFlags(v7);
  }
  v9 = (DXGDEVICE **)((char *)this + 160);
  for ( j = (DXGDEVICE **)*((_QWORD *)this + 20); ; j = *v18 )
  {
    v11 = 0LL;
    if ( j != v9 )
      v11 = j;
    if ( !v11 )
      break;
    v17 = (DXGDEVICE *)j;
    if ( j == v9 )
      v17 = 0LL;
    DXGDEVICE::ClearStateReportingFlags(v17);
  }
  for ( k = *v4; ; k = *(DXGDEVICE **)k )
  {
    v13 = 0LL;
    if ( k != (DXGDEVICE *)v4 )
      v13 = k;
    if ( !v13 )
      break;
    v14 = k;
    if ( k == (DXGDEVICE *)v4 )
      v14 = 0LL;
    DXGDEVICE::ReportState(v14);
  }
  for ( m = *v9; ; m = *(DXGDEVICE **)m )
  {
    v16 = 0LL;
    if ( m != (DXGDEVICE *)v9 )
      v16 = m;
    if ( !v16 )
      break;
    v19 = m;
    if ( m == (DXGDEVICE *)v9 )
      v19 = 0LL;
    DXGDEVICE::ReportState(v19);
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 40LL))(*((_QWORD *)this + 96));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 56LL))(*((_QWORD *)this + 93));
  }
}
