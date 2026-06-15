/*
 * XREFs of sub_14001DFBC @ 0x14001DFBC
 * Callers:
 *     sub_14001DE2C @ 0x14001DE2C (sub_14001DE2C.c)
 *     sub_14001DED0 @ 0x14001DED0 (sub_14001DED0.c)
 *     sub_14001DEFC @ 0x14001DEFC (sub_14001DEFC.c)
 *     sub_14004BC88 @ 0x14004BC88 (sub_14004BC88.c)
 *     sub_14004BD94 @ 0x14004BD94 (sub_14004BD94.c)
 *     sub_14004BE14 @ 0x14004BE14 (sub_14004BE14.c)
 *     sub_14004BE6C @ 0x14004BE6C (sub_14004BE6C.c)
 *     sub_14004BF90 @ 0x14004BF90 (sub_14004BF90.c)
 *     sub_14004DF60 @ 0x14004DF60 (sub_14004DF60.c)
 *     sub_14004ED80 @ 0x14004ED80 (sub_14004ED80.c)
 *     sub_14004FEF4 @ 0x14004FEF4 (sub_14004FEF4.c)
 *     sub_140059234 @ 0x140059234 (sub_140059234.c)
 *     sub_14005C4AC @ 0x14005C4AC (sub_14005C4AC.c)
 *     sub_14006C8A4 @ 0x14006C8A4 (sub_14006C8A4.c)
 *     sub_1400B14AA @ 0x1400B14AA (sub_1400B14AA.c)
 *     sub_1400B1500 @ 0x1400B1500 (sub_1400B1500.c)
 *     sub_1400B15BE @ 0x1400B15BE (sub_1400B15BE.c)
 *     sub_1400B1614 @ 0x1400B1614 (sub_1400B1614.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14001DFBC(int a1)
{
  if ( a1 > -2147024662 )
  {
    if ( a1 > -2147023746 )
    {
      switch ( a1 )
      {
        case -2147023537:
          return (unsigned int)-1073741595;
        case -2147023604:
          return (unsigned int)-1073740757;
        case -2147023431:
          return (unsigned int)-1073700733;
        case 0:
          return 0;
      }
    }
    else
    {
      switch ( a1 )
      {
        case -2147023746:
          return (unsigned int)-1073741735;
        case -2147024362:
          return (unsigned int)-1073741675;
        case -2147024322:
          return (unsigned int)-1073741787;
        case -2147024314:
          return (unsigned int)-1073741471;
        case -2147024313:
          return (unsigned int)-1073741469;
        case -2147024270:
          return (unsigned int)-1073741197;
      }
    }
  }
  else
  {
    if ( a1 == -2147024662 )
      return (unsigned int)-2147483643;
    if ( a1 > -2147024809 )
    {
      switch ( a1 )
      {
        case -2147024784:
          return (unsigned int)-1073741697;
        case -2147024774:
          return (unsigned int)-1073741789;
        case -2147024773:
          return (unsigned int)-1073741773;
        case -2147024770:
          return (unsigned int)-1073741515;
      }
    }
    else
    {
      switch ( a1 )
      {
        case -2147024809:
          return (unsigned int)-1073741811;
        case -2147467259:
          return (unsigned int)-1073741823;
        case -2147024895:
          return (unsigned int)-1073741822;
        case -2147024894:
          return (unsigned int)-1073741772;
        case -2147024893:
          return (unsigned int)-1073741766;
        case -2147024882:
          return (unsigned int)-1073741801;
      }
    }
  }
  if ( (a1 & 0x10000000) != 0 )
  {
    a1 &= ~0x10000000u;
    return (unsigned int)a1;
  }
  if ( (a1 & 0x1FFF0000) == 0x70000 )
  {
    a1 = (unsigned __int16)a1;
    if ( (_WORD)a1 )
      return (unsigned __int16)a1 | 0xC0070000;
    return (unsigned int)a1;
  }
  if ( (a1 & 0x1FFF0000) != 0x90000 )
    return (unsigned int)-1073741595;
  if ( a1 > 0 )
    return (unsigned __int16)a1 | 0xC0090000;
  return (unsigned int)a1;
}
