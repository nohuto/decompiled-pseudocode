/*
 * XREFs of InitAcpi2CStates @ 0x140026670
 * Callers:
 *     InitAcpiCStates @ 0x1400267CC (InitAcpiCStates.c)
 *     AcpiCStateNotifyWorker @ 0x1400278C0 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     AcpiEval_CST @ 0x1400285D8 (AcpiEval_CST.c)
 *     ValidateAcpiCStates @ 0x14002FE30 (ValidateAcpiCStates.c)
 */

__int64 __fastcall InitAcpi2CStates(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  PVOID v7; // rdi
  int v8; // edx
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  v4 = AcpiEval_CST(a1, &P);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = P;
    v6 = ValidateAcpiCStates(P, *(_QWORD *)(a1 + 64));
    if ( v6 >= 0 )
    {
      *a2 = v7;
      v7 = 0LL;
      v6 = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          3,
          12,
          (__int64)&WPP_e5b2ff9ee5c1391ad3ffc5ec6d33a050_Traceguids,
          v6);
      }
    }
    if ( v7 )
      ExFreePoolWithTag(v7, (ULONG)0);
  }
  else if ( v4 == -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        2,
        10,
        (__int64)&WPP_e5b2ff9ee5c1391ad3ffc5ec6d33a050_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      3,
      11,
      (__int64)&WPP_e5b2ff9ee5c1391ad3ffc5ec6d33a050_Traceguids,
      v4);
  }
  return (unsigned int)v6;
}
