/*
 * XREFs of ?Initialize@VIDMM_PHYSICAL_DEVICE@@QEAAJXZ @ 0x1400CB154
 * Callers:
 *     ?InitForPagingProcess@VIDMM_DEVICE@@QEAAJXZ @ 0x1400A7330 (-InitForPagingProcess@VIDMM_DEVICE@@QEAAJXZ.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400C9AE0 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003F480 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_DEVICE::Initialize(VIDMM_PHYSICAL_DEVICE *this)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  bool v4; // cf
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rcx

  v2 = *(unsigned int *)(*(_QWORD *)this + 136LL);
  v3 = 56 * v2;
  if ( !is_mul_ok(v2, 0x38uLL) )
    v3 = -1LL;
  v4 = __CFADD__(v3, 8LL);
  v5 = v3 + 8;
  if ( v4 )
    v5 = -1LL;
  v6 = operator new[](v5, 0x30326956u, 256LL);
  if ( v6 )
  {
    v7 = v6 + 8;
    *(_QWORD *)v6 = v2;
    `vector constructor iterator'(
      (char *)(v6 + 8),
      56LL,
      (unsigned int)v2,
      (void (__fastcall *)(char *))VIDMM_DEVICE_COMMITMENT_INFO::VIDMM_DEVICE_COMMITMENT_INFO);
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 2) = v7;
  if ( v7 )
    return 0LL;
  _InterlockedIncrement(&dword_14008A70C);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 3154;
  DxgkLogInternalTriageEvent(v9, 262145LL);
  return 3221225495LL;
}
