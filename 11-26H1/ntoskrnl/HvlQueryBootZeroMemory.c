/*
 * XREFs of HvlQueryBootZeroMemory @ 0x140723384
 * Callers:
 *     MiRecordPostHibernateZeroPages @ 0x140C07280 (MiRecordPostHibernateZeroPages.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HvlQueryBootZeroMemory(void *a1, __int64 *a2)
{
  __int64 *v4; // r14
  unsigned __int16 v5; // ax
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  __int64 v14; // [rsp+38h] [rbp-10h]

  v12 = 0LL;
  v13 = 0LL;
  LODWORD(v14) = 0;
  v4 = HvlpAcquireHypercallPage((__int64)&v12, 2, 0LL, 0LL);
  v5 = HvcallInitiateHypercall(32770LL, 0LL);
  v6 = 0;
  if ( v5 )
  {
    v6 = HvlpHvToNtStatus(v5);
  }
  else
  {
    v7 = *v4;
    if ( *a2 < (unsigned __int64)*v4 )
      v7 = *a2;
    memmove(a1, v4 + 1, 16 * v7);
    *a2 = v7;
  }
  HvlpReleaseHypercallPage((unsigned int *)&v12, v8, v9, v10);
  return v6;
}
