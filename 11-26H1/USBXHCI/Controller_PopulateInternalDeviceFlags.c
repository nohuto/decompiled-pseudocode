/*
 * XREFs of Controller_PopulateInternalDeviceFlags @ 0x140076C70
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140075F9C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Controller_PopulateInternalDeviceFlags(__int64 a1)
{
  __int16 v1; // r8
  __int64 result; // rax
  __int16 v3; // dx
  __int16 v4; // dx

  v1 = *(_WORD *)(a1 + 648);
  result = 0LL;
  *(_QWORD *)(a1 + 752) = 0LL;
  if ( v1 == 7027 )
  {
    v3 = *(_WORD *)(a1 + 652);
    result = 4105LL;
    if ( v3 == 4105 )
    {
      *(_QWORD *)(a1 + 752) = 2LL;
      return result;
    }
    result = 0LL;
    if ( v3 == 4352 && *(_BYTE *)(a1 + 656) == 16 )
    {
      *(_QWORD *)(a1 + 752) = 1LL;
      result = 1LL;
LABEL_7:
      if ( v1 == 6945 )
      {
        v4 = *(_WORD *)(a1 + 652);
        if ( v4 == 4160 || (unsigned __int16)(v4 - 4161) <= 1u )
        {
          result |= 0x10uLL;
          *(_QWORD *)(a1 + 752) = result;
        }
      }
      return result;
    }
  }
  if ( v1 != 7023 )
    goto LABEL_7;
  result = 28707LL;
  if ( *(_WORD *)(a1 + 652) == 28707 )
    *(_QWORD *)(a1 + 752) = 12LL;
  return result;
}
