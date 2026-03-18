/*
 * XREFs of ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1402AFAB8
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402AE590 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1402AFBA8 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall ADAPTER_RENDER::IsProcessGpuAccessBlocked(ADAPTER_RENDER *this, struct DXGPROCESS *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
    return 0;
  v2 = *((_QWORD *)a2 + 8);
  v3 = *((_QWORD *)this + 92);
  v4 = *((_QWORD *)this + 93);
  if ( !v2 || (v2 = *(_QWORD *)(v2 + 8LL * (unsigned int)(*(_DWORD *)v3 - 1) + 16)) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1039;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidSchProcess", 1039LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 8) + 864LL))(v4, v2);
}
