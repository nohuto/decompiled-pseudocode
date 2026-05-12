/*
 * XREFs of sub_14002A6B0 @ 0x14002A6B0
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 */

__int64 __fastcall sub_14002A6B0(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v4 = *(_QWORD *)(a2 + 96);
    else
      v4 = *(_QWORD *)(a2 + 48);
    if ( a3 )
      *a4 = *(_QWORD *)(v4 + 136);
    else
      *a4 = *(_QWORD *)(v4 + 104);
    return 0LL;
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930(off_140168120->AttachedDevice, 46LL, &unk_140149070);
    }
    return 3238002694LL;
  }
}
