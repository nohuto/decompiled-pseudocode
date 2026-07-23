/*
 * XREFs of HvlpStartVirtualProcessor @ 0x1405BDCCC
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x1405BFD30 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlpStartVirtualProcessor(int a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  __int128 v6; // xmm0
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  unsigned __int64 v14; // [rsp+38h] [rbp-10h]

  v13 = 0LL;
  LODWORD(v14) = 0;
  v12 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v12, 1, 0LL, 240LL);
  v5 = v14;
  *((_DWORD *)v4 + 3) = 0;
  *v4 = -1LL;
  *((_DWORD *)v4 + 2) = a1;
  v4 += 2;
  *(_OWORD *)v4 = *a2;
  *((_OWORD *)v4 + 1) = a2[1];
  *((_OWORD *)v4 + 2) = a2[2];
  *((_OWORD *)v4 + 3) = a2[3];
  *((_OWORD *)v4 + 4) = a2[4];
  *((_OWORD *)v4 + 5) = a2[5];
  *((_OWORD *)v4 + 6) = a2[6];
  v4 += 16;
  v6 = a2[7];
  a2 += 8;
  *((_OWORD *)v4 - 1) = v6;
  *(_OWORD *)v4 = *a2;
  *((_OWORD *)v4 + 1) = a2[1];
  *((_OWORD *)v4 + 2) = a2[2];
  *((_OWORD *)v4 + 3) = a2[3];
  *((_OWORD *)v4 + 4) = a2[4];
  *((_OWORD *)v4 + 5) = a2[5];
  v7 = (unsigned __int16)HvcallInitiateHypercall(153LL, v5) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)&v12, v8, v9, v10);
  return v7;
}
