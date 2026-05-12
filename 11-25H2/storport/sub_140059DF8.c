/*
 * XREFs of sub_140059DF8 @ 0x140059DF8
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 * Callees:
 *     sub_14000C020 @ 0x14000C020 (sub_14000C020.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 */

void __fastcall sub_140059DF8(__int64 a1, int a2)
{
  unsigned __int8 v2; // bl
  __int64 *v3; // rax
  __int64 v4; // rdi
  volatile LONG *v5; // rbx
  KIRQL v6; // al

  v2 = a2;
  v3 = sub_14001F350(a1, a2);
  v4 = (__int64)v3;
  if ( v3 )
  {
    v5 = (volatile LONG *)(v3 + 99);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3 + 198);
    *(_DWORD *)(v4 + 748) = 0;
    ExReleaseSpinLockExclusive(v5, v6);
    sub_14000C020(v4, 0);
  }
  else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
         && (HIDWORD(off_140168120->Timer) & 0x20) != 0
         && BYTE1(off_140168120->Timer) >= 3u )
  {
    sub_140067F78(off_140168120->AttachedDevice, 52LL, &unk_14014A2D8, v2, BYTE1(a2), BYTE2(a2));
  }
}
