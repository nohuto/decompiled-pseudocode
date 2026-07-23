/*
 * XREFs of PiDmListInit @ 0x1407AA100
 * Callers:
 *     PiDmInit @ 0x140CCB750 (PiDmInit.c)
 * Callees:
 *     PiDmEnumObjectsWithCallback @ 0x140967BEC (PiDmEnumObjectsWithCallback.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmListInit(int a1)
{
  unsigned int v1; // ebx
  PVOID P[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)P = 0LL;
  HIDWORD(P[1]) = a1;
  v1 = PiDmEnumObjectsWithCallback(LODWORD(qword_1400016B0[5 * a1]), PiDmListInitEnumCallback, P);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x5A706E50u);
  return v1;
}
