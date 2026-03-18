/*
 * XREFs of RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1401552D4
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x140154EE8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(int a1, int a2, __int64 a3)
{
  int v3; // ecx
  __int16 v4; // r9
  int v5; // edx
  __int16 v6; // cx
  __int16 result; // ax

  v3 = a2 ^ a1;
  v4 = 0;
  if ( v3 )
  {
    if ( (v3 & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
        v4 = 1;
      else
        v4 = 2;
    }
    if ( (v3 & 2) != 0 )
    {
      if ( (a2 & 2) != 0 )
        v4 |= 4u;
      else
        v4 |= 8u;
    }
    if ( (v3 & 4) != 0 )
    {
      if ( (a2 & 4) != 0 )
        v4 |= 0x10u;
      else
        v4 |= 0x20u;
    }
    if ( (v3 & 8) != 0 )
    {
      if ( (a2 & 8) != 0 )
        v4 |= 0x40u;
      else
        v4 |= 0x80u;
    }
    if ( (v3 & 0x10) != 0 )
    {
      if ( (a2 & 0x10) != 0 )
        v4 |= 0x100u;
      else
        v4 |= 0x200u;
    }
  }
  v5 = *(_DWORD *)(a3 + 12);
  v6 = v4 | 0x400;
  if ( (v5 & 0x800) == 0 )
    v6 = v4;
  result = v6 | 0x800;
  if ( (v5 & 0x1000) == 0 )
    return v6;
  return result;
}
