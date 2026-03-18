/*
 * XREFs of ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1400102EC
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1401A1A20 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 */

void __fastcall TraceLoggingProcessMonitorInfoUpdateHelper(struct tagWND *const a1, int a2)
{
  __int64 v3; // rbx
  struct tagMONITOR *v4; // rax
  int *v5; // rdx
  int v6; // r10d
  int v7; // r8d
  int v8; // ecx
  int v9; // r8d

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
  if ( v3 )
  {
    v4 = _MonitorFromWindowInternal(a1, 1u, 0);
    if ( v4 )
    {
      v5 = (int *)(v3 + 960);
      *(_OWORD *)(v3 + 944) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 28LL);
      if ( a2 )
      {
        v6 = *v5;
        v7 = *(_DWORD *)(v3 + 972) | 1;
        *(_DWORD *)(v3 + 972) = v7;
        if ( v6 != *(unsigned __int16 *)(*((_QWORD *)v4 + 5) + 60LL) )
        {
          *(_DWORD *)(v3 + 968) = v6;
          *(_DWORD *)(v3 + 972) = v7 | 2;
        }
      }
      else
      {
        v8 = *(unsigned __int16 *)(*((_QWORD *)v4 + 5) + 60LL);
        if ( *(_DWORD *)(v3 + 920) )
        {
          v9 = *v5;
          if ( *v5 != v8 )
          {
            *(_DWORD *)(v3 + 972) |= 4u;
            *(_DWORD *)(v3 + 968) = v9;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 964) = v8;
        }
      }
      *v5 = *(unsigned __int16 *)(*((_QWORD *)v4 + 5) + 60LL);
    }
    else
    {
      *(_QWORD *)(v3 + 956) = 0LL;
      *(_QWORD *)(v3 + 944) = 0LL;
      *(_DWORD *)(v3 + 952) = 0;
    }
  }
}
