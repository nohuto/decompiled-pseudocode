/*
 * XREFs of ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x1400621C8
 * Callers:
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402CF610 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::GetVSyncTimeCounters(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // xmm1_8
  __int64 v10; // [rsp+28h] [rbp-30h]

  result = *(unsigned int *)(a1 + 1896);
  if ( a2 < (unsigned int)result )
  {
    if ( a4 )
    {
      v7 = *(_QWORD *)(a1 + 4456);
      if ( v7 )
      {
        if ( (*(_DWORD *)(a1 + 3016) & 0x10) != 0 )
          v8 = v7 + 112LL * a2;
        else
          v8 = v7;
        result = a3;
        v9 = *(_QWORD *)(v8 + 24LL * a3 + 32);
        *(_OWORD *)a4 = *(_OWORD *)(v8 + 24LL * a3 + 16);
        *(_QWORD *)(a4 + 16) = v9;
      }
    }
  }
  else
  {
    v6 = a2;
    WdLogSingleEntry2(2LL, a2, (unsigned int)result);
    v10 = *(unsigned int *)(a1 + 1896);
    WdLogGlobalForLineNumber = 2459;
    return DxgkLogInternalTriageEvent(
             0LL,
             0x40000,
             -1,
             (__int64)L"Invalid VidPnSourceId:%u. Should be less than :%u",
             v6,
             v10,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
