/*
 * XREFs of Isoch_EvtDmaCallback @ 0x14001B370
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_MapTransfers @ 0x1400101E0 (Isoch_MapTransfers.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 *     TR_AttemptStateChange @ 0x140020250 (TR_AttemptStateChange.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Isoch_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx

  v4 = *(_QWORD *)(*a4 + 56LL);
  a4[9] = a3;
  result = Isoch_Stage_MapIntoRing(a4);
  if ( !_InterlockedXor((volatile signed __int32 *)(v4 + 348), 1u) )
  {
    if ( *(_DWORD *)(v4 + 360) )
    {
      result = TR_AttemptStateChange(v4, 3LL, 4LL);
      if ( (_DWORD)result == 3 )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
                 WdfDriverGlobals,
                 *(_QWORD *)(v4 + 328),
                 -100000000LL);
    }
    else
    {
      result = TR_AttemptStateChange(v4, 3LL, 3LL);
      if ( (_DWORD)result == 3 )
        return Isoch_MapTransfers(v4, v6);
    }
  }
  return result;
}
