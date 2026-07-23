/*
 * XREFs of PopAdaptiveStandbyCalculateBatteryInformation @ 0x1407E2DE8
 * Callers:
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E6000 (PopAdaptiveStandbyWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAdaptiveStandbyCalculateBatteryInformation(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // r9d
  int v4; // ecx

  *(_OWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  result = (unsigned int)a1[13];
  *(_DWORD *)(a2 + 4) = result;
  if ( a1[13] )
  {
    if ( (a1[9] & 1) != 0 )
      *(_DWORD *)a2 |= 1u;
    result = (unsigned int)a1[10];
    *(_DWORD *)(a2 + 12) = result;
    v3 = a1[4];
    *(_DWORD *)(a2 + 8) = v3;
    if ( v3 )
    {
      v4 = 100;
      result = ((v3 >> 1) + 100 * (_DWORD)result) / v3;
      if ( (int)result < 100 )
        v4 = result;
      *(_DWORD *)(a2 + 16) = v4;
    }
    else
    {
      *(_DWORD *)(a2 + 16) = 100;
    }
  }
  else
  {
    *(_DWORD *)a2 |= 1u;
    *(_DWORD *)(a2 + 12) = -1;
    *(_DWORD *)(a2 + 8) = 100;
  }
  return result;
}
