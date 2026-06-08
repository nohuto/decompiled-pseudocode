/*
 * XREFs of InitAcpiIdleDomain @ 0x1400375B8
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1400278C0 (AcpiCStateNotifyWorker.c)
 *     InitAcpiProcessorDomains @ 0x140037850 (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     AcpiEval_CSD @ 0x1400282D4 (AcpiEval_CSD.c)
 *     Display_CSD @ 0x14002C268 (Display_CSD.c)
 *     ValidateAcpiIdleDomain @ 0x140030018 (ValidateAcpiIdleDomain.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, unsigned int **a2, __int64 a3)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int *v10; // rdi
  int v11; // eax
  int v12; // edx
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  v6 = AcpiEval_CSD(a1, &P);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = a3;
    v10 = (unsigned int *)P;
    v11 = ValidateAcpiIdleDomain((unsigned int *)P, v9, *(const wchar_t **)(a1 + 64));
    v8 = v11;
    if ( v11 >= 0 )
    {
      v8 = 0;
      Display_CSD(v10);
      *a2 = v10;
      v10 = 0LL;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          3,
          12,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
          v11);
      }
    }
    if ( v10 )
      ExFreePoolWithTag(v10, (ULONG)0);
  }
  else if ( v6 == -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        2,
        10,
        (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      3,
      11,
      (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
      v6);
  }
  return v8;
}
