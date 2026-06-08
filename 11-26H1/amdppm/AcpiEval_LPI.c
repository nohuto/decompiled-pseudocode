/*
 * XREFs of AcpiEval_LPI @ 0x140028A1C
 * Callers:
 *     InitAcpiLpiStates @ 0x14003E698 (InitAcpiLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     AcpiParseLpiObject @ 0x14002AA00 (AcpiParseLpiObject.c)
 *     AcpiEvaluateMethod @ 0x140040898 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_LPI(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // edi
  int v7; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x80000u);
  v5 = AcpiEvaluateMethod(a1, 1229999199, 0, (unsigned int)&P, (__int64)&v7);
  if ( v5 >= 0 )
  {
    *(_QWORD *)(a1 + 272) |= *(_QWORD *)(a1 + 280) & 0x20E0000000000LL;
    if ( v7 )
    {
      v5 = AcpiParseLpiObject(P, *(_QWORD *)(a1 + 64), 0LL, a2);
    }
    else
    {
      v5 = -1072431089;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          3,
          51,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, (ULONG)0);
  if ( v5 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
  return (unsigned int)v5;
}
