/*
 * XREFs of xwtol @ 0x14002B140
 * Callers:
 *     GetMonitorCapabilityFromInf @ 0x14002AD24 (GetMonitorCapabilityFromInf.c)
 *     ParseModeCap @ 0x14002B480 (ParseModeCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xwtol(unsigned __int16 *a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax

  v2 = 0;
  while ( 1 )
  {
    v3 = *a1;
    if ( v3 >= 0x30 && v3 <= 0x39 )
    {
      v2 = v3 + 2 * (5 * v2 - 24);
      goto LABEL_5;
    }
    if ( v3 != 32 )
      return v2;
LABEL_5:
    ++a1;
  }
}
