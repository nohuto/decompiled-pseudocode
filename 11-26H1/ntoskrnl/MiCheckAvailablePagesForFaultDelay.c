/*
 * XREFs of MiCheckAvailablePagesForFaultDelay @ 0x1404118C0
 * Callers:
 *     MiConvertFaultStatus @ 0x1403A4CB0 (MiConvertFaultStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckAvailablePagesForFaultDelay(_QWORD *a1, __int64 a2, __int64 a3, int a4, unsigned __int64 *a5)
{
  int v5; // r10d
  unsigned __int64 v9; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // r12
  __int64 *v13; // rsi
  __int64 v14; // rbp
  __int64 *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9

  v5 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v11 = a1[2] + 56320LL * KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    v12 = *(_QWORD *)(v11 + 3080) + *(_QWORD *)(v11 + 3088);
    if ( v12 >= 0x420 )
      return 0LL;
    v13 = (__int64 *)(v11 + 16);
    v14 = 3LL;
    v15 = MiPageSizes;
    v16 = 0LL;
    do
    {
      v17 = *(v13 - 1);
      v18 = *v13;
      v13 += 128;
      v19 = *v15++;
      v16 += v19 * (v17 + v18);
      --v14;
    }
    while ( v14 );
    if ( v16 + v12 >= 0x420 )
      return 0LL;
  }
  v9 = a1[2808];
  if ( v9 >= 0x420 )
    return 0LL;
  if ( !a4
    && (*(_BYTE *)(a2 + 1831) != 0xFF && (*(_BYTE *)(a2 + 1450) & 1) == 0
     || *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1774LL) != 0xFF) )
  {
    v9 += a1[2760];
    if ( v9 >= 0x420 )
      return 0LL;
    v5 = 2;
  }
  if ( a5 )
    *a5 = v9;
  return v5 | 1u;
}
