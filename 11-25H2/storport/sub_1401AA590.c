/*
 * XREFs of sub_1401AA590 @ 0x1401AA590
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002C910 @ 0x14002C910 (sub_14002C910.c)
 *     sub_14002CED0 @ 0x14002CED0 (sub_14002CED0.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_1400F9A04 @ 0x1400F9A04 (sub_1400F9A04.c)
 */

__int64 __fastcall sub_1401AA590(__int64 a1, __int64 a2)
{
  int *v4; // rcx
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // esi

  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 1) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0((__int64)off_140168120->AttachedDevice, 0xEu, (__int64)&unk_140148948, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(a1 + 64);
  v5 = *v4;
  if ( *v4 == 1094997074 )
  {
    v6 = v4[22];
LABEL_5:
    v7 = sub_14002C910(v6, a2);
    goto LABEL_6;
  }
  if ( v5 == 1431193940 )
  {
    v7 = sub_14002CED0((__int64)v4, a2);
    goto LABEL_6;
  }
  if ( v5 == 1314275652 )
  {
    v6 = v4[21];
    goto LABEL_5;
  }
  if ( v5 != 1314278989 )
  {
    v8 = -1073741823;
    goto LABEL_7;
  }
  v7 = sub_1400F9A04((__int64)v4, a2);
LABEL_6:
  v8 = v7;
LABEL_7:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 1) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8((__int64)off_140168120->AttachedDevice, 0xFu, (__int64)&unk_140148948, a1, a2, v8);
  }
  return v8;
}
