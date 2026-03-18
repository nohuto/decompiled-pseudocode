/*
 * XREFs of NVMeSystemPowerHint @ 0x140011820
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeUpdateResumeLatencyTolerance @ 0x1400085A0 (NVMeUpdateResumeLatencyTolerance.c)
 */

__int64 __fastcall NVMeSystemPowerHint(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rdx
  __int64 v6; // r9
  __int64 result; // rax

  if ( a2[1] >= 0x10u && *a2 )
  {
    *(_DWORD *)(a1 + 1612) = a2[2];
    *(_DWORD *)(a1 + 1620) = a2[3];
    NVMeUpdateResumeLatencyTolerance(a1);
    if ( v4[20] == 5 )
    {
      v5 = v4;
      if ( a2[2] == 1 )
        v6 = (unsigned int)v4[24];
      else
        v6 = (unsigned int)v4[23];
    }
    else
    {
      result = (unsigned int)v4[400];
      if ( (result & 0x10) == 0 )
        return result;
      v5 = (_DWORD *)a1;
      if ( a2[2] == 1 )
      {
        StorPortExtendedFunction(57LL, a1, 0LL, (unsigned int)v4[24]);
        return StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
      }
      v6 = 0xFFFFFFFFLL;
    }
    return StorPortExtendedFunction(57LL, v5, 0LL, v6);
  }
  return result;
}
