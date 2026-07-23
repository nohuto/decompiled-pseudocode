/*
 * XREFs of EtwpCovSampProcessRemoveModule @ 0x140A33DDC
 * Callers:
 *     EtwpCoverageSamplerUnloadImage @ 0x140A32B38 (EtwpCoverageSamplerUnloadImage.c)
 *     EtwpCovSampProcessAddModule @ 0x140A351C4 (EtwpCovSampProcessAddModule.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpCovSampProcessUpperBoundModule @ 0x140A33E80 (EtwpCovSampProcessUpperBoundModule.c)
 *     EtwpCovSampModuleDereference @ 0x140A340B4 (EtwpCovSampModuleDereference.c)
 */

__int64 __fastcall EtwpCovSampProcessRemoveModule(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rbp
  __int64 v9; // r9
  unsigned int v10; // edx

  v6 = EtwpCovSampProcessUpperBoundModule();
  if ( v6 < *(_DWORD *)(a1 + 32) )
  {
    v7 = a2 + a3;
    do
    {
      if ( *(_QWORD *)(16LL * v6 + *(_QWORD *)(a1 + 24))
         - *(_QWORD *)(*(_QWORD *)(16LL * v6 + *(_QWORD *)(a1 + 24) + 8) + 40LL) >= v7 )
        break;
      EtwpCovSampModuleDereference(*(_QWORD *)a1);
      v10 = *(_DWORD *)(a1 + 32);
      if ( v10 > v6 + 1 )
        memmove((void *)v9, (const void *)(v9 + 16), 16LL * (v10 - v6 - 1));
      --*(_DWORD *)(a1 + 32);
    }
    while ( v6 < *(_DWORD *)(a1 + 32) );
  }
  return v6;
}
