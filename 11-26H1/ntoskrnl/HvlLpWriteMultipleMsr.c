/*
 * XREFs of HvlLpWriteMultipleMsr @ 0x1404D7080
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlLpWriteMultipleMsr(int a1, unsigned int a2, int *a3, __int64 *a4)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r9
  _QWORD *v10; // rax
  _DWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+20h] [rbp-38h]
  __int128 v20; // [rsp+28h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-20h]
  unsigned __int64 v22; // [rsp+40h] [rbp-18h]

  v6 = a2;
  v7 = 32LL * a2;
  v20 = 0LL;
  v21 = 0LL;
  LODWORD(v22) = 0;
  if ( v7 > 0x1000 )
    return 3221225485LL;
  LODWORD(v19) = 137;
  HIDWORD(v19) = a2 & 0xFFF;
  v10 = HvlpAcquireHypercallPage((__int64)&v20, 1, 0LL, v7);
  if ( a2 )
  {
    v11 = v10 + 1;
    do
    {
      *(v11 - 2) = a1;
      *(v11 - 1) = 65537;
      v12 = *a3++;
      *v11 = v12;
      v11 += 8;
      v13 = *a4++;
      *((_QWORD *)v11 - 3) = v13;
      --v6;
    }
    while ( v6 );
  }
  v14 = (unsigned __int16)HvcallInitiateHypercall(v19, v22) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)&v20, v15, v16, v17);
  return v14;
}
