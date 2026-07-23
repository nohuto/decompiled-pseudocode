/*
 * XREFs of HalpTimerQueryClockSourceType @ 0x1404DA114
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerQueryClockSourceType(_DWORD *a1)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v2 = *(_DWORD *)(HalpClockTimer + 228);
  if ( v2 == 12 )
    v2 = *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL);
  *a1 = 1;
  v3 = v2 - 3;
  if ( v3 )
  {
    v5 = v3 - 2;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 3;
          if ( v8 )
          {
            if ( v8 == 4085 )
              a1[1] = 11;
            else
              a1[1] = 0;
          }
          else
          {
            a1[1] = 13;
          }
        }
        else
        {
          a1[1] = 10;
        }
      }
      else
      {
        a1[1] = 9;
      }
    }
    else
    {
      a1[1] = 6;
    }
  }
  else
  {
    a1[1] = 5;
  }
  switch ( *(_DWORD *)(HalpPerformanceCounter + 228) )
  {
    case 1:
      a1[2] = 3;
      break;
    case 3:
      a1[2] = 5;
      break;
    case 5:
      a1[2] = 6;
      break;
    case 8:
      a1[2] = 7;
      break;
    case 0xA:
      a1[2] = 12;
      break;
    case 0xB:
      a1[1] = 13;
      break;
    case 0x1000:
      a1[2] = 11;
      break;
    default:
      a1[2] = 0;
      break;
  }
  return 0LL;
}
