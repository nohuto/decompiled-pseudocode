/*
 * XREFs of AcpiEval_PPC @ 0x14004071C
 * Callers:
 *     ProcLibOnD0StateChangeWorker @ 0x1400032A0 (ProcLibOnD0StateChangeWorker.c)
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 *     AcpiPStateNotifyWorker @ 0x1400404C0 (AcpiPStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     AcpiEvaluateMethod @ 0x140040898 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PPC(__int64 a1, unsigned int *a2)
{
  int v4; // eax
  int v5; // edx
  PVOID v6; // rdi
  int v7; // ebx
  int v8; // r9d
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x100u);
  v4 = AcpiEvaluateMethod(a1, 1129336927, 0, (unsigned int)&P, (__int64)&v12);
  v6 = P;
  v7 = v4;
  if ( v4 >= 0 )
  {
    if ( !v12 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v7 = -1073741275;
        goto LABEL_16;
      }
      v8 = 33;
LABEL_5:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        1,
        v8,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      goto LABEL_6;
    }
    if ( *((_DWORD *)P + 2) != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          1,
          34,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
          *((_DWORD *)P + 2));
      }
      goto LABEL_6;
    }
    if ( *((_WORD *)P + 6) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v8 = 35;
      goto LABEL_5;
    }
    v7 = 0;
    v9 = **(_DWORD **)(((*(_DWORD *)(a1 + 280) & 0x40000000 | 0xE00000000uLL) >> 27) + a1);
    v10 = v9 - 1;
    if ( *((_DWORD *)P + 4) < v9 )
      v10 = *((_DWORD *)P + 4);
    *a2 = v10;
  }
LABEL_16:
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)0);
  if ( v7 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x100u);
  return (unsigned int)v7;
}
