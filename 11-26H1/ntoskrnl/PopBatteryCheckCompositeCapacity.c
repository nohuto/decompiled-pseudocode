/*
 * XREFs of PopBatteryCheckCompositeCapacity @ 0x140946C64
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopSetBatteryDischargingState @ 0x140946E00 (PopSetBatteryDischargingState.c)
 */

__int64 __fastcall PopBatteryCheckCompositeCapacity(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v4; // zf
  int v5; // edi
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  int v11; // eax

  v4 = dword_140F0FE74 == 0;
  v5 = a2;
  *a3 = 0;
  if ( v4 )
  {
    LOBYTE(a2) = 0;
    goto LABEL_21;
  }
  v6 = *(unsigned int *)(a1 + 4);
  LODWORD(v7) = 100000;
  if ( (unsigned int)xmmword_140F0FED8 > (unsigned int)v6 )
  {
    if ( (_DWORD)xmmword_140F0FED8 )
      v7 = 100000 * v6 / (unsigned __int64)(unsigned int)xmmword_140F0FED8;
    else
      LODWORD(v7) = 0;
  }
  v8 = 0;
  if ( dword_140F10044 != -1 )
    v8 = v7 - dword_140F10044;
  v9 = ((int)v7 + 500) / 0x3E8u;
  a2 = (dword_140F10044 + 500) / 0x3E8u;
  if ( v9 != (_DWORD)a2 )
    *a3 = v9 - a2;
  LOBYTE(a2) = byte_140F10040;
  dword_140F10044 = v7;
  if ( v5 == 1 )
  {
    LOBYTE(a2) = 1;
LABEL_21:
    dword_140F10050 = 0;
LABEL_22:
    PopWeakChargerMeasured = 0;
    goto LABEL_23;
  }
  if ( v5 != ((xmmword_140F0FEA0 & 1) == 0) )
  {
    LOBYTE(a2) = 0;
    dword_140F10050 = v7;
    goto LABEL_22;
  }
  if ( byte_140F0FE78 )
  {
    if ( !PopWeakChargerMeasured )
      dword_140F10050 = v7;
    LOBYTE(a2) = 0;
    goto LABEL_23;
  }
  v10 = dword_140F10050;
  if ( dword_140F10050 < (unsigned int)v7 )
  {
    v10 = v7;
    dword_140F10050 = v7;
  }
  if ( v10 > (int)v7 + WeakChargerChargeDropMilliPercent )
    PopWeakChargerMeasured = 1;
  HIDWORD(qword_140F10054) += v8;
  v11 = -HIDWORD(qword_140F10054);
  if ( SHIDWORD(qword_140F10054) > 0 )
    v11 = HIDWORD(qword_140F10054);
  if ( v11 >= BatteryChargeTrajectoryThresholdMilliPercent )
  {
    a2 = HIDWORD(qword_140F10054) >> 31;
LABEL_23:
    HIDWORD(qword_140F10054) = 0;
  }
  return PopSetBatteryDischargingState(a1, a2);
}
