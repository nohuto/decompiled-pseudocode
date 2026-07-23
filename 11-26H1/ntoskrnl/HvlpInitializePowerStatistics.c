/*
 * XREFs of HvlpInitializePowerStatistics @ 0x1405C1F6C
 * Callers:
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  __int64 result; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  unsigned __int64 v3; // rdx
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int64 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  unsigned __int64 v17; // [rsp+58h] [rbp-8h]

  result = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  LODWORD(v17) = 0;
  v12 = 0LL;
  v13 = 0LL;
  LODWORD(v14) = 0;
  if ( (HvlEnlightenments & 0x400) != 0 )
  {
    v1 = HvlpAcquireHypercallPage((__int64)&v15, 1, 0LL, 8LL);
    v2 = HvlpAcquireHypercallPage((__int64)&v12, 2, 0LL, 520LL);
    v3 = v17;
    *v1 = 0LL;
    *(_DWORD *)v1 = 4;
    v4 = HvcallInitiateHypercall(155LL, v3);
    if ( !v4 )
    {
      *(_OWORD *)&stru_140E3EAA8.AbCompletedIoQoSBoostCount = *(_OWORD *)v2;
      stru_140E3EAA8.880 = ($7CFE901BD4F68CA229DBA1D003ACF329)*((_OWORD *)v2 + 1);
      *(_OWORD *)&stru_140E3EAA8.ReadOperationCount = *((_OWORD *)v2 + 2);
      stru_140E3EAA8.OtherOperationCount = v2[6];
    }
    v8 = v4 != 0 ? 0xC0000001 : 0;
    HvlpReleaseHypercallPage((unsigned int *)&v12, v5, v6, v7);
    HvlpReleaseHypercallPage((unsigned int *)&v15, v9, v10, v11);
    return v8;
  }
  return result;
}
