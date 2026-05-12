/*
 * XREFs of sub_14013BB14 @ 0x14013BB14
 * Callers:
 *     sub_14013B2AC @ 0x14013B2AC (sub_14013B2AC.c)
 * Callees:
 *     sub_140085BC8 @ 0x140085BC8 (sub_140085BC8.c)
 *     sub_14013BC18 @ 0x14013BC18 (sub_14013BC18.c)
 */

__int64 __fastcall sub_14013BB14(int **a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v5; // ebx

  if ( a2 > 9u )
  {
    if ( a2 != 10 )
    {
      if ( a2 == 11 || a2 == 12 )
      {
        v5 = -1073741811;
        goto LABEL_27;
      }
      if ( a2 != 15 && a2 != 16 )
      {
        if ( a2 == 17 )
        {
          v5 = -1073741263;
          goto LABEL_27;
        }
        if ( a2 == 18 )
        {
          v5 = -1073741260;
          goto LABEL_27;
        }
      }
      goto LABEL_11;
    }
LABEL_26:
    v5 = -1073741670;
    goto LABEL_27;
  }
  if ( a2 == 9 )
    goto LABEL_26;
  v5 = 0;
  switch ( a2 )
  {
    case 0u:
      goto LABEL_30;
    case 1u:
      v5 = -1073741790;
      goto LABEL_27;
    case 3u:
      v5 = -1073741618;
      goto LABEL_27;
  }
  if ( a2 != 4 )
  {
    switch ( a2 )
    {
      case 5u:
      case 6u:
        v5 = -1073741710;
        goto LABEL_27;
      case 7u:
        v5 = -2147483631;
        goto LABEL_27;
      case 8u:
        goto LABEL_26;
    }
  }
LABEL_11:
  v5 = -1073741435;
LABEL_27:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    sub_14013BC18(off_140168120->AttachedDevice, 40LL, a3, a2, v5);
LABEL_30:
  sub_140085BC8(*a1, a2);
  return v5;
}
