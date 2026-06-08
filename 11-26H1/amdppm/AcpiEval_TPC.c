/*
 * XREFs of AcpiEval_TPC @ 0x140029878
 * Callers:
 *     ProcLibOnD0StateChangeWorker @ 0x1400032A0 (ProcLibOnD0StateChangeWorker.c)
 *     AcpiTStateNotifyWorker @ 0x14002B960 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     AcpiEvaluateMethod @ 0x140040898 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_TPC(__int64 a1, unsigned int *a2)
{
  int v4; // edx
  int v5; // ebx
  PVOID v6; // rdi
  int v7; // r9d
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x1000u);
  v5 = AcpiEvaluateMethod(a1, 1129337951, 0, (unsigned int)&P, (__int64)&v12);
  if ( v5 < 0 )
  {
LABEL_19:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x1000u);
    return (unsigned int)v5;
  }
  v6 = P;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_6:
      v5 = -1073741275;
      goto LABEL_16;
    }
    v7 = 39;
LABEL_5:
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      1,
      v7,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    goto LABEL_6;
  }
  v8 = *((_DWORD *)P + 2);
  if ( v8 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        1,
        40,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
        v8);
    }
    goto LABEL_6;
  }
  if ( *((_WORD *)P + 6) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v7 = 41;
    goto LABEL_5;
  }
  v5 = 0;
  v9 = **(_DWORD **)(a1 + 504);
  v10 = v9 - 1;
  if ( *((_DWORD *)P + 4) < v9 )
    v10 = *((_DWORD *)P + 4);
  *a2 = v10;
LABEL_16:
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)0);
  if ( v5 < 0 )
    goto LABEL_19;
  return (unsigned int)v5;
}
