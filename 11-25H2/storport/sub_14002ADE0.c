/*
 * XREFs of sub_14002ADE0 @ 0x14002ADE0
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 */

__int64 __fastcall sub_14002ADE0(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  int v3; // ecx

  if ( !a1 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930(off_140168120->AttachedDevice, 24LL, &unk_140148B00);
    }
    return 3238002694LL;
  }
  if ( *(_DWORD *)a1 != 1094997074 )
    return 3238002694LL;
  if ( (*(_BYTE *)(a1 + 4660) & 2) == 0
    || *a2 >= *(_WORD *)(a1 + 4662)
    || (v3 = *(unsigned __int8 *)(*((unsigned __int8 *)a2 + 2) + ((unsigned __int64)*a2 << 6) + *(_QWORD *)(a1 + 4680)),
        *a3 = v3,
        v3 == 255) )
  {
    *a3 = 0;
  }
  return 0LL;
}
