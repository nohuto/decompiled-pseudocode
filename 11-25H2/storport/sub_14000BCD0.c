/*
 * XREFs of sub_14000BCD0 @ 0x14000BCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000BD54 @ 0x14000BD54 (sub_14000BD54.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 */

__int64 __fastcall sub_14000BCD0(__int64 a1)
{
  IRP *v1; // rdi
  __int64 v2; // rbx

  v1 = *(IRP **)(a1 + 160);
  v2 = *(_QWORD *)(a1 + 216);
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 22LL, &unk_14014C778, v2, v1, v1->IoStatus.Status);
  }
  *(_WORD *)(v2 + 4560) = 0;
  return sub_14000BD54(v1);
}
