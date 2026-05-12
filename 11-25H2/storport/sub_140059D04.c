/*
 * XREFs of sub_140059D04 @ 0x140059D04
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 * Callees:
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_140028D00 @ 0x140028D00 (sub_140028D00.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 */

void __fastcall sub_140059D04(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int8 v4; // bl
  __int64 *v5; // rax
  int v6; // esi
  __int64 *v7; // rbp
  KIRQL v8; // bl

  v4 = a2;
  v5 = sub_14001F350(a1, a2);
  if ( v5 )
  {
    v6 = 0x7FFFFFFF;
    v7 = v5 + 90;
    if ( a3 < 0x7FFFFFFF )
      v6 = a3;
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v5 + 198);
    sub_140028D00((struct _EX_RUNDOWN_REF *)v7, 1);
    if ( v6 > (((__int64)*((unsigned int *)v7 + 22) >> 2) & 0x3FFFFFFF) )
      v6 = ((__int64)*((unsigned int *)v7 + 22) >> 2) & 0x3FFFFFFF;
    *((_DWORD *)v7 + 7) = v6;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v7 + 18, v8);
  }
  else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
         && (HIDWORD(off_140168120->Timer) & 0x20) != 0
         && BYTE1(off_140168120->Timer) >= 3u )
  {
    sub_140067F78(off_140168120->AttachedDevice, 51LL, &unk_14014A2D8, v4, BYTE1(a2), BYTE2(a2));
  }
}
