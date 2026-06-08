/*
 * XREFs of AcpiEval_PCCP @ 0x140028CB0
 * Callers:
 *     InitAcpiLegacyPcc @ 0x14003E42C (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     AcpiParseCore @ 0x14002A3D0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140040898 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PCCP(__int64 a1, _QWORD *a2)
{
  void *Pool2; // rdi
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // r14
  int v8; // ebx
  int v10; // edx
  char v11; // [rsp+40h] [rbp-30h] BYREF
  int v12; // [rsp+42h] [rbp-2Eh]
  const char *v13; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v14)(); // [rsp+50h] [rbp-20h]
  char v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+5Ah] [rbp-16h]
  const char *v17; // [rsp+60h] [rbp-10h]
  __int64 (__fastcall *v18)(); // [rsp+68h] [rbp-8h]
  int v19; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B0h] [rbp+40h] BYREF

  v15 = 1;
  v19 = 0;
  v13 = "InputBufferOffset";
  v11 = 0;
  v12 = 0;
  v17 = "OutputBufferOffset";
  v14 = AcpiParseULong;
  Pool2 = 0LL;
  v16 = 0x40000;
  v18 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x8000u);
  v5 = AcpiEvaluateMethod(a1, 1346585424, 0, (unsigned int)&P, (__int64)&v19);
  v7 = P;
  v8 = v5;
  if ( v5 >= 0 )
  {
    *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x80000000;
    if ( v19 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, 8LL, 1919119952LL);
      if ( Pool2 )
      {
        v8 = AcpiParseCore((unsigned int)&v11, 2, (int)v7 + 12, v7[1] - 12, (__int64)Pool2, 8, (__int64)"PCCP", 0);
        if ( v8 >= 0 )
        {
          *a2 = Pool2;
          goto LABEL_8;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            1,
            46,
            (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
        }
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          1,
          45,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      }
      v8 = -1073741275;
    }
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x8000u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
LABEL_8:
  if ( v7 )
    ExFreePoolWithTag(v7, (ULONG)0);
  return (unsigned int)v8;
}
