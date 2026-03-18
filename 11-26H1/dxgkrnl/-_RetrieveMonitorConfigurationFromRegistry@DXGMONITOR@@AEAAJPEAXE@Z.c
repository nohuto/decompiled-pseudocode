/*
 * XREFs of ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x140404710
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1403C3988 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1403E2954 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x14027FA6C (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(DXGMONITOR *this, void *a2, char a3)
{
  unsigned int v3; // r14d
  char *v4; // rdi
  __int64 v5; // rsi
  unsigned int v9; // ecx
  int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-39h] BYREF
  int v14; // [rsp+38h] [rbp-31h]
  __int64 v15; // [rsp+40h] [rbp-29h]
  unsigned int *v16; // [rsp+48h] [rbp-21h]
  int v17; // [rsp+50h] [rbp-19h]
  unsigned int *v18; // [rsp+58h] [rbp-11h]
  int v19; // [rsp+60h] [rbp-9h]
  __int64 v20; // [rsp+68h] [rbp-1h]
  int v21; // [rsp+70h] [rbp+7h]
  __int64 v22; // [rsp+78h] [rbp+Fh]
  __int128 v23; // [rsp+80h] [rbp+17h]
  __int128 v24; // [rsp+90h] [rbp+27h]
  unsigned int v25; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = (char *)this + 800;
  v5 = 0LL;
  do
  {
    v9 = *(_DWORD *)((char *)this + *((int *)v4 + 2));
    v15 = *(_QWORD *)v4;
    v16 = &v25;
    v25 = v9;
    v18 = &v25;
    v13 = 0LL;
    v14 = 288;
    v17 = 67108868;
    v19 = 4;
    v20 = 0LL;
    v21 = 0;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v10 = RtlQueryRegistryValuesEx(0x40000000LL, a2, &v13, 0LL, 0LL);
    if ( v10 < 0 )
    {
      WdLogSingleEntry3(2LL, v5, *((unsigned int *)this + 45), v10);
      WdLogGlobalForLineNumber = 1536;
    }
    else if ( (*((unsigned __int8 (__fastcall **)(char *, _QWORD))v4 + 2))((char *)this + *((int *)v4 + 6), v25) )
    {
      if ( *(_DWORD *)((char *)this + *((int *)v4 + 3)) != v25 )
      {
        WdLogSingleEntry3(7LL, v25, v5, *((unsigned int *)this + 45));
        v12 = *((int *)v4 + 3);
        WdLogGlobalForLineNumber = 1515;
        *(_DWORD *)((char *)this + v12) = v25;
        if ( a3 )
          DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(this, v3);
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, v25, v5, *((unsigned int *)this + 45));
      WdLogGlobalForLineNumber = 1531;
    }
    ++v3;
    ++v5;
    v4 += 32;
  }
  while ( v3 < 3 );
  return 0LL;
}
