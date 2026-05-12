/*
 * XREFs of sub_14012AED0 @ 0x14012AED0
 * Callers:
 *     sub_1401282DC @ 0x1401282DC (sub_1401282DC.c)
 * Callees:
 *     sub_14006B3A4 @ 0x14006B3A4 (sub_14006B3A4.c)
 *     sub_1400EF9BC @ 0x1400EF9BC (sub_1400EF9BC.c)
 *     sub_14012702C @ 0x14012702C (sub_14012702C.c)
 */

void __fastcall sub_14012AED0(__int64 a1, IRP *a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rbx

  v3 = sub_14006B3A4(a1);
  v4 = (__int64)v3;
  if ( (*(_DWORD *)(*((_QWORD *)v3 + 50) + 184LL) & 0x40000000) != 0 )
  {
    sub_1400EF9BC(*((_QWORD **)v3 + 142));
    sub_14012702C(v4, a2);
  }
  else if ( (v3[104] & 0x40) != 0 )
  {
    IoQueueWorkItem(*((PIO_WORKITEM *)v3 + 164), (PIO_WORKITEM_ROUTINE)sub_1401285D0, NormalWorkQueue, a2);
  }
}
