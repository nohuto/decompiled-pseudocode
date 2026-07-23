/*
 * XREFs of MiAllocateZeroPageDecisionTraceBuffer @ 0x140712EB8
 * Callers:
 *     MiUpdateEngineConfiguration @ 0x1404F2374 (MiUpdateEngineConfiguration.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 */

_DWORD *__fastcall MiAllocateZeroPageDecisionTraceBuffer(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r10
  _DWORD *v3; // r9
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  _DWORD *PoolMm; // rax

  v2 = MiPageSizes;
  v3 = 0LL;
  v4 = 0LL;
  v5 = (_QWORD *)(56320LL * a2 + *(_QWORD *)(a1 + 16) + 16LL);
  v6 = 2LL;
  do
  {
    if ( *v5 )
      v4 += *v2 * *v5;
    v5 += 128;
    ++v2;
    --v6;
  }
  while ( v6 );
  v7 = v4 >> 12;
  if ( (unsigned int)v7 < 0x100 )
    LODWORD(v7) = 256;
  if ( 16LL * (unsigned int)v7 )
  {
    PoolMm = (_DWORD *)ExAllocatePoolMm(64LL, 16LL * (unsigned int)v7, 1767532877, a2 | 0x80000000);
    v3 = PoolMm;
    if ( PoolMm )
    {
      *PoolMm = v7;
      PoolMm[1] = 0;
      PoolMm[2] = 1;
    }
  }
  return v3;
}
