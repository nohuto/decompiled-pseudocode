/*
 * XREFs of sub_14012B1B8 @ 0x14012B1B8
 * Callers:
 *     sub_14012B468 @ 0x14012B468 (sub_14012B468.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14012B1B8(__int64 a1)
{
  __int64 v1; // r8
  int v2; // eax

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL);
  v2 = *(_DWORD *)(v1 + 20);
  if ( (v2 & 0x100) != 0 )
  {
    *(_DWORD *)(v1 + 20) = v2 & 0xFFFFFEFF;
    LOBYTE(v2) = KeCancelTimer(*(PKTIMER *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL) + 120LL));
  }
  return v2;
}
