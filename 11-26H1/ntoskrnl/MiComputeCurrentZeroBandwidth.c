/*
 * XREFs of MiComputeCurrentZeroBandwidth @ 0x1405222AC
 * Callers:
 *     MiFindOptimalEngineToAddThread @ 0x14052203C (MiFindOptimalEngineToAddThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeCurrentZeroBandwidth(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  _DWORD *v3; // r10
  __int64 v4; // rdi
  __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // rcx
  _BOOL8 v8; // rbx

  v2 = 0;
  v3 = a2 + 6;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = a1 + 135;
  do
  {
    *v3 = 5;
    if ( *(_DWORD *)(v6 + *a2 + 240) )
    {
      v4 = v7 - 7;
      v8 = v5 != 0;
      a2[v8 + 23] += *(_QWORD *)(v7 + 9) * *(unsigned int *)(v6 + *a2 + 244);
      if ( *(_BYTE *)v7 == 3 )
        *((_BYTE *)a2 + v8 + 176) = 1;
    }
    ++v5;
    v3 += 14;
    v6 += 504LL;
    v7 += 168LL;
  }
  while ( v6 < 1512 );
  LOBYTE(v2) = v4 != 0;
  return v2;
}
