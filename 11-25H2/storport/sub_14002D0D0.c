/*
 * XREFs of sub_14002D0D0 @ 0x14002D0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_14006CE64 @ 0x14006CE64 (sub_14006CE64.c)
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 */

__int64 __fastcall sub_14002D0D0(__int64 a1, __int64 a2)
{
  CMSPAddress *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // esi

  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x10) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 16LL, &unk_140148948, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(CMSPAddress **)(a1 + 64);
  v5 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == 1094997074 )
  {
    v6 = sub_14002D1F0(v4, a2);
  }
  else
  {
    switch ( v5 )
    {
      case 1431193940:
        v6 = sub_14002E460(v4, (PIRP)a2);
        break;
      case 1146246738:
        v6 = sub_14006CE64(v4, a2);
        break;
      case 1314275652:
        v6 = sub_14018C298(v4, a2);
        break;
      case 1314278989:
        v6 = sub_140198640(v4, (PIRP)a2);
        break;
      default:
        v7 = -1073741823;
        goto LABEL_6;
    }
  }
  v7 = v6;
LABEL_6:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x10) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 17LL, &unk_140148948, a1, a2, v7);
  }
  return v7;
}
