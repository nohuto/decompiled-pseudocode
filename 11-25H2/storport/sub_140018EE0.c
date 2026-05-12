/*
 * XREFs of sub_140018EE0 @ 0x140018EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 *     sub_140019650 @ 0x140019650 (sub_140019650.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400D2464 @ 0x1400D2464 (sub_1400D2464.c)
 *     sub_14010216C @ 0x14010216C (sub_14010216C.c)
 */

__int64 __fastcall sub_140018EE0(__int64 a1, __int64 a2)
{
  int *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx

  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(
      off_140168120->AttachedDevice,
      26LL,
      &unk_140148948,
      a1,
      a2,
      *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL));
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(a1 + 64);
  v5 = *v4;
  if ( *v4 == 1094997074 )
  {
    v6 = sub_140019004(v4, a2);
  }
  else
  {
    switch ( v5 )
    {
      case 1431193940:
        v6 = sub_140019650(v4, a2);
        break;
      case 1314275652:
        v6 = sub_1400D2464(v4, (PIRP)a2);
        break;
      case 1314278989:
        v6 = sub_14010216C(v4, a2);
        break;
      default:
        v7 = -1073741823;
        goto LABEL_6;
    }
  }
  v7 = v6;
LABEL_6:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 27LL, &unk_140148948, a1, a2, v7);
  }
  return v7;
}
