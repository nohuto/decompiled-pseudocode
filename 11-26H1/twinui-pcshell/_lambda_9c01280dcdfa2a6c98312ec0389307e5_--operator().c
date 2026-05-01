/*
 * XREFs of _lambda_9c01280dcdfa2a6c98312ec0389307e5_::operator() @ 0x18060A0A4
 * Callers:
 *     _lambda_9c01280dcdfa2a6c98312ec0389307e5_::_lambda_invoker_cdecl_ @ 0x1806083C0 (_lambda_9c01280dcdfa2a6c98312ec0389307e5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1802199B4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall lambda_9c01280dcdfa2a6c98312ec0389307e5_::operator()(
        __int64 a1,
        HMONITOR a2,
        __int64 a3,
        __int128 *a4,
        _QWORD *a5)
{
  __int128 *v7; // rdx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-88h] BYREF

  memset_0(&mi.rcMonitor, 0, 0x64uLL);
  mi.cbSize = 104;
  if ( GetMonitorInfoW(a2, &mi) )
  {
    v7 = (__int128 *)a5[1];
    if ( v7 == (__int128 *)a5[2] )
    {
      std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(a5, (__int64)v7, a4);
    }
    else
    {
      *v7 = *a4;
      a5[1] += 16LL;
    }
  }
  return 1LL;
}
