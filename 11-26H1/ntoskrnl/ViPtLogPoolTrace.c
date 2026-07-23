/*
 * XREFs of ViPtLogPoolTrace @ 0x140C4B284
 * Callers:
 *     ViPtLogPoolTraceWrapper @ 0x140C4B06C (ViPtLogPoolTraceWrapper.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 */

void __fastcall ViPtLogPoolTrace(_OWORD *a1)
{
  __int64 v2; // rax
  _OWORD *v3; // rdx
  __int128 v4; // xmm1

  if ( ExAcquireRundownProtection_0(&ViPtUnloadRundown) )
  {
    if ( VfPoolTraces )
    {
      v2 = 3LL;
      v3 = (char *)VfPoolTraces
         + 424 * (_InterlockedIncrement(&VfPoolTracesIndex) & (unsigned int)(VfPoolTracesLength - 1));
      do
      {
        *v3 = *a1;
        v3[1] = a1[1];
        v3[2] = a1[2];
        v3[3] = a1[3];
        v3[4] = a1[4];
        v3[5] = a1[5];
        v3[6] = a1[6];
        v3 += 8;
        v4 = a1[7];
        a1 += 8;
        *(v3 - 1) = v4;
        --v2;
      }
      while ( v2 );
      *v3 = *a1;
      v3[1] = a1[1];
      *((_QWORD *)v3 + 4) = *((_QWORD *)a1 + 4);
    }
    ExReleaseRundownProtection_0(&ViPtUnloadRundown);
  }
}
