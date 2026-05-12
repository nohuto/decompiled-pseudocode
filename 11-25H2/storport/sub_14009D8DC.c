/*
 * XREFs of sub_14009D8DC @ 0x14009D8DC
 * Callers:
 *     sub_140091624 @ 0x140091624 (sub_140091624.c)
 * Callees:
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_140092628 @ 0x140092628 (sub_140092628.c)
 *     sub_140098650 @ 0x140098650 (sub_140098650.c)
 */

__int64 __fastcall sub_14009D8DC(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  _BYTE *v3; // rax
  char v4; // al
  PDEVICE_OBJECT v5; // r10
  unsigned __int16 v6; // dx

  v2 = -1073741811;
  if ( *(_DWORD *)(a1 + 1036) || *(_DWORD *)(a1 + 1044) || *(_DWORD *)(a1 + 1040) || (*(_BYTE *)(a1 + 506) & 1) != 0 )
  {
    v5 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 0x10) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      return (unsigned int)-1073741637;
    }
    v6 = 52;
    goto LABEL_21;
  }
  v3 = *(_BYTE **)(a1 + 112);
  if ( v3 )
  {
    v4 = *v3 & 0x1F;
    if ( v4 )
    {
      if ( v4 != 20 )
      {
        v5 = off_140168120;
        if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
          || (HIDWORD(off_140168120->Timer) & 0x10) == 0
          || BYTE1(off_140168120->Timer) < 2u )
        {
          return (unsigned int)-1073741637;
        }
        v6 = 53;
LABEL_21:
        sub_140055C18((__int64)v5->AttachedDevice, v6, (__int64)&unk_14014D880, a1);
        return (unsigned int)-1073741637;
      }
    }
  }
  if ( a2 == 1 )
  {
    return (unsigned int)sub_140098650(a1);
  }
  else
  {
    if ( a2 )
      return v2;
    return (unsigned int)sub_140092628(a1);
  }
}
