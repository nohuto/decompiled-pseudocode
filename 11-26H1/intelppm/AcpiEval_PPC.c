/*
 * XREFs of AcpiEval_PPC @ 0x14004336C
 * Callers:
 *     ProcLibOnD0StateChangeWorker @ 0x1400043F0 (ProcLibOnD0StateChangeWorker.c)
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 *     AcpiPStateNotifyWorker @ 0x140043200 (AcpiPStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     AcpiEvaluateMethod @ 0x1400434F4 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PPC(__int64 a1, unsigned int *a2)
{
  int v4; // eax
  int v5; // edx
  PVOID v6; // rdi
  int v7; // ebx
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v11; // r9d
  int v12; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x100u);
  v4 = AcpiEvaluateMethod(a1, 1129336927, 0, (unsigned int)&P, (__int64)&v12);
  v6 = P;
  v7 = v4;
  if ( v4 < 0 )
    goto LABEL_8;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v11 = 33;
    goto LABEL_18;
  }
  if ( *((_DWORD *)P + 2) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x22u,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
        *((_DWORD *)P + 2));
    goto LABEL_15;
  }
  if ( *((_WORD *)P + 6) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_15:
      v7 = -1073741275;
      goto LABEL_8;
    }
    v11 = 35;
LABEL_18:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1,
      v11,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    goto LABEL_15;
  }
  v7 = 0;
  v8 = **(_DWORD **)(((*(_DWORD *)(a1 + 280) & 0x40000000 | 0xE00000000uLL) >> 27) + a1);
  v9 = v8 - 1;
  if ( *((_DWORD *)P + 4) < v8 )
    v9 = *((_DWORD *)P + 4);
  *a2 = v9;
LABEL_8:
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)0);
  if ( v7 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x100u);
  return (unsigned int)v7;
}
