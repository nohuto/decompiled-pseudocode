/*
 * XREFs of InitAcpiIdleDomain @ 0x140040448
 * Callers:
 *     InitAcpiProcessorDomains @ 0x140029B60 (InitAcpiProcessorDomains.c)
 *     AcpiCStateNotifyWorker @ 0x14003F9F0 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     ValidateAcpiIdleDomain @ 0x140027F1C (ValidateAcpiIdleDomain.c)
 *     Display_CSD @ 0x140028CB4 (Display_CSD.c)
 *     AcpiEval_CSD @ 0x1400405BC (AcpiEval_CSD.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, unsigned int **a2, __int64 a3)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v10; // rdx
  unsigned int *v11; // rdi
  int v12; // eax
  unsigned int *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v6 = AcpiEval_CSD(a1, &v13);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v10 = a3;
    v11 = v13;
    v12 = ValidateAcpiIdleDomain(v13, v10, *(const wchar_t **)(a1 + 64));
    v8 = v12;
    if ( v12 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xCu,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
          v12);
    }
    else
    {
      v8 = 0;
      Display_CSD(v11);
      *a2 = v11;
      v11 = 0LL;
    }
    if ( v11 )
      ExFreePoolWithTag(v11, (ULONG)0);
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
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
      v6);
  }
  return v8;
}
