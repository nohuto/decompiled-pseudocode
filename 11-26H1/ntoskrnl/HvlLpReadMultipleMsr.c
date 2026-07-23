/*
 * XREFs of HvlLpReadMultipleMsr @ 0x1404C56E0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlLpReadMultipleMsr(int a1, unsigned int a2, int *a3, _QWORD *a4)
{
  __int64 v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // rax
  _DWORD *v11; // rdx
  int v12; // ecx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+20h] [rbp-50h]
  _QWORD *v23; // [rsp+28h] [rbp-48h]
  __int128 v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h]
  __int64 v26; // [rsp+48h] [rbp-28h]
  __int128 v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h]
  unsigned __int64 v29; // [rsp+68h] [rbp-8h]

  v28 = 0LL;
  LODWORD(v29) = 0;
  v25 = 0LL;
  LODWORD(v26) = 0;
  v27 = 0LL;
  v24 = 0LL;
  if ( 16 * a2 > 0x1000 )
    return 3221225485LL;
  LODWORD(v22) = 136;
  v8 = a2;
  v23 = HvlpAcquireHypercallPage((__int64)&v27, 1, 0LL, 16LL * a2);
  v9 = HvlpAcquireHypercallPage((__int64)&v24, 2, 0LL, 16LL * a2);
  if ( a2 )
  {
    v10 = a2;
    v11 = v23 + 1;
    do
    {
      *(v11 - 2) = a1;
      *(v11 - 1) = 65537;
      v12 = *a3++;
      *v11 = v12;
      v11 += 4;
      --v10;
    }
    while ( v10 );
  }
  HIDWORD(v22) = a2 & 0xFFF;
  v14 = (unsigned __int16)HvcallInitiateHypercall(v22, v29) != 0 ? 0xC0000001 : 0;
  if ( a2 )
  {
    do
    {
      v17 = *v9;
      v9 += 2;
      *a4++ = v17;
      --v8;
    }
    while ( v8 );
  }
  HvlpReleaseHypercallPage((unsigned int *)&v24, v13, v15, v16);
  HvlpReleaseHypercallPage((unsigned int *)&v27, v18, v19, v20);
  return v14;
}
