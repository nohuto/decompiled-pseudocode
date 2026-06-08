/*
 * XREFs of PepNotifyQueryFeedbackCounters @ 0x14003C338
 * Callers:
 *     InitPepPerfStates @ 0x14003BB34 (InitPepPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x14000E740 (memmove.c)
 */

__int64 __fastcall PepNotifyQueryFeedbackCounters(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v3; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v7; // rdi
  int v8; // ebx
  int v9; // edx

  v3 = a2;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 8 * a2 + 4, 1919119952LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v3;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 9LL, Pool2);
    if ( v8 >= 0 )
    {
      memmove(a3, v7 + 1, 8 * v3);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        2,
        31,
        (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
        v8);
    }
  }
  else
  {
    v8 = -1073741670;
  }
  ExFreePoolWithTag(v7, (ULONG)1919119952);
  return (unsigned int)v8;
}
