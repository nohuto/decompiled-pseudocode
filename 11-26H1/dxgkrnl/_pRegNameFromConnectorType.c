/*
 * XREFs of _pRegNameFromConnectorType @ 0x14038DA10
 * Callers:
 *     _pLoadAdditinalMode @ 0x14038D4B8 (_pLoadAdditinalMode.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall pRegNameFromConnectorType(unsigned int a1)
{
  const wchar_t *result; // rax
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  if ( a1 <= 9 )
  {
    if ( a1 == 9 )
    {
      return L"SDI";
    }
    else if ( a1 )
    {
      v2 = a1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( v6 )
              {
                v7 = v6 - 1;
                if ( v7 )
                {
                  if ( v7 == 2 )
                    return L"D_JPN";
                  else
                    return 0LL;
                }
                else
                {
                  return L"LVDS";
                }
              }
              else
              {
                return L"HDTV";
              }
            }
            else
            {
              return L"DVI";
            }
          }
          else
          {
            return L"COMPONENT";
          }
        }
        else
        {
          return L"COMPOSITE";
        }
      }
      else
      {
        return L"SVIDEO";
      }
    }
    else
    {
      return L"HD15";
    }
  }
  else
  {
    switch ( a1 )
    {
      case 0x80000000:
        return L"INTERNAL";
      case 0x12u:
      case 0xAu:
      case 0xBu:
        return L"DISPLAYPORT";
      case 0xCu:
      case 0xDu:
        return L"UDI";
      case 0xEu:
        return L"SDTVDONGLE";
      default:
        result = L"OTHER";
        if ( a1 != -1 )
          return 0LL;
        break;
    }
  }
  return result;
}
