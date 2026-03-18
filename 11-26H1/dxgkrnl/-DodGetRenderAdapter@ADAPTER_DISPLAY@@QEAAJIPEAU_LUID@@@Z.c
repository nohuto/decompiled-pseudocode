/*
 * XREFs of ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1401A30D8
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodGetRenderAdapter(ADAPTER_DISPLAY *this, __int64 a2, struct _LUID *a3)
{
  int v3; // eax
  __int64 v4; // rdi

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _LUID *))(*((_QWORD *)this + 2) + 2416LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 2336LL),
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8869;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Dod driver failed DxgiIddDdiGetIdRenderAdapter call with 0x%I64x",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v4;
}
