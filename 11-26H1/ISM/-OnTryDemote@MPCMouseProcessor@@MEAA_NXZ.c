/*
 * XREFs of ?OnTryDemote@MPCMouseProcessor@@MEAA_NXZ @ 0x1801C7270
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTicks@PerfCounter@@YA_JXZ @ 0x1800BFE80 (-GetTicks@PerfCounter@@YA_JXZ.c)
 */

bool __fastcall MPCMouseProcessor::OnTryDemote(MPCMouseProcessor *this)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rbx
  bool result; // al

  v1 = *((_QWORD *)this + 678);
  v3 = *((_QWORD *)this + 666);
  if ( *(_QWORD *)&PerfCounter::GetTicks(this) - v3 <= v1 )
    return 0;
  *((_DWORD *)this + 1339) = 0;
  result = 1;
  *((_DWORD *)this + 1318) = 0;
  return result;
}
