/*
 * XREFs of ExpSetTimerObject2 @ 0x1403B3598
 * Callers:
 *     ExpSetTimer2 @ 0x1403B3454 (ExpSetTimer2.c)
 *     NtSetTimerEx @ 0x1404253F0 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x140425C90 (NtSetTimer.c)
 *     NtCancelTimer @ 0x1406D37B0 (NtCancelTimer.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1403B33C8 (ExpTimerSetParametersAreValid.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 */

__int64 __fastcall ExpSetTimerObject2(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  char v6; // cl

  v4 = a1;
  if ( a3 && (*(_BYTE *)(a1 + 129) & 2) != 0 )
    return 3221225485LL;
  if ( a4 && !ExpTimerSetParametersAreValid(a4) )
    return 3221225713LL;
  if ( a2 )
  {
    v5 = *a2;
    v6 = 1;
  }
  else
  {
    v6 = 0;
    v5 = 0LL;
  }
  *(_QWORD *)(v4 + 144) = v5;
  *(_QWORD *)(v4 + 152) = 0LL;
  if ( a4 )
    *(_QWORD *)(v4 + 152) = *(_QWORD *)(a4 + 8);
  if ( v6 )
    KeSetTimer2(v4, v5, a3, a4);
  else
    KeCancelTimer2(v4, 0LL);
  return 0LL;
}
