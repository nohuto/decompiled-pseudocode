/*
 * XREFs of InitAcpi2CStates @ 0x14003FC68
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x14003F9F0 (AcpiCStateNotifyWorker.c)
 *     InitAcpiCStates @ 0x140047B54 (InitAcpiCStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     AcpiEval_CST @ 0x1400409C0 (AcpiEval_CST.c)
 *     ValidateAcpiCStates @ 0x140041234 (ValidateAcpiCStates.c)
 */

__int64 __fastcall InitAcpi2CStates(__int64 a1, _QWORD *a2)
{
  int v4; // edx
  int v5; // ebx
  void *v6; // rdi
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v5 = AcpiEval_CST(a1, &v8);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          2,
          10,
          (__int64)&WPP_e5b2ff9ee5c1391ad3ffc5ec6d33a050_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_e5b2ff9ee5c1391ad3ffc5ec6d33a050_Traceguids,
        v5);
    }
  }
  else
  {
    v6 = v8;
    v5 = ValidateAcpiCStates(v8, *(_QWORD *)(a1 + 64));
    if ( v5 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xCu,
          (__int64)&WPP_e5b2ff9ee5c1391ad3ffc5ec6d33a050_Traceguids,
          v5);
    }
    else
    {
      *a2 = v6;
      v6 = 0LL;
      v5 = 0;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, (ULONG)0);
  }
  return (unsigned int)v5;
}
