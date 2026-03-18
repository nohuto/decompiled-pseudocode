/*
 * XREFs of InputTypeToInertiaSourceType @ 0x1801CEC10
 * Callers:
 *     ?ReportInertiaStartHelper@@YAH_KIMMAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DMATRIX@@@Z @ 0x1801CEB1C (-ReportInertiaStartHelper@@YAH_KIMMAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputTypeToInertiaSourceType(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx

  v1 = 15;
  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v5 = v3 - 1;
      if ( v5 )
      {
        if ( v5 == 2 )
          return 8;
      }
      else
      {
        return 2;
      }
    }
    else
    {
      return 4;
    }
  }
  else
  {
    return 1;
  }
  return v1;
}
