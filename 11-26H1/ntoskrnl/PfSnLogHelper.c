/*
 * XREFs of PfSnLogHelper @ 0x1409D2D44
 * Callers:
 *     PfSnLogVolumeCreate @ 0x1409D3F78 (PfSnLogVolumeCreate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PfSnTraceGetLogEntry @ 0x140265840 (PfSnTraceGetLogEntry.c)
 *     PfSnReferenceProcessTrace @ 0x1403769CC (PfSnReferenceProcessTrace.c)
 *     PfSnFailProcessTrace @ 0x1409D3078 (PfSnFailProcessTrace.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnLogHelper(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi

  v5 = 0LL;
  v6 = PfSnReferenceProcessTrace(a1);
  v7 = (struct _EX_RUNDOWN_REF *)v6;
  if ( v6 )
  {
    if ( (int)PfSnTraceGetLogEntry(v6, a2, a3) < 0 )
    {
      PfSnFailProcessTrace(v7);
      ExReleaseRundownProtection_0(v7 + 45);
    }
    else
    {
      return v7;
    }
  }
  return (struct _EX_RUNDOWN_REF *)v5;
}
