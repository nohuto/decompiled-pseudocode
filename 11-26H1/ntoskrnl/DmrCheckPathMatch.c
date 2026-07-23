/*
 * XREFs of DmrCheckPathMatch @ 0x1405B25C8
 * Callers:
 *     DmrFindDrhdForDeviceScope @ 0x1405B24FC (DmrFindDrhdForDeviceScope.c)
 *     DmrValidateDeviceScope @ 0x1405B2930 (DmrValidateDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x1405B2A28 (DmrEnumerateRmrrDomains.c)
 * Callees:
 *     <none>
 */

char __fastcall DmrCheckPathMatch(char *a1, char *a2)
{
  char v2; // r8
  char v3; // r9
  char v6; // dl
  bool v7; // r10
  unsigned int v8; // ecx
  unsigned int v9; // eax
  bool v10; // cf
  unsigned int v11; // edx

  v2 = *a1;
  v3 = 0;
  if ( *a1 == 1 || v2 == 2 )
  {
    v6 = *a2;
    if ( (v6 == 1 || v6 == 2) && a1[5] == a2[5] )
    {
      v7 = 0;
      if ( v2 == 1 )
        v7 = v6 == 1;
      v8 = ((unsigned int)(unsigned __int8)a1[1] - 6) >> 1;
      v9 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
      if ( !v7 || v8 == v9 )
      {
        v10 = v9 < v8;
        if ( v9 > v8 )
        {
          if ( v2 == 1 && v6 == 2 )
            return v3;
          v10 = v9 < v8;
        }
        if ( !v10 || v6 != 1 || v2 != 2 )
        {
          v11 = 0;
          if ( v8 >= v9 )
            v8 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
          while ( v11 < v8 )
          {
            if ( a1[2 * v11 + 6] != a2[2 * v11 + 6] || a1[2 * v11 + 7] != a2[2 * v11 + 7] )
              return v3;
            ++v11;
          }
          return 1;
        }
      }
    }
  }
  return v3;
}
