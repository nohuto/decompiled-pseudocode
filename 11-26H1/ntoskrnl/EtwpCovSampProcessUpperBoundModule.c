/*
 * XREFs of EtwpCovSampProcessUpperBoundModule @ 0x140A33E80
 * Callers:
 *     EtwpCovSampProcessRemoveModule @ 0x140A33DDC (EtwpCovSampProcessRemoveModule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampProcessUpperBoundModule(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  int v4; // r8d
  int v5; // edx

  v2 = *(_DWORD *)(a1 + 32);
  v4 = -1;
  if ( v2 )
  {
    do
    {
      v5 = (int)(v2 - v4) / 2 + v4;
      if ( a2 >= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v5) )
      {
        v4 += (int)(v2 - v4) / 2;
        v5 = v2;
      }
      v2 = v5;
    }
    while ( v4 + 1 != v5 );
  }
  return v2;
}
