/*
 * XREFs of ?_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x14038CFB8
 * Callers:
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x14038CC00 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     _pGetAdditionalTiming @ 0x14038D1C0 (_pGetAdditionalTiming.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetAdditionalTiming(
        DxgMonitor::MonitorModes *this,
        unsigned int *a2,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a3)
{
  bool v6; // r15
  __int64 v7; // rax
  struct _DXGK_TARGETMODE_DETAIL_TIMING **v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 result; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1031;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1032;
  }
  *a2 = 0;
  *a3 = 0LL;
  if ( *((_DWORD *)this + 52) != -1 )
  {
    v8 = (struct _DXGK_TARGETMODE_DETAIL_TIMING **)((char *)this + 216);
LABEL_17:
    if ( *((_DWORD *)this + 52) == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1066;
    }
    if ( !*v8 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1067;
    }
    ++*((_DWORD *)this + 56);
    *a2 = *((_DWORD *)this + 52);
    *a3 = *v8;
    return 0LL;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 40LL))(*((_QWORD *)this + 29)) == -2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1044;
  }
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 32LL))(*((_QWORD *)this + 29));
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) >= 9216 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 40LL))(*((_QWORD *)this + 29));
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
            v6 = v15 != 11;
        }
      }
    }
  }
  v8 = (struct _DXGK_TARGETMODE_DETAIL_TIMING **)((char *)this + 216);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 40LL))(*((_QWORD *)this + 29));
  LOBYTE(v10) = v6;
  result = pGetAdditionalTiming(v9, v10, (char *)this + 208, (char *)this + 216);
  if ( (int)result >= 0 )
    goto LABEL_17;
  return result;
}
