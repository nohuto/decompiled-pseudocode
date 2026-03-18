/*
 * XREFs of _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray @ 0x1401B3C7C
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401B4454 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx

  v2 = a2;
  *(_QWORD *)a1 = 0LL;
  v4 = 16LL * a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !is_mul_ok(a2, 0x10uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = operator new[](v6, 0x4B677844u, 256LL);
  if ( v7 )
  {
    v8 = v7 + 8;
    *(_QWORD *)v7 = v2;
    `vector constructor iterator'(
      (char *)(v7 + 8),
      16LL,
      (unsigned int)v2,
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    *(_QWORD *)(a1 + 8) = v8;
    if ( v8 )
      *(_DWORD *)(a1 + 4) = v2;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return a1;
}
