/*
 * XREFs of StorPortGetScatterGatherList @ 0x1400300C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorPortGetScatterGatherList(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = 96LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v2 = 48LL;
  return *(_QWORD *)(*(_QWORD *)(v2 + a2) + 112LL);
}
