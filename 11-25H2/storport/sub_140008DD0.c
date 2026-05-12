/*
 * XREFs of sub_140008DD0 @ 0x140008DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400081BC @ 0x1400081BC (sub_1400081BC.c)
 *     sub_140008EE0 @ 0x140008EE0 (sub_140008EE0.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_1400D30D4 @ 0x1400D30D4 (sub_1400D30D4.c)
 *     sub_140102C4C @ 0x140102C4C (sub_140102C4C.c)
 */

__int64 __fastcall sub_140008DD0(__int64 a1, __int64 a2)
{
  int *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx

  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 28LL, &unk_140148948, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(a1 + 64);
  v5 = *v4;
  if ( *v4 == 1094997074 )
  {
    v6 = sub_140008EE0(v4, a2);
  }
  else
  {
    switch ( v5 )
    {
      case 1431193940:
        v6 = sub_1400081BC((__int64)v4, a2);
        break;
      case 1314275652:
        v6 = sub_1400D30D4(v4, a2);
        break;
      case 1314278989:
        v6 = sub_140102C4C(v4, a2);
        break;
      default:
        v7 = -1073741823;
        goto LABEL_6;
    }
  }
  v7 = v6;
LABEL_6:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 29LL, &unk_140148948, a1, a2, v7);
  }
  return v7;
}
