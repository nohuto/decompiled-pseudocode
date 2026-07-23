/*
 * XREFs of ObGetProcessHandleCount @ 0x1409CED00
 * Callers:
 *     EtwpProcessPerfCtrsRundown @ 0x1409BDD0C (EtwpProcessPerfCtrsRundown.c)
 *     EtwpPsProvTraceProcess @ 0x1409CE5FC (EtwpPsProvTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall ObGetProcessHandleCount(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  struct _EX_RUNDOWN_REF *v3; // rdi
  unsigned __int64 v5; // rtt
  unsigned int *Count; // rsi
  __int64 result; // rax
  unsigned int *v8; // rax
  signed __int64 v9; // rbx
  unsigned __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  int v15; // eax

  v3 = a1 + 61;
  _m_prefetchw(&a1[61]);
  v5 = a1[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[61], v5 + 2, v5)
    && !ExfAcquireRundownProtection(v3) )
  {
    goto LABEL_5;
  }
  Count = (unsigned int *)a1[96].Count;
  if ( !Count )
  {
    ExReleaseRundownProtection_0(v3);
LABEL_5:
    result = 0LL;
    if ( a2 )
      *a2 = 0;
    return result;
  }
  v8 = Count + 16;
  v9 = 0LL;
  v10 = (unsigned __int64)&Count[16 * (unsigned __int64)(unsigned int)ExpFreeListCount + 16];
  v11 = 0LL;
  v12 = 0LL;
  if ( (unsigned __int64)(Count + 16) < v10 )
  {
    do
    {
      v13 = (int)v8[6];
      v11 += v13;
      if ( (int)v13 <= (int)v8[7] )
        LODWORD(v13) = v8[7];
      v8 += 16;
      v12 += (unsigned int)v13;
    }
    while ( (unsigned __int64)v8 < v10 );
  }
  if ( v11 >= 0 )
    v9 = v11;
  if ( v9 > 0xFFFFFFFFLL )
    v9 = 0xFFFFFFFFLL;
  if ( v12 > 0xFFFFFFFFLL )
    v12 = 0xFFFFFFFFLL;
  v14 = (unsigned __int64)*Count >> 2;
  if ( v9 > (__int64)((255 * v14) >> 8) )
    v9 = (255 * v14) >> 8;
  v15 = v9;
  if ( v12 <= v9 )
    v15 = v12;
  if ( a2 )
    *a2 = v15;
  ExReleaseRundownProtection_0(v3);
  return (unsigned int)v9;
}
